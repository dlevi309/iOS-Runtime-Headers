/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_shutdown;
-(RTMapServiceManager *)mapServiceManager;
-(RTLocationManager *)locationManager;
-(RTFingerprintManager *)fingerprintManager;
-(RTWiFiManager *)wifiManager;
-(void)shutdown;
-(BOOL)registeredForNotifications;
-(id)init;
-(void)setRegisteredForNotifications:(BOOL)arg1 ;
-(void)performBluePOIQueryLookingBack:(double)arg1 lookingAhead:(double)arg2 handler:(/*^block*/id)arg3 ;
-(void)onLocationNotification:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithFingerprintManager:(id)arg1 locationManager:(id)arg2 mapServiceManager:(id)arg3 wifiManager:(id)arg4 ;
-(void)fetchCurrentMapItemsLookingBack:(double)arg1 lookingAhead:(double)arg2 handler:(/*^block*/id)arg3 ;
-(void)onWiFiScanNotification:(id)arg1 ;
-(void)_performBluePOIQueryLookingBack:(double)arg1 lookingAhead:(double)arg2 handler:(/*^block*/id)arg3 ;
-(void)_fetchCurrentMapItemsLookingBack:(double)arg1 lookingAhead:(double)arg2 handler:(/*^block*/id)arg3 ;
-(id)_filterLocations:(id)arg1 ;
-(id)_filterWiFiAccessPoints:(id)arg1 ;
-(id)_pickMinimumHorizontalUncertainty:(id)arg1 ;
-(NSMutableArray *)futureLocations;
-(NSMutableArray *)futureAccessPoints;
@end

