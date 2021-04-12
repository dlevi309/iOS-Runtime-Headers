/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIIntervalAnimating.h>

@protocol UIVectorOperatable;
@class NSString;

@interface UIViewFrictionBounceAnimation : NSObject <UIIntervalAnimating> {

	id _stableTarget;
	id _intermediate;
	id _current;
	double _deceleration;
	double _bounce;
	id<UIVectorOperatable> _targetValue;

}

@property (nonatomic,retain) id<UIVectorOperatable> targetValue;              //@synthesize targetValue=_targetValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setVelocity:(id)arg1 ;
-(id)velocity;
-(id)stepWithDelta:(double)arg1 ;
-(id<UIVectorOperatable>)targetValue;
-(id)initWithCurrent:(id)arg1 target:(id)arg2 ;
-(id)updatedTarget;
-(void)setTargetValue:(id<UIVectorOperatable>)arg1 ;
-(BOOL)isStable;
@end

