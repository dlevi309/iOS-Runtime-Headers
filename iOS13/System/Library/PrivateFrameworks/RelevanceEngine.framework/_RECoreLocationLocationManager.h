/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(id)currentLocation;
-(void)_updateLocation:(id)arg1 ;
-(void)stopLocationUpdates;
-(void)startLocationUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)_notifyUpdateHandlersWithError:(id)arg1 ;
@end

