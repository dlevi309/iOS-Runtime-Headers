/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDQueryServer.h>
#import <libobjc.A.dylib/HDQuantitySeriesObserver.h>

@class _HKDateIntervalCollection, HDStatisticsCollectionCalculatorDefaultDataSource, HDStatisticsCollectionCalculatorDefaultSourceOrderProvider, HDStatisticsCollectionCalculator, NSMutableDictionary, HKQuantityType, NSDate, NSString;

@interface HDStatisticsCollectionQueryServer : HDQueryServer <HDQuantitySeriesObserver> {

	_HKDateIntervalCollection* _intervalCollection;
	HDStatisticsCollectionCalculatorDefaultDataSource* _dataSource;
	HDStatisticsCollectionCalculatorDefaultSourceOrderProvider* _sourceOrderProvider;
	HDStatisticsCollectionCalculator* _calculator;
	NSMutableDictionary* _pendingQuantitiesBySeries;
	BOOL _addedSamplesRequireProtectedData;
	BOOL _requiresFetch;
	BOOL _hasScheduledUpdate;
	BOOL _deliversUpdates;
	unsigned long long _mergeStrategy;
	HKQuantityType* _quantityType;
	NSDate* _anchorDate;
	unsigned long long _statisticsOptions;
	/*^block*/id _unitTest_queryServerStatisticsEnumerationHandler;
	/*^block*/id _unitTest_queryServerUpdateStatisticsHandler;
	/*^block*/id _unitTest_queryServerUnableToUpdateStatisticsHandler;

}

@property (nonatomic,copy) id unitTest_queryServerStatisticsEnumerationHandler;                 //@synthesize unitTest_queryServerStatisticsEnumerationHandler=_unitTest_queryServerStatisticsEnumerationHandler - In the implementation block
@property (nonatomic,copy) id unitTest_queryServerUpdateStatisticsHandler;                      //@synthesize unitTest_queryServerUpdateStatisticsHandler=_unitTest_queryServerUpdateStatisticsHandler - In the implementation block
@property (nonatomic,copy) id unitTest_queryServerUnableToUpdateStatisticsHandler;              //@synthesize unitTest_queryServerUnableToUpdateStatisticsHandler=_unitTest_queryServerUnableToUpdateStatisticsHandler - In the implementation block
@property (nonatomic,readonly) NSDate * anchorDate;                                             //@synthesize anchorDate=_anchorDate - In the implementation block
@property (nonatomic,readonly) unsigned long long statisticsOptions;                            //@synthesize statisticsOptions=_statisticsOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsAnchorBasedAuthorization;
+(id)requiredEntitlements;
+(Class)queryClass;
-(void)profile:(id)arg1 didDiscardSeriesOfType:(id)arg2 ;
-(/*^block*/id)transactionalQuantityInsertHandlerForProfile:(id)arg1 journaled:(BOOL)arg2 count:(long long)arg3 ;
-(NSDate *)anchorDate;
-(id)quantityType;
-(BOOL)_shouldListenForUpdates;
-(unsigned long long)statisticsOptions;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_start;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(BOOL)_shouldObserveDatabaseProtectedDataAvailability;
-(void)_queue_fetchAndDeliverAllStatistics;
-(void)_queue_updateStatistics;
-(void)_queue_performUpdate;
-(void)_queue_didReceiveQuantity:(id)arg1 type:(id)arg2 dateInterval:(id)arg3 series:(id)arg4 anchor:(id)arg5 ;
-(void)_queue_scheduleUpdate;
-(void)_queue_deliverUpdatedStatistics:(id)arg1 error:(id)arg2 ;
-(id)_queue_filteredPendingSeriesWithError:(id*)arg1 ;
-(void)_queue_sendAccumulatedStatistics:(id)arg1 isFinal:(BOOL)arg2 statisticsCount:(long long*)arg3 shouldResetStatistics:(BOOL*)arg4 ;
-(void)_queue_accumulateUpdatedStatistics:(id)arg1 accumulatedStatistics:(id)arg2 sendHandler:(/*^block*/id)arg3 ;
-(BOOL)_queue_objectIsRelevant:(id)arg1 ;
-(id)unitTest_queryServerStatisticsEnumerationHandler;
-(void)setUnitTest_queryServerStatisticsEnumerationHandler:(id)arg1 ;
-(id)unitTest_queryServerUpdateStatisticsHandler;
-(void)setUnitTest_queryServerUpdateStatisticsHandler:(id)arg1 ;
-(id)unitTest_queryServerUnableToUpdateStatisticsHandler;
-(void)setUnitTest_queryServerUnableToUpdateStatisticsHandler:(id)arg1 ;
@end

