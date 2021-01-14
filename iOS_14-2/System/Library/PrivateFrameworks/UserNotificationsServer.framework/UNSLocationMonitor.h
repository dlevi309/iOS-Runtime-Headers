/*
* Generated on Thursday, January 14, 2021 at 2:28:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue;
@class CLLocationManager, UNSKeyedObservable, NSObject, NSString;

@interface UNSLocationMonitor : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	UNSKeyedObservable* _observable;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)locationManager:(id)arg1 didExitRegion:(id)arg2 ;
-(void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(id)init;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)markAsHavingReceivedLocation;
-(id)initWithQueue:(id)arg1 locationManager:(id)arg2 ;
-(id)initWithQueue:(id)arg1 locationManager:(id)arg2 observable:(id)arg3 ;
-(void)_queue_triggerDidFireForRegion:(id)arg1 ;
-(void)locationManager:(id)arg1 didEnterRegion:(id)arg2 ;
-(void)setMonitoredRegions:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)isBundleIdentifierAuthorizedForRegionMonitoring:(id)arg1 ;
-(void)locationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2 ;
@end

