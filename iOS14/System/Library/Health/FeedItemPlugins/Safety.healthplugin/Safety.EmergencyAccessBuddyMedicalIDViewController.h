/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/Safety.healthplugin/Safety
*/

#import <OnBoardingKit/OBTableWelcomeController.h>
#import <libobjc.A.dylib/HKMedicalIDViewControllerDelegate.h>

@interface Safety.EmergencyAccessBuddyMedicalIDViewController : OBTableWelcomeController <HKMedicalIDViewControllerDelegate> {

	 healthStore;
	 medicalIDCache;
	 medicalIDViewController;
	 didShowEditMedicalIDOnViewDidAppear;
	 tableViewHeight;
	 $__lazy_storage_$_tableViewHeightLayoutConstraint;

}
-(void)medicalIDViewControllerDidCancel:(id)arg1 ;
-(void)medicalIDViewControllerDidSave:(id)arg1 ;
-(void)medicalIDViewControllerDidUpdate:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 ;
-(void)didTapCancel:(id)arg1 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 ;
-(void)viewDidLayoutSubviews;
-(void)didTapNext:(id)arg1 ;
@end

