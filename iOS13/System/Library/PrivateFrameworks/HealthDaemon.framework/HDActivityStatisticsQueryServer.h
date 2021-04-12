/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDQueryServer.h>
#import <libobjc.A.dylib/HDDataObserver.h>

@class HKStatisticsCollection, _HKDelayedOperation, NSDate, NSDateComponents, HDActivityCacheDataSource, HDSourceManager, NSString;

@interface HDActivityStatisticsQueryServer : HDQueryServer <HDDataObserver> {

	HKStatisticsCollection* _statisticsCollection;
	BOOL _deliversUpdates;
	_HKDelayedOperation* _updateOperation;
	_HKDelayedOperation* _resetOperation;
	NSDate* _startDate;
	NSDate* _endDate;
	NSDateComponents* _moveIntervalComponents;
	NSDateComponents* _exerciseIntervalComponents;
	HDActivityCacheDataSource* _dataSource;
	HDSourceManager* _sourceManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)queryClass;
-(void)_createDataSourceIfNecessary;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_start;
-(void)_queue_stop;
-(void)_queue_deliverUpdates;
-(void)_queue_reset;
-(id)_allObservedQuantityTypes;
-(BOOL)_queue_queryIsRunning;
-(id)_queue_queryResultFromDataSourceWithError:(id*)arg1 ;
-(void)_queue_deliverError:(id)arg1 ;
-(void)_queue_deliverResult:(id)arg1 ;
-(void)_queue_didDeactivate;
@end
