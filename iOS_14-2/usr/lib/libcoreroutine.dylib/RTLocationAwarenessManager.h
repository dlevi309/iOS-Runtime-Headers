/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTService.h>

@class RTLocationAwarenessMetrics, RTMetricManager, RTAuthorizationManager, RTWiFiManager, CLLocation, NSDate, RTLocationAwarenessManagerConfig, NSMapTable, RTLocationManager, RTTimer, RTTimerManager, NSNumber, RTMotionActivityManager, RTPowerAssertion, RTXPCActivityManager, RTInvocationDispatcher;

@interface RTLocationAwarenessManager : RTService {

	BOOL _activeRequestInterrupted;
	BOOL _activeRequestFulfilled;
	BOOL _activeRequestCoarseLocationReceived;
	BOOL _activeRequestLocationServiceOn;
	BOOL _activeRequestRoutineOn;
	BOOL _activeRequestWifiOn;
	RTLocationAwarenessMetrics* _metrics;
	RTMetricManager* _metricManager;
	RTAuthorizationManager* _authorizationManager;
	RTWiFiManager* _wifiManager;
	CLLocation* _lastLocationAnyPositive;
	CLLocation* _lastLocationLessThan200m;
	CLLocation* _lastLocationLessThan55m;
	CLLocation* _lastLocationLessThan20m;
	CLLocation* _lastLocationLessThan10m;
	NSDate* _scheduledHeartbeatFiringTime;
	NSDate* _scheduledRestTimerFiringTime;
	RTLocationAwarenessManagerConfig* _config;
	NSMapTable* _requesterToHeartbeatBucket;
	NSMapTable* _heartbeatBucketToRequesters;
	RTLocationManager* _locationManager;
	RTTimer* _heartbeatTimer;
	RTTimer* _restTimer;
	RTTimerManager* _timerManager;
	NSDate* _activeOnset;
	NSNumber* _minHeartbeatBucket;
	CLLocation* _lastValidLocation;
	RTMotionActivityManager* _motionActivityManager;
	RTPowerAssertion* _xpcActivityPowerAssertion;
	RTXPCActivityManager* _xpcActivityManager;
	NSDate* _stationaryStartTimestamp;
	RTInvocationDispatcher* _heartbeatBuffer;

}

