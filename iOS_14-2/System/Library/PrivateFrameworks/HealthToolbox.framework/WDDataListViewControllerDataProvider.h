/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

@class NSPredicate, NSString;


@protocol WDDataListViewControllerDataProvider <NSObject>
@property (nonatomic,retain) NSPredicate * defaultQueryPredicate; 
@property (nonatomic,copy) NSString * profileName; 
@property (nonatomic,readonly) long long cellStyle; 
@property (nonatomic,readonly) unsigned long long numberOfSections; 
@property (nonatomic,readonly) BOOL textAdjustsFontSizeToFitWidth; 
@property (nonatomic,readonly) double customCellHeight; 
@property (nonatomic,readonly) double customEstimatedCellHeight; 
@property (readonly) BOOL hasCompleteDataSet; 
@property (readonly) BOOL calendarDateSelectorVisible; 
@optional
-(void)viewControllerWantsDataIncludingDate:(id)arg1;
-(BOOL)calendarDateSelectorVisible;
-(BOOL)canEditRowAtIndexPath:(id)arg1;
-(id)customLoadingCellForRowAtIndexPath:(id)arg1 tableView:(id)arg2;
-(BOOL)hasCompleteDataSet;

@required
-(unsigned long long)numberOfSections;
-(void)stopCollectingData;
-(id)titleForSection:(unsigned long long)arg1;
-(void)deleteAllData;
-(NSString *)profileName;
-(void)setProfileName:(id)arg1;
-(long long)cellStyle;
-(id)textForObject:(id)arg1;
-(id)secondaryTextForObject:(id)arg1;
-(id)viewControllerForItemAtIndexPath:(id)arg1;
-(id)initWithDisplayType:(id)arg1 profile:(id)arg2;
-(void)startCollectingDataWithUpdateHandler:(/*^block*/id)arg1;
-(unsigned long long)numberOfObjectsForSection:(unsigned long long)arg1;
-(id)objectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2;
-(id)customCellForObject:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3;
-(NSPredicate *)defaultQueryPredicate;
-(void)setDefaultQueryPredicate:(id)arg1;
-(void)removeObjectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 sectionRemoved:(BOOL*)arg3;
-(void)deleteObjectsAtIndexPath:(id)arg1 healthStore:(id)arg2 options:(unsigned long long)arg3 completion:(/*^block*/id)arg4;
-(void)customizeTableView:(id)arg1;
-(double)customEstimatedCellHeight;
-(double)customCellHeight;
-(void)viewControllerIsNearEndOfScreen;
-(BOOL)textAdjustsFontSizeToFitWidth;

@end

