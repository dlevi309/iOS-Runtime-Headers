/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@protocol OS_dispatch_queue;
@class NSObject, SDRDiagnosticReporter, NSMutableDictionary;

@interface IMMetricsCollector : NSObject {

	NSObject*<OS_dispatch_queue> _metricsQueue;
	SDRDiagnosticReporter* _diagnosticReporter;
	NSMutableDictionary* _onGoingEventsMap;

}

@property (nonatomic,retain) NSMutableDictionary * onGoingEventsMap;                 //@synthesize onGoingEventsMap=_onGoingEventsMap - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> metricsQueue;              //@synthesize metricsQueue=_metricsQueue - In the implementation block
+(id)sharedInstance;
-(NSObject*<OS_dispatch_queue>)metricsQueue;
-(id)init;
-(id)_trimedEventID:(id)arg1 ;
-(void)_trackEvent:(id)arg1 ;
-(void)_trackEvent:(id)arg1 withStatistic:(id)arg2 ;
-(void)autoBugCaptureWithSubType:(id)arg1 errorPayload:(id)arg2 ;
-(void)_trackEvent:(id)arg1 withCount:(id)arg2 ;
-(void)_trackEvent:(id)arg1 withDictionary:(id)arg2 ;
-(void)_timeoutTimerFired:(id)arg1 ;
-(BOOL)trackEvent:(id)arg1 withStatistic:(id)arg2 ;
-(void)_finalizeEvent:(id)arg1 addingDicitonary:(id)arg2 ;
-(void)_resetTimerEventIfNeedForEventID:(id)arg1 ;
-(void*)_ADClientAddValueForScalarKeyApiInit;
-(void*)_ADClientPushValueForDistributionKeyApiInit;
-(NSMutableDictionary *)onGoingEventsMap;
-(void*)_ADClientSetValueForScalarKeyApiInit;
-(BOOL)trackEvent:(id)arg1 withCount:(id)arg2 ;
-(BOOL)startEvent:(id)arg1 initialDictionary:(id)arg2 ;
-(BOOL)updateEvent:(id)arg1 addToCount:(id)arg2 forKey:(id)arg3 ;
-(void)forceAutoBugCaptureWithSubType:(id)arg1 errorPayload:(id)arg2 ;
-(void)metricAttachmentValidation:(BOOL)arg1 attachmentSize:(id)arg2 operationalErrorDomain:(id)arg3 operationalErrorCode:(id)arg4 validationErrorDomain:(id)arg5 validationErrorCode:(id)arg6 ;
-(void)setOnGoingEventsMap:(NSMutableDictionary *)arg1 ;
-(BOOL)trackEvent:(id)arg1 withDictionary:(id)arg2 ;
-(BOOL)trackEvent:(id)arg1 ;
-(void)setMetricsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)updateEvent:(id)arg1 updateValue:(id)arg2 forKey:(id)arg3 ;
-(BOOL)startEvent:(id)arg1 initialDictionary:(id)arg2 timeout:(unsigned long long)arg3 autoBugCapture:(BOOL)arg4 ;
-(BOOL)finalizeEvent:(id)arg1 addingDicitonary:(id)arg2 ;
-(void)clearInitialCKSyncState;
-(void)noteSyncError:(id)arg1 ;
-(void)noteCompletedInitialSync;
-(void)noteMeticsForSyncStartFrom:(id)arg1 fullSync:(BOOL)arg2 ;
-(void)noteMeticsForSyncEndedWithSuccces:(BOOL)arg1 duration:(id)arg2 ;
-(void)dealloc;
@end

