/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(ACAccount *)account;
-(void)_setAccountStore:(id)arg1 ;
-(ACAccountStore *)_accountStore;
-(id)initWithAccount:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(unsigned long long)supportedInterfaceOrientations;
-(void)_updateStyleIfNeeded;
-(NSDictionary *)_dataclassOptions;
-(id)footerTextForDataclassPickerViewController:(id)arg1 ;
-(void)dataclassPickerViewControllerDidCancel:(id)arg1 ;
-(void)dataclassPickerViewController:(id)arg1 didCompleteWithDataclassActions:(id)arg2 ;
-(void)prepareInViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_actionableDataclassOptions;
-(id)_spinnerViewControllerForActions:(id)arg1 ;
-(id)_dataclassViewController;
-(void)_mainQueue_continueSignOutWithDataclassActions:(id)arg1 ;
-(BOOL)_hasiCloudPhotosData;
-(id)_appendToSignoutMessage:(id)arg1 appendedString:(id)arg2 ;
-(BOOL)_hasiCloudDriveData;
-(BOOL)_hasHealthData;
-(BOOL)_hasPaymentPasses;
-(void)_mainQueue_promptForConfirmationInViewController:(id)arg1 simplified:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)_signOutMessageSimplified:(BOOL)arg1 withConfirmation:(BOOL)arg2 ;
-(void)_delegate_signOutControllerDidCompleteWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)_delegate_signOutControllerDidCancel;
-(void)_mainQueue_presentSpinnerPageWithDataclassActions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setDataclassOptions:(id)arg1 ;
@end

