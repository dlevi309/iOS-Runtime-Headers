/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <PowerUI/PowerUISignalMonitor.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue, OS_os_log, _CDLocalContext, _DKKnowledgeQuerying;
@class NSDictionary, RTRoutineManager, CLLocationManager, CLLocation, NSObject, NSString;

@interface PowerUILocationSignalMonitor : NSObject <CLLocationManagerDelegate, PowerUISignalMonitor> {

	int _authorizationStatus;
	NSDictionary* _analyticsData;
	RTRoutineManager* _routine;
	CLLocationManager* _locationManager;
	CLLocation* _currentLocation;
	NSObject*<OS_dispatch_semaphore> _requestLocationSemaphore;
	NSObject*<OS_dispatch_semaphore> _authorizationSemaphore;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_os_log> _log;
	id<_CDLocalContext> _context;
	id<_DKKnowledgeQuerying> _store;

}

@property (nonatomic,retain) RTRoutineManager * routine;                                           //@synthesize routine=_routine - In the implementation block
@property (nonatomic,retain) CLLocationManager * locationManager;                                  //@synthesize locationManager=_locationManager - In the implementation block
@property (assign,nonatomic) int authorizationStatus;                                              //@synthesize authorizationStatus=_authorizationStatus - In the implementation block
@property (retain) CLLocation * currentLocation;                                                   //@synthesize currentLocation=_currentLocation - In the implementation block
@property (retain) NSObject*<OS_dispatch_semaphore> requestLocationSemaphore;                      //@synthesize requestLocationSemaphore=_requestLocationSemaphore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> authorizationSemaphore;              //@synthesize authorizationSemaphore=_authorizationSemaphore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                   //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                                             //@synthesize log=_log - In the implementation block
@property (nonatomic,retain) id<_CDLocalContext> context;                                          //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeQuerying> store;                                       //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSDictionary * analyticsData;                                         //@synthesize analyticsData=_analyticsData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)monitorWithDelegate:(id)arg1 ;
+(id)monitorWithDelegate:(id)arg1 withContext:(id)arg2 withKnowledgeStore:(id)arg3 ;
-(CLLocation *)currentLocation;
-(unsigned long long)signalID;
-(void)setAuthorizationStatus:(int)arg1 ;
-(void)stopMonitoring;
-(void)setLocationManager:(CLLocationManager *)arg1 ;
-(CLLocationManager *)locationManager;
-(void)setStore:(id<_DKKnowledgeQuerying>)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(NSDictionary *)analyticsData;
-(NSObject*<OS_os_log>)log;
-(id<_DKKnowledgeQuerying>)store;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(id)longChargesAroundDate:(id)arg1 ;
-(id)requiredFullChargeDate;
-(void)locationManagerDidChangeAuthorization:(id)arg1 ;
-(void)startMonitoring;
-(id)initWithContextStore:(id)arg1 withKnowledgeStore:(id)arg2 ;
-(int)authorizationStatus;
-(void)setCurrentLocation:(CLLocation *)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(id<_CDLocalContext>)context;
-(BOOL)inTypicalChargingLocationWithError:(id*)arg1 ;
-(BOOL)longCharges:(id)arg1 occurredInLocationsNear:(id)arg2 withError:(id*)arg3 ;
-(RTRoutineManager *)routine;
-(id)likelyToBeInKnownArea;
-(void)setRoutine:(RTRoutineManager *)arg1 ;
-(void)setRequestLocationSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(BOOL)isInSameTimeZone;
-(void)setAuthorizationSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(long long)inKnownMicrolocation;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setAnalyticsData:(NSDictionary *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)requestLocationSemaphore;
-(BOOL)locationIsUncertain:(id)arg1 ;
-(BOOL)notAuthorizedForLocation;
-(id)predicateForEventsWithinSeconds:(double)arg1 aroundTimeOfDay:(id)arg2 ;
-(NSObject*<OS_dispatch_semaphore>)authorizationSemaphore;
-(void)setContext:(id<_CDLocalContext>)arg1 ;
@end

