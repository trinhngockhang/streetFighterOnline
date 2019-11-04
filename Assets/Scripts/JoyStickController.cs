using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JoyStickController : MonoBehaviour {
    public delegate void OnMove(Vector2 vector2,int angle);
    public WachButton Left;
    public WachButton Right;
    public WachButton BackWard;
    public WachButton Forward;
    public WachButton Punch;
    public WachButton Kick;
    public WachButton Jump;
    public WachButton standUp;
    public Player player;
    Animator m_Animator;

    private Rigidbody myBody;
    public bool leftMove;
    public bool rightMove;
    public bool downMove;
    public bool upMove;
    public bool punch;
    public bool kick;
    public bool jump;
    private bool lastLeft, lastRight, lastUp, lastDown, lastIdle;

    void Start()
    {
        // playerObject = new GameObject();
        ActionJoystick();

    }
    public void ActionJoystick()
    {
        Left.OnPress += OnPress;
        Right.OnPress += OnPress;
        BackWard.OnPress += OnPress;
        Forward.OnPress += OnPress;
        Punch.OnPress += OnPress;
        Kick.OnPress += OnPress;
        Jump.OnPress += OnPress;
    }
    void OnPress(GameObject unit,bool state)
    {
        switch (unit.name)
        {
            case "Left":
                LeftMove(state);
            break;
            case "Right":
                RightMove(state);
            break;
            case "Down":
                DownMove(state);
            break;
            case "Up":
                UpMove(state);
            break;
        }
        if(unit.name == "Punch"){
          //  Debug.Log("da nhan nut dam");
            PunchAttack(state);
        }
        if (unit.name == "Kick")
        {
            //  Debug.Log("da nhan nut dam");
            KickAttack(state);
        }
        if (unit.name == "Jump")
        {
            //  Debug.Log("da nhan nut dam");
            Jumping(state);
        }
    }

    private void LeftMove(bool state)
    {
        leftMove = state;
    }
    private void RightMove(bool state)
    {
        rightMove = state;
    }
    private void DownMove(bool state)
    {
        downMove = state;
    }
    private void UpMove(bool state)
    {
        upMove = state;
    }
    private void PunchAttack(bool state)
    {
        punch = state;
    }
    private void KickAttack(bool state)
    {
        kick = state;
    }
    private void Jumping(bool state)
    {
        jump = state;
    }
    private void setAllMoveFalse(){
        lastLeft = false;
        lastRight = false;
        lastUp = false;
        lastDown = false;
        lastIdle = false;
    }
    private void Update()
    {
        if (leftMove || Input.GetKey("a"))
        {
         //   Debug.Log("chuan bi update LEft" + lastLeft);
            if(!lastLeft){
                setAllMoveFalse();
                lastLeft = true;
                // di chuyen nhan vat
                // player.moveBack();
                // gui len server
                Controller.instance.ChangeVelocity("left");
            }
        }
        else if (rightMove || Input.GetKey("d"))
        {
            if(!lastRight){
                setAllMoveFalse();
                lastRight = true;
                // di chuyen nhan vat
                // player.moveFoward();
                // gui len server
                Controller.instance.ChangeVelocity("right");
            }
        }
        else if (downMove || Input.GetKey("s"))
        {
            if (!lastDown)
            {
                setAllMoveFalse();
                lastDown = true;
                // di chuyen nhan vat
                player.moveDown();
                // gui len server
                Controller.instance.moveDown();
            }
        }
        else if (upMove || Input.GetKey("w"))
        {
            if (!lastUp)
            {
                setAllMoveFalse();
                lastUp = true;
                // di chuyen nhan vat
                player.standUp();
                // gui len server
                Controller.instance.moveUp();
            }
        }
        else
        {
            setAllMoveFalse();
            if (lastLeft || lastRight)
            {
                Debug.Log("vua di chuyen xong");
                player.stopMove();
                int n = lastLeft ? 180 : 0;
                player.updatePositionToServer(n);
            }
        }

        if(punch || Input.GetKey("k")){
            Debug.Log("aaaaaaaaaaa");
            player.punch();
        }
        if(kick){
            Debug.Log("kick roi");
            player.kick();
        }
        if (jump) {
            Debug.Log("Jump");
            player.jump();
        }
        if (standUp)
        {
            Debug.Log("Nhay");
            player.standUp();
        }
    }
}
