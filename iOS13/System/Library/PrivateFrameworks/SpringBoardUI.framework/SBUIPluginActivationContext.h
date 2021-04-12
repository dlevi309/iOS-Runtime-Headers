/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/


@class UIScreen;

@interface SBUIPluginActivationContext : NSObject {

	UIScreen* _screen;
	int _activationEvent;

}

@property (nonatomic,retain) UIScreen * screen;                //@synthesize screen=_screen - In the implementation block
@property (assign,nonatomic) int activationEvent;              //@synthesize activationEvent=_activationEvent - In the implementation block
-(UIScreen *)screen;
-(void)setScreen:(UIScreen *)arg1 ;
-(int)activationEvent;
-(void)setActivationEvent:(int)arg1 ;
@end

