/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFTimer.h>

@interface HMFExponentialBackoffTimer : HMFTimer {

	BOOL _increasing;
	double _minimumTimeInterval;
	double _maximumTimeInterval;
	long long _exponentialFactor;

}

@property (getter=isIncreasing,nonatomic,readonly) BOOL increasing;              //@synthesize increasing=_increasing - In the implementation block
@property (nonatomic,readonly) double minimumTimeInterval;                       //@synthesize minimumTimeInterval=_minimumTimeInterval - In the implementation block
@property (nonatomic,readonly) double maximumTimeInterval;                       //@synthesize maximumTimeInterval=_maximumTimeInterval - In the implementation block
@property (nonatomic,readonly) long long exponentialFactor;                      //@synthesize exponentialFactor=_exponentialFactor - In the implementation block
-(double)maximumTimeInterval;
-(BOOL)isIncreasing;
-(double)timeInterval;
-(id)initWithTimeInterval:(double)arg1 options:(unsigned long long)arg2 ;
-(id)initWithMinimumTimeInterval:(double)arg1 maximumTimeInterval:(double)arg2 exponentialFactor:(long long)arg3 options:(unsigned long long)arg4 ;
-(void)reset;
-(double)minimumTimeInterval;
-(void)__fire;
-(long long)exponentialFactor;
@end

