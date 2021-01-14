/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_UI152 _state;
	SCD_Struct_UI153 _parameters;
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
-(void)setVelocity:(id<UIVectorOperatable>)arg1 ;
-(void)setIntermediateVelocity:(id<UIVectorOperatable>)arg1 ;
-(id<UIVectorOperatable>)velocity;
-(id)initWithDescription:(id)arg1 current:(id)arg2 targetValue:(id)arg3 ;
-(id)stepWithDelta:(double)arg1 ;
-(id<UIVectorOperatable>)targetValue;
-(void)setValue:(id<UIVectorOperatable>)arg1 ;
-(id<UIVectorOperatable>)intermediate;
-(id<UIVectorOperatable>)intermediateVelocity;
-(void)updateWithDescription:(id)arg1 ;
-(void)setIntermediate:(id<UIVectorOperatable>)arg1 ;
-(void)setTargetValue:(id<UIVectorOperatable>)arg1 ;
-(id<UIVectorOperatable>)value;
-(BOOL)isStable;
-(void)updateWithDescription:(id)arg1 initial:(BOOL)arg2 ;
-(id)initWithCurrent:(id)arg1 targetValue:(id)arg2 ;
@end

