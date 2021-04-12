/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/

#import <AppleAccountUI/AppleAccountUI-Structs.h>
#import <libobjc.A.dylib/DevicePINControllerDelegate.h>

@protocol AAUIPasscodeValidationDelegate;
@class AAUICDPHelper, PSSetupController, AAUIDevicePINController, NSString;

@interface AAUIPasscodeValidateController : NSObject <DevicePINControllerDelegate> {

	AAUICDPHelper* _helper;
	PSSetupController* _navController;
	AAUIDevicePINController* _pinController;
	/*^block*/id _passcodeValidationCompletion;
	os_unfair_lock_s _completionLock;
	id<AAUIPasscodeValidationDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AAUIPasscodeValidationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)stingrayControllerWithPresenter:(id)arg1 forceInline:(BOOL)arg2 ;
+(id)stingrayControllerWithPresenter:(id)arg1 ;
-(id<AAUIPasscodeValidationDelegate>)delegate;
-(id)_presentingViewController;
-(void)setDelegate:(id<AAUIPasscodeValidationDelegate>)arg1 ;
-(void)devicePINController:(id)arg1 didFailToSetPinWithError:(id)arg2 ;
-(void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2 ;
-(void)didCancelEnteringPIN;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(void)dealloc;
-(void)validatePasscodeStateWithCompletion:(/*^block*/id)arg1 ;
-(/*^block*/id)passcodeValidationCompletion;
-(void)setPasscodeValidationCompletion:(/*^block*/id)arg1 ;
-(void)_showPasscodePromptWithMode:(int)arg1 ;
-(void)_setupNavController;
-(id)_specifierForMode:(int)arg1 ;
-(void)dismissFlowWithLocalSecret:(id)arg1 error:(id)arg2 ;
-(void)validateStingrayPasscodeStateWithCompletion:(/*^block*/id)arg1 ;
-(void)createPasscodeStateWithCompletion:(/*^block*/id)arg1 ;
-(void)devicePINController:(id)arg1 canCancelWithCompletion:(/*^block*/id)arg2 ;
@end

