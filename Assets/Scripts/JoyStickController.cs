using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JoyStickController : MonoBehaviour {
    public delegate void OnMove(Vector2 vector2,int angle);
    public event OnMove onCommanMove;
    public WachButton Left;
    public WachButton Right;
    public WachButton BackWard;
    public WachButton Forward;
    public WachButton Punch;
    public Player player;
    Animator m_Animator;

    private Rigidbody myBody;
    public bool leftMove;
    public bool rightMove;
    public bool backMove;
    public bool frontMove;
    public bool punch;
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
                BackMove(state);
            break;
            case "Foward":
                FrontMove(state);
            break;
        }
        if(unit.name == "Punch"){
          //  Debug.Log("da nhan nut dam");
            PunchAttack(state);
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
    private void BackMove(bool state)
    {
        backMove = state;
    }
    private void FrontMove(bool state)
    {
        frontMove = state;
    }
    private void PunchAttack(bool state)
    {
        punch = state;
    }
    private void setAllMoveFalse(){
        lastLeft = false;
        lastRight = false;
        lastUp = false;
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
                player.moveBack();
            }
        }
        else if (rightMove || Input.GetKey("d"))
        {
            if(!lastRight){
                setAllMoveFalse();
                lastRight = true;
                player.moveFoward();
            }
        }
        else
        {
            player.stopMove();
            if (lastLeft || lastRight)
            {
                int n = lastLeft ? 0 : 180;
                player.updatePositionToServer(n);
            }
            setAllMoveFalse();
        }

        if(punch || Input.GetKey("k")){
            Debug.Log("aaaaaaaaaaa");
            player.punch();
        }
    }
}
