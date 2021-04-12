/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, HKHealthStore;

@interface _HKWorkoutRouteStore : NSObject {

	NSMutableDictionary* _locations;
	NSMutableDictionary* _series;
	NSObject*<OS_dispatch_queue> _locationQueue;
	long long _loadingCount;
	/*^block*/id _loadingCompletionBlock;
	HKHealthStore* _healthStore;

}
-(id)samples;
-(id)initWithHealthStore:(id)arg1 ;
-(id)init;
-(void)_queue_checkAndReturnIfLocationsLoaded;
-(id)_queue_locations;
-(void)_queue_addWorkoutRoutes:(id)arg1 ;
-(BOOL)containsSameValuesAs:(id)arg1 ;
-(void)_fetchAllLocationsFromSeriesSample:(id)arg1 ;
-(void)_setLocations:(id)arg1 forUUID:(id)arg2 ;
-(void)setWorkoutRoutes:(id)arg1 ;
-(void)addWorkoutRoutes:(id)arg1 ;
-(void)fetchAllLocationsWithCompletion:(/*^block*/id)arg1 ;
@end

