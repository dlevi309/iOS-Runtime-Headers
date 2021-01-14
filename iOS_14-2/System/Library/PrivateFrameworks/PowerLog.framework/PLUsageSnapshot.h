/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerLog.framework/PowerLog
*/


@class NSDate;

@interface PLUsageSnapshot : NSObject {

	NSDate* _timestamp;
	double _cpuUsage;

}

@property (retain) NSDate * timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign) double cpuUsage;                 //@synthesize cpuUsage=_cpuUsage - In the implementation block
-(NSDate *)timestamp;
-(void)setCpuUsage:(double)arg1 ;
-(id)description;
-(void)setTimestamp:(NSDate *)arg1 ;
-(double)cpuUsage;
@end

