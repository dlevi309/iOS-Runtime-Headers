/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UIViewAnimationComposing.h>

@protocol UIVectorOperatable;
@class NSString;

@interface UIViewAnimationComposer : NSObject <UIViewAnimationComposing> {

	double _previousInteractiveUpdateTimestamp;
	id _previousInteractiveUpdateValue;
	id<UIVectorOperatable> _previousTarget;
	BOOL _interactive;
	id<UIVectorOperatable> _targetVelocity;

}

@property (nonatomic,retain) id<UIVectorOperatable> targetVelocity;              //@synthesize targetVelocity=_targetVelocity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isActive;
-(id<UIVectorOperatable>)targetVelocity;
-(void)setTargetVelocity:(id<UIVectorOperatable>)arg1 ;
-(id)composeAnimation:(id)arg1 withNewAnimationDescription:(id)arg2 interactive:(BOOL)arg3 currentValue:(id)arg4 targetValue:(id)arg5 ;
-(id)projectValue:(id)arg1 decelerationFactor:(double)arg2 ;
-(id)createAnimationFromDescription:(id)arg1 currentValue:(id)arg2 velocity:(id)arg3 targetValue:(id)arg4 ;
@end

