package com.mtcle.pb;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;

import com.google.protobuf.InvalidProtocolBufferException;
import com.mtcle.bean.RoomBean;
import com.mtcle.bean.UserBean;

import java.util.Arrays;


public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

    }

    public void btnSerial(View view) {

        //生产user对象
        UserBean.User user1 = UserBean.User.newBuilder().setId(1000).setName("张三").setPhoneNum("110").build();
        UserBean.User user2 = UserBean.User.newBuilder().setId(1001).setName("李四").setPhoneNum("119").build();
        UserBean.User user3 = UserBean.User.newBuilder().setId(1002).setName("王五").setPhoneNum("120").build();


        //生成room对象，里面包含多一个userList
        RoomBean.Room room = RoomBean.Room.newBuilder().setId(2000).setRoomName("教室").addUserList(user1).addUserList(user2).addUserList(user3).build();


        //序列化room ,将room对象序列化成byte array
        byte[] roomByte = room.toByteArray();

        //尝试打印输出btyestr
        System.out.println("序列化字符串：" + Arrays.toString(roomByte));

        //反序列化成room对象
        try {
            RoomBean.Room roomNew = RoomBean.Room.parseFrom(roomByte);
            System.out.println("反序列化完成");
            System.out.println("roomNew.name:" + roomNew.getRoomName());
            System.out.println("roomNew 人员size:" + roomNew.getUserListCount());
            for (UserBean.User user : roomNew.getUserListList()) {
                System.out.println("user.name:" + user.getName());
                System.out.println("user.phoneNum:" + user.getPhoneNum());
                System.out.println("----------");
            }

        } catch (InvalidProtocolBufferException e) {
            e.printStackTrace();
        }
    }

}
