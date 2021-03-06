/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <PrototypeTools/PTSettings.h>

@class SBFFluidBehaviorSettings;

@interface SBInteractiveScreenshotSettings : PTSettings {

	BOOL _enabled;
	BOOL _shouldAsynchronouslyRender;
	BOOL _shouldPreheat;
	BOOL _shouldInjectVelocity;
	double _cornerHorizontalEdgeLength;
	double _cornerVerticalEdgeLength;
	double _applicationTouchDelayHysteresis;
	double _cornerRadiusVisibleProgressThreshold;
	double _cropCornersVisibleProgressThreshold;
	double _cropLinesVisibleProgressThreshold;
	double _baseCornerTranslationDegrees;
	double _projectionDecelerationRate;
	double _rubberbandingRange;
	double _normalizedDistanceForCommitThreshold;
	double _horizontalTranslationFactor;
	double _verticalTranslationFactor;
	double _maximumInjectedVelocity;
	double _disabledGestureCancellationDistance;
	double _disabledGestureVelocityScale;
	SBFFluidBehaviorSettings* _contentAnimationSettings;
	SBFFluidBehaviorSettings* _disabledGestureContentAnimationSettings;
	SBFFluidBehaviorSettings* _cropsAnimationSettings;
	SBFFluidBehaviorSettings* _cropLinesAlphaAnimationSettings;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                   //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) double cornerHorizontalEdgeLength;                                               //@synthesize cornerHorizontalEdgeLength=_cornerHorizontalEdgeLength - In the implementation block
@property (assign,nonatomic) double cornerVerticalEdgeLength;                                                 //@synthesize cornerVerticalEdgeLength=_cornerVerticalEdgeLength - In the implementation block
@property (assign,nonatomic) BOOL shouldAsynchronouslyRender;                                                 //@synthesize shouldAsynchronouslyRender=_shouldAsynchronouslyRender - In the implementation block
@property (assign,nonatomic) BOOL shouldPreheat;                                                              //@synthesize shouldPreheat=_shouldPreheat - In the implementation block
@property (assign,nonatomic) double applicationTouchDelayHysteresis;                                          //@synthesize applicationTouchDelayHysteresis=_applicationTouchDelayHysteresis - In the implementation block
@property (assign,nonatomic) double cornerRadiusVisibleProgressThreshold;                                     //@synthesize cornerRadiusVisibleProgressThreshold=_cornerRadiusVisibleProgressThreshold - In the implementation block
@property (assign,nonatomic) double cropCornersVisibleProgressThreshold;                                      //@synthesize cropCornersVisibleProgressThreshold=_cropCornersVisibleProgressThreshold - In the implementation block
@property (assign,nonatomic) double cropLinesVisibleProgressThreshold;                                        //@synthesize cropLinesVisibleProgressThreshold=_cropLinesVisibleProgressThreshold - In the implementation block
@property (assign,nonatomic) double baseCornerTranslationDegrees;                                             //@synthesize baseCornerTranslationDegrees=_baseCornerTranslationDegrees - In the implementation block
@property (assign,nonatomic) double projectionDecelerationRate;                                               //@synthesize projectionDecelerationRate=_projectionDecelerationRate - In the implementation block
@property (assign,nonatomic) double rubberbandingRange;                                                       //@synthesize rubberbandingRange=_rubberbandingRange - In the implementation block
@property (assign,nonatomic) double normalizedDistanceForCommitThreshold;                                     //@synthesize normalizedDistanceForCommitThreshold=_normalizedDistanceForCommitThreshold - In the implementation block
@property (assign,nonatomic) double horizontalTranslationFactor;                                              //@synthesize horizontalTranslationFactor=_horizontalTranslationFactor - In the implementation block
@property (assign,nonatomic) double verticalTranslationFactor;                                                //@synthesize verticalTranslationFactor=_verticalTranslationFactor - In the implementation block
@property (assign,nonatomic) BOOL shouldInjectVelocity;                                                       //@synthesize shouldInjectVelocity=_shouldInjectVelocity - In the implementation block
@property (assign,nonatomic) double maximumInjectedVelocity;                                                  //@synthesize maximumInjectedVelocity=_maximumInjectedVelocity - In the implementation block
@property (assign,nonatomic) double disabledGestureCancellationDistance;                                      //@synthesize disabledGestureCancellationDistance=_disabledGestureCancellationDistance - In the implementation block
@property (assign,nonatomic) double disabledGestureVelocityScale;                                             //@synthesize disabledGestureVelocityScale=_disabledGestureVelocityScale - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * contentAnimationSettings;                             //@synthesize contentAnimationSettings=_contentAnimationSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * disabledGestureContentAnimationSettings;              //@synthesize disabledGestureContentAnimationSettings=_disabledGestureContentAnimationSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * cropsAnimationSettings;                               //@synthesize cropsAnimationSettings=_cropsAnimationSettings - In the implementation block
@property (nonatomic,retain) SBFFluidBehaviorSettings * cropLinesAlphaAnimationSettings;                      //@synthesize cropLinesAlphaAnimationSettings=_cropLinesAlphaAnimationSettings - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(double)cornerHorizontalEdgeLength;
-(double)cornerVerticalEdgeLength;
-(void)setShouldPreheat:(BOOL)arg1 ;
-(void)setShouldAsynchronouslyRender:(BOOL)arg1 ;
-(void)setCornerRadiusVisibleProgressThreshold:(double)arg1 ;
-(void)setCornerHorizontalEdgeLength:(double)arg1 ;
-(void)setCornerVerticalEdgeLength:(double)arg1 ;
-(void)setApplicationTouchDelayHysteresis:(double)arg1 ;
-(void)setRubberbandingRange:(double)arg1 ;
-(void)setNormalizedDistanceForCommitThreshold:(double)arg1 ;
-(void)setProjectionDecelerationRate:(double)arg1 ;
-(void)setHorizontalTranslationFactor:(double)arg1 ;
-(void)setVerticalTranslationFactor:(double)arg1 ;
-(void)setBaseCornerTranslationDegrees:(double)arg1 ;
-(void)setCropCornersVisibleProgressThreshold:(double)arg1 ;
-(void)setCropLinesVisibleProgressThreshold:(double)arg1 ;
-(void)setDisabledGestureCancellationDistance:(double)arg1 ;
-(void)setShouldInjectVelocity:(BOOL)arg1 ;
-(void)setMaximumInjectedVelocity:(double)arg1 ;
-(void)setDisabledGestureVelocityScale:(double)arg1 ;
-(BOOL)shouldAsynchronouslyRender;
-(BOOL)shouldPreheat;
-(double)applicationTouchDelayHysteresis;
-(double)cornerRadiusVisibleProgressThreshold;
-(double)cropCornersVisibleProgressThreshold;
-(double)cropLinesVisibleProgressThreshold;
-(double)baseCornerTranslationDegrees;
-(double)projectionDecelerationRate;
-(double)rubberbandingRange;
-(double)normalizedDistanceForCommitThreshold;
-(double)horizontalTranslationFactor;
-(double)verticalTranslationFactor;
-(BOOL)shouldInjectVelocity;
-(double)maximumInjectedVelocity;
-(double)disabledGestureCancellationDistance;
-(double)disabledGestureVelocityScale;
-(SBFFluidBehaviorSettings *)contentAnimationSettings;
-(void)setContentAnimationSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(SBFFluidBehaviorSettings *)disabledGestureContentAnimationSettings;
-(void)setDisabledGestureContentAnimationSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(SBFFluidBehaviorSettings *)cropsAnimationSettings;
-(void)setCropsAnimationSettings:(SBFFluidBehaviorSettings *)arg1 ;
-(SBFFluidBehaviorSettings *)cropLinesAlphaAnimationSettings;
-(void)setCropLinesAlphaAnimationSettings:(SBFFluidBehaviorSettings *)arg1 ;
@end

