/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDQueryServer.h>

@class HKQuantitySample, NSDate, NSUUID;

@interface HDQuantitySeriesSampleQueryServer : HDQueryServer {

	HKQuantitySample* _sample;
	long long _batchThreshold;
	long long _lastDatumIndex;
	long long _mode;
	unsigned long long _options;
	NSDate* _maximumDeliveredStartDate;
	NSUUID* _latestDeliveredUUID;
	NSDate* _latestDeliveredSampleStartDate;
	/*^block*/id _unitTest_batchWillDeliver;

}

@property (nonatomic,copy) id unitTest_batchWillDeliver;              //@synthesize unitTest_batchWillDeliver=_unitTest_batchWillDeliver - In the implementation block
+(BOOL)_enumerateQuantityValuesForPredicate:(id)arg1 orderBySamples:(BOOL)arg2 profile:(id)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
+(BOOL)_shouldDeliverQuantityWithStartTime:(double)arg1 UUID:(id)arg2 maximumDeliveredStartDate:(id)arg3 latestDeliveredUUID:(id)arg4 orderBySamples:(BOOL)arg5 ;
+(id)requiredEntitlements;
+(Class)queryClass;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_start;
-(id)_clientProxy;
-(void)unitTest_setBatchThreshold:(long long)arg1 ;
-(void)_deliverError:(id)arg1 ;
-(void)_deliverEmptyResults;
-(void)_queue_startSingleSeriesMode;
-(void)_queue_startEnumerationMode;
-(void)_deliverQuantitySeries:(id)arg1 seriesAnchor:(long long)arg2 isFinal:(BOOL)arg3 ;
-(void)_deliverEnumerationResults:(id)arg1 isFinal:(BOOL)arg2 ;
-(id)_predicateForEnumerationWithError:(id*)arg1 ;
-(BOOL)_deliverEnumerationResults:(id)arg1 latestUUID:(id)arg2 latestSampleStartTime:(double)arg3 sampleIDsToLookup:(id)arg4 isFinal:(BOOL)arg5 error:(id*)arg6 ;
-(id)unitTest_batchWillDeliver;
-(void)setUnitTest_batchWillDeliver:(id)arg1 ;
@end

