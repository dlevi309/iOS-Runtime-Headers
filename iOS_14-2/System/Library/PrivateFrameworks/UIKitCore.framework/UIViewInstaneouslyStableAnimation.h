/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIIntervalAnimating.h>

@protocol UIVectorOperatable;
@class NSString;

@interface UIViewInstaneouslyStableAnimation : NSObject <UIIntervalAnimating> {

	id<UIVectorOperatable> _velocity;
	id<UIVectorOperatable> _targetValue;

}

@property (nonatomic,retain) id<UIVectorOperatable> targetValue;              //@synthesize targetValue=_targetValue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setVelocity:(id)arg1 ;
-(id)velocity;
-(id)initWithTargetValue:(id)arg1 velocity:(id)arg2 ;
-(id)stepWithDelta:(double)arg1 ;
-(id<UIVectorOperatable>)targetValue;
-(void)setTargetValue:(id<UIVectorOperatable>)arg1 ;
-(id)value;
-(BOOL)isStable;
@end

