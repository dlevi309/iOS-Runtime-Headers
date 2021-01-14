/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/SleepHealthAppPlugin.healthplugin/SleepHealthAppPlugin
*/

#import <SleepHealthAppPlugin/SleepHealthAppPlugin-Structs.h>
#import <OnBoardingKit/OBTableWelcomeController.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/HKSPSleepStoreObserver.h>

@interface SleepHealthAppPlugin.SleepOnboardingFlowTableViewController : OBTableWelcomeController <UITableViewDelegate, HKSPSleepStoreObserver> {

	 userInfo;
	 delegate;
	 dataSourceAdaptor;
	 dataSource;
	 observerContext;
	 contentSizeKeyPath;
	 heightConstraint;

}
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)sleepStore:(id)arg1 sleepScheduleDidChange:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)sleepStore:(id)arg1 sleepSettingsDidChange:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)dealloc;
@end

