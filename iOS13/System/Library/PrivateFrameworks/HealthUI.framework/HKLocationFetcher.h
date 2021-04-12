/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class _HKLocationShifter, _HKWorkoutRouteStore, HKHealthStore, HKAnchoredObjectQuery;

@interface HKLocationFetcher : NSObject {

	_HKLocationShifter* _shifter;
	_HKWorkoutRouteStore* _routesStore;
	HKHealthStore* _healthStore;
	HKAnchoredObjectQuery* _routesQuery;

}

@property (nonatomic,retain) _HKWorkoutRouteStore * routesStore;               //@synthesize routesStore=_routesStore - In the implementation block
@property (nonatomic,retain) HKHealthStore * healthStore;                      //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) HKAnchoredObjectQuery * routesQuery;              //@synthesize routesQuery=_routesQuery - In the implementation block
@property (nonatomic,retain) _HKLocationShifter * shifter;                     //@synthesize shifter=_shifter - In the implementation block
-(void)dealloc;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(id)initWithHealthStore:(id)arg1 ;
-(void)fetchLocationsFromWorkout:(id)arg1 applyThreshold:(BOOL)arg2 withSamplesHandler:(/*^block*/id)arg3 ;
-(_HKWorkoutRouteStore *)routesStore;
-(void)_handleAndShiftLocations:(id)arg1 forWorkout:(id)arg2 withSamplesHandler:(/*^block*/id)arg3 ;
-(void)fetchRoutesFromWorkout:(id)arg1 withUpdateHandler:(/*^block*/id)arg2 ;
-(_HKLocationShifter *)shifter;
-(id)_workoutRoutesQueryForWorkout:(id)arg1 withUpdateHandler:(/*^block*/id)arg2 ;
-(BOOL)_routesAreSmoothed:(id)arg1 ;
-(void)fetchLocationsFromWorkout:(id)arg1 withSamplesHandler:(/*^block*/id)arg2 ;
-(void)setShifter:(_HKLocationShifter *)arg1 ;
-(void)setRoutesStore:(_HKWorkoutRouteStore *)arg1 ;
-(HKAnchoredObjectQuery *)routesQuery;
-(void)setRoutesQuery:(HKAnchoredObjectQuery *)arg1 ;
@end