@property (nonatomic,retain) RTLocationAwarenessMetrics * metrics;                         //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,retain) RTMetricManager * metricManager;                              //@synthesize metricManager=_metricManager - In the implementation block
@property (nonatomic,retain) RTAuthorizationManager * authorizationManager;                //@synthesize authorizationManager=_authorizationManager - In the implementation block
@property (nonatomic,retain) RTWiFiManager * wifiManager;                                  //@synthesize wifiManager=_wifiManager - In the implementation block
@property (nonatomic,retain) CLLocation * lastLocationAnyPositive;                         //@synthesize lastLocationAnyPositive=_lastLocationAnyPositive - In the implementation block
@property (nonatomic,retain) CLLocation * lastLocationLessThan200m;                        //@synthesize lastLocationLessThan200m=_lastLocationLessThan200m - In the implementation block
@property (nonatomic,retain) CLLocation * lastLocationLessThan55m;                         //@synthesize lastLocationLessThan55m=_lastLocationLessThan55m - In the implementation block
@property (nonatomic,retain) CLLocation * lastLocationLessThan20m;                         //@synthesize lastLocationLessThan20m=_lastLocationLessThan20m - In the implementation block
@property (nonatomic,retain) CLLocation * lastLocationLessThan10m;                         //@synthesize lastLocationLessThan10m=_lastLocationLessThan10m - In the implementation block
@property (nonatomic,retain) NSDate * scheduledHeartbeatFiringTime;                        //@synthesize scheduledHeartbeatFiringTime=_scheduledHeartbeatFiringTime - In the implementation block
@property (nonatomic,retain) NSDate * scheduledRestTimerFiringTime;                        //@synthesize scheduledRestTimerFiringTime=_scheduledRestTimerFiringTime - In the implementation block
@property (assign,nonatomic) BOOL activeRequestInterrupted;                                //@synthesize activeRequestInterrupted=_activeRequestInterrupted - In the implementation block
@property (assign,nonatomic) BOOL activeRequestFulfilled;                                  //@synthesize activeRequestFulfilled=_activeRequestFulfilled - In the implementation block
@property (assign,nonatomic) BOOL activeRequestCoarseLocationReceived;                     //@synthesize activeRequestCoarseLocationReceived=_activeRequestCoarseLocationReceived - In the implementation block
@property (assign,nonatomic) BOOL activeRequestLocationServiceOn;                          //@synthesize activeRequestLocationServiceOn=_activeRequestLocationServiceOn - In the implementation block
@property (assign,nonatomic) BOOL activeRequestRoutineOn;                                  //@synthesize activeRequestRoutineOn=_activeRequestRoutineOn - In the implementation block
@property (assign,nonatomic) BOOL activeRequestWifiOn;                                     //@synthesize activeRequestWifiOn=_activeRequestWifiOn - In the implementation block
@property (nonatomic,readonly) RTLocationAwarenessManagerConfig * config;                  //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) NSMapTable * requesterToHeartbeatBucket;                      //@synthesize requesterToHeartbeatBucket=_requesterToHeartbeatBucket - In the implementation block
@property (nonatomic,retain) NSMapTable * heartbeatBucketToRequesters;                     //@synthesize heartbeatBucketToRequesters=_heartbeatBucketToRequesters - In the implementation block
@property (nonatomic,retain) RTLocationManager * locationManager;                          //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) RTTimer * heartbeatTimer;                                     //@synthesize heartbeatTimer=_heartbeatTimer - In the implementation block
@property (nonatomic,retain) RTTimer * restTimer;                                          //@synthesize restTimer=_restTimer - In the implementation block
@property (nonatomic,retain) RTTimerManager * timerManager;                                //@synthesize timerManager=_timerManager - In the implementation block
@property (nonatomic,copy) NSDate * activeOnset;                                           //@synthesize activeOnset=_activeOnset - In the implementation block
@property (nonatomic,retain) NSNumber * minHeartbeatBucket;                                //@synthesize minHeartbeatBucket=_minHeartbeatBucket - In the implementation block
@property (nonatomic,retain) CLLocation * lastValidLocation;                               //@synthesize lastValidLocation=_lastValidLocation - In the implementation block
@property (nonatomic,retain) RTMotionActivityManager * motionActivityManager;              //@synthesize motionActivityManager=_motionActivityManager - In the implementation block
@property (nonatomic,retain) RTPowerAssertion * xpcActivityPowerAssertion;                 //@synthesize xpcActivityPowerAssertion=_xpcActivityPowerAssertion - In the implementation block
@property (nonatomic,retain) RTXPCActivityManager * xpcActivityManager;                    //@synthesize xpcActivityManager=_xpcActivityManager - In the implementation block
@property (nonatomic,copy) NSDate * stationaryStartTimestamp;                              //@synthesize stationaryStartTimestamp=_stationaryStartTimestamp - In the implementation block
@property (nonatomic,copy) RTInvocationDispatcher * heartbeatBuffer;                       //@synthesize heartbeatBuffer=_heartbeatBuffer - In the implementation block
+(id)powerAssertion;
+(long long)localHourFromTimestamp:(id)arg1 ;
-(void)setMetrics:(RTLocationAwarenessMetrics *)arg1 ;
-(RTLocationAwarenessManagerConfig *)config;
-(void)setMotionActivityManager:(RTMotionActivityManager *)arg1 ;
-(RTLocationAwarenessMetrics *)metrics;
-(void)setAuthorizationManager:(RTAuthorizationManager *)arg1 ;
-(void)_shutdown;
-(void)setMetricManager:(RTMetricManager *)arg1 ;
-(RTAuthorizationManager *)authorizationManager;
-(void)setActiveRequestInterrupted:(BOOL)arg1 ;
-(void)_setup;
-(RTMetricManager *)metricManager;
-(void)setLocationManager:(RTLocationManager *)arg1 ;
-(RTLocationManager *)locationManager;
-(RTWiFiManager *)wifiManager;
-(void)setWifiManager:(RTWiFiManager *)arg1 ;
-(CLLocation *)lastLocationLessThan20m;
-(RTMotionActivityManager *)motionActivityManager;
-(void)considerUpdateActiveRequestMetrics;
-(BOOL)coarseLocation:(id)arg1 ;
-(void)considerUpdatingHeartbeatDelayMetrics;
-(void)setLastLocationLessThan200m:(CLLocation *)arg1 ;
-(void)updateHeartbeatTimerDelayForTimestamp:(id)arg1 withDelay:(double)arg2 ;
-(id)init;
-(void)onLeechedLocationNotification:(id)arg1 ;
-(void)removeLocationHeartbeatRequester:(id)arg1 ;
-(void)setActiveRequestLocationServiceOn:(BOOL)arg1 ;
-(NSDate *)stationaryStartTimestamp;
-(BOOL)activeRequestCoarseLocationReceived;
-(CLLocation *)lastLocationLessThan200m;
-(id)updateWithLocation:(id)arg1 oneIntervalHistogram:(id)arg2 lastLocation:(id)arg3 ;
-(BOOL)activeRequestFulfilled;
-(void)setActiveRequestWifiOn:(BOOL)arg1 ;
-(double)nextFiringDelayWithHeartbeatInterval:(double)arg1 starvingDuration:(double)arg2 ;
-(void)setRequesterToHeartbeatBucket:(NSMapTable *)arg1 ;
-(void)heartbeatTasks;
-(void)setMinHeartbeatBucket:(NSNumber *)arg1 ;
-(NSDate *)scheduledHeartbeatFiringTime;
-(double)intervalForHeartbeatBucket:(id)arg1 ;
-(void)updateMinHeartbeatBucket;
-(void)setScheduledHeartbeatFiringTime:(NSDate *)arg1 ;
-(CLLocation *)lastValidLocation;
-(id)heartbeatBucketForInterval:(double)arg1 ;
-(CLLocation *)lastLocationLessThan10m;
-(void)hourlySingleShotWithHandler:(/*^block*/id)arg1 ;
-(void)setLastLocationLessThan10m:(CLLocation *)arg1 ;
-(BOOL)validLocation:(id)arg1 ;
-(BOOL)activeRequestWifiOn;
-(RTTimerManager *)timerManager;
-(BOOL)activeRequestInterrupted;
-(void)setHeartbeatTimer:(RTTimer *)arg1 ;
-(void)setStationaryStartTimestamp:(NSDate *)arg1 ;
-(void)setActiveOnset:(NSDate *)arg1 ;
-(RTXPCActivityManager *)xpcActivityManager;
-(void)setLastLocationAnyPositive:(CLLocation *)arg1 ;
-(RTTimer *)heartbeatTimer;
-(void)considerSubmittingCurrentMetrics;
-(void)setHeartbeatBuffer:(RTInvocationDispatcher *)arg1 ;
-(void)incrementBasicHistogram:(id)arg1 forTimestamp:(id)arg2 ;
-(NSMapTable *)heartbeatBucketToRequesters;
-(CLLocation *)lastLocationAnyPositive;
-(BOOL)activeRequestLocationServiceOn;
-(void)setHeartbeatBucketToRequesters:(NSMapTable *)arg1 ;
-(void)setLastLocationLessThan20m:(CLLocation *)arg1 ;
-(RTPowerAssertion *)xpcActivityPowerAssertion;
-(void)setTimerManager:(RTTimerManager *)arg1 ;
-(void)setXpcActivityManager:(RTXPCActivityManager *)arg1 ;
-(void)setActiveRequestFulfilled:(BOOL)arg1 ;
-(void)onNoOpLocationNotification:(id)arg1 ;
-(void)updateLocationAwarenessHistogramsWithLocations:(id)arg1 ;
-(id)initWithLocationManager:(id)arg1 config:(id)arg2 metricManager:(id)arg3 motionActivityManager:(id)arg4 authorizationManager:(id)arg5 wifiManager:(id)arg6 xpcActivityManager:(id)arg7 timerManager:(id)arg8 ;
-(double)metricAge;
-(BOOL)addLocationHeartbeatRequester:(id)arg1 interval:(double)arg2 error:(id*)arg3 ;
-(void)setLastValidLocation:(CLLocation *)arg1 ;
-(CLLocation *)lastLocationLessThan55m;
-(void)_updateXPCActivityForObserverCount:(unsigned long long)arg1 ;
-(NSMapTable *)requesterToHeartbeatBucket;
-(void)adjustHeartbeatTimer;
-(void)setLastLocationLessThan55m:(CLLocation *)arg1 ;
-(NSNumber *)minHeartbeatBucket;
-(BOOL)activeRequestInterruptedCheck;
-(double)starvingDurationTillNow;
-(RTInvocationDispatcher *)heartbeatBuffer;
-(void)setRestTimer:(RTTimer *)arg1 ;
-(void)setScheduledRestTimerFiringTime:(NSDate *)arg1 ;
-(void)considerRequestingForLocation;
-(void)onRest;
-(void)setActiveRequestRoutineOn:(BOOL)arg1 ;
-(void)resetActiveRequestSummaryVariables;
-(void)onMotionActivityManagerNotificationActivityNotification:(id)arg1 ;
-(void)setActiveRequestCoarseLocationReceived:(BOOL)arg1 ;
-(RTTimer *)restTimer;
-(BOOL)validInterval:(double)arg1 ;
-(NSDate *)activeOnset;
-(NSDate *)scheduledRestTimerFiringTime;
-(void)onHeartbeat;
-(BOOL)activeRequestRoutineOn;
-(void)setXpcActivityPowerAssertion:(RTPowerAssertion *)arg1 ;
@end

