/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <libobjc.A.dylib/DevicePINControllerDelegate.h>
#import <libobjc.A.dylib/PKNewDevicePasscodeViewControllerDelegate.h>

@protocol PKPaymentSetupViewControllerDelegate;
@class PKPaymentProvisioningController, UINavigationController, NSString;

@interface PKPasscodeUpgradeFlowController : NSObject <DevicePINControllerDelegate, PKNewDevicePasscodeViewControllerDelegate> {

	long long _context;
	PKPaymentProvisioningController* _provisioningController;
	UINavigationController* _navigationController;
	/*^block*/id _completionHandler;
	long long _presentedViewControllerCount;
	BOOL _upgradeRequiredToAddNewPass;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;

}

@property (nonatomic,__weak,readonly) id<PKPaymentSetupViewControllerDelegate> setupDelegate;              //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (nonatomic,readonly) long long context;                                                          //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) id<PKPaymentWebServiceTargetDeviceProtocol> targetDevice; 
@property (assign,nonatomic) BOOL upgradeRequiredToAddNewPass;                                             //@synthesize upgradeRequiredToAddNewPass=_upgradeRequiredToAddNewPass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(long long)context;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(id<PKPaymentWebServiceTargetDeviceProtocol>)targetDevice;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(id)initWithPaymentProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 navigationController:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setUpgradeRequiredToAddNewPass:(BOOL)arg1 ;
-(void)showPasscodeUpgradeFlow;
-(void)beginShowingViewController;
-(void)endedShowingViewController;
-(void)newDevicePasscodeViewController:(id)arg1 didFinishSettingPasscode:(BOOL)arg2 withError:(id)arg3 ;
-(BOOL)upgradeRequiredToAddNewPass;
-(void)dismissPasscodeUpgradeFlow;
-(void)_showPasscodeUpgradeExplanation;
-(void)_completeWithShouldContinue:(BOOL)arg1 error:(id)arg2 ;
-(void)_showNewDevicePasscodeViewControllerWithCurrentPasscode:(id)arg1 ;
-(BOOL)_isWatchTarget;
-(void)_showChangePasscodeFlow;
-(void)_showCurrentDevicePasscodeViewController;
@end

