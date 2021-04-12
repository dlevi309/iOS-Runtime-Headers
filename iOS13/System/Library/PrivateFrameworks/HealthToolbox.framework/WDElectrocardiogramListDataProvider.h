/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/WDSampleListDataProvider.h>

@interface WDElectrocardiogramListDataProvider : WDSampleListDataProvider {

	BOOL _shouldConsiderRequeryDueToDeletedObjects;
	unsigned long long _recentSampleLimit;

}

@property (assign,nonatomic) BOOL shouldConsiderRequeryDueToDeletedObjects;              //@synthesize shouldConsiderRequeryDueToDeletedObjects=_shouldConsiderRequeryDueToDeletedObjects - In the implementation block
@property (assign,nonatomic) unsigned long long recentSampleLimit;                       //@synthesize recentSampleLimit=_recentSampleLimit - In the implementation block
-(unsigned long long)numberOfSections;
-(long long)cellStyle;
-(id)titleForSection:(unsigned long long)arg1 ;
-(id)sampleTypes;
-(void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4 ;
-(id)textForObject:(id)arg1 ;
-(double)customCellHeight;
-(double)customEstimatedCellHeight;
-(id)customCellForObject:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3 ;
-(id)createQueryForSampleType:(id)arg1 predicate:(id)arg2 limit:(long long)arg3 sortDescriptors:(id)arg4 resultsHandler:(/*^block*/id)arg5 ;
-(unsigned long long)recentSampleLimit;
-(void)setShouldConsiderRequeryDueToDeletedObjects:(BOOL)arg1 ;
-(BOOL)shouldConsiderRequeryDueToDeletedObjects;
-(unsigned long long)numberOfObjectsForSection:(unsigned long long)arg1 ;
-(void)customizeTableView:(id)arg1 ;
-(id)_cellForSample:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3 ;
-(void)refineSamplesWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)calendarDateSelectorVisible;
-(BOOL)canEditRowAtIndexPath:(id)arg1 ;
-(id)queryDateForSelectedDate:(id)arg1 ;
-(id)placeholderCellAtIndexPath:(id)arg1 tableView:(id)arg2 ;
-(id)customLoadingCellForRowAtIndexPath:(id)arg1 tableView:(id)arg2 ;
-(id)viewControllerForItemAtIndexPath:(id)arg1 ;
-(void)setRecentSampleLimit:(unsigned long long)arg1 ;
@end

