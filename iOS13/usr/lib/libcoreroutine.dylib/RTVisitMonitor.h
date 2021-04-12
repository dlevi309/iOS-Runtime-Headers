/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@protocol RTVisitMonitorDelegate, OS_dispatch_queue;
@class RTVisitFeedBuffer, RTTimer, RTDefaultsManager, RTHintManager, RTLearnedLocationManager, RTLocationAwarenessManager, RTLocationManager, RTMetricManager, RTMotionActivityManager, RTPlatform, RTTimerManager, RTVisitMonitorState, NSObject, NSMutableDictionary;

@interface RTVisitMonitor : NSObject {

	RTVisitFeedBuffer* _feedBuffer;
	RTTimer* _feedBufferTimer;
	BOOL _monitoringVisitIncidents;
	BOOL _monitoringLeechedVisitIncidents;
	BOOL _monitoringLowConfidenceVisitIncidents;
	id<RTVisitMonitorDelegate> _delegate;
	RTDefaultsManager* _defaultsManager;
	RTHintManager* _hintManager;
	RTLearnedLocationManager* _learnedLocationManager;
	RTLocationAwarenessManager* _locationAwarenessManager;
	RTLocationManager* _locationManager;
	RTMetricManager* _metricManager;
	RTMotionActivityManager* _motionActivityManager;
	RTPlatform* _platform;
	RTTimerManager* _timerManager;
	RTVisitMonitorState* _state;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _feedBufferReferenceCounter;
	unsigned long long _lowConfidencePipelineReferenceCounter;
	unsigned long long _highConfidencePipelineReferenceCounter;
	NSMutableDictionary* _pipelines;

}

