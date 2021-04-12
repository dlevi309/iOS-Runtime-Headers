/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIMotionEffect.h>

@class UIMotionEffectGroup, UIInterpolatingMotionEffect, _UITiltMotionEffect;

@interface _UIParallaxMotionEffect : UIMotionEffect {

	UIMotionEffectGroup* _group;
	UIOffset _slideMagnitude;
	UIInterpolatingMotionEffect* _horizontalSlideEffect;
	UIInterpolatingMotionEffect* _verticalSlideEffect;
	_UITiltMotionEffect* _tiltEffect;

}

@property (assign,nonatomic) UIOffset slideMagnitude;                                    //@synthesize slideMagnitude=_slideMagnitude - In the implementation block
@property (assign,nonatomic) double horizontalSlideAccelerationBoostFactor; 
@property (assign,nonatomic) double verticalSlideAccelerationBoostFactor; 
@property (assign,nonatomic) double maximumHorizontalTiltAngle; 
@property (assign,nonatomic) double maximumVerticalTiltAngle; 
@property (assign,nonatomic) double rotatingSphereRadius; 
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_keyPathsAndRelativeValuesForPose:(id)arg1 ;
-(id)keyPathsAndRelativeValuesForViewerOffset:(UIOffset)arg1 ;
-(void)setSlideMagnitude:(UIOffset)arg1 ;
-(UIOffset)slideMagnitude;
-(double)horizontalSlideAccelerationBoostFactor;
-(double)verticalSlideAccelerationBoostFactor;
-(double)maximumHorizontalTiltAngle;
-(double)maximumVerticalTiltAngle;
-(double)rotatingSphereRadius;
-(void)_updateSlideEffectsWithCurrentSlideMagnitude;
-(void)_updateGroupMotionEffect;
-(void)_activateTiltEffectIfNecessary;
-(void)setMaximumHorizontalTiltAngle:(double)arg1 ;
-(void)setMaximumVerticalTiltAngle:(double)arg1 ;
-(void)setRotatingSphereRadius:(double)arg1 ;
-(void)setHorizontalSlideAccelerationBoostFactor:(double)arg1 ;
-(void)setVerticalSlideAccelerationBoostFactor:(double)arg1 ;
@end

