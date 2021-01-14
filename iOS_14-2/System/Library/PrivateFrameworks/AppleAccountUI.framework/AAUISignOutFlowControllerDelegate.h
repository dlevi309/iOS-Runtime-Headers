/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/

#import <libobjc.A.dylib/AAUISignOutControllerDelegate.h>
#import <libobjc.A.dylib/AASignOutFlowControllerDelegate.h>

@class ACAccountStore, UIViewController, NSString;

@interface AAUISignOutFlowControllerDelegate : NSObject <AAUISignOutControllerDelegate, AASignOutFlowControllerDelegate> {

	/*^block*/id _pendingSignOutCompletion;
	ACAccountStore* _accountStore;
	UIViewController* _presentingViewController;

}

@property (assign,nonatomic,__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithPresentingViewController:(id)arg1 ;
-(void)signOutFlowController:(id)arg1 showAlertWithTitle:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)signOutFlowController:(id)arg1 disableFindMyDeviceForAccount:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)signOutFlowController:(id)arg1 signOutAccount:(id)arg2 completion:(/*^block*/id)arg3 ;
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(BOOL)_isRestoringFromiCloud;
-(void)_disableDeviceLocatorForAccount:(id)arg1 inViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)signOutController:(id)arg1 didCompleteWithSuccess:(BOOL)arg2 error:(id)arg3 ;
-(void)signOutControllerDidCancel:(id)arg1 ;
@end

