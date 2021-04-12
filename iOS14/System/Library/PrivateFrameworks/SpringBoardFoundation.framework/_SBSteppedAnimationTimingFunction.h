/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)valueAtPercentage:(double)arg1 ;
-(SBNormalizedTransitionInterval)constrainedRange;
-(CAMediaTimingFunction *)timingFunction;
-(id)initWithTimingFunction:(id)arg1 constrainedToIntervalBetween:(double)arg2 and:(double)arg3 ;
@end

