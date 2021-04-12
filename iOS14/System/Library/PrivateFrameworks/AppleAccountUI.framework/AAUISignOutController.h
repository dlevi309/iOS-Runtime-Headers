/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/AAUIDataclassPickerViewControllerDelegate.h>

@class ACAccountStore, NSDictionary, ACAccount, NSString;

@interface AAUISignOutController : UINavigationController <AAUIDataclassPickerViewControllerDelegate> {

	ACAccountStore* _accountStore;
	long long _currentStyle;
	NSDictionary* _dataclassOptions;
	ACAccount* _account;

}

@property (setter=_setAccountStore:,nonatomic,retain) ACAccountStore * _accountStore;                  //@synthesize accountStore=_accountStore - In the implementation block
@property (setter=_setDataclassOptions:,nonatomic,copy) NSDictionary * _dataclassOptions;              //@synthesize dataclassOptions=_dataclassOptions - In the implementation block
@property (assign,nonatomic,__weak) id<AAUISignOutControllerDelegate> delegate; 
@property (nonatomic,readonly) ACAccount * account;                                                    //@synthesize account=_account - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ACAccount *)account;
-(void)viewWillLayoutSubviews;
-(ACAccountStore *)_accountStore;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_setAccountStore:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLoad;
-(void)_updateStyleIfNeeded;
-(void)prepareInViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(NSDictionary *)_dataclassOptions;
-(id)footerTextForDataclassPickerViewController:(id)arg1 ;
-(id)titleTextForDataclassPickerViewController:(id)arg1 ;
-(id)messageTextForDataclassPickerViewController:(id)arg1 ;
-(void)dataclassPickerViewControllerDidCancel:(id)arg1 ;
-(void)dataclassPickerViewController:(id)arg1 didCompleteWithDataclassActions:(id)arg2 ;
-(id)_actionableDataclassOptions;
-(id)_spinnerViewControllerForActions:(id)arg1 ;
-(id)_dataclassViewController;
-(void)_mainQueue_continueSignOutWithDataclassActions:(id)arg1 ;
-(BOOL)_hasiCloudPhotosData;
-(id)_appendToSignoutMessage:(id)arg1 appendedString:(id)arg2 ;
-(BOOL)_hasiCloudDriveData;
-(BOOL)_hasHealthData;
-(void)_mainQueue_promptForConfirmationInViewController:(id)arg1 simplified:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)_signOutMessageSimplified:(BOOL)arg1 withConfirmation:(BOOL)arg2 ;
-(void)_delegate_signOutControllerDidCompleteWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(BOOL)_hasPaymentPasses;
-(void)_delegate_signOutControllerDidCancel;
-(void)_mainQueue_presentSpinnerPageWithDataclassActions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setDataclassOptions:(id)arg1 ;
@end

