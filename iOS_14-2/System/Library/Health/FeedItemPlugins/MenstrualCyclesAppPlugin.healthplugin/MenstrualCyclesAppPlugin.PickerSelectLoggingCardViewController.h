/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/

#import <MenstrualCyclesAppPlugin/MenstrualCyclesAppPlugin.LoggingCardViewController.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDelegatePrivate.h>

@interface MenstrualCyclesAppPlugin.PickerSelectLoggingCardViewController : MenstrualCyclesAppPlugin.LoggingCardViewController <UIPickerViewDataSource, UIPickerViewDelegate, UITableViewDataSource, UITableViewDelegate, UITableViewDelegatePrivate> {

	 dataSource;
	 $__lazy_storage_$_cell;
	 pickedIndex;

}
-(BOOL)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(BOOL)tableView:(id)arg1 shouldHaveFullLengthBottomSeparatorForSection:(long long)arg2 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

