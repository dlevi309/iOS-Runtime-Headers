/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <PowerUI/PowerUISignalMonitor.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue, OS_os_log;
@class RTRoutineManager, CLLocationManager, CLLocation, NSObject, NSString;

@interface PowerUILocationSignalMonitor : NSObject <CLLocationManagerDelegate, PowerUISignalMonitor> {

	int _authorizationStatus;
	RTRoutineManager* _routine;
	CLLocationManager* _locationManager;
	CLLocation* _currentLocation;
	NSObject*<OS_dispatch_semaphore> _requestLocationSemaphore;
	NSObject*<OS_dispatch_semaphore> _authorizationSemaphore;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_os_log> _log;

}

@property (nonatomic,retain) RTRoutineManager * routine;                                           //@synthesize routine=_routine - In the implementation block
@property (nonatomic,retain) CLLocationManager * locationManager;                                  //@synthesize locationManager=_locationManager - In the implementation block
@property (assign,nonatomic) int authorizationStatus;                                              //@synthesize authorizationStatus=_authorizationStatus - In the implementation block
@property (retain) CLLocation * currentLocation;                                                   //@synthesize currentLocation=_currentLocation - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> requestLocationSemaphore;                      //@synthesize requestLocationSemaphore=_requestLocationSemaphore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> authorizationSemaphore;              //@synthesize authorizationSemaphore=_authorizationSemaphore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                                             //@synthesize log=_log - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)monitorWithDelegate:(id)arg1 ;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(int)authorizationStatus;
-(void)startMonitoring;
-(void)stopMonitoring;
-(CLLocation *)currentLocation;
-(void)setCurrentLocation:(CLLocation *)arg1 ;
-(void)setAuthorizationStatus:(int)arg1 ;
-(CLLocationManager *)locationManager;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(unsigned long long)signalID;
-(id)requiredFullChargeDate;
-(BOOL)notAuthorizedForLocation;
-(id)predicateForEventsWithinSeconds:(double)arg1 aroundTimeOfDay:(id)arg2 ;
-(BOOL)locationIsUncertain:(id)arg1 ;
-(void)setRequestLocationSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(id)longChargesAroundDate:(id)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)requestLocationSemaphore;
-(BOOL)longCharges:(id)arg1 occurredInLocationsNear:(id)arg2 ;
-(BOOL)inTypicalChargingLocation;
-(RTRoutineManager *)routine;
-(void)setRoutine:(RTRoutineManager *)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)authorizationSemaphore;
-(void)setAuthorizationSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
@end

