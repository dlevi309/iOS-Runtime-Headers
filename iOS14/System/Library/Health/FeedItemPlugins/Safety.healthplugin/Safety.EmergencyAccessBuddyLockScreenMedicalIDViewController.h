/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/Safety.healthplugin/Safety
*/

#import <OnBoardingKit/OBTableWelcomeController.h>

@interface Safety.EmergencyAccessBuddyLockScreenMedicalIDViewController : OBTableWelcomeController {

	 healthStore;
	 medicalIDCache;
	 initialShowWhenLocked;
	 switchCell;
	 diffableDataSource;
	 tableViewHeight;
	 $__lazy_storage_$_tableViewHeightLayoutConstraint;

}
-(void)viewDidLoad;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 ;
-(void)didTapCancel:(id)arg1 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 ;
-(void)viewDidLayoutSubviews;
-(void)didTapNext:(id)arg1 ;
@end

