/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTXPCListener.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class RTAccountManager, RTAssetManager, RTAuthorizationManager, RTDeviceLocationPredictor, RTDiagnostics, RTEventAgentManager, RTEventModelProvider, RTFingerprintManager, RTHintManager, RTLearnedLocationManager, RTLearnedLocationStore, RTLocationManager, RTLocationStore, RTMotionActivityManager, RTPersistenceManager, RTPlatform, RTPurgeManager, RTScenarioTriggerManager, RTVehicleLocationProvider, RTVisitManager, RTWiFiManager, NSString;

@interface RTClientListenerInternal : RTXPCListener <NSXPCListenerDelegate> {

	RTAccountManager* _accountManager;
	RTAssetManager* _assetManager;
	RTAuthorizationManager* _authorizationManager;
	RTDeviceLocationPredictor* _deviceLocationPredictor;
	RTDiagnostics* _diagnostics;
	RTEventAgentManager* _eventAgentManager;
	RTEventModelProvider* _eventModelProvider;
	RTFingerprintManager* _fingerprintManager;
	RTHintManager* _hintManager;
	RTLearnedLocationManager* _learnedLocationManager;
	RTLearnedLocationStore* _learnedLocationStore;
	RTLocationManager* _locationManager;
	RTLocationStore* _locationStore;
	RTMotionActivityManager* _motionActivityManager;
	RTPersistenceManager* _persistenceManager;
	RTPlatform* _platform;
	RTPurgeManager* _purgeManager;
	RTScenarioTriggerManager* _scenarioTriggerManager;
	RTVehicleLocationProvider* _vehicleLocationProvider;
	RTVisitManager* _visitManager;
	RTWiFiManager* _wifiManager;

}

@property (nonatomic,retain) RTAccountManager * accountManager;                                //@synthesize accountManager=_accountManager - In the implementation block
@property (nonatomic,retain) RTAssetManager * assetManager;                                    //@synthesize assetManager=_assetManager - In the implementation block
@property (nonatomic,retain) RTAuthorizationManager * authorizationManager;                    //@synthesize authorizationManager=_authorizationManager - In the implementation block
@property (nonatomic,retain) RTDeviceLocationPredictor * deviceLocationPredictor;              //@synthesize deviceLocationPredictor=_deviceLocationPredictor - In the implementation block
@property (nonatomic,retain) RTDiagnostics * diagnostics;                                      //@synthesize diagnostics=_diagnostics - In the implementation block
@property (nonatomic,retain) RTEventAgentManager * eventAgentManager;                          //@synthesize eventAgentManager=_eventAgentManager - In the implementation block
@property (nonatomic,retain) RTEventModelProvider * eventModelProvider;                        //@synthesize eventModelProvider=_eventModelProvider - In the implementation block
@property (nonatomic,retain) RTFingerprintManager * fingerprintManager;                        //@synthesize fingerprintManager=_fingerprintManager - In the implementation block
@property (nonatomic,retain) RTHintManager * hintManager;                                      //@synthesize hintManager=_hintManager - In the implementation block
@property (nonatomic,retain) RTLearnedLocationManager * learnedLocationManager;                //@synthesize learnedLocationManager=_learnedLocationManager - In the implementation block
@property (nonatomic,retain) RTLearnedLocationStore * learnedLocationStore;                    //@synthesize learnedLocationStore=_learnedLocationStore - In the implementation block
@property (nonatomic,retain) RTLocationManager * locationManager;                              //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) RTLocationStore * locationStore;                                  //@synthesize locationStore=_locationStore - In the implementation block
@property (nonatomic,retain) RTMotionActivityManager * motionActivityManager;                  //@synthesize motionActivityManager=_motionActivityManager - In the implementation block
@property (nonatomic,retain) RTPersistenceManager * persistenceManager;                        //@synthesize persistenceManager=_persistenceManager - In the implementation block
@property (nonatomic,retain) RTPlatform * platform;                                            //@synthesize platform=_platform - In the implementation block
@property (nonatomic,retain) RTPurgeManager * purgeManager;                                    //@synthesize purgeManager=_purgeManager - In the implementation block
@property (nonatomic,retain) RTScenarioTriggerManager * scenarioTriggerManager;                //@synthesize scenarioTriggerManager=_scenarioTriggerManager - In the implementation block
@property (nonatomic,retain) RTVehicleLocationProvider * vehicleLocationProvider;              //@synthesize vehicleLocationProvider=_vehicleLocationProvider - In the implementation block
@property (nonatomic,retain) RTVisitManager * visitManager;                                    //@synthesize visitManager=_visitManager - In the implementation block
@property (nonatomic,retain) RTWiFiManager * wifiManager;                                      //@synthesize wifiManager=_wifiManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(RTPlatform *)platform;
-(void)setPlatform:(RTPlatform *)arg1 ;
-(RTWiFiManager *)wifiManager;
-(void)setWifiManager:(RTWiFiManager *)arg1 ;
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
-(RTLearnedLocationStore *)learnedLocationStore;
-(RTVisitManager *)visitManager;
-(RTDeviceLocationPredictor *)deviceLocationPredictor;
-(RTScenarioTriggerManager *)scenarioTriggerManager;
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
-(RTPurgeManager *)purgeManager;
-(void)setPurgeManager:(RTPurgeManager *)arg1 ;
-(void)setScenarioTriggerManager:(RTScenarioTriggerManager *)arg1 ;
-(RTVehicleLocationProvider *)vehicleLocationProvider;
-(void)setVehicleLocationProvider:(RTVehicleLocationProvider *)arg1 ;
-(void)setVisitManager:(RTVisitManager *)arg1 ;
-(id)initWithAccountManager:(id)arg1 assetManager:(id)arg2 authorizationManager:(id)arg3 deviceLocationPredictor:(id)arg4 diagnostics:(id)arg5 eventAgentManager:(id)arg6 eventModelProvider:(id)arg7 fingerprintManager:(id)arg8 hintManager:(id)arg9 learnedLocationManager:(id)arg10 learnedLocationStore:(id)arg11 locationManager:(id)arg12 locationStore:(id)arg13 motionActivityManager:(id)arg14 persistenceManager:(id)arg15 platform:(id)arg16 purgeManager:(id)arg17 scenarioTriggerManager:(id)arg18 vehicleLocationProvider:(id)arg19 visitManager:(id)arg20 ;
-(RTPersistenceManager *)persistenceManager;
-(RTMotionActivityManager *)motionActivityManager;
-(void)setPersistenceManager:(RTPersistenceManager *)arg1 ;
-(void)setMotionActivityManager:(RTMotionActivityManager *)arg1 ;
-(RTHintManager *)hintManager;
-(void)setHintManager:(RTHintManager *)arg1 ;
-(void)setLearnedLocationStore:(RTLearnedLocationStore *)arg1 ;
@end

