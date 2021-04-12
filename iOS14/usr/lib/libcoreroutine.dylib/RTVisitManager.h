/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTService.h>
#import <libobjc.A.dylib/RTVisitMonitorDelegate.h>
#import <libobjc.A.dylib/RTPurgable.h>
#import <libobjc.A.dylib/RTStoreManager.h>

@class RTDefaultsManager, RTDeviceLocationPredictor, RTHintManager, RTLocationAwarenessManager, RTLocationManager, RTMetricManager, RTPlatform, RTVisitStore, NSMutableArray, RTVisitMonitor, RTVisitLabeler, NSString;

@interface RTVisitManager : RTService <RTVisitMonitorDelegate, RTPurgable, RTStoreManager> {

	BOOL _spoofMode;
	RTDefaultsManager* _defaultsManager;
	RTDeviceLocationPredictor* _deviceLocationPredictor;
	RTHintManager* _hintManager;
	RTLocationAwarenessManager* _locationAwarenessManager;
	RTLocationManager* _locationManager;
	RTMetricManager* _metricManager;
	RTPlatform* _platform;
	RTVisitStore* _visitStore;
	NSMutableArray* _spoofVisitIncidentTokens;
	RTVisitMonitor* _visitMonitor;
	RTVisitLabeler* _visitLabeler;

}

@property (nonatomic,retain) RTDefaultsManager * defaultsManager;                                //@synthesize defaultsManager=_defaultsManager - In the implementation block
@property (nonatomic,retain) RTDeviceLocationPredictor * deviceLocationPredictor;                //@synthesize deviceLocationPredictor=_deviceLocationPredictor - In the implementation block
@property (nonatomic,retain) RTHintManager * hintManager;                                        //@synthesize hintManager=_hintManager - In the implementation block
@property (nonatomic,retain) RTLocationAwarenessManager * locationAwarenessManager;              //@synthesize locationAwarenessManager=_locationAwarenessManager - In the implementation block
@property (nonatomic,retain) RTLocationManager * locationManager;                                //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) RTMetricManager * metricManager;                                    //@synthesize metricManager=_metricManager - In the implementation block
@property (nonatomic,retain) RTPlatform * platform;                                              //@synthesize platform=_platform - In the implementation block
@property (nonatomic,retain) RTVisitStore * visitStore;                                          //@synthesize visitStore=_visitStore - In the implementation block
@property (assign,nonatomic) BOOL spoofMode;                                                     //@synthesize spoofMode=_spoofMode - In the implementation block
@property (nonatomic,retain) NSMutableArray * spoofVisitIncidentTokens;                          //@synthesize spoofVisitIncidentTokens=_spoofVisitIncidentTokens - In the implementation block
@property (nonatomic,retain) RTVisitMonitor * visitMonitor;                                      //@synthesize visitMonitor=_visitMonitor - In the implementation block
@property (nonatomic,readonly) RTVisitLabeler * visitLabeler;                                    //@synthesize visitLabeler=_visitLabeler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)vendedClasses;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)setDefaultsManager:(RTDefaultsManager *)arg1 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)performPurgeOfType:(long long)arg1 referenceDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(RTDeviceLocationPredictor *)deviceLocationPredictor;
-(RTPlatform *)platform;
-(void)_shutdown;
-(void)setDeviceLocationPredictor:(RTDeviceLocationPredictor *)arg1 ;
-(void)setMetricManager:(RTMetricManager *)arg1 ;
-(void)setHintManager:(RTHintManager *)arg1 ;
-(RTHintManager *)hintManager;
-(void)_setup;
-(RTMetricManager *)metricManager;
-(void)setLocationManager:(RTLocationManager *)arg1 ;
-(RTLocationManager *)locationManager;
-(id)init;
-(void)setPlatform:(RTPlatform *)arg1 ;
-(RTVisitLabeler *)visitLabeler;
-(RTDefaultsManager *)defaultsManager;
-(void)fetchVisitsFromDate:(id)arg1 toDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)fetchStoredVisitsWithOptions:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setLocationAwarenessManager:(RTLocationAwarenessManager *)arg1 ;
-(void)fetchEnumerableObjectsWithOptions:(id)arg1 offset:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(RTLocationAwarenessManager *)locationAwarenessManager;
-(id)initWithDefaultsManager:(id)arg1 deviceLocationPredictor:(id)arg2 hintManager:(id)arg3 locationAwarenessManager:(id)arg4 locationManager:(id)arg5 metricManager:(id)arg6 platform:(id)arg7 visitLabeler:(id)arg8 visitStore:(id)arg9 ;
-(void)onVisitIncident:(id)arg1 error:(id)arg2 ;
-(void)onLowConfidenceVisitIncident:(id)arg1 error:(id)arg2 ;
-(void)simulateVisit:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)injectRealtimeVisit:(id)arg1 handler:(/*^block*/id)arg2 ;
-(RTVisitStore *)visitStore;
-(void)onVisitStoreNotification:(id)arg1 ;
-(void)setSpoofVisitIncidentTokens:(NSMutableArray *)arg1 ;
-(void)setSpoofMode:(BOOL)arg1 ;
-(void)_setupVisitMonitorWithHandler:(/*^block*/id)arg1 ;
-(void)_onVisitStoreNotification:(id)arg1 ;
-(RTVisitMonitor *)visitMonitor;
-(void)setVisitMonitor:(RTVisitMonitor *)arg1 ;
-(void)_updateStateForVisitIncidents;
-(void)_updateStateForLeechedVisitIncidents;
-(void)_updateStateForLowConfidenceVisitIncidents;
-(void)_fetchVisitsFromDate:(id)arg1 toDate:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)spoofMode;
-(void)_onVisitIncident:(id)arg1 error:(id)arg2 ;
-(void)_onLowConfidenceVisitIncident:(id)arg1 error:(id)arg2 ;
-(void)_performPurgeOfType:(long long)arg1 referenceDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSMutableArray *)spoofVisitIncidentTokens;
-(id)registerForSpoofVisitIncidentOfCategory:(id)arg1 ;
-(void)unregisterForSpoofVisitIncidentWithToken:(int)arg1 ;
-(void)_simulateVisit:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_injectRealtimeVisit:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setVisitStore:(RTVisitStore *)arg1 ;
@end

