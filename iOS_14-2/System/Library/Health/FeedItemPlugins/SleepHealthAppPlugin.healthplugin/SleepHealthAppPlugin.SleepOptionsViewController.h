/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/SleepHealthAppPlugin.healthplugin/SleepHealthAppPlugin
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/HKSwitchTableViewCellDelegate.h>
#import <libobjc.A.dylib/HKSPSleepStoreObserver.h>

@interface SleepHealthAppPlugin.SleepOptionsViewController : UITableViewController <HKSwitchTableViewCellDelegate, HKSPSleepStoreObserver> {

	 featureAvailability;
	 settings;
	 sleepScheduleProvider;
	 sleepScheduleSubscriber;
	 sections;
	 dataSource;
	 isApplyingSnapshot;

}
-(void)switchCellValueChanged:(id)arg1 value:(BOOL)arg2 ;
-(void)sleepStore:(id)arg1 sleepModeOnDidChange:(BOOL)arg2 ;
-(void)sleepStore:(id)arg1 sleepSettingsDidChange:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

