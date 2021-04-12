/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/


#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
@class CAMediaTimingFunction;

@interface _SBSteppedAnimationTimingFunction : NSObject {

	CAMediaTimingFunction* _timingFunction;
	SBNormalizedTransitionInterval _constrainedRange;

}

@property (nonatomic,readonly) CAMediaTimingFunction * timingFunction;                       //@synthesize timingFunction=_timingFunction - In the implementation block
@property (nonatomic,readonly) SBNormalizedTransitionInterval constrainedRange;              //@synthesize constrainedRange=_constrainedRange - In the implementation block
+(id)timingFunctionWithTimingFunction:(id)arg1 constrainedToIntervalBetween:(double)arg2 and:(double)arg3 ;
-(CAMediaTimingFunction *)timingFunction;
-(double)valueAtPercentage:(double)arg1 ;
-(id)initWithTimingFunction:(id)arg1 constrainedToIntervalBetween:(double)arg2 and:(double)arg3 ;
-(SBNormalizedTransitionInterval)constrainedRange;
@end

