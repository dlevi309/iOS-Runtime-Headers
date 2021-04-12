/*
* Generated on Monday, March 1, 2021 at 2:35:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/

#import <OnBoardingKit/OBTableWelcomeController.h>
#import <libobjc.A.dylib/HKSwitchTableViewCellDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@interface MenstrualCyclesAppPlugin.MenstrualCyclesOnboardingPeriodTrackingViewController : OBTableWelcomeController <HKSwitchTableViewCellDelegate, UITableViewDelegate, UITableViewDataSource> {

	 userInfo;
	 delegate;
	 tableViewHeight;
	 $__lazy_storage_$_heightAnchor;

}
-(void)switchCellValueChanged:(id)arg1 value:(BOOL)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 ;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)nextButtonTapped:(id)arg1 ;
@end

