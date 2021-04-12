/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFObject.h>

@class MovingAverage;

@interface HMITimeIntervalAverage : HMFObject {

	MovingAverage* _average;

}
-(void)addValue:(double)arg1 ;
-(id)initWithMaxCapacity:(long long)arg1 ;
-(double)value;
-(double)valueForInterval:(double)arg1 defaultValue:(double)arg2 ;
@end

