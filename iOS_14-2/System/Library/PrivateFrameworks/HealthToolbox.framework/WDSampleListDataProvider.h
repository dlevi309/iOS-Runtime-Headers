/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <libobjc.A.dylib/HKSampleTypeUpdateControllerObserver.h>
#import <libobjc.A.dylib/WDDataListViewControllerDataProvider.h>
#import <libobjc.A.dylib/HKDataMetadataViewControllerDelegate.h>

@class HKHealthStore, NSDictionary, HKSampleListDataProviderFilter, NSPredicate, NSString, HKDisplayType, WDProfile, HKSortedSampleArray;

@interface WDSampleListDataProvider : NSObject <HKSampleTypeUpdateControllerObserver, WDDataListViewControllerDataProvider, HKDataMetadataViewControllerDelegate> {

	NSDictionary* _pagingContexts;
	HKSampleListDataProviderFilter* _defaultQueryPredicateFilter;
	/*^block*/id _updateCallback;
	NSPredicate* _defaultQueryPredicate;
	NSString* _profileName;
	HKDisplayType* _displayType;
	WDProfile* _profile;
	HKSortedSampleArray* _samples;

}

@property (nonatomic,readonly) HKDisplayType * displayType;                      //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,__weak,readonly) WDProfile * profile;                       //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) HKSortedSampleArray * samples;                    //@synthesize samples=_samples - In the implementation block
@property (nonatomic,copy) NSString * profileName;                               //@synthesize profileName=_profileName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSPredicate * defaultQueryPredicate;                //@synthesize defaultQueryPredicate=_defaultQueryPredicate - In the implementation block
@property (nonatomic,readonly) long long cellStyle; 
@property (nonatomic,readonly) unsigned long long numberOfSections; 
@property (nonatomic,readonly) BOOL textAdjustsFontSizeToFitWidth; 
@property (nonatomic,readonly) double customCellHeight; 
@property (nonatomic,readonly) double customEstimatedCellHeight; 
@property (readonly) BOOL hasCompleteDataSet; 
@property (readonly) BOOL calendarDateSelectorVisible; 
@property (nonatomic,readonly) HKHealthStore * healthStore; 
-(HKHealthStore *)healthStore;
-(HKSortedSampleArray *)samples;
-(id)unitController;
-(HKDisplayType *)displayType;
-(unsigned long long)numberOfSections;
-(id)sampleTypes;
-(void)stopCollectingData;
-(WDProfile *)profile;
-(id)titleForSection:(unsigned long long)arg1 ;
-(void)deleteAllData;
-(NSString *)profileName;
-(void)setProfileName:(NSString *)arg1 ;
-(id)displayTypeController;
-(id)defaultPredicateForSampleType:(id)arg1 ;
-(id)viewControllerForSampleType:(id)arg1 subSamplePredicate:(id)arg2 title:(id)arg3 ;
-(id)accessViewControllerForSample:(id)arg1 healthStore:(id)arg2 ;
-(BOOL)shareDocumentUsingSample:(id)arg1 ;
-(long long)cellStyle;
-(void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4 ;
-(void)updateController:(id)arg1 didReceiveHighFrequencyUpdateForType:(id)arg2 ;
-(void)_callUpdateHandler;
-(id)createQueryForSampleType:(id)arg1 predicate:(id)arg2 limit:(long long)arg3 sortDescriptors:(id)arg4 resultsHandler:(/*^block*/id)arg5 ;
-(id)predicateForType:(id)arg1 ;
-(id)textForObject:(id)arg1 ;
-(id)secondaryTextForObject:(id)arg1 ;
-(id)viewControllerForItemAtIndexPath:(id)arg1 ;
-(id)initWithDisplayType:(id)arg1 profile:(id)arg2 ;
-(void)startCollectingDataWithUpdateHandler:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfObjectsForSection:(unsigned long long)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 ;
-(id)customCellForObject:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3 ;
-(NSPredicate *)defaultQueryPredicate;
-(void)setDefaultQueryPredicate:(NSPredicate *)arg1 ;
-(id)_samplesSortDescriptor;
-(void)removeObjectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 sectionRemoved:(BOOL*)arg3 ;
-(void)deleteObjectsAtIndexPath:(id)arg1 healthStore:(id)arg2 options:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)customizeTableView:(id)arg1 ;
-(double)customEstimatedCellHeight;
-(double)customCellHeight;
-(void)viewControllerWantsDataIncludingDate:(id)arg1 ;
-(void)refineSamplesWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)canEditRowAtIndexPath:(id)arg1 ;
-(id)queryDateForSelectedDate:(id)arg1 ;
-(BOOL)hasCompleteDataSet;
-(void)viewControllerIsNearEndOfScreen;
-(BOOL)textAdjustsFontSizeToFitWidth;
-(void)_requestNextPageOfData;
-(void)_stopAllQueries;
-(id)_pagingContextForSampleType:(id)arg1 ;
-(void)_resetAllData;
-(void)_requestNextPageOfDataForSampleType:(id)arg1 ;
-(id)_defaultPredicateWithPredicateForType:(id)arg1 ;
-(id)_UUIDsForSamplesWithEndDate:(id)arg1 ;
-(void)_handleQueryResultsForSampleType:(id)arg1 results:(id)arg2 ;
-(BOOL)_handleObjectsRemoved:(id)arg1 ;
@end

