/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/HKSwitchTableViewCellDelegate.h>

@interface MenstrualCyclesAppPlugin.OptionsViewController : UITableViewController <HKSwitchTableViewCellDelegate> {

	 settingsManager;
	 sections;
	 periodAndCycleLengthRows;
	 periodLengthDataSource;
	 cycleLengthDataSource;
	 manualEntryItemPeriodLength;
	 manualEntryItemCycleLength;
	 analysisProvider;
	 availability;

}
-(void)switchCellValueChanged:(id)arg1 value:(BOOL)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

