/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/


@class UIScreen;

@interface SBUIPluginActivationContext : NSObject {

	UIScreen* _screen;
	int _activationEvent;

}

@property (nonatomic,retain) UIScreen * screen;                //@synthesize screen=_screen - In the implementation block
@property (assign,nonatomic) int activationEvent;              //@synthesize activationEvent=_activationEvent - In the implementation block
-(void)setScreen:(UIScreen *)arg1 ;
-(int)activationEvent;
-(UIScreen *)screen;
-(void)setActivationEvent:(int)arg1 ;
@end

