#include <genesis.h>
//#include <resources.h>

// Prototypes
void CheckInput();
void ProcessGameLogic();
void DrawEverything();


// Defines
#define MAP_WIDTH 320
#define MAP_HEIGHT 244


//u16 ind = TILE_USER_INDEX;

Sprite *player;
int player_x;
int player_y;
int player_vel;


int main()
{
    //init

    // Sprite Engine initialisieren
    SPR_init();
    //PAL_setPalette(PAL1, spr_paddle1.palette->data, DMA);
    //player1 = SPR_addSprite(&spr_paddle1, paddle1_x, paddle1_y, TILE_ATTR(PAL1, FALSE, FALSE, FALSE));

    // GAME LOOP
    ////////////////////////////////////////////////////////////////////////////////////////
    while(1)
    {
        CheckInput();

        ProcessGameLogic(); 
		
		DrawEverything();
           
        SYS_doVBlankProcess();
    }
    ////////////////////////////////////////////////////////////////////////////////////////

    return (0);
}



void CheckInput()
{
    u16 value1 = JOY_readJoypad(JOY_1);

    if (value1 & BUTTON_LEFT)		
    {
        //check left border
        //if()
    }
    else if (value1 & BUTTON_RIGHT)		
    {
        //check right border
        //if()
              
    }
	
	if (value1 & BUTTON_UP)		
    {
        //if()
    }
    else if (value1 & BUTTON_DOWN)		
    {
        //if()
    }
}


void ProcessGameLogic()
{
    //SPR_setPosition(player, player_x, player_y);
}


void DrawEverything()
{
	SPR_update();
}

