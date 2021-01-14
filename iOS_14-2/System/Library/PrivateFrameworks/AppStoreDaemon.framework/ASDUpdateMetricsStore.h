/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)_setUpdateMetrics:(id)arg1 ;
+(id)_updateMetrics;
-(NSArray *)metrics;
-(id)init;
-(id)_serialableData;
-(double)averagePollTime;
-(NSDate *)lastAutoPollDate;
-(void)addPoll:(id)arg1 ;
-(void)synchronize;
-(void)_load;
@end

