/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@protocol OS_dispatch_queue;
@class BRCAccountSession, NSObject, BRCMetricEndpoint, NSMutableDictionary, BRCSyncHealthReport, BRCItemGlobalID, NSNumber, NSData;

@interface BRCAnalyticsReporter : NSObject {

	BRCAccountSession* _session;
	long long _telemetryEventCount;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _waitOnIdleQueue;
	BRCMetricEndpoint* _metricEndpoint;
	NSMutableDictionary* _eventsByKind;
	BRCSyncHealthReport* _syncHealthReport;
	BRCItemGlobalID* _currentTelemetryItemGlobalID;
	NSNumber* _currentTelemetryToken;
	NSData* _lastSentTelemetryEvents;
	char _syncTelemetryState;

}
-(id)initWithSession:(id)arg1 ;
-(void)submitEventMetric:(id)arg1 ;
-(void)dumpToContext:(id)arg1 ;
-(id)syncTelemetryEventsToSend;
-(void)updateCurrentTelemetryToken:(id)arg1 ;
-(void)submitSyncTelemetryEvent:(id)arg1 ;
-(void)_gatherAppTelemetryEventsWithActivity:(id)arg1 ;
-(void)_handleApplySchedulerTimeoutWithActivity:(id)arg1 ;
-(void)_reportSyncUpBackoffInfo;
-(void)_waitForApplySchedulerToBeIdleWithCompletion:(/*^block*/id)arg1 ;
-(void)_forgetEventMetrics:(id)arg1 ;
-(void)_cleanupTimedOutEventMetrics:(id)arg1 ;
-(void)_withEventMetricsOfKind:(id)arg1 accessor:(/*^block*/id)arg2 ;
-(void)dropAllSyncTelemetryEvents;
-(id)dequeueSyncTelemetryEvents;
-(void)_fetchTelemetryEventCountOrAdd:(long long)arg1 ;
-(void)forgetEventMetric:(id)arg1 ;
-(void)createFSEventToSyncUpEventForFileID:(unsigned long long)arg1 genID:(unsigned)arg2 ;
-(void)lookupFSEventToSyncUpEventByFileID:(unsigned long long)arg1 genID:(unsigned)arg2 accessor:(/*^block*/id)arg3 ;
-(void)lookupFSEventToSyncUpEventByItemID:(id)arg1 accessor:(/*^block*/id)arg2 ;
-(void)createUserDownloadEventForOperationID:(id)arg1 isRecursive:(BOOL)arg2 isForBackup:(BOOL)arg3 ;
-(void)lookupUserDownloadEventByOperationID:(id)arg1 accessor:(/*^block*/id)arg2 ;
-(void)lookupUserDownloadEventByDocID:(id)arg1 accessor:(/*^block*/id)arg2 ;
-(id)currentTelemetryToken;
-(void)deleteMissingErrorThrottles;
-(void)didApplyItemInsideSharedItemID:(id)arg1 ;
@end

