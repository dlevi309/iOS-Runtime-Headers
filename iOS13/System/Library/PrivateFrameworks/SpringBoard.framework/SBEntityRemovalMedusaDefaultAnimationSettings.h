/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <PrototypeTools/PTSettings.h>

@class SBFFluidBehaviorSettings;

@interface SBEntityRemovalMedusaDefaultAnimationSettings : PTSettings {

	double _toBeRemovedFinalScale;
	double _toBeRemovedFinalAlpha;
	double _toBeRemovedFinalBlurRadius;
	double _toBeMadeFullscreenFrameAnimationDelay;
	SBFFluidBehaviorSettings* _toBeMadeFullscreenFrameAnimationSettings;
	SBFFluidBehaviorSettings* _toBeRemovedScaleAnimationSettings;
	SBFFluidBehaviorSettings* _toBeRemovedAlphaAnimationSettings;

}

@property (assign,nonatomic) double toBeRemovedFinalScale;                                                     //@synthesize toBeRemovedFinalScale=_toBeRemovedFinalScale - In the implementation block
@property (assign,nonatomic) double toBeRemovedFinalAlpha;                                                     //@synthesize toBeRemovedFinalAlpha=_toBeRemovedFinalAlpha - In the implementation block
@property (assign,nonatomic) double toBeRemovedFinalBlurRadius;                                                //@synthesize toBeRemovedFinalBlurRadius=_toBeRemovedFinalBlurRadius - In the implementation block
@property (assign,nonatomic) double toBeMadeFullscreenFrameAnimationDelay;                                     //@synthesize toBeMadeFullscreenFrameAnimationDelay=_toBeMadeFullscreenFrameAnimationDelay - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * toBeMadeFullscreenFrameAnimationSettings;              //@synthesize toBeMadeFullscreenFrameAnimationSettings=_toBeMadeFullscreenFrameAnimationSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * toBeRemovedScaleAnimationSettings;                     //@synthesize toBeRemovedScaleAnimationSettings=_toBeRemovedScaleAnimationSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * toBeRemovedAlphaAnimationSettings;                     //@synthesize toBeRemovedAlphaAnimationSettings=_toBeRemovedAlphaAnimationSettings - In the implementation block
+(id)settingsControllerModule;
+(id)_settingsModule;
-(void)setDefaultValues;
-(double)toBeRemovedFinalScale;
-(double)toBeRemovedFinalAlpha;
-(double)toBeMadeFullscreenFrameAnimationDelay;
-(SBFFluidBehaviorSettings *)toBeRemovedScaleAnimationSettings;
-(SBFFluidBehaviorSettings *)toBeMadeFullscreenFrameAnimationSettings;
-(SBFFluidBehaviorSettings *)toBeRemovedAlphaAnimationSettings;
-(double)toBeRemovedFinalBlurRadius;
-(void)setToBeRemovedFinalScale:(double)arg1 ;
-(void)setToBeRemovedFinalAlpha:(double)arg1 ;
-(void)setToBeRemovedFinalBlurRadius:(double)arg1 ;
-(void)setToBeMadeFullscreenFrameAnimationDelay:(double)arg1 ;
-(void)setToBeRemovedScaleAnimationSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setToBeRemovedAlphaAnimationSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(void)setToBeMadeFullscreenFrameAnimationSettings:(SBFFluidBehaviorSettings *)arg1 ;
@end

