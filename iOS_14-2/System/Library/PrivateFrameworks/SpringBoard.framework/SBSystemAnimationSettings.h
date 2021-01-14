/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <PrototypeTools/PTSettings.h>

@class SBFAnimationSettings, SBEntityRemovalAnimationSettings, SBFWakeAnimationSettings;

@interface SBSystemAnimationSettings : PTSettings {

	float _assistantAnimationDuration;
	float _assistantDismissAnimationDurationOverApp;
	float _assistantBottomEdgeDismissThreshold;
	float _assistantBottomEdgeDismissVelocity;
	float _spotlightNoninteractiveAnimationDuration;
	SBFAnimationSettings* _slideoverDosidoAnimationSettings;
	SBEntityRemovalAnimationSettings* _entityRemovalAnimationSettings;
	SBFWakeAnimationSettings* _wakeAnimationSettings;

}

@property (assign,nonatomic) float assistantAnimationDuration;                                               //@synthesize assistantAnimationDuration=_assistantAnimationDuration - In the implementation block
@property (assign,nonatomic) float assistantDismissAnimationDurationOverApp;                                 //@synthesize assistantDismissAnimationDurationOverApp=_assistantDismissAnimationDurationOverApp - In the implementation block
@property (assign,nonatomic) float assistantBottomEdgeDismissThreshold;                                      //@synthesize assistantBottomEdgeDismissThreshold=_assistantBottomEdgeDismissThreshold - In the implementation block
@property (assign,nonatomic) float assistantBottomEdgeDismissVelocity;                                       //@synthesize assistantBottomEdgeDismissVelocity=_assistantBottomEdgeDismissVelocity - In the implementation block
@property (assign,nonatomic) float spotlightNoninteractiveAnimationDuration;                                 //@synthesize spotlightNoninteractiveAnimationDuration=_spotlightNoninteractiveAnimationDuration - In the implementation block
@property (nonatomic,retain) SBFAnimationSettings * slideoverDosidoAnimationSettings;                        //@synthesize slideoverDosidoAnimationSettings=_slideoverDosidoAnimationSettings - In the implementation block
@property (nonatomic,retain) SBEntityRemovalAnimationSettings * entityRemovalAnimationSettings;              //@synthesize entityRemovalAnimationSettings=_entityRemovalAnimationSettings - In the implementation block
@property (nonatomic,retain) SBFWakeAnimationSettings * wakeAnimationSettings;                               //@synthesize wakeAnimationSettings=_wakeAnimationSettings - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setWakeAnimationSettings:(SBFWakeAnimationSettings *)arg1 ;
-(void)setSpotlightNoninteractiveAnimationDuration:(float)arg1 ;
-(float)assistantBottomEdgeDismissThreshold;
-(float)assistantAnimationDuration;
-(void)setAssistantDismissAnimationDurationOverApp:(float)arg1 ;
-(void)setAssistantAnimationDuration:(float)arg1 ;
-(float)assistantBottomEdgeDismissVelocity;
-(SBFAnimationSettings *)slideoverDosidoAnimationSettings;
-(float)assistantDismissAnimationDurationOverApp;
-(void)setAssistantBottomEdgeDismissVelocity:(float)arg1 ;
-(SBFWakeAnimationSettings *)wakeAnimationSettings;
-(void)setSlideoverDosidoAnimationSettings:(SBFAnimationSettings *)arg1 ;
-(float)spotlightNoninteractiveAnimationDuration;
-(void)setEntityRemovalAnimationSettings:(SBEntityRemovalAnimationSettings *)arg1 ;
-(SBEntityRemovalAnimationSettings *)entityRemovalAnimationSettings;
-(void)setAssistantBottomEdgeDismissThreshold:(float)arg1 ;
@end

