/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libobjc.A.dylib/RTDaemonClientRegistrarVehicleEventProtocol.h>
#import <libobjc.A.dylib/RTDaemonClientRegistrarScenarioTriggerProtocol.h>
#import <libobjc.A.dylib/RTDaemonProtocol.h>
#import <libobjc.A.dylib/NSXPCConnectionDelegate.h>

@protocol RTClientListenerProtocol, OS_dispatch_queue;
@class NSXPCConnection, NSString, NSMutableDictionary, RTEntitlementProvider, RTDaemonClientRegistrarVehicleEvent, RTDaemonClientRegistrarScenarioTrigger, RTAccountManager, RTAssetManager, RTAuthorizationManager, RTContactsManager, RTDeviceLocationPredictor, RTDiagnostics, RTEventAgentManager, RTEventModelProvider, RTFingerprintManager, RTHintManager, RTLearnedLocationManager, RTLocationManager, RTLocationStore, RTMapServiceManager, RTMetricManager, RTPlaceInferenceManager, RTPurgeManager, RTScenarioTriggerManager, RTVehicleLocationProvider, RTVisitManager, RTWiFiManager, NSObject;

@interface RTDaemonClient : NSObject <RTDaemonClientRegistrarVehicleEventProtocol, RTDaemonClientRegistrarScenarioTriggerProtocol, RTDaemonProtocol, NSXPCConnectionDelegate> {

	BOOL _enabled;
	BOOL _supported;
	BOOL _monitorVisits;
	BOOL _leechVisits;
	BOOL _leechLowConfidenceVisits;
	int _processIdentifier;
	NSXPCConnection* _xpcConnection;
	NSString* _restorationIdentifier;
	id<RTClientListenerProtocol> _clientManagerDelegate;
	NSMutableDictionary* _restorationData;
	RTEntitlementProvider* _entitlementProvider;
	NSMutableDictionary* _vendedClassesStoreManagerDict;
	RTDaemonClientRegistrarVehicleEvent* _vehicleEventRegistrar;
	RTDaemonClientRegistrarScenarioTrigger* _scenarioTriggerRegistrar;
	RTAccountManager* _accountManager;
	RTAssetManager* _assetManager;
	RTAuthorizationManager* _authorizationManager;
	RTContactsManager* _contactsManager;
	RTDeviceLocationPredictor* _deviceLocationPredictor;
	RTDiagnostics* _diagnostics;
	RTEventAgentManager* _eventAgentManager;
	RTEventModelProvider* _eventModelProvider;
	RTFingerprintManager* _fingerprintManager;
	RTHintManager* _hintManager;
	RTLearnedLocationManager* _learnedLocationManager;
	RTLocationManager* _locationManager;
	RTLocationStore* _locationStore;
	RTMapServiceManager* _mapServiceManager;
	RTMetricManager* _metricManager;
	RTPlaceInferenceManager* _placeInferenceManager;
	RTPurgeManager* _purgeManager;
	RTScenarioTriggerManager* _scenarioTriggerManager;
	RTVehicleLocationProvider* _vehicleLocationProvider;
	RTVisitManager* _visitManager;
	RTWiFiManager* _wifiManager;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _executablePath;
	NSString* _executableName;
	NSString* _signingIdentifier;
	NSString* _bundleIdentifier;

}

