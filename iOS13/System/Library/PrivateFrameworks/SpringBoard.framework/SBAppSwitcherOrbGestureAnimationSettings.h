/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <PrototypeTools/PTSettings.h>

@class SBFFluidBehaviorSettings;

@interface SBAppSwitcherOrbGestureAnimationSettings : PTSettings {

	SBFFluidBehaviorSettings* _popToSwitcherSettings;
	SBFFluidBehaviorSettings* _peekingAndPanningSettings;
	SBFFluidBehaviorSettings* _breathingSettings;
	double _response;

}

@property (nonatomic,retain) SBFFluidBehaviorSettings * popToSwitcherSettings;                  //@synthesize popToSwitcherSettings=_popToSwitcherSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * peekingAndPanningSettings;              //@synthesize peekingAndPanningSettings=_peekingAndPanningSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * breathingSettings;                      //@synthesize breathingSettings=_breathingSettings - In the implementation block
@property (assign,nonatomic) double response;                                                   //@synthesize response=_response - In the implementation block
+(id)settingsControllerModule;
-(double)response;
-(void)setResponse:(double)arg1 ;
-(void)setDefaultValues;
-(SBFFluidBehaviorSettings *)popToSwitcherSettings;
-(SBFFluidBehaviorSettings *)peekingAndPanningSettings;
-(SBFFluidBehaviorSettings *)breathingSettings;
-(void)setPopToSwitcherSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setPeekingAndPanningSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setBreathingSettings:(SBFFluidBehaviorSettings *)arg1 ;
@end

