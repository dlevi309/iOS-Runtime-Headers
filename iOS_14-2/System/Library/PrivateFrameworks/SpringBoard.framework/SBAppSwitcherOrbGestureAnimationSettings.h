/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDefaultValues;
-(double)response;
-(void)setResponse:(double)arg1 ;
-(SBFFluidBehaviorSettings *)popToSwitcherSettings;
-(SBFFluidBehaviorSettings *)peekingAndPanningSettings;
-(SBFFluidBehaviorSettings *)breathingSettings;
-(void)setPopToSwitcherSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setPeekingAndPanningSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setBreathingSettings:(SBFFluidBehaviorSettings *)arg1 ;
@end

