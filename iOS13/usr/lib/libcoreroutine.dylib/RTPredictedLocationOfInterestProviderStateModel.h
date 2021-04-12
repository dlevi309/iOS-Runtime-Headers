/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libobjc.A.dylib/RTNextPredictedLocationsOfInterestCacheDelegate.h>
#import <libobjc.A.dylib/RTPredictedLocationOfInterestProvider.h>

@protocol OS_dispatch_queue;
@class NSObject, RTDataProtectionManager, RTLearnedLocationManager, RTLocationManager, RTMetricManager, RTNextPredictedLocationsOfInterestCache, NSString;

@interface RTPredictedLocationOfInterestProviderStateModel : NSObject <RTNextPredictedLocationsOfInterestCacheDelegate, RTPredictedLocationOfInterestProvider> {

	BOOL _encryptedDataAvailabilityNotificationNeeded;
	NSObject*<OS_dispatch_queue> _queue;
	RTDataProtectionManager* _dataProtectionManager;
	RTLearnedLocationManager* _learnedLocationManager;
	RTLocationManager* _locationManager;
	RTMetricManager* _metricManager;
	RTNextPredictedLocationsOfInterestCache* _nextPredictedLocationsOfInterestCache;
	long long _encryptedDataAvailability;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                                           //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) RTDataProtectionManager * dataProtectionManager;                                              //@synthesize dataProtectionManager=_dataProtectionManager - In the implementation block
@property (nonatomic,readonly) RTLearnedLocationManager * learnedLocationManager;                                            //@synthesize learnedLocationManager=_learnedLocationManager - In the implementation block
@property (nonatomic,readonly) RTLocationManager * locationManager;                                                          //@synthesize locationManager=_locationManager - In the implementation block
@property (nonatomic,readonly) RTMetricManager * metricManager;                                                              //@synthesize metricManager=_metricManager - In the implementation block
@property (nonatomic,readonly) RTNextPredictedLocationsOfInterestCache * nextPredictedLocationsOfInterestCache;              //@synthesize nextPredictedLocationsOfInterestCache=_nextPredictedLocationsOfInterestCache - In the implementation block
@property (assign,nonatomic) long long encryptedDataAvailability;                                                            //@synthesize encryptedDataAvailability=_encryptedDataAvailability - In the implementation block
@property (assign,nonatomic) BOOL encryptedDataAvailabilityNotificationNeeded;                                               //@synthesize encryptedDataAvailabilityNotificationNeeded=_encryptedDataAvailabilityNotificationNeeded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(RTLocationManager *)locationManager;
-(void)setEncryptedDataAvailability:(long long)arg1 ;
-(long long)encryptedDataAvailability;
-(RTMetricManager *)metricManager;
-(RTLearnedLocationManager *)learnedLocationManager;
-(id)initWithDataProtectionManager:(id)arg1 learnedLocationManager:(id)arg2 locationManager:(id)arg3 metricManager:(id)arg4 cache:(id)arg5 ;
-(RTDataProtectionManager *)dataProtectionManager;
-(RTNextPredictedLocationsOfInterestCache *)nextPredictedLocationsOfInterestCache;
-(void)fetchNextPredictedLocationsOfInterestWithCriteria:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchPredictedExitDatesWithCriteria:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchPredictedLocationsOfInterestWithCriteria:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)encryptedDataAvailabilityNotificationNeeded;
-(void)setEncryptedDataAvailabilityNotificationNeeded:(BOOL)arg1 ;
-(void)onDataProtectionNotification:(id)arg1 ;
-(void)_onCacheEnabledDidChange:(BOOL)arg1 ;
-(void)updateEncryptedDataAvailabilityNotificationNeeded;
-(void)onCacheEnabledDidChange:(BOOL)arg1 ;
@end

