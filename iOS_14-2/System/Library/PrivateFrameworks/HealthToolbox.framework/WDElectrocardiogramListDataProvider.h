/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)sampleTypes;
-(id)titleForSection:(unsigned long long)arg1 ;
-(long long)cellStyle;
-(void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4 ;
-(id)createQueryForSampleType:(id)arg1 predicate:(id)arg2 limit:(long long)arg3 sortDescriptors:(id)arg4 resultsHandler:(/*^block*/id)arg5 ;
-(id)textForObject:(id)arg1 ;
-(id)viewControllerForItemAtIndexPath:(id)arg1 ;
-(unsigned long long)numberOfObjectsForSection:(unsigned long long)arg1 ;
-(id)customCellForObject:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3 ;
-(void)setRecentSampleLimit:(unsigned long long)arg1 ;
-(void)customizeTableView:(id)arg1 ;
-(double)customEstimatedCellHeight;
-(double)customCellHeight;
-(id)placeholderCellAtIndexPath:(id)arg1 tableView:(id)arg2 ;
-(unsigned long long)recentSampleLimit;
-(void)setShouldConsiderRequeryDueToDeletedObjects:(BOOL)arg1 ;
-(BOOL)shouldConsiderRequeryDueToDeletedObjects;
-(id)_cellForSample:(id)arg1 indexPath:(id)arg2 tableView:(id)arg3 activeAlgorithmVersion:(long long)arg4 ;
-(void)refineSamplesWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)calendarDateSelectorVisible;
-(BOOL)canEditRowAtIndexPath:(id)arg1 ;
-(id)queryDateForSelectedDate:(id)arg1 ;
-(id)customLoadingCellForRowAtIndexPath:(id)arg1 tableView:(id)arg2 ;
@end

