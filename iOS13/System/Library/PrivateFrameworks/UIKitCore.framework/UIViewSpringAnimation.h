/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIIntervalAnimating.h>

@protocol UIVectorOperatable;
@class NSString;

@interface UIViewSpringAnimation : NSObject <UIIntervalAnimating> {

	id<UIVectorOperatable> _current;
	id<UIVectorOperatable> _velocity;
	id<UIVectorOperatable> _zero;
	SCD_Struct_UI131 _state;
	SCD_Struct_UI132 _parameters;
	id<UIVectorOperatable> _distance;
	id<UIVectorOperatable> _scaledVelocity;
	id<UIVectorOperatable> _epsilon;
	float _velocityScalingFactor;
	BOOL _parametersInitialized;
	id<UIVectorOperatable> _targetValue;
	id<UIVectorOperatable> _value;
	id<UIVectorOperatable> _intermediate;
	id<UIVectorOperatable> _intermediateVelocity;

}

@property (nonatomic,retain) id<UIVectorOperatable> targetValue;                       //@synthesize targetValue=_targetValue - In the implementation block
@property (nonatomic,retain) id<UIVectorOperatable> velocity; 
@property (nonatomic,retain) id<UIVectorOperatable> value;                             //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) id<UIVectorOperatable> intermediate;                      //@synthesize intermediate=_intermediate - In the implementation block
@property (nonatomic,retain) id<UIVectorOperatable> intermediateVelocity;              //@synthesize intermediateVelocity=_intermediateVelocity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<UIVectorOperatable>)value;
-(void)setValue:(id<UIVectorOperatable>)arg1 ;
-(id<UIVectorOperatable>)velocity;
-(void)setVelocity:(id<UIVectorOperatable>)arg1 ;
-(id<UIVectorOperatable>)targetValue;
-(void)setTargetValue:(id<UIVectorOperatable>)arg1 ;
-(void)updateWithDescription:(id)arg1 initial:(BOOL)arg2 ;
-(id)initWithDescription:(id)arg1 current:(id)arg2 targetValue:(id)arg3 ;
-(id)stepWithDelta:(double)arg1 ;
-(BOOL)isStable;
-(void)updateWithDescription:(id)arg1 ;
-(id)initWithCurrent:(id)arg1 targetValue:(id)arg2 ;
-(id<UIVectorOperatable>)intermediate;
-(void)setIntermediate:(id<UIVectorOperatable>)arg1 ;
-(id<UIVectorOperatable>)intermediateVelocity;
-(void)setIntermediateVelocity:(id<UIVectorOperatable>)arg1 ;
@end

