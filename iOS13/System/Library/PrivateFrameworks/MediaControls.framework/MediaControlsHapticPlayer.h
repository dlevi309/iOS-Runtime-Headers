/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/


@class AVHapticPlayer;

@interface MediaControlsHapticPlayer : NSObject {

	AVHapticPlayer* _player;

}

@property (nonatomic,retain) AVHapticPlayer * player;              //@synthesize player=_player - In the implementation block
-(void)dealloc;
-(void)prepare;
-(void)tearDown;
-(AVHapticPlayer *)player;
-(void)setPlayer:(AVHapticPlayer *)arg1 ;
-(void)expandedButtonChanged;
-(void)checkError:(id)arg1 ;
@end

