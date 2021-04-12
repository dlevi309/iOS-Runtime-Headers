/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <PrototypeTools/PTSettings.h>

@class SBFAnimationSettings, SBEntityRemovalAnimationSettings, SBFWakeAnimationSettings;

@interface SBSystemAnimationSettings : PTSettings {

	float _assistantAnimationDuration;
	float _assistantDismissAnimationDurationOverApp;
	float _spotlightNoninteractiveAnimationDuration;
	SBFAnimationSettings* _slideoverDosidoAnimationSettings;
	SBEntityRemovalAnimationSettings* _entityRemovalAnimationSettings;
	SBFWakeAnimationSettings* _wakeAnimationSettings;

}

@property (assign,nonatomic) float assistantAnimationDuration;                                               //@synthesize assistantAnimationDuration=_assistantAnimationDuration - In the implementation block
@property (assign,nonatomic) float assistantDismissAnimationDurationOverApp;                                 //@synthesize assistantDismissAnimationDurationOverApp=_assistantDismissAnimationDurationOverApp - In the implementation block
@property (assign,nonatomic) float spotlightNoninteractiveAnimationDuration;                                 //@synthesize spotlightNoninteractiveAnimationDuration=_spotlightNoninteractiveAnimationDuration - In the implementation block
@property (nonatomic,retain) SBFAnimationSettings * slideoverDosidoAnimationSettings;                        //@synthesize slideoverDosidoAnimationSettings=_slideoverDosidoAnimationSettings - In the implementation block
@property (nonatomic,retain) SBEntityRemovalAnimationSettings * entityRemovalAnimationSettings;              //@synthesize entityRemovalAnimationSettings=_entityRemovalAnimationSettings - In the implementation block
@property (nonatomic,retain) SBFWakeAnimationSettings * wakeAnimationSettings;                               //@synthesize wakeAnimationSettings=_wakeAnimationSettings - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(SBEntityRemovalAnimationSettings *)entityRemovalAnimationSettings;
-(float)assistantAnimationDuration;
-(float)assistantDismissAnimationDurationOverApp;
-(float)spotlightNoninteractiveAnimationDuration;
-(void)setAssistantAnimationDuration:(float)arg1 ;
-(void)setAssistantDismissAnimationDurationOverApp:(float)arg1 ;
-(void)setSpotlightNoninteractiveAnimationDuration:(float)arg1 ;
-(SBFAnimationSettings *)slideoverDosidoAnimationSettings;
-(void)setSlideoverDosidoAnimationSettings:(SBFAnimationSettings *)arg1 ;
-(void)setEntityRemovalAnimationSettings:(SBEntityRemovalAnimationSettings *)arg1 ;
-(SBFWakeAnimationSettings *)wakeAnimationSettings;
-(void)setWakeAnimationSettings:(SBFWakeAnimationSettings *)arg1 ;
@end

