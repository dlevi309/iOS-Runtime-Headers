/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
*/


@protocol HKMCViewModelProviderDataSourceDelegate;
#import <HealthMenstrualCycles/HealthMenstrualCycles-Structs.h>
@class HKHealthStore, NSMutableSet, HKMCDaySummaryObserverQuery, NSMutableIndexSet;

@interface HKMCViewModelProviderDataSource : NSObject {

	HKHealthStore* _healthStore;
	id<HKMCViewModelProviderDataSourceDelegate> _delegate;
	NSMutableSet* _summaryQueries;
	HKMCDaySummaryObserverQuery* _summaryObserverQuery;
	NSMutableIndexSet* _canceledDayIndexes;

}

@property (assign,nonatomic,__weak) id<HKMCViewModelProviderDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<HKMCViewModelProviderDataSourceDelegate>)delegate;
-(void)setDelegate:(id<HKMCViewModelProviderDataSourceDelegate>)arg1 ;
-(id)initWithHealthStore:(id)arg1 delegate:(id)arg2 ;
-(void)_startObservingDaySummaryUpdates;
-(void)fetchDaySummariesInDayIndexRange:(SCD_Struct_HK0)arg1 ;
-(void)cancelFetchForDaySummariesInDayIndexRange:(SCD_Struct_HK0)arg1 ;
@end

