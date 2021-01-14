/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <libobjc.A.dylib/WDDataListViewControllerDataProvider.h>

@class NSPredicate, NSString, NSMutableArray, NSMutableSet, HKDisplayType, WDProfile, HKUnitPreferenceController;

@interface WDSampleListStatisticsDataProvider : NSObject <WDDataListViewControllerDataProvider> {

	BOOL _hasCompleteDataSet;
	NSPredicate* defaultQueryPredicate;
	NSString* _profileName;
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
@property (nonatomic,copy) NSString * profileName;                                       //@synthesize profileName=_profileName - In the implementation block
@property (nonatomic,readonly) long long cellStyle; 
@property (nonatomic,readonly) unsigned long long numberOfSections; 
@property (nonatomic,readonly) BOOL textAdjustsFontSizeToFitWidth; 
@property (nonatomic,readonly) double customCellHeight; 
@property (nonatomic,readonly) double customEstimatedCellHeight; 
@property (readonly) BOOL calendarDateSelectorVisible; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HKUnitPreferenceController *)unitController;
-(HKDisplayType *)displayType;
-(unsigned long long)numberOfSections;
-(id)sampleTypes;
-(void)stopCollectingData;
-(void)setData:(NSMutableArray *)arg1 ;
-(WDProfile *)profile;
-(NSMutableArray *)data;
-(id)titleForSection:(unsigned long long)arg1 ;
-(void)deleteAllData;
-(NSString *)profileName;
-(void)setProfileName:(NSString *)arg1 ;
-(long long)cellStyle;
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
-(void)removeObjectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 sectionRemoved:(BOOL*)arg3 ;
-(void)deleteObjectsAtIndexPath:(id)arg1 healthStore:(id)arg2 options:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)customizeTableView:(id)arg1 ;
-(double)customEstimatedCellHeight;
-(double)customCellHeight;
-(id)_statisticsAtIndexPath:(id)arg1 ;
-(BOOL)hasCompleteDataSet;
-(void)viewControllerIsNearEndOfScreen;
-(BOOL)textAdjustsFontSizeToFitWidth;
-(NSMutableArray *)activeDataQueries;
-(NSMutableSet *)activeQueryTypes;
-(void)setHasCompleteDataSet:(BOOL)arg1 ;
-(void)_startPartialDataStatisticsCollectionQueryForSampleType:(id)arg1 updateHandler:(/*^block*/id)arg2 ;
-(id)_predicateForTheLastMonth;
-(unsigned long long)_statisticsOptionsForSampleType:(id)arg1 ;
-(void)_handleResultsCollection:(id)arg1 fromQuery:(id)arg2 sampleType:(id)arg3 areComplete:(BOOL)arg4 withError:(id)arg5 updateHandler:(/*^block*/id)arg6 ;
-(void)_startCompleteDataStatisticsCollectionQueryForSampleType:(id)arg1 updateHandler:(/*^block*/id)arg2 ;
-(void)setActiveDataQueries:(NSMutableArray *)arg1 ;
-(void)setActiveQueryTypes:(NSMutableSet *)arg1 ;
@end

