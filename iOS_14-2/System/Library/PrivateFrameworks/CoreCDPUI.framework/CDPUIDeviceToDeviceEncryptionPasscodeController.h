/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
*/

#import <CoreCDPUI/CoreCDPUI-Structs.h>
#import <libobjc.A.dylib/BFFPasscodeViewControllerDelegate.h>

@protocol CDPUIDeviceToDeviceEncryptionMessagingViewModelProtocol, CDPUIDeviceToDeviceEncryptionPasscodeValidationDelegate;
@class UIViewController, BFFPasscodeViewController;

@interface CDPUIDeviceToDeviceEncryptionPasscodeController : NSObject <BFFPasscodeViewControllerDelegate> {

	UIViewController* _presentingViewController;
	BFFPasscodeViewController* _passcodeViewController;
	/*^block*/id _passcodeValidationCompletion;
	os_unfair_lock_s _completionLock;
	id<CDPUIDeviceToDeviceEncryptionMessagingViewModelProtocol> _vm;
	id<CDPUIDeviceToDeviceEncryptionPasscodeValidationDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CDPUIDeviceToDeviceEncryptionPasscodeValidationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)passcodeControllerWithPresenter:(id)arg1 vm:(id)arg2 ;
-(id<CDPUIDeviceToDeviceEncryptionPasscodeValidationDelegate>)delegate;
-(void)setDelegate:(id<CDPUIDeviceToDeviceEncryptionPasscodeValidationDelegate>)arg1 ;
-(void)dealloc;
-(/*^block*/id)passcodeValidationCompletion;
-(void)setPasscodeValidationCompletion:(/*^block*/id)arg1 ;
-(void)dismissFlowWithLocalSecret:(id)arg1 error:(id)arg2 ;
-(void)createPasscodeStateWithCompletion:(/*^block*/id)arg1 ;
-(void)_userTappedCancel:(id)arg1 ;
-(void)passcodeViewController:(id)arg1 didFinishWithPasscodeCreation:(id)arg2 ;
-(id)passcodeViewControllerCustomFirstEntryInstructions:(id)arg1 ;
-(BOOL)passcodeViewControllerAllowSkip:(id)arg1 ;
@end

