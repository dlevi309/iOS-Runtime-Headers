/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/

#import <OnBoardingKit/OBTableWelcomeController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/HKSwitchTableViewCellDelegate.h>

@interface MenstrualCyclesAppPlugin.MenstrualCyclesOnboardingFertilityTrackingViewController : OBTableWelcomeController <UITableViewDataSource, UITableViewDelegate, HKSwitchTableViewCellDelegate> {

	 userInfo;
	 delegate;
	 tableViewHeight;
	 $__lazy_storage_$_heightAnchor;

}
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)switchCellValueChanged:(id)arg1 value:(BOOL)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(void)cancelButtonTapped:(id)arg1 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 ;
-(void)nextButtonTapped:(id)arg1 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 ;
-(void)viewDidLayoutSubviews;
@end

