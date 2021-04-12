/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/


@class NSLock, NSArray, NSDate;

@interface ASDUpdateMetricsStore : NSObject {

	NSLock* _lock;
	double _averagePollTime;
	NSArray* _metrics;
	NSDate* _lastAutoPollDate;

}

@property (nonatomic,readonly) double averagePollTime;                 //@synthesize averagePollTime=_averagePollTime - In the implementation block
@property (nonatomic,readonly) NSArray * metrics;                      //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,readonly) NSDate * lastAutoPollDate;              //@synthesize lastAutoPollDate=_lastAutoPollDate - In the implementation block
+(id)_updateMetrics;
+(void)_setUpdateMetrics:(id)arg1 ;
-(id)init;
-(void)synchronize;
-(NSArray *)metrics;
-(void)_load;
-(id)_serialableData;
-(void)addPoll:(id)arg1 ;
-(double)averagePollTime;
-(NSDate *)lastAutoPollDate;
@end

