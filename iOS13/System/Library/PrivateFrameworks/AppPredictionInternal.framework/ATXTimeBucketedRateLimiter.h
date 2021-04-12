/*
* Generated on Monday, March 1, 2021 at 2:33:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class NSDate;

@interface ATXTimeBucketedRateLimiter : NSObject {

	unsigned long long _maxCount;
	double _period;
	NSDate* _endOfCurrentBucket;
	unsigned long long _countForCurrentBucket;
	NSDate* _now;

}

@property (nonatomic,retain) NSDate * now;              //@synthesize now=_now - In the implementation block
-(NSDate *)now;
-(void)setNow:(NSDate *)arg1 ;
-(id)initWithMaxCount:(unsigned long long)arg1 perPeriod:(double)arg2 ;
-(void)_resetBucketIfNeeded;
-(BOOL)tryToIncrementCountAndReturnSuccess;
@end

