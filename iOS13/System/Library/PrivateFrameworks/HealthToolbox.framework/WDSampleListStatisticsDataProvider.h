/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <libobjc.A.dylib/WDDataListViewControllerDataProvider.h>

@class NSPredicate, NSMutableArray, NSMutableSet, HKDisplayType, WDProfile, HKUnitPreferenceController, NSString;

@interface WDSampleListStatisticsDataProvider : NSObject <WDDataListViewControllerDataProvider> {

	BOOL _hasCompleteDataSet;
	NSPredicate* defaultQueryPredicate;
	NSMutableArray* _data;
	NSMutableArray* _activeDataQueries;
	NSMutableSet* _activeQueryTypes;
	HKDisplayType* _displayType;
	WDProfile* _profile;
	HKUnitPreferenceController* _unitController;

}

@property (retain) NSMutableArray * data;                                                //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSMutableArray * activeDataQueries;                         //@synthesize activeDataQueries=_activeDataQueries - In the implementation block
@property (nonatomic,retain) NSMutableSet * activeQueryTypes;                            //@synthesize activeQueryTypes=_activeQueryTypes - In the implementation block
@property (nonatomic,readonly) HKDisplayType * displayType;                              //@synthesize displayType=_displayType - In the implementation block
@property (nonatomic,readonly) WDProfile * profile;                                      //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) HKUnitPreferenceController * unitController;              //@synthesize unitController=_unitController - In the implementation block
@property (nonatomic,retain) NSPredicate * defaultQueryPredicate; 
@property (assign) BOOL hasCompleteDataSet;                                              //@synthesize hasCompleteDataSet=_hasCompleteDataSet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long cellStyle; 
@property (nonatomic,readonly) unsigned long long numberOfSections; 
@property (nonatomic,readonly) BOOL textAdjustsFontSizeToFitWidth; 
@property (nonatomic,readonly) double customCellHeight; 
@property (nonatomic,readonly) double customEstimatedCellHeight; 
@property (readonly) BOOL calendarDateSelectorVisible; 
-(NSMutableArray *)data;
-(void)setData:(NSMutableArray *)arg1 ;
-(HKDisplayType *)displayType;
-(WDProfile *)profile;
-(unsigned long long)numberOfSections;
-(long long)cellStyle;
-(id)titleForSection:(unsigned long long)arg1 ;
-(void)deleteAllData;
-(id)sampleTypes;
-(HKUnitPreferenceController *)unitController;
-(void)stopCollectingData;
-(id)initWithDisplayType:(id)arg1 profile:(id)arg2 ;
-(id)textForObject:(id)arg1 ;
-(double)customCellHeight;
-(double)customEstimatedCellHeight;
-(id)customCellForObject:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3 ;
-(unsigned long long)numberOfObjectsForSection:(unsigned long long)arg1 ;
-(void)customizeTableView:(id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 ;
-(id)viewControllerForItemAtIndexPath:(id)arg1 ;
-(id)secondaryTextForObject:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 sectionRemoved:(BOOL*)arg3 ;
-(void)startCollectingDataWithUpdateHandler:(/*^block*/id)arg1 ;
-(BOOL)hasCompleteDataSet;
-(void)viewControllerIsNearEndOfScreen;
-(BOOL)textAdjustsFontSizeToFitWidth;
-(void)deleteObjectsAtIndexPath:(id)arg1 healthStore:(id)arg2 options:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(NSPredicate *)defaultQueryPredicate;
-(NSMutableArray *)activeDataQueries;
-(NSMutableSet *)activeQueryTypes;
-(void)setHasCompleteDataSet:(BOOL)arg1 ;
-(void)_startPartialDataStatisticsCollectionQueryForSampleType:(id)arg1 updateHandler:(/*^block*/id)arg2 ;
-(void)setDefaultQueryPredicate:(NSPredicate *)arg1 ;
-(id)_predicateForTheLastMonth;
-(unsigned long long)_statisticsOptionsForSampleType:(id)arg1 ;
-(void)_handleResultsCollection:(id)arg1 fromQuery:(id)arg2 sampleType:(id)arg3 areComplete:(BOOL)arg4 withError:(id)arg5 updateHandler:(/*^block*/id)arg6 ;
-(void)_startCompleteDataStatisticsCollectionQueryForSampleType:(id)arg1 updateHandler:(/*^block*/id)arg2 ;
-(id)_statisticsAtIndexPath:(id)arg1 ;
-(void)setActiveDataQueries:(NSMutableArray *)arg1 ;
-(void)setActiveQueryTypes:(NSMutableSet *)arg1 ;
@end

