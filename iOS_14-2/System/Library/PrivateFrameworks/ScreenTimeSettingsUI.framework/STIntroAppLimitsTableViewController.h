/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <UIKitCore/UITableViewController.h>

@class STAllowance, NSDateComponentsFormatter;

@interface STIntroAppLimitsTableViewController : UITableViewController {

	BOOL _showingAllCategories;
	BOOL _showingDatePicker;
	STAllowance* _allowance;
	NSDateComponentsFormatter* _timeAmountFormatter;

}

@property (assign) BOOL showingAllCategories;                                      //@synthesize showingAllCategories=_showingAllCategories - In the implementation block
@property (assign) BOOL showingDatePicker;                                         //@synthesize showingDatePicker=_showingDatePicker - In the implementation block
@property (readonly) NSDateComponentsFormatter * timeAmountFormatter;              //@synthesize timeAmountFormatter=_timeAmountFormatter - In the implementation block
@property (readonly) STAllowance * allowance;                                      //@synthesize allowance=_allowance - In the implementation block
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)_datePickerChanged:(id)arg1 ;
-(STAllowance *)allowance;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_stIntroAppLimitsTableViewControllerCommonInit;
-(id)_selectedCategories;
-(BOOL)showingAllCategories;
-(BOOL)showingDatePicker;
-(NSDateComponentsFormatter *)timeAmountFormatter;
-(void)setShowingAllCategories:(BOOL)arg1 ;
-(void)setShowingDatePicker:(BOOL)arg1 ;
@end

