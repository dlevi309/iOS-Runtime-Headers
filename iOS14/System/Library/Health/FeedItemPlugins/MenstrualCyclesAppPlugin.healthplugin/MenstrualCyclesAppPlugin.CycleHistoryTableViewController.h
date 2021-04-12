/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/HKMCAnalysisProviderObserver.h>
#import <UIKit/UITableViewDelegatePrivate.h>

@interface MenstrualCyclesAppPlugin.CycleHistoryTableViewController : UITableViewController <HKMCAnalysisProviderObserver, UITableViewDelegatePrivate> {

	 maxCyclesInSectionView;
	 $__lazy_storage_$_yearDateFormatter;
	 viewIsSection;
	 cycles;
	 $__lazy_storage_$_healthStore;
	 viewModelProviders;
	 sectionedCycles;
	 years;
	 selectedFilter;
	 calendarCache;
	 today;
	 analysisProvider;
	 providedHealthStore;

}

@property (readonly,nonatomic) BOOL axFilterSelected; 
-(BOOL)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2 ;
-(void)analysisProvider:(id)arg1 didUpdateAnalysis:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)axFilterSelected;
-(void)pushFilterView;
@end

