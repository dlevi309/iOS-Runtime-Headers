/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/


@class AVHapticPlayer;

@interface MediaControlsHapticPlayer : NSObject {

	AVHapticPlayer* _player;

}

@property (nonatomic,retain) AVHapticPlayer * player;              //@synthesize player=_player - In the implementation block
-(AVHapticPlayer *)player;
-(void)tearDown;
-(void)setPlayer:(AVHapticPlayer *)arg1 ;
-(void)prepare;
-(void)dealloc;
-(void)expandedButtonChanged;
-(void)checkError:(id)arg1 ;
@end

