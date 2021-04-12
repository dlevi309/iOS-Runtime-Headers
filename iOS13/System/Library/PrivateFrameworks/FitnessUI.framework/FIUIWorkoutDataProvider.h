/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/


@class HKHealthStore, _HKAnchoredObjectQueryManager, NSMutableDictionary, NSMutableArray, HKAnchoredObjectQuery, NSCalendar, NSDate;

@interface FIUIWorkoutDataProvider : NSObject {

	HKHealthStore* _healthStore;
	_HKAnchoredObjectQueryManager* _queryManager;
	NSMutableDictionary* _workoutsByDay;
	NSMutableArray* _updateHandlers;
	HKAnchoredObjectQuery* _currentWorkoutAnchoredObjectQuery;
	NSCalendar* _gregorianCalendar;
	NSCalendar* _currentCalendar;
	NSDate* _retryDate;

}
-(id)init;
-(void)dealloc;
-(void)_commonInit;
-(id)initWithHealthStore:(id)arg1 ;
-(void)_timeZoneDidChange:(id)arg1 ;
-(void)stopFetching;
-(void)addUpdateHandler:(/*^block*/id)arg1 ;
-(void)startFetchingFromDate:(id)arg1 ;
-(id)allWorkouts;
-(void)_fetchAllWorkoutsFromDate:(id)arg1 ;
-(void)_retryQueryOnDidBecomeActiveWithDate:(id)arg1 ;
-(void)_handleAddedSamples:(id)arg1 ;
-(void)_runUpdateHandlers;
-(void)_handleRemovedObjects:(id)arg1 ;
-(void)_retryQuery:(id)arg1 ;
-(BOOL)hasWorkouts;
-(id)workoutsForDay:(id)arg1 ;
@end

