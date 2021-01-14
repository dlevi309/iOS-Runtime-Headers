/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTXPCListener.h>
#import <libobjc.A.dylib/RTClientListenerProtocol.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCInterface, NSMutableDictionary, RTScenarioTriggerManager, RTVehicleLocationProvider, RTAuthorizationManager, RTDeviceLocationPredictor, RTPurgeManager, RTEventModelProvider, RTVisitManager, RTAssetManager, RTHintManager, RTLocationStore, RTLocationManager, RTEventAgentManager, RTDiagnostics, RTLearnedLocationManager, RTPlaceInferenceManager, RTAccountManager, RTMetricManager, RTFingerprintManager, RTWiFiManager, RTMapServiceManager, RTContactsManager, NSString;

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
	RTHintManager* _hintManager;
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
	RTContactsManager* _contactsManager;

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
@property (nonatomic,retain) RTHintManager * hintManager;                                      //@synthesize hintManager=_hintManager - In the implementation block
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
@property (nonatomic,retain) RTContactsManager * contactsManager;                              //@synthesize contactsManager=_contactsManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)persistedClientsPath;
-(RTAccountManager *)accountManager;
-(RTDeviceLocationPredictor *)deviceLocationPredictor;
-(void)setAccountManager:(RTAccountManager *)arg1 ;
-(RTPurgeManager *)purgeManager;
-(RTPlaceInferenceManager *)placeInferenceManager;
-(RTVehicleLocationProvider *)vehicleLocationProvider;
-(void)setContactsManager:(RTContactsManager *)arg1 ;
-(void)setFingerprintManager:(RTFingerprintManager *)arg1 ;
-(RTDiagnostics *)diagnostics;
-(RTEventAgentManager *)eventAgentManager;
-(void)setDiagnostics:(RTDiagnostics *)arg1 ;
-(void)setPlaceInferenceManager:(RTPlaceInferenceManager *)arg1 ;
-(void)setAuthorizationManager:(RTAuthorizationManager *)arg1 ;
-(RTContactsManager *)contactsManager;
-(RTScenarioTriggerManager *)scenarioTriggerManager;
-(void)setLocationStore:(RTLocationStore *)arg1 ;
-(void)setMapServiceManager:(RTMapServiceManager *)arg1 ;
-(void)setDeviceLocationPredictor:(RTDeviceLocationPredictor *)arg1 ;
-(void)setMetricManager:(RTMetricManager *)arg1 ;
-(RTAuthorizationManager *)authorizationManager;
-(void)setHintManager:(RTHintManager *)arg1 ;
-(RTHintManager *)hintManager;
-(void)setLearnedLocationManager:(RTLearnedLocationManager *)arg1 ;
-(RTMapServiceManager *)mapServiceManager;
-(void)_setup;
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
-(RTLearnedLocationManager *)learnedLocationManager;
-(id)init;
-(void)setEventModelProvider:(RTEventModelProvider *)arg1 ;
-(void)setAssetManager:(RTAssetManager *)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(RTAssetManager *)assetManager;
-(id)handleClientConnection:(id)arg1 ;
-(void)saveDaemonClient:(id)arg1 ;
-(id)handleRestorationForDaemonClient:(id)arg1 ;
-(id)initWithAccountManager:(id)arg1 assetManager:(id)arg2 authorizationManager:(id)arg3 contactsManager:(id)arg4 deviceLocationPredictor:(id)arg5 diagnostics:(id)arg6 eventAgentManager:(id)arg7 eventModelProvider:(id)arg8 fingerprintManager:(id)arg9 hintManager:(id)arg10 learnedLocationManager:(id)arg11 locationManager:(id)arg12 locationStore:(id)arg13 mapServiceManager:(id)arg14 metricManager:(id)arg15 placeInferenceManager:(id)arg16 purgeManager:(id)arg17 scenarioTriggerManager:(id)arg18 vehicleLocationProvider:(id)arg19 visitManager:(id)arg20 wifiManager:(id)arg21 ;
-(void)setPersistedClients:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)persistedClients;
-(void)_setupConnection:(id)arg1 forClient:(id)arg2 ;
-(void)handleDisconnectionForDaemonClient:(id)arg1 ;
@end

