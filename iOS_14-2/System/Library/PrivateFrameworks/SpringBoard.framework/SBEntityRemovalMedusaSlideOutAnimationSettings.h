/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <PrototypeTools/PTSettings.h>

@class SBFFluidBehaviorSettings, SBEntityRemovalMedusaDefaultAnimationSettings;

@interface SBEntityRemovalMedusaSlideOutAnimationSettings : PTSettings {

	double _toBeMadeFullScreenPushInScale;
	double _toBeMadeFullScreenScaleResetAnimationDelay;
	double _toBeRemovedSlideOutAnimationDelay;
	double _toBeRemovedSlideOutHeightOffsetMultiplier;
	SBFFluidBehaviorSettings* _toBeMadeFullscreenPushInScaleAnimationSettings;
	SBFFluidBehaviorSettings* _toBeMadeFullscreenScaleResetAnimationSettings;
	SBFFluidBehaviorSettings* _toBeRemovedSlideOutAnimationSettings;
	SBEntityRemovalMedusaDefaultAnimationSettings* _defaultAnimationSettings;

}

@property (assign,nonatomic) double toBeMadeFullScreenPushInScale;                                                   //@synthesize toBeMadeFullScreenPushInScale=_toBeMadeFullScreenPushInScale - In the implementation block
@property (assign,nonatomic) double toBeMadeFullScreenScaleResetAnimationDelay;                                      //@synthesize toBeMadeFullScreenScaleResetAnimationDelay=_toBeMadeFullScreenScaleResetAnimationDelay - In the implementation block
@property (assign,nonatomic) double toBeRemovedSlideOutAnimationDelay;                                               //@synthesize toBeRemovedSlideOutAnimationDelay=_toBeRemovedSlideOutAnimationDelay - In the implementation block
@property (assign,nonatomic) double toBeRemovedSlideOutHeightOffsetMultiplier;                                       //@synthesize toBeRemovedSlideOutHeightOffsetMultiplier=_toBeRemovedSlideOutHeightOffsetMultiplier - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * toBeMadeFullscreenPushInScaleAnimationSettings;              //@synthesize toBeMadeFullscreenPushInScaleAnimationSettings=_toBeMadeFullscreenPushInScaleAnimationSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * toBeMadeFullscreenScaleResetAnimationSettings;               //@synthesize toBeMadeFullscreenScaleResetAnimationSettings=_toBeMadeFullscreenScaleResetAnimationSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * toBeRemovedSlideOutAnimationSettings;                        //@synthesize toBeRemovedSlideOutAnimationSettings=_toBeRemovedSlideOutAnimationSettings - In the implementation block
@property (nonatomic,retain) SBEntityRemovalMedusaDefaultAnimationSettings * defaultAnimationSettings;               //@synthesize defaultAnimationSettings=_defaultAnimationSettings - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(SBEntityRemovalMedusaDefaultAnimationSettings *)defaultAnimationSettings;
-(double)toBeRemovedSlideOutHeightOffsetMultiplier;
-(SBFFluidBehaviorSettings *)toBeRemovedSlideOutAnimationSettings;
-(double)toBeMadeFullScreenScaleResetAnimationDelay;
-(double)toBeMadeFullScreenPushInScale;
-(SBFFluidBehaviorSettings *)toBeMadeFullscreenPushInScaleAnimationSettings;
-(SBFFluidBehaviorSettings *)toBeMadeFullscreenScaleResetAnimationSettings;
-(double)toBeRemovedSlideOutAnimationDelay;
-(void)setToBeMadeFullScreenPushInScale:(double)arg1 ;
-(void)setToBeMadeFullScreenScaleResetAnimationDelay:(double)arg1 ;
-(void)setToBeMadeFullscreenPushInScaleAnimationSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setToBeMadeFullscreenScaleResetAnimationSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setToBeRemovedSlideOutAnimationSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setToBeRemovedSlideOutAnimationDelay:(double)arg1 ;
-(void)setToBeRemovedSlideOutHeightOffsetMultiplier:(double)arg1 ;
-(void)setDefaultAnimationSettings:(SBEntityRemovalMedusaDefaultAnimationSettings *)arg1 ;
@end

