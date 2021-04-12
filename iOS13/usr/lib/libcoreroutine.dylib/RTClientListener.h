/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTXPCListener.h>
#import <libobjc.A.dylib/RTClientListenerProtocol.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCInterface, NSMutableDictionary, RTScenarioTriggerManager, RTVehicleLocationProvider, RTAuthorizationManager, RTDeviceLocationPredictor, RTPurgeManager, RTEventModelProvider, RTVisitManager, RTAssetManager, RTLocationStore, RTLocationManager, RTEventAgentManager, RTDiagnostics, RTLearnedLocationManager, RTPlaceInferenceManager, RTAccountManager, RTMetricManager, RTFingerprintManager, RTWiFiManager, RTMapServiceManager, NSString;

@interface RTClientListener : RTXPCListener <RTClientListenerProtocol, NSXPCListenerDelegate> {

	NSXPCInterface* _frameworkInterface;
	NSXPCInterface* _daemonInterface;
	NSMutableDictionary* _persistedClients;
	RTScenarioTriggerManager* _scenarioTriggerManager;
	RTVehicleLocationProvider* _vehicleLocationProvider;
	RTAuthorizationManager* _authorizationManager;
	RTDeviceLocationPredictor* _deviceLocationPredictor;
	RTPurgeManager* _purgeManager;
	RTEventModelProvider* _eventModelProvider;
	RTVisitManager* _visitManager;
	RTAssetManager* _assetManager;
	RTLocationStore* _locationStore;
	RTLocationManager* _locationManager;
	RTEventAgentManager* _eventAgentManager;
	RTDiagnostics* _diagnostics;
	RTLearnedLocationManager* _learnedLocationManager;
	RTPlaceInferenceManager* _placeInferenceManager;
	RTAccountManager* _accountManager;
	RTMetricManager* _metricManager;
	RTFingerprintManager* _fingerprintManager;
	RTWiFiManager* _wifiManager;
	RTMapServiceManager* _mapServiceManager;

}

