/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
*/

#import <HealthMenstrualCycles/HealthMenstrualCycles-Structs.h>
#import <libobjc.A.dylib/HKMCViewModelProviderDataSourceDelegate.h>
#import <libobjc.A.dylib/HKMCAnalysisProviderObserver.h>

@class HKMCViewModelProviderDataSource, HKMCAnalysisProvider, NSHashTable, NSMutableIndexSet, NSMutableDictionary, NSNumber, HKMCAnalysis, NSString;

@interface HKMCViewModelProvider : NSObject <HKMCViewModelProviderDataSourceDelegate, HKMCAnalysisProviderObserver> {

	HKMCViewModelProviderDataSource* _dataSource;
	HKMCAnalysisProvider* _analysisProvider;
	NSHashTable* _observers;
	long long _maximumActiveDuration;
	long long _minimumPrefetchDuration;
	SCD_Struct_HK0 _managedDayRange;
	NSMutableIndexSet* _fetchStartedDayIndexes;
	NSMutableIndexSet* _fetchCompletedDayIndexes;
	NSMutableDictionary* _daySummariesByDayIndex;
	NSNumber* _minimumAnalysisAnchor;
	HKMCAnalysis* _analysis;
	SCD_Struct_HK0 _activeDayRange;

}

@property (assign,nonatomic) SCD_Struct_HK0 activeDayRange;              //@synthesize activeDayRange=_activeDayRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)viewModelProviderDataSource:(id)arg1 didFetchDaySummaries:(id)arg2 forDayIndexRange:(SCD_Struct_HK0)arg3 analysisAnchor:(id)arg4 ;
-(void)viewModelProviderDataSourceDidUpdateDaySummaries:(id)arg1 ;
-(id)_initWithDataSource:(id)arg1 analysisProvider:(id)arg2 maximumActiveDuration:(long long)arg3 minimumPrefetchDuration:(long long)arg4 ;
-(long long)_fetchStateForDayIndex:(long long)arg1 ;
-(id)_viewModelWithDayIndex:(long long)arg1 fetchedDaySummary:(id)arg2 ;
-(void)_updateManagedDayRangeIfNeeded;
-(unsigned long long)_menstruationLevelWithDayIndex:(long long)arg1 menstrualFlow:(long long)arg2 ;
-(unsigned long long)_fertileWindowLevelWithDayIndex:(long long)arg1 ;
-(BOOL)_didFetchInitialAnalysis;
-(void)_setFetchState:(long long)arg1 forDayIndexRange:(SCD_Struct_HK0)arg2 ;
-(void)_notifyObserversDidUpdate;
-(BOOL)_didFetchMinimumAnalysis;
-(void)analysisProvider:(id)arg1 didUpdateAnalysis:(id)arg2 ;
-(id)initWithHealthStore:(id)arg1 analysisProvider:(id)arg2 maximumActiveDuration:(long long)arg3 minimumPrefetchDuration:(long long)arg4 ;
-(id)dayViewModelAtIndex:(long long)arg1 ;
-(void)setActiveDayRange:(SCD_Struct_HK0)arg1 ;
-(SCD_Struct_HK0)_test_managedDayRange;
-(BOOL)_ppt_didFetchAnalysis;
-(BOOL)_ppt_didFetchDaySummaries;
-(SCD_Struct_HK0)activeDayRange;
@end

