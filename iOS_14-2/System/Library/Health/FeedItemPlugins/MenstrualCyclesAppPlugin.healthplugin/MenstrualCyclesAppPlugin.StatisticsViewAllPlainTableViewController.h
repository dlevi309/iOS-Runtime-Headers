/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/HKMCAnalysisProviderObserver.h>

@interface MenstrualCyclesAppPlugin.StatisticsViewAllPlainTableViewController : UITableViewController <HKMCAnalysisProviderObserver> {

	 statistics;
	 analysis;
	 sections;
	 statisticsRows;
	 menstruationPredictionsImpacted;
	 fertilityPredictionsImpacted;
	 calendarCache;
	 analysisProvider;
	 $__lazy_storage_$_yearsMonthsDaysFormatter;
	 standaloneDaysFormatter;

}
-(void)analysisProvider:(id)arg1 didUpdateAnalysis:(id)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

