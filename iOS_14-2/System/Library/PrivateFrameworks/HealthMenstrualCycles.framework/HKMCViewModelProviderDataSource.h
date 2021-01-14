/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
*/


@protocol HKMCViewModelProviderDataSourceDelegate, OS_dispatch_queue;
#import <HealthMenstrualCycles/HealthMenstrualCycles-Structs.h>
@class HKHealthStore, NSObject, NSMutableSet, HKMCDaySummaryObserverQuery, NSMutableIndexSet, HKCalendarCache;

@interface HKMCViewModelProviderDataSource : NSObject {

	HKHealthStore* _healthStore;
	id<HKMCViewModelProviderDataSourceDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _summaryQueries;
	HKMCDaySummaryObserverQuery* _summaryObserverQuery;
	NSMutableIndexSet* _canceledDayIndexes;
	HKCalendarCache* _calendarCache;

}

@property (assign,nonatomic,__weak) id<HKMCViewModelProviderDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<HKMCViewModelProviderDataSourceDelegate>)delegate;
-(void)setDelegate:(id<HKMCViewModelProviderDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(void)_startObservingDaySummaryUpdates;
-(id)initWithHealthStore:(id)arg1 delegate:(id)arg2 calendarCache:(id)arg3 queue:(id)arg4 ;
-(void)fetchDaySummariesInDayIndexRange:(SCD_Struct_HK0)arg1 ;
-(void)cancelFetchForDaySummariesInDayIndexRange:(SCD_Struct_HK0)arg1 ;
@end