@property (assign) BOOL enabled;                                                                             //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL supported;                                                                 //@synthesize supported=_supported - In the implementation block
@property (assign,nonatomic) BOOL monitorVisits;                                                             //@synthesize monitorVisits=_monitorVisits - In the implementation block
@property (assign,nonatomic) BOOL leechVisits;                                                               //@synthesize leechVisits=_leechVisits - In the implementation block
@property (assign,nonatomic) BOOL leechLowConfidenceVisits;                                                  //@synthesize leechLowConfidenceVisits=_leechLowConfidenceVisits - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * restorationData;                                          //@synthesize restorationData=_restorationData - In the implementation block
@property (nonatomic,retain) RTEntitlementProvider * entitlementProvider;                                    //@synthesize entitlementProvider=_entitlementProvider - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * vendedClassesStoreManagerDict;                            //@synthesize vendedClassesStoreManagerDict=_vendedClassesStoreManagerDict - In the implementation block
@property (nonatomic,retain) RTDaemonClientRegistrarVehicleEvent * vehicleEventRegistrar;                    //@synthesize vehicleEventRegistrar=_vehicleEventRegistrar - In the implementation block
@property (nonatomic,retain) RTDaemonClientRegistrarScenarioTrigger * scenarioTriggerRegistrar;              //@synthesize scenarioTriggerRegistrar=_scenarioTriggerRegistrar - In the implementation block
@property (nonatomic,retain) RTAccountManager * accountManager;                                              //@synthesize accountManager=_accountManager - In the implementation block
@property (nonatomic,retain) RTAssetManager * assetManager;                                                  //@synthesize assetManager=_assetManager - In the implementation block
@property (nonatomic,retain) RTAuthorizationManager * authorizationManager;                                  //@synthesize authorizationManager=_authorizationManager - In the implementation block
@property (nonatomic,retain) RTContactsManager * contactsManager;                                            //@synthesize contactsManager=_contactsManager - In the implementation block
@property (nonatomic,retain) RTDeviceLocationPredictor * deviceLocationPredictor;                            //@synthesize deviceLocationPredictor=_deviceLocationPredictor - In the implementation block
@property (nonatomic,retain) RTDiagnostics * diagnostics;                                                    //@synthesize diagnostics=_diagnostics - In the implementation block
@property (nonatomic,retain) RTEventAgentManager * eventAgentManager;                                        //@synthesize eventAgentManager=_eventAgentManager - In the implementation block
@property (nonatomic,retain) RTEventModelProvider * eventModelProvider;                                      //@synthesize eventModelProvider=_eventModelProvider - In the implementation block
@property (nonatomic,retain) RTFingerprintManager * fingerprintManager;                                      //@synthesize fingerprintManager=_fingerprintManager - In the implementation block
@property (nonatomic,retain) RTHintManager * hintManager;                                                    //@synthesize hintManager=_hintManager - In the implementation block
@property (nonatomic,retain) RTLearnedLocationManager * learnedLocationManager;                              //@synthesize learnedLocationManager=_learnedLocationManager - In the implementation block
@property (nonatomic,retain) RTLocationManager * locationManager;                                            //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) RTLocationStore * locationStore;                                                //@synthesize locationStore=_locationStore - In the implementation block
@property (nonatomic,retain) RTMapServiceManager * mapServiceManager;                                        //@synthesize mapServiceManager=_mapServiceManager - In the implementation block
@property (nonatomic,retain) RTMetricManager * metricManager;                                                //@synthesize metricManager=_metricManager - In the implementation block
@property (nonatomic,retain) RTPlaceInferenceManager * placeInferenceManager;                                //@synthesize placeInferenceManager=_placeInferenceManager - In the implementation block
@property (nonatomic,retain) RTPurgeManager * purgeManager;                                                  //@synthesize purgeManager=_purgeManager - In the implementation block
@property (nonatomic,retain) RTScenarioTriggerManager * scenarioTriggerManager;                              //@synthesize scenarioTriggerManager=_scenarioTriggerManager - In the implementation block
@property (nonatomic,retain) RTVehicleLocationProvider * vehicleLocationProvider;                            //@synthesize vehicleLocationProvider=_vehicleLocationProvider - In the implementation block
@property (nonatomic,retain) RTVisitManager * visitManager;                                                  //@synthesize visitManager=_visitManager - In the implementation block
@property (nonatomic,retain) RTWiFiManager * wifiManager;                                                    //@synthesize wifiManager=_wifiManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                             //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSString * executablePath;                                                        //@synthesize executablePath=_executablePath - In the implementation block
@property (nonatomic,copy) NSString * executableName;                                                        //@synthesize executableName=_executableName - In the implementation block
@property (assign,nonatomic) int processIdentifier;                                                          //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (nonatomic,copy) NSString * signingIdentifier;                                                     //@synthesize signingIdentifier=_signingIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                                //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,copy) NSString * restorationIdentifier;                                                 //@synthesize restorationIdentifier=_restorationIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<RTClientListenerProtocol> clientManagerDelegate;                      //@synthesize clientManagerDelegate=_clientManagerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)supported;
-(RTAccountManager *)accountManager;
-(RTDeviceLocationPredictor *)deviceLocationPredictor;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(BOOL)enabled;
-(void)setAccountManager:(RTAccountManager *)arg1 ;
-(RTPurgeManager *)purgeManager;
-(RTPlaceInferenceManager *)placeInferenceManager;
-(void)setSigningIdentifier:(NSString *)arg1 ;
-(void)fetchLocationsOfInterestVisitedBetweenStartDate:(id)arg1 endDate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(RTVehicleLocationProvider *)vehicleLocationProvider;
-(NSMutableDictionary *)vendedClassesStoreManagerDict;
-(void)setContactsManager:(RTContactsManager *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setFingerprintManager:(RTFingerprintManager *)arg1 ;
-(RTDiagnostics *)diagnostics;
-(RTEventAgentManager *)eventAgentManager;
-(void)setDiagnostics:(RTDiagnostics *)arg1 ;
-(void)setPlaceInferenceManager:(RTPlaceInferenceManager *)arg1 ;
-(void)setAuthorizationManager:(RTAuthorizationManager *)arg1 ;
-(RTContactsManager *)contactsManager;
-(RTScenarioTriggerManager *)scenarioTriggerManager;
-(NSString *)signingIdentifier;
-(void)setLocationStore:(RTLocationStore *)arg1 ;
-(void)setMapServiceManager:(RTMapServiceManager *)arg1 ;
-(void)setDeviceLocationPredictor:(RTDeviceLocationPredictor *)arg1 ;
-(void)setMetricManager:(RTMetricManager *)arg1 ;
-(RTAuthorizationManager *)authorizationManager;
-(void)setHintManager:(RTHintManager *)arg1 ;
-(RTHintManager *)hintManager;
-(void)setLearnedLocationManager:(RTLearnedLocationManager *)arg1 ;
-(RTMapServiceManager *)mapServiceManager;
-(RTVisitManager *)visitManager;
-(void)setVisitManager:(RTVisitManager *)arg1 ;
-(RTMetricManager *)metricManager;
-(void)setLocationManager:(RTLocationManager *)arg1 ;
-(void)setPurgeManager:(RTPurgeManager *)arg1 ;
-(void)setVehicleLocationProvider:(RTVehicleLocationProvider *)arg1 ;
-(RTLocationManager *)locationManager;
-(RTFingerprintManager *)fingerprintManager;
-(RTWiFiManager *)wifiManager;
-(void)setWifiManager:(RTWiFiManager *)arg1 ;
-(RTEventModelProvider *)eventModelProvider;
-(RTLocationStore *)locationStore;
-(void)setEventAgentManager:(RTEventAgentManager *)arg1 ;
-(void)setScenarioTriggerManager:(RTScenarioTriggerManager *)arg1 ;
-(void)shutdown;
-(NSString *)executablePath;
-(NSMutableDictionary *)restorationData;
-(RTLearnedLocationManager *)learnedLocationManager;
-(int)processIdentifier;
-(id)init;
-(void)setEventModelProvider:(RTEventModelProvider *)arg1 ;
-(void)setProcessIdentifier:(int)arg1 ;
-(void)restore;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 reply:(/*^block*/id)arg3 ;
-(void)removeLocationOfInterestWithIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)startMonitoringVehicleEventsWithReply:(/*^block*/id)arg1 ;
-(void)updateVehicleEventWithIdentifier:(id)arg1 location:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)vehicleEventRegistrar:(id)arg1 didReceiveVehicleEvents:(id)arg2 error:(id)arg3 ;
-(void)setLeechVisits:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)startLeechingLowConfidenceVisitsWithReply:(/*^block*/id)arg1 ;
-(void)startLeechingVisitsWithReply:(/*^block*/id)arg1 ;
-(void)startMonitoringVisitsWithReply:(/*^block*/id)arg1 ;
-(void)updateCloudSyncProvisionedForAccount:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(NSString *)bundleIdentifier;
-(void)vehicleEventAtLocation:(id)arg1 notes:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setAssetManager:(RTAssetManager *)arg1 ;
-(void)stopLeechingVisitsWithReply:(/*^block*/id)arg1 ;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(void)fetchPathToDiagnosticFilesWithReply:(/*^block*/id)arg1 ;
-(void)scenarioTriggerRegistrar:(id)arg1 didReceiveScenarioTriggers:(id)arg2 error:(id)arg3 ;
-(void)stopLeechingLowConfidenceVisitsWithReply:(/*^block*/id)arg1 ;
-(void)fetchAllLocationsOfInterestForSettingsWithReply:(/*^block*/id)arg1 ;
-(void)setExecutableName:(NSString *)arg1 ;
-(void)fetchRoutineModeFromLocation:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)userInteractionWithPredictedLocationOfInterest:(id)arg1 interaction:(unsigned long long)arg2 feedback:(id)arg3 geoMapItem:(id)arg4 reply:(/*^block*/id)arg5 ;
-(NSString *)executableName;
-(void)fetchLastVehicleEventsWithReply:(/*^block*/id)arg1 ;
-(void)fetchRoutineEnabledWithReply:(/*^block*/id)arg1 ;
-(void)fetchPlaceInferencesWithOptions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(RTDaemonClientRegistrarVehicleEvent *)vehicleEventRegistrar;
-(void)setEntitlementProvider:(RTEntitlementProvider *)arg1 ;
-(void)fetchLocationsOfInterestAssociatedToIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setRoutineEnabled:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)fetchCloudSyncAuthorizationStateWithReply:(/*^block*/id)arg1 ;
-(NSString *)description;
-(void)addLocationOfInterestOfType:(long long)arg1 mapItemStorage:(id)arg2 customLabel:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 customLabel:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)fetchPredictedLocationsOfInterestBetweenStartDate:(id)arg1 endDate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)fetchLocationOfInterestAtLocation:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)monitorVisits;
-(void)performBluePOIQueryLookingBack:(double)arg1 lookingAhead:(double)arg2 reply:(/*^block*/id)arg3 ;
-(void)fetchCurrentPredictedLocationsOfInterestLookingBack:(double)arg1 lookingAhead:(double)arg2 reply:(/*^block*/id)arg3 ;
-(void)clearAllVehicleEventsWithReply:(/*^block*/id)arg1 ;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 mapItemStorage:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_startMonitoringVehicleEvents;
-(RTDaemonClientRegistrarScenarioTrigger *)scenarioTriggerRegistrar;
-(void)fetchStoredLocationsWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)fetchPredictedExitDatesFromLocation:(id)arg1 onDate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)fetchPredictedLocationsOfInterestOnDate:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setLeechLowConfidenceVisits:(BOOL)arg1 ;
-(void)fetchNextPredictedLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 reply:(/*^block*/id)arg4 ;
-(RTEntitlementProvider *)entitlementProvider;
-(id)initWithQueue:(id)arg1 restorationData:(id)arg2 accountManager:(id)arg3 assetManager:(id)arg4 authorizationManager:(id)arg5 contactsManager:(id)arg6 deviceLocationPredictor:(id)arg7 diagnostics:(id)arg8 eventAgentManager:(id)arg9 eventModelProvider:(id)arg10 fingerprintManager:(id)arg11 hintManager:(id)arg12 learnedLocationManager:(id)arg13 locationManager:(id)arg14 locationStore:(id)arg15 mapServiceManager:(id)arg16 metricManager:(id)arg17 placeInferenceManager:(id)arg18 purgeManager:(id)arg19 scenarioTriggerManager:(id)arg20 vehicleLocationProvider:(id)arg21 visitManager:(id)arg22 wifiManager:(id)arg23 ;
-(void)setVendedClassesStoreManagerDict:(NSMutableDictionary *)arg1 ;
-(BOOL)leechLowConfidenceVisits;
-(void)stopMonitoringVehicleEventsWithReply:(/*^block*/id)arg1 ;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 mapItemStorage:(id)arg3 customLabel:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)onVisitManagerNotification:(id)arg1 ;
-(RTAssetManager *)assetManager;
-(void)removeVisitWithIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)engageInVehicleEventWithIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setScenarioTriggerRegistrar:(RTDaemonClientRegistrarScenarioTrigger *)arg1 ;
-(void)updateLocationOfInterestWithIdentifier:(id)arg1 type:(long long)arg2 customLabel:(id)arg3 reply:(/*^block*/id)arg4 ;
-(BOOL)leechVisits;
-(void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 reply:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)updateVehicleEventWithIdentifier:(id)arg1 geoMapItem:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)updateVehicleEventWithIdentifier:(id)arg1 notes:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setSupported:(BOOL)arg1 ;
-(id<RTClientListenerProtocol>)clientManagerDelegate;
-(void)fetchMonitoredScenarioTriggerTypesWithReply:(/*^block*/id)arg1 ;
-(void)launchClient;
-(void)startMonitoringScenarioTriggerOfType:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)_onVisitManagerNotification:(id)arg1 ;
-(void)setRestorationIdentifier:(NSString *)arg1 ;
-(void)fetchLocationsOfInterestOfType:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)fetchFormattedPostalAddressesFromMeCard:(/*^block*/id)arg1 ;
-(void)fetchStoredVisitsWithOptions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)stopMonitoringScenarioTriggerOfType:(unsigned long long)arg1 reply:(/*^block*/id)arg2 ;
-(void)setVehicleEventRegistrar:(RTDaemonClientRegistrarVehicleEvent *)arg1 ;
-(void)setMonitorVisits:(BOOL)arg1 ;
-(void)fetchTransitionsBetweenStartDate:(id)arg1 endDate:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)fetchEnumerableObjectsWithOptions:(id)arg1 offset:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)extendLifetimeOfVisitsWithIdentifiers:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setRestorationData:(NSMutableDictionary *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)restorationIdentifier;
-(void)stopMonitoringVisitsWithReply:(/*^block*/id)arg1 ;
-(BOOL)hasReasonToOutliveClientConnection;
-(void)fetchLocationOfInterestWithIdentifier:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)fetchPredictedLocationsOfInterestAssociatedToTitle:(id)arg1 location:(id)arg2 calendarIdentifier:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)setExecutablePath:(NSString *)arg1 ;
-(void)setClientManagerDelegate:(id<RTClientListenerProtocol>)arg1 ;
-(void)onRoutineEnabled:(id)arg1 ;
-(void)clearRoutineWithReply:(/*^block*/id)arg1 ;
-(void)updateVehicleEventWithIdentifier:(id)arg1 photo:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)fetchAutomaticVehicleEventDetectionSupportedWithReply:(/*^block*/id)arg1 ;
@end

