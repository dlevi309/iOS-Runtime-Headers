/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
*/


@class HKHealthStore, NSMutableDictionary, NSMutableArray, HKAnchoredObjectQuery, NSCalendar, NSDate;

@interface FIUIWorkoutDataProvider : NSObject {

	HKHealthStore* _healthStore;
	NSMutableDictionary* _workoutsByDay;
	NSMutableArray* _updateHandlers;
	HKAnchoredObjectQuery* _currentWorkoutAnchoredObjectQuery;
	NSCalendar* _gregorianCalendar;
	NSCalendar* _currentCalendar;
	NSDate* _retryDate;

}
-(id)initWithHealthStore:(id)arg1 ;
-(id)init;
-(void)_timeZoneDidChange:(id)arg1 ;
-(void)_commonInit;
-(void)dealloc;
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

