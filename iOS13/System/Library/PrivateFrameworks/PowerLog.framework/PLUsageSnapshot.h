/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PowerLog.framework/PowerLog
*/


@class NSDate;

@interface PLUsageSnapshot : NSObject {

	NSDate* _timestamp;
	double _cpuUsage;

}

@property (retain) NSDate * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign) double cpuUsage;                 //@synthesize cpuUsage=_cpuUsage - In the implementation block
-(id)description;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(double)cpuUsage;
-(void)setCpuUsage:(double)arg1 ;
@end

