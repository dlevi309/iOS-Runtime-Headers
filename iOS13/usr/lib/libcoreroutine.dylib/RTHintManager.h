/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libobjc.A.dylib/RTPurgable.h>

@protocol OS_dispatch_queue;
@class NSObject, RTBatteryManager, RTBluetoothManager, RTCameraManager, RTDarwinNotificationHelper, RTLearnedLocationManager, RTLocationManager, RTMetricManager, RTNavigationManager, RTPersistenceManager, RTReachabilityManager, RTWalletManager, NSString;

@interface RTHintManager : NSObject <RTPurgable> {

	NSObject*<OS_dispatch_queue> _queue;
	RTBatteryManager* _batteryManager;
	RTBluetoothManager* _bluetoothManager;
	RTCameraManager* _cameraManager;
	RTDarwinNotificationHelper* _notificationHelper;
	RTLearnedLocationManager* _learnedLocationManager;
	RTLocationManager* _locationManager;
	RTMetricManager* _metricManager;
	RTNavigationManager* _navigationManager;
	RTPersistenceManager* _persistenceManager;
	RTReachabilityManager* _reachabilityManager;
	RTWalletManager* _walletManager;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) RTBatteryManager * batteryManager;                              //@synthesize batteryManager=_batteryManager - In the implementation block
@property (nonatomic,retain) RTBluetoothManager * bluetoothManager;                          //@synthesize bluetoothManager=_bluetoothManager - In the implementation block
@property (nonatomic,retain) RTCameraManager * cameraManager;                                //@synthesize cameraManager=_cameraManager - In the implementation block
@property (nonatomic,retain) RTDarwinNotificationHelper * notificationHelper;                //@synthesize notificationHelper=_notificationHelper - In the implementation block
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
+(id)boundingBoxPredicateForLocation:(id)arg1 ;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_registerForNotifications;
-(void)_unregisterForNotifications;
-(void)shutdown;
-(RTLocationManager *)locationManager;
-(void)setLocationManager:(RTLocationManager *)arg1 ;
-(void)setCameraManager:(RTCameraManager *)arg1 ;
-(RTNavigationManager *)navigationManager;
-(RTMetricManager *)metricManager;
-(RTLearnedLocationManager *)learnedLocationManager;
-(void)setLearnedLocationManager:(RTLearnedLocationManager *)arg1 ;
-(void)setMetricManager:(RTMetricManager *)arg1 ;
-(id)initWithBatteryManager:(id)arg1 bluetoothManager:(id)arg2 cameraManager:(id)arg3 learnedLocationManager:(id)arg4 locationManager:(id)arg5 metricManager:(id)arg6 navigationManager:(id)arg7 persistenceManager:(id)arg8 reachabilityManager:(id)arg9 walletManager:(id)arg10 ;
-(RTPersistenceManager *)persistenceManager;
-(void)performPurgeOfType:(long long)arg1 referenceDate:(id)arg2 completion:(/*^block*/id)arg3 ;
-(RTDarwinNotificationHelper *)notificationHelper;
-(void)setNotificationHelper:(RTDarwinNotificationHelper *)arg1 ;
-(void)onReachabilityChange:(id)arg1 ;
-(void)_onReachabilityChange:(id)arg1 ;
-(void)setPersistenceManager:(RTPersistenceManager *)arg1 ;
-(void)fetchHintStatsNearLocation:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)submitHintFromSource:(long long)arg1 location:(id)arg2 ;
-(RTBluetoothManager *)bluetoothManager;
-(void)_submitHintFromSource:(long long)arg1 ;
-(void)onBluetoothNotification:(id)arg1 ;
-(RTBatteryManager *)batteryManager;
-(void)onBatteryNotification:(id)arg1 ;
-(void)onNavigationNotification:(id)arg1 ;
-(RTReachabilityManager *)reachabilityManager;
-(RTCameraManager *)cameraManager;
-(void)onCameraNotification:(id)arg1 ;
-(RTWalletManager *)walletManager;
-(void)onWalletNotification:(id)arg1 ;
-(void)_submitHintFromSource:(long long)arg1 location:(id)arg2 ;
-(void)_submitHintFromSource:(long long)arg1 location:(id)arg2 managedObjectContext:(id)arg3 ;
-(void)_fetchHintStatsNearLocation:(id)arg1 managedObjectContext:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_clearHintsPredating:(id)arg1 managedObjectContext:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_clearHintsPredating:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_onBluetoothNotification:(id)arg1 ;
-(void)_onBatteryNotification:(id)arg1 ;
-(void)_onNavigationNotification:(id)arg1 ;
-(void)_onCameraNotification:(id)arg1 ;
-(void)_onWalletNotification:(id)arg1 ;
-(void)fetchIsHintNearLocation:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)setBatteryManager:(RTBatteryManager *)arg1 ;
-(void)setBluetoothManager:(RTBluetoothManager *)arg1 ;
-(void)setNavigationManager:(RTNavigationManager *)arg1 ;
-(void)setReachabilityManager:(RTReachabilityManager *)arg1 ;
-(void)setWalletManager:(RTWalletManager *)arg1 ;
@end

