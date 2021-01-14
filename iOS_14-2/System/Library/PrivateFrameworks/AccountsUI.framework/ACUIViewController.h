/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
*/

#import <Preferences/PSListController.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <libobjc.A.dylib/ACUIAccountOperationsDelegate.h>

@protocol ACUIViewControllerAccountChangeObserver;
@class UIProgressHUD, UIBarButtonItem, ACAccountStore, ACUIAccountOperationsHelper, NSString;

@interface ACUIViewController : PSListController <UIActionSheetDelegate, ACUIAccountOperationsDelegate> {

	BOOL _addedToTaskList;
	BOOL _activityInProgress;
	/*^block*/id _confirmationViewCompletion;
	UIProgressHUD* _hud;
	BOOL _validationInProgress;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _cancelButton;
	ACAccountStore* _accountStore;
	ACUIAccountOperationsHelper* _accountOperationsHelper;
	id<ACUIViewControllerAccountChangeObserver> _accountChangeObserver;

}

@property (assign,nonatomic) BOOL validationInProgress;                                                             //@synthesize validationInProgress=_validationInProgress - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                                                          //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * cancelButton;                                                        //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;                                                         //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) ACUIAccountOperationsHelper * accountOperationsHelper;                                 //@synthesize accountOperationsHelper=_accountOperationsHelper - In the implementation block
@property (assign,nonatomic,__weak) id<ACUIViewControllerAccountChangeObserver> accountChangeObserver;              //@synthesize accountChangeObserver=_accountChangeObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldPresentAsModalSheet;
+(id)acuiAccountStore;
-(UIBarButtonItem *)doneButton;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)cancelButton;
-(void)setCancelButton:(UIBarButtonItem *)arg1 ;
-(id)specifiers;
-(void)setAccountChangeObserver:(id<ACUIViewControllerAccountChangeObserver>)arg1 ;
-(id)init;
-(ACAccountStore *)accountStore;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(void)viewDidLoad;
-(void)cancelButtonTapped:(id)arg1 ;
-(BOOL)shouldReloadSpecifiersOnResume;
-(void)doneButtonTapped:(id)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 ;
-(id<ACUIViewControllerAccountChangeObserver>)accountChangeObserver;
-(void)dealloc;
-(void)hideActivityInProgressUI;
-(BOOL)isPresentedAsModalSheet;
-(void)showConfirmationWithActions:(id)arg1 title:(id)arg2 message:(id)arg3 ;
-(void)setTaskCompletionAssertionEnabled:(BOOL)arg1 ;
-(void)showConfirmationWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(id)_alertViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 cancelButtonIndex:(long long)arg4 context:(id)arg5 ;
-(id)_actionSheetWithButtons:(id)arg1 title:(id)arg2 destructive:(BOOL)arg3 cancelButtonIndex:(long long)arg4 context:(id)arg5 ;
-(id)showConfirmationViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(BOOL)arg4 cancelButtonIndex:(long long)arg5 context:(id)arg6 forceAlert:(BOOL)arg7 completion:(/*^block*/id)arg8 ;
-(id)showConfirmationViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(BOOL)arg4 cancelButtonIndex:(long long)arg5 context:(id)arg6 completion:(/*^block*/id)arg7 ;
-(id)showAlertViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(BOOL)arg4 cancelButtonIndex:(long long)arg5 context:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)confirmationView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(id)showConfirmationViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(BOOL)arg4 context:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)startValidationWithPrompt:(id)arg1 userInteraction:(BOOL)arg2 ;
-(BOOL)validationInProgress;
-(void)setValidationInProgress:(BOOL)arg1 ;
-(id)_effectiveParentController;
-(void)reloadParentSpecifier;
-(void)reloadAllParentSpecifiersAnimated:(BOOL)arg1 ;
-(void)reloadAllParentSpecifiers;
-(void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2 ;
-(void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2 ;
-(void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4 ;
-(id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2 ;
-(void)showConfirmationForDeletingAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)showAlertViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(BOOL)arg4 context:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)showConfirmationViewForDeletingAccount:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)startValidationWithPrompt:(id)arg1 ;
-(void)updateValidationPrompt:(id)arg1 ;
-(void)stopValidationWithPrompt:(id)arg1 showButtons:(BOOL)arg2 ;
-(void)setCellsChecked:(BOOL)arg1 ;
-(void)removeParentSpecifier;
-(ACUIAccountOperationsHelper *)accountOperationsHelper;
-(void)showActivityInProgressUIWithMessage:(id)arg1 ;
-(void)hideActivityInProgressUIWithDelay:(double)arg1 ;
-(BOOL)isShowingActivityInProgressUI;
-(void)setAccountOperationsHelper:(ACUIAccountOperationsHelper *)arg1 ;
@end
