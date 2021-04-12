/*
* Generated on Monday, March 1, 2021 at 2:34:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/

#import <HealthUI/HKTableViewController.h>

@interface HealthRecordsUI.FilterSettingsViewController : HKTableViewController {

	 delegate;
	 categories;
	 selectedCategories;
	 accounts;
	 selectedAccounts;
	 defaultCellIdentifier;
	 defaultHeaderIdentifier;
	 defaultSectionContentInset;
	 defaultSectionCornerRadius;

}
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)doneButtonTapped;
-(id)initWithDelegate:(id)arg1 selectedCategories:(id)arg2 selectedAccounts:(id)arg3 ;
-(id)initWithUsingInsetStyling:(BOOL)arg1 ;
@end