@property (nonatomic,retain) RTDefaultsManager * defaultsManager;                                    //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (nonatomic,retain) RTHintManager * hintManager;                                            //@synthesize hintManager=_hintManager - In the implementation block
@property (nonatomic,retain) RTLearnedLocationManager * learnedLocationManager;                      //@synthesize learnedLocationManager=_learnedLocationManager - In the implementation block
@property (nonatomic,retain) RTLocationAwarenessManager * locationAwarenessManager;                  //@synthesize locationAwarenessManager=_locationAwarenessManager - In the implementation block
@property (nonatomic,retain) RTLocationManager * locationManager;                                    //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) RTMetricManager * metricManager;                                        //@synthesize metricManager=_metricManager - In the implementation block
@property (nonatomic,retain) RTMotionActivityManager * motionActivityManager;                        //@synthesize motionActivityManager=_motionActivityManager - In the implementation block
@property (nonatomic,retain) RTPlatform * platform;                                                  //@synthesize platform=_platform - In the implementation block
@property (nonatomic,retain) RTTimerManager * timerManager;                                          //@synthesize timerManager=_timerManager - In the implementation block
@property (nonatomic,retain) RTVisitMonitorState * state;                                            //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                     //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL monitoringVisitIncidents;                                          //@synthesize monitoringVisitIncidents=_monitoringVisitIncidents - In the implementation block
@property (assign,nonatomic) BOOL monitoringLeechedVisitIncidents;                                   //@synthesize monitoringLeechedVisitIncidents=_monitoringLeechedVisitIncidents - In the implementation block
@property (assign,nonatomic) BOOL monitoringLowConfidenceVisitIncidents;                             //@synthesize monitoringLowConfidenceVisitIncidents=_monitoringLowConfidenceVisitIncidents - In the implementation block
@property (assign,nonatomic) unsigned long long feedBufferReferenceCounter;                          //@synthesize feedBufferReferenceCounter=_feedBufferReferenceCounter - In the implementation block
@property (assign,nonatomic) unsigned long long lowConfidencePipelineReferenceCounter;               //@synthesize lowConfidencePipelineReferenceCounter=_lowConfidencePipelineReferenceCounter - In the implementation block
@property (assign,nonatomic) unsigned long long highConfidencePipelineReferenceCounter;              //@synthesize highConfidencePipelineReferenceCounter=_highConfidencePipelineReferenceCounter - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pipelines;                                        //@synthesize pipelines=_pipelines - In the implementation block
@property (assign,nonatomic,__weak) id<RTVisitMonitorDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
+(id)hyperParameterForPipelineType:(unsigned long long)arg1 ;
+(id)bucketLocations:(id)arg1 interval:(double)arg2 ;
+(double)LocationHeartbeatWhileAwake;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<RTVisitMonitorDelegate>)delegate;
-(void)setDelegate:(id<RTVisitMonitorDelegate>)arg1 ;
-(RTVisitMonitorState *)state;
-(RTPlatform *)platform;
-(void)setState:(RTVisitMonitorState *)arg1 ;
-(void)setPlatform:(RTPlatform *)arg1 ;
-(void)shutdown;
-(RTLocationManager *)locationManager;
-(void)setLocationManager:(RTLocationManager *)arg1 ;
-(RTTimerManager *)timerManager;
-(void)setTimerManager:(RTTimerManager *)arg1 ;
-(RTDefaultsManager *)defaultsManager;
-(RTMetricManager *)metricManager;
-(RTLearnedLocationManager *)learnedLocationManager;
-(void)setLearnedLocationManager:(RTLearnedLocationManager *)arg1 ;
-(void)setMetricManager:(RTMetricManager *)arg1 ;
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
-(RTMotionActivityManager *)motionActivityManager;
-(void)setMotionActivityManager:(RTMotionActivityManager *)arg1 ;
-(void)fetchVisitsFromDate:(id)arg1 toDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithDefaultsManager:(id)arg1 hintManager:(id)arg2 learnedLocationManager:(id)arg3 locationAwarenessManager:(id)arg4 locationManager:(id)arg5 metricManager:(id)arg6 motionActivityManager:(id)arg7 platform:(id)arg8 queue:(id)arg9 state:(id)arg10 timerManager:(id)arg11 ;
-(id)_createPipelineWithType:(unsigned long long)arg1 name:(id)arg2 lastVisit:(id)arg3 ;
-(void)_startFeedBuffer;
-(void)_stopFeedBuffer;
-(RTHintManager *)hintManager;
-(id)_configurationForPipelineType:(unsigned long long)arg1 ;
-(id)_moduleWithName:(id)arg1 pipelineType:(unsigned long long)arg2 hyperParameter:(id)arg3 ;
-(id)_modulesForPipelineType:(unsigned long long)arg1 hyperParameter:(id)arg2 ;
-(void)_bootstrapPipeline:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_processRealtimeVisits:(id)arg1 pipeline:(id)arg2 ;
-(void)_batchProcess:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)_setupRealtimePipelineWithType:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(unsigned long long)highConfidencePipelineReferenceCounter;
-(void)setHighConfidencePipelineReferenceCounter:(unsigned long long)arg1 ;
-(unsigned long long)feedBufferReferenceCounter;
-(void)setFeedBufferReferenceCounter:(unsigned long long)arg1 ;
-(unsigned long long)lowConfidencePipelineReferenceCounter;
-(void)setLowConfidencePipelineReferenceCounter:(unsigned long long)arg1 ;
-(void)setMonitoringVisitIncidents:(BOOL)arg1 ;
-(void)setMonitoringLeechedVisitIncidents:(BOOL)arg1 ;
-(void)setMonitoringLowConfidenceVisitIncidents:(BOOL)arg1 ;
-(void)onLeechedLocationsNotification:(id)arg1 ;
-(RTLocationAwarenessManager *)locationAwarenessManager;
-(void)_processLeechedLocations:(id)arg1 ;
-(void)_processMatureLocations;
-(void)_startFeedBufferTimer;
-(void)handleVisitIncident:(id)arg1 ;
-(void)handleLeechedVisitIncident:(id)arg1 ;
-(void)logHintSourceUsageWithLocation:(id)arg1 ;
-(void)handleLowConfidenceVisitIncident:(id)arg1 ;
-(BOOL)monitoringVisitIncidents;
-(BOOL)monitoringLeechedVisitIncidents;
-(BOOL)monitoringLowConfidenceVisitIncidents;
-(id)initWithDefaultsManager:(id)arg1 hintManager:(id)arg2 learnedLocationManager:(id)arg3 locationAwarenessManager:(id)arg4 locationManager:(id)arg5 metricManager:(id)arg6 motionActivityManager:(id)arg7 platform:(id)arg8 queue:(id)arg9 state:(id)arg10 ;
-(void)fetchVisitIncidentsFromLocations:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)startMonitoringVisitIncidents;
-(void)stopMonitoringVisitIncidents;
-(void)startMonitoringLeechedVisitIncidents;
-(void)stopMonitoringLeechedVisitIncidents;
-(void)startMonitoringLowConfidenceVisitIncidents;
-(void)stopMonitoringLowConfidenceVisitIncidents;
-(void)fetchVisitMonitorStatusWithHandler:(/*^block*/id)arg1 ;
-(void)fetchVisitMonitorState:(/*^block*/id)arg1 ;
-(void)setHintManager:(RTHintManager *)arg1 ;
-(void)setLocationAwarenessManager:(RTLocationAwarenessManager *)arg1 ;
-(NSMutableDictionary *)pipelines;
-(void)setPipelines:(NSMutableDictionary *)arg1 ;
@end

