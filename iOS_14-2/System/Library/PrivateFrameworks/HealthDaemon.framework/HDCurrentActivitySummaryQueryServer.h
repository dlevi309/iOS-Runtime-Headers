/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDQueryServer.h>
#import <libobjc.A.dylib/HDCurrentActivitySummaryHelperObserver.h>

@class HDCurrentActivitySummaryHelper, HKActivitySummary, NSDictionary, NSString;

@interface HDCurrentActivitySummaryQueryServer : HDQueryServer <HDCurrentActivitySummaryHelperObserver> {

	HDCurrentActivitySummaryHelper* _currentSummaryHelper;
	HKActivitySummary* _lastActivitySummary;
	NSDictionary* _collectionIntervals;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createTaskServerWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 error:(id*)arg5 ;
+(Class)queryClass;
-(BOOL)_shouldListenForUpdates;
-(BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4 ;
-(void)_queue_start;
-(void)_queue_stop;
-(void)currentActivitySummaryHelper:(id)arg1 didUpdateTodayActivitySummary:(id)arg2 changedFields:(unsigned long long)arg3 ;
-(void)currentActivitySummaryHelper:(id)arg1 didUpdateYesterdayActivitySummary:(id)arg2 changedFields:(unsigned long long)arg3 ;
-(void)_queue_startDataCollection;
-(void)_queue_stopDataCollection;
@end

