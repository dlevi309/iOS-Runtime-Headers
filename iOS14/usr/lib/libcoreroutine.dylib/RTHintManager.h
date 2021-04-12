/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTService.h>
#import <libobjc.A.dylib/RTPurgable.h>
#import <libobjc.A.dylib/RTStoreManager.h>

@class RTBatteryManager, RTBluetoothManager, RTCameraManager, RTDarwinNotificationHelper, RTHintStore, RTLearnedLocationManager, RTLocationManager, RTMetricManager, RTNavigationManager, RTPersistenceManager, RTReachabilityManager, RTWalletManager, NSString;

@interface RTHintManager : RTService <RTPurgable, RTStoreManager> {

	RTBatteryManager* _batteryManager;
	RTBluetoothManager* _bluetoothManager;
	RTCameraManager* _cameraManager;
	RTDarwinNotificationHelper* _notificationHelper;
	RTHintStore* _hintStore;
	RTLearnedLocationManager* _learnedLocationManager;
	RTLocationManager* _locationManager;
	RTMetricManager* _metricManager;
	RTNavigationManager* _navigationManager;
	RTPersistenceManager* _persistenceManager;
	RTReachabilityManager* _reachabilityManager;
	RTWalletManager* _walletManager;

}

@property (nonatomic,retain) RTBatteryManager * batteryManager;                              //@synthesize batteryManager=_batteryManager - In the implementation block
@property (nonatomic,retain) RTBluetoothManager * bluetoothManager;                          //@synthesize bluetoothManager=_bluetoothManager - In the implementation block
@property (nonatomic,retain) RTCameraManager * cameraManager;                                //@synthesize cameraManager=_cameraManager - In the implementation block
@property (nonatomic,retain) RTDarwinNotificationHelper * notificationHelper;                //@synthesize notificationHelper=_notificationHelper - In the implementation block
@property (nonatomic,retain) RTHintStore * hintStore;                                        //@synthesize hintStore=_hintStore - In the implementation block
@property (nonatomic,retain) RTLearnedLocationManager * learnedLocationManager;              //@synthesize learnedLocationManager=_learnedLocationManager - In the implementation block
@property (nonatomic,retain) RTLocationManager * locationManager;                            //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,retain) RTMetricManager * metricManager;                                //@synthesize metricManager=_metricManager - In the implementation block
@property (nonatomic,retain) RTNavigationManager * navigationManager;                        //@synthesize navigationManager=_navigationManager - In the implementation block
@property (nonatomic,retain) RTPersistenceManager * persistenceManager;                      //@synthesize persistenceManager=_persistenceManager - In the implementation block
@property (nonatomic,retain) RTReachabilityManager * reachabilityManager;                    //@synthesize reachabilityManager=_reachabilityManager - In the implementation block
@property (nonatomic,retain) RTWalletManager * walletManager;                                //@synthesize walletManager=_walletManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)vendedClasses;
-(void)performPurgeOfType:(long long)arg1 referenceDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setPersistenceManager:(RTPersistenceManager *)arg1 ;
-(void)setMetricManager:(RTMetricManager *)arg1 ;
-(void)_registerForNotifications;
-(void)setLearnedLocationManager:(RTLearnedLocationManager *)arg1 ;
-(void)onBatteryNotification:(id)arg1 ;
-(void)submitHintFromSource:(long long)arg1 location:(id)arg2 ;
-(RTMetricManager *)metricManager;
-(void)setLocationManager:(RTLocationManager *)arg1 ;
-(RTLocationManager *)locationManager;
-(RTPersistenceManager *)persistenceManager;
-(void)_onBatteryNotification:(id)arg1 ;
-(void)shutdown;
-(RTLearnedLocationManager *)learnedLocationManager;
-(id)init;
-(void)_unregisterForNotifications;
-(void)setCameraManager:(RTCameraManager *)arg1 ;
-(void)setBluetoothManager:(RTBluetoothManager *)arg1 ;
-(void)_storeHints:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_onCameraNotification:(id)arg1 ;
-(RTReachabilityManager *)reachabilityManager;
-(id)initWithBatteryManager:(id)arg1 bluetoothManager:(id)arg2 cameraManager:(id)arg3 hintStore:(id)arg4 learnedLocationManager:(id)arg5 locationManager:(id)arg6 metricManager:(id)arg7 navigationManager:(id)arg8 reachabilityManager:(id)arg9 walletManager:(id)arg10 ;
-(void)_onLearnedLocationNotification:(id)arg1 ;
-(void)onBluetoothNotification:(id)arg1 ;
-(void)setHintStore:(RTHintStore *)arg1 ;
-(void)setNavigationManager:(RTNavigationManager *)arg1 ;
-(RTCameraManager *)cameraManager;
-(void)_submitHintFromSource:(long long)arg1 location:(id)arg2 ;
-(void)onReachabilityChange:(id)arg1 ;
-(void)submitHintFromSource:(long long)arg1 fallbackLocation:(id)arg2 ;
-(RTHintStore *)hintStore;
-(void)onNavigationNotification:(id)arg1 ;
-(RTBluetoothManager *)bluetoothManager;
-(RTWalletManager *)walletManager;
-(RTNavigationManager *)navigationManager;
-(void)_submitHintFromSource:(long long)arg1 fallbackLocation:(id)arg2 ;
-(void)setReachabilityManager:(RTReachabilityManager *)arg1 ;
-(void)setNotificationHelper:(RTDarwinNotificationHelper *)arg1 ;
-(void)fetchEnumerableObjectsWithOptions:(id)arg1 offset:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)onWalletNotification:(id)arg1 ;
-(void)_onBluetoothNotification:(id)arg1 ;
-(void)_onWalletNotification:(id)arg1 ;
-(void)storeHints:(id)arg1 handler:(/*^block*/id)arg2 ;
-(RTDarwinNotificationHelper *)notificationHelper;
-(void)_onNavigationNotification:(id)arg1 ;
-(void)setWalletManager:(RTWalletManager *)arg1 ;
-(void)_onReachabilityChange:(id)arg1 ;
-(void)onLearnedLocationNotification:(id)arg1 ;
-(void)onCameraNotification:(id)arg1 ;
-(void)setBatteryManager:(RTBatteryManager *)arg1 ;
-(RTBatteryManager *)batteryManager;
@end

