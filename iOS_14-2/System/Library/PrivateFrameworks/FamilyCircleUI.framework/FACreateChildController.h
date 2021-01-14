/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <libobjc.A.dylib/FANavigationControllerDelegate.h>

@protocol FACreateChildControllerDelegate;
@class UIViewController, ACAccount, FANavigationController;

@interface FACreateChildController : NSObject <FANavigationControllerDelegate> {

	id<FACreateChildControllerDelegate> _delegate;
	UIViewController* _presentingViewController;
	ACAccount* _appleAccount;
	FANavigationController* _navController;

}

@property (nonatomic,retain) ACAccount * appleAccount;                                         //@synthesize appleAccount=_appleAccount - In the implementation block
@property (nonatomic,retain) FANavigationController * navController;                           //@synthesize navController=_navController - In the implementation block
@property (assign,nonatomic,__weak) id<FACreateChildControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;               //@synthesize presentingViewController=_presentingViewController - In the implementation block
-(FANavigationController *)navController;
-(id<FACreateChildControllerDelegate>)delegate;
-(UIViewController *)presentingViewController;
-(void)setDelegate:(id<FACreateChildControllerDelegate>)arg1 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(ACAccount *)appleAccount;
-(void)setNavController:(FANavigationController *)arg1 ;
-(void)_dismissPresentedViewControllerWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithAppleAccount:(id)arg1 ;
-(void)createChildAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)_setupPresentedViewController;
-(id)_createChildAuthContext;
-(void)repairChildAccountWithAuthenticationResults:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_repairFAContextWithAuthResults:(id)arg1 ;
-(id)_repairParametersFromAuthResults:(id)arg1 ;
-(id)_repairAuthContextWithAuthResults:(id)arg1 ;
-(void)navigationController:(id)arg1 didPresentInitialViewController:(id)arg2 ;
-(void)navigationController:(id)arg1 presentViewController:(id)arg2 ;
-(void)setAppleAccount:(ACAccount *)arg1 ;
@end