@property (nonatomic,retain) NSMutableDictionary * persistedClients;                           //@synthesize persistedClients=_persistedClients - In the implementation block
@property (nonatomic,retain) RTScenarioTriggerManager * scenarioTriggerManager;                //@synthesize scenarioTriggerManager=_scenarioTriggerManager - In the implementation block
@property (nonatomic,retain) RTVehicleLocationProvider * vehicleLocationProvider;              //@synthesize vehicleLocationProvider=_vehicleLocationProvider - In the implementation block
@property (nonatomic,retain) RTAuthorizationManager * authorizationManager;                    //@synthesize authorizationManager=_authorizationManager - In the implementation block
@property (nonatomic,retain) RTDeviceLocationPredictor * deviceLocationPredictor;              //@synthesize deviceLocationPredictor=_deviceLocationPredictor - In the implementation block
@property (nonatomic,retain) RTPurgeManager * purgeManager;                                    //@synthesize purgeManager=_purgeManager - In the implementation block
@property (nonatomic,retain) RTEventModelProvider * eventModelProvider;                        //@synthesize eventModelProvider=_eventModelProvider - In the implementation block
@property (nonatomic,retain) RTVisitManager * visitManager;                                    //@synthesize visitManager=_visitManager - In the implementation block
@property (nonatomic,retain) RTAssetManager * assetManager;                                    //@synthesize assetManager=_assetManager - In the implementation block
@property (nonatomic,retain) RTLocationStore * locationStore;                                  //@synthesize locationStore=_locationStore - In the implementation block
@property (nonatomic,retain) RTLocationManager * locationManager;                              //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) RTEventAgentManager * eventAgentManager;                          //@synthesize eventAgentManager=_eventAgentManager - In the implementation block
@property (nonatomic,retain) RTDiagnostics * diagnostics;                                      //@synthesize diagnostics=_diagnostics - In the implementation block
@property (nonatomic,retain) RTLearnedLocationManager * learnedLocationManager;                //@synthesize learnedLocationManager=_learnedLocationManager - In the implementation block
@property (nonatomic,retain) RTPlaceInferenceManager * placeInferenceManager;                  //@synthesize placeInferenceManager=_placeInferenceManager - In the implementation block
@property (nonatomic,retain) RTAccountManager * accountManager;                                //@synthesize accountManager=_accountManager - In the implementation block
@property (nonatomic,retain) RTMetricManager * metricManager;                                  //@synthesize metricManager=_metricManager - In the implementation block
@property (nonatomic,retain) RTFingerprintManager * fingerprintManager;                        //@synthesize fingerprintManager=_fingerprintManager - In the implementation block
@property (nonatomic,retain) RTWiFiManager * wifiManager;                                      //@synthesize wifiManager=_wifiManager - In the implementation block
@property (nonatomic,retain) RTMapServiceManager * mapServiceManager;                          //@synthesize mapServiceManager=_mapServiceManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)persistedClientsPath;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(RTWiFiManager *)wifiManager;
-(void)setWifiManager:(RTWiFiManager *)arg1 ;
-(void)_setup;
-(RTAssetManager *)assetManager;
-(RTDiagnostics *)diagnostics;
-(void)setDiagnostics:(RTDiagnostics *)arg1 ;
-(RTLocationManager *)locationManager;
-(void)setLocationManager:(RTLocationManager *)arg1 ;
-(void)setAssetManager:(RTAssetManager *)arg1 ;
-(RTAccountManager *)accountManager;
-(RTAuthorizationManager *)authorizationManager;
-(RTLocationStore *)locationStore;
-(id)handleClientConnection:(id)arg1 ;
-(RTMetricManager *)metricManager;
-(RTVisitManager *)visitManager;
-(RTDeviceLocationPredictor *)deviceLocationPredictor;
-(RTScenarioTriggerManager *)scenarioTriggerManager;
-(void)saveDaemonClient:(id)arg1 ;
-(id)handleRestorationForDaemonClient:(id)arg1 ;
-(RTLearnedLocationManager *)learnedLocationManager;
-(void)setAccountManager:(RTAccountManager *)arg1 ;
-(void)setAuthorizationManager:(RTAuthorizationManager *)arg1 ;
-(void)setDeviceLocationPredictor:(RTDeviceLocationPredictor *)arg1 ;
-(RTEventAgentManager *)eventAgentManager;
-(void)setEventAgentManager:(RTEventAgentManager *)arg1 ;
-(RTEventModelProvider *)eventModelProvider;
-(void)setEventModelProvider:(RTEventModelProvider *)arg1 ;
-(RTFingerprintManager *)fingerprintManager;
-(void)setFingerprintManager:(RTFingerprintManager *)arg1 ;
-(void)setLearnedLocationManager:(RTLearnedLocationManager *)arg1 ;
-(void)setLocationStore:(RTLocationStore *)arg1 ;
-(RTMapServiceManager *)mapServiceManager;
-(void)setMapServiceManager:(RTMapServiceManager *)arg1 ;
-(void)setMetricManager:(RTMetricManager *)arg1 ;
-(RTPlaceInferenceManager *)placeInferenceManager;
-(void)setPlaceInferenceManager:(RTPlaceInferenceManager *)arg1 ;
-(RTPurgeManager *)purgeManager;
-(void)setPurgeManager:(RTPurgeManager *)arg1 ;
-(void)setScenarioTriggerManager:(RTScenarioTriggerManager *)arg1 ;
-(RTVehicleLocationProvider *)vehicleLocationProvider;
-(void)setVehicleLocationProvider:(RTVehicleLocationProvider *)arg1 ;
-(void)setVisitManager:(RTVisitManager *)arg1 ;
-(id)initWithAccountManager:(id)arg1 assetManager:(id)arg2 authorizationManager:(id)arg3 deviceLocationPredictor:(id)arg4 diagnostics:(id)arg5 eventAgentManager:(id)arg6 eventModelProvider:(id)arg7 fingerprintManager:(id)arg8 learnedLocationManager:(id)arg9 locationManager:(id)arg10 locationStore:(id)arg11 mapServiceManager:(id)arg12 metricManager:(id)arg13 placeInferenceManager:(id)arg14 purgeManager:(id)arg15 scenarioTriggerManager:(id)arg16 vehicleLocationProvider:(id)arg17 visitManager:(id)arg18 wifiManager:(id)arg19 ;
-(void)setPersistedClients:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)persistedClients;
-(void)_setupConnection:(id)arg1 forClient:(id)arg2 ;
-(void)handleDisconnectionForDaemonClient:(id)arg1 ;
@end

