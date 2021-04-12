/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/SleepHealthAppPlugin.healthplugin/SleepHealthAppPlugin
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/HKSHSleepScheduleComponentsEditViewHandling.h>
#import <libobjc.A.dylib/HKSHScheduleOccurrenceComponentsAccessibilityTableViewCellDelegate.h>
#import <libobjc.A.dylib/HKSHScheduleOccurrenceAlarmVolumeTableViewCellHandler.h>
#import <libobjc.A.dylib/HKSwitchTableViewCellDelegate.h>
#import <libobjc.A.dylib/TKTonePickerViewControllerDelegate.h>
#import <libobjc.A.dylib/TKVibrationPickerViewControllerDelegate.h>

@interface SleepHealthAppPlugin.ScheduleOccurrenceViewController : UITableViewController <HKSHSleepScheduleComponentsEditViewHandling, HKSHScheduleOccurrenceComponentsAccessibilityTableViewCellDelegate, HKSHScheduleOccurrenceAlarmVolumeTableViewCellHandler, HKSwitchTableViewCellDelegate, TKTonePickerViewControllerDelegate, TKVibrationPickerViewControllerDelegate> {

	 model;
	 alarmPreviewPlayer;
	 alarmConfigurationObserver;
	 modelEditObserver;
	 significantTimeChangeObserver;
	 sleepDurationGoalObserver;
	 scheduleChangeObserver;
	 validScheduleRangeObserver;
	 sleepScheduleProvider;
	 delegate;
	 allowsDeletion;
	 hasFinishedNotifyingDelegate;
	 modelHasChanged;
	 dataSource;

}
-(void)handleSignificantTimeChange;
-(void)cancelButtonPressed;
-(void)switchCellValueChanged:(id)arg1 value:(BOOL)arg2 ;
-(void)scheduleOccurrenceComponentsAccessibilityTableViewCellDidUpdateValue:(id)arg1 ;
-(void)sleepScheduleComponentsEditViewEditingDidChange:(id)arg1 ;
-(void)sleepScheduleComponentsEditViewEditingDidEnd:(id)arg1 ;
-(void)saveButtonPressed;
-(void)scheduleOccurrenceAlarmVolumeEditingDidEnd:(id)arg1 ;
-(void)tonePickerViewController:(id)arg1 selectedToneWithIdentifier:(id)arg2 ;
-(void)tonePickerViewController:(id)arg1 willPresentVibrationPickerViewController:(id)arg2 ;
-(void)tonePickerViewController:(id)arg1 didDismissVibrationPickerViewController:(id)arg2 ;
-(void)vibrationPickerViewController:(id)arg1 selectedVibrationWithIdentifier:(id)arg2 ;
-(void)scheduleDayPickerDidChange:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidLoad;
-(void)restoreUserActivityState:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

