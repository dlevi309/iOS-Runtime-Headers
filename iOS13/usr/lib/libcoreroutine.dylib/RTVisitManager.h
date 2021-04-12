/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTService.h>
#import <libobjc.A.dylib/RTVisitMonitorDelegate.h>
#import <libobjc.A.dylib/RTPurgable.h>

@class RTDefaultsManager, RTHintManager, RTLocationAwarenessManager, RTLocationManager, RTMetricManager, RTMotionActivityManager, RTPlatform, RTVisitStore, NSMutableArray, RTLearnedLocationManager, RTVisitMonitor, NSString;

@interface RTVisitManager : RTService <RTVisitMonitorDelegate, RTPurgable> {

	BOOL _spoofMode;
	RTDefaultsManager* _defaultsManager;
	RTHintManager* _hintManager;
	RTLocationAwarenessManager* _locationAwarenessManager;
	RTLocationManager* _locationManager;
	RTMetricManager* _metricManager;
	RTMotionActivityManager* _motionActivityManager;
	RTPlatform* _platform;
	RTVisitStore* _visitStore;
	NSMutableArray* _spoofVisitIncidentTokens;
	RTLearnedLocationManager* _learnedLocationManager;
	RTVisitMonitor* _visitMonitor;

}

@property (nonatomic,retain) RTDefaultsManager * defaultsManager;                                //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (nonatomic,retain) RTHintManager * hintManager;                                        //@synthesize hintManager=_hintManager - In the implementation block
@property (nonatomic,retain) RTLocationAwarenessManager * locationAwarenessManager;              //@synthesize locationAwarenessManager=_locationAwarenessManager - In the implementation block
@property (nonatomic,retain) RTLocationManager * locationManager;                                //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) RTMetricManager * metricManager;                                    //@synthesize metricManager=_metricManager - In the implementation block
@property (nonatomic,retain) RTMotionActivityManager * motionActivityManager;                    //@synthesize motionActivityManager=_motionActivityManager - In the implementation block
@property (nonatomic,retain) RTPlatform * platform;                                              //@synthesize platform=_platform - In the implementation block
@property (nonatomic,retain) RTVisitStore * visitStore;                                          //@synthesize visitStore=_visitStore - In the implementation block
@property (assign,nonatomic) BOOL spoofMode;                                                     //@synthesize spoofMode=_spoofMode - In the implementation block
@property (nonatomic,retain) NSMutableArray * spoofVisitIncidentTokens;                          //@synthesize spoofVisitIncidentTokens=_spoofVisitIncidentTokens - In the implementation block
@property (nonatomic,retain) RTLearnedLocationManager * learnedLocationManager;                  //@synthesize learnedLocationManager=_learnedLocationManager - In the implementation block
@property (nonatomic,retain) RTVisitMonitor * visitMonitor;                                      //@synthesize visitMonitor=_visitMonitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(RTPlatform *)platform;
-(void)setPlatform:(RTPlatform *)arg1 ;
-(void)_setup;
-(void)_shutdown;
-(RTLocationManager *)locationManager;
-(void)setLocationManager:(RTLocationManager *)arg1 ;
-(void)fetchStoredVisitsWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(RTDefaultsManager *)defaultsManager;
-(RTMetricManager *)metricManager;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(RTLearnedLocationManager *)learnedLocationManager;
-(void)setLearnedLocationManager:(RTLearnedLocationManager *)arg1 ;
-(void)setMetricManager:(RTMetricManager *)arg1 ;
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
-(id)initWithQueue:(id)arg1 defaultsManager:(id)arg2 hintManager:(id)arg3 learnedLocationManager:(id)arg4 locationAwarenessManager:(id)arg5 locationManager:(id)arg6 metricManager:(id)arg7 motionActivityManager:(id)arg8 platform:(id)arg9 visitStore:(id)arg10 ;
-(RTMotionActivityManager *)motionActivityManager;
-(void)performPurgeOfType:(long long)arg1 referenceDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setMotionActivityManager:(RTMotionActivityManager *)arg1 ;
-(void)fetchVisitsFromDate:(id)arg1 toDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(RTHintManager *)hintManager;
-(RTLocationAwarenessManager *)locationAwarenessManager;
-(void)onVisitIncident:(id)arg1 error:(id)arg2 ;
-(void)onLeechedVisitIncident:(id)arg1 error:(id)arg2 ;
-(void)onLowConfidenceVisitIncident:(id)arg1 error:(id)arg2 ;
-(void)setHintManager:(RTHintManager *)arg1 ;
-(void)setLocationAwarenessManager:(RTLocationAwarenessManager *)arg1 ;
-(void)simulateVisit:(id)arg1 handler:(/*^block*/id)arg2 ;
-(RTVisitStore *)visitStore;
-(void)onVisitStoreNotification:(id)arg1 ;
-(void)setSpoofVisitIncidentTokens:(NSMutableArray *)arg1 ;
-(void)setSpoofMode:(BOOL)arg1 ;
-(void)_setupVisitMonitorWithHandler:(/*^block*/id)arg1 ;
-(void)_onVisitStoreNotification:(id)arg1 ;
-(void)setVisitMonitor:(RTVisitMonitor *)arg1 ;
-(RTVisitMonitor *)visitMonitor;
-(void)_updateStateForVisitIncidents;
-(void)_updateStateForLeechedVisitIncidents;
-(void)_updateStateForLowConfidenceVisitIncidents;
-(void)_fetchVisitsFromDate:(id)arg1 toDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)spoofMode;
-(void)_onVisitIncident:(id)arg1 error:(id)arg2 ;
-(void)_onLeechedVisitIncident:(id)arg1 error:(id)arg2 ;
-(void)_onLowConfidenceVisitIncident:(id)arg1 error:(id)arg2 ;
-(void)_performPurgeOfType:(long long)arg1 referenceDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSMutableArray *)spoofVisitIncidentTokens;
-(id)registerForSpoofVisitIncidentOfCategory:(id)arg1 ;
-(void)unregisterForSpoofVisitIncidentWithToken:(int)arg1 ;
-(void)_simulateVisit:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setVisitStore:(RTVisitStore *)arg1 ;
@end

