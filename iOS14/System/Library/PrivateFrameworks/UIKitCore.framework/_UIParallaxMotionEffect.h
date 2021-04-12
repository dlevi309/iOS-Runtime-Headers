/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setMaximumVerticalTiltAngle:(double)arg1 ;
-(double)verticalSlideAccelerationBoostFactor;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_updateSlideEffectsWithCurrentSlideMagnitude;
-(id)_keyPathsAndRelativeValuesForPose:(id)arg1 ;
-(void)setRotatingSphereRadius:(double)arg1 ;
-(double)maximumVerticalTiltAngle;
-(id)description;
-(void)_activateTiltEffectIfNecessary;
-(void)setVerticalSlideAccelerationBoostFactor:(double)arg1 ;
-(double)maximumHorizontalTiltAngle;
-(void)setMaximumHorizontalTiltAngle:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSlideMagnitude:(UIOffset)arg1 ;
-(id)keyPathsAndRelativeValuesForViewerOffset:(UIOffset)arg1 ;
-(UIOffset)slideMagnitude;
-(double)horizontalSlideAccelerationBoostFactor;
-(void)setHorizontalSlideAccelerationBoostFactor:(double)arg1 ;
-(void)_updateGroupMotionEffect;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)rotatingSphereRadius;
@end

