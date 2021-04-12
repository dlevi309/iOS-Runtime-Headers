/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@protocol OS_dispatch_queue;
@class NSObject, RTFingerprintManager, RTLocationManager, RTMapServiceManager, RTWiFiManager, NSMutableArray;

@interface RTCurrentMapItemProvider : NSObject {

	BOOL _registeredForNotifications;
	NSObject*<OS_dispatch_queue> _queue;
	RTFingerprintManager* _fingerprintManager;
	RTLocationManager* _locationManager;
	RTMapServiceManager* _mapServiceManager;
	RTWiFiManager* _wifiManager;
	NSMutableArray* _futureLocations;
	NSMutableArray* _futureAccessPoints;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) RTFingerprintManager * fingerprintManager;              //@synthesize fingerprintManager=_fingerprintManager - In the implementation block
@property (nonatomic,readonly) RTLocationManager * locationManager;                    //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,readonly) RTMapServiceManager * mapServiceManager;                //@synthesize mapServiceManager=_mapServiceManager - In the implementation block
@property (nonatomic,readonly) RTWiFiManager * wifiManager;                            //@synthesize wifiManager=_wifiManager - In the implementation block
@property (nonatomic,readonly) NSMutableArray * futureLocations;                       //@synthesize futureLocations=_futureLocations - In the implementation block
@property (nonatomic,readonly) NSMutableArray * futureAccessPoints;                    //@synthesize futureAccessPoints=_futureAccessPoints - In the implementation block
@property (assign,nonatomic) BOOL registeredForNotifications;                          //@synthesize registeredForNotifications=_registeredForNotifications - In the implementation block
+(void)logMapItems:(id)arg1 prestring:(id)arg2 ;
+(id)convertMapItemsToPredictedLocationsOfInterest:(id)arg1 ;
+(void)logPredictedLocationsOfInterest:(id)arg1 prestring:(id)arg2 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(RTWiFiManager *)wifiManager;
-(void)setRegisteredForNotifications:(BOOL)arg1 ;
-(BOOL)registeredForNotifications;
-(void)shutdown;
-(void)_shutdown;
-(RTLocationManager *)locationManager;
-(void)performBluePOIQueryLookingBack:(double)arg1 lookingAhead:(double)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithFingerprintManager:(id)arg1 locationManager:(id)arg2 mapServiceManager:(id)arg3 wifiManager:(id)arg4 ;
-(void)fetchCurrentMapItemsLookingBack:(double)arg1 lookingAhead:(double)arg2 handler:(/*^block*/id)arg3 ;
-(RTFingerprintManager *)fingerprintManager;
-(RTMapServiceManager *)mapServiceManager;
-(void)onLocationNotification:(id)arg1 ;
-(void)onWiFiScanNotification:(id)arg1 ;
-(void)_performBluePOIQueryLookingBack:(double)arg1 lookingAhead:(double)arg2 handler:(/*^block*/id)arg3 ;
-(void)_fetchCurrentMapItemsLookingBack:(double)arg1 lookingAhead:(double)arg2 handler:(/*^block*/id)arg3 ;
-(id)_filterLocations:(id)arg1 ;
-(id)_filterWiFiAccessPoints:(id)arg1 ;
-(id)_pickMinimumHorizontalUncertainty:(id)arg1 ;
-(NSMutableArray *)futureLocations;
-(NSMutableArray *)futureAccessPoints;
@end

