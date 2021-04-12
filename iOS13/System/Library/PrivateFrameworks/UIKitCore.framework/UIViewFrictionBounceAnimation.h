/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)velocity;
-(void)setVelocity:(id)arg1 ;
-(id<UIVectorOperatable>)targetValue;
-(void)setTargetValue:(id<UIVectorOperatable>)arg1 ;
-(id)stepWithDelta:(double)arg1 ;
-(BOOL)isStable;
-(id)updatedTarget;
-(id)initWithCurrent:(id)arg1 target:(id)arg2 ;
@end

