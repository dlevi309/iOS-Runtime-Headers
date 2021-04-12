/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RELocationManager.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue;
@class CLLocation, NSLock, CLLocationManager, NSObject, NSString;

@interface _RECoreLocationLocationManager : RELocationManager <CLLocationManagerDelegate> {

	CLLocation* _currentLocation;
	NSLock* _locationAccessLock;
	/*^block*/id _handler;
	CLLocationManager* _locationManager;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _resumedQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)currentLocation;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(id)init;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_updateLocation:(id)arg1 ;
-(void)dealloc;
-(void)stopLocationUpdates;
-(void)startLocationUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)_notifyUpdateHandlersWithError:(id)arg1 ;
@end

