/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepHealthUI.framework/SleepHealthUI
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/HKFeatureAvailabilityProvidingObserver.h>

@class HKSPSleepStore;

@interface HKSHQuickScheduleManagementViewController : UINavigationController <HKFeatureAvailabilityProvidingObserver> {

	 sleepStore;
	 sleepDelegate;
	 sleepScheduleProvider;
	 featureAvailability;
	 appStateObserver;

}

@property (readonly,nonatomic) HKSPSleepStore * sleepStore; 
@property (assign,__weak,nonatomic) id<HKSHQuickScheduleManagementViewControllerDelegate> sleepDelegate; 
@property (readonly,nonatomic) long long preferredUserInterfaceStyle; 
-(void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)arg1 ;
-(void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)arg1 ;
-(void)cancel;
-(void)viewDidAppear:(BOOL)arg1 ;
-(HKSPSleepStore *)sleepStore;
-(id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2 ;
-(id)initWithRootViewController:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(long long)preferredUserInterfaceStyle;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithSleepStore:(id)arg1 ;
-(id<HKSHQuickScheduleManagementViewControllerDelegate>)sleepDelegate;
-(void)setSleepDelegate:(id<HKSHQuickScheduleManagementViewControllerDelegate>)arg1 ;
-(id)initWithSleepStore:(id)arg1 healthStore:(id)arg2 ;
@end

