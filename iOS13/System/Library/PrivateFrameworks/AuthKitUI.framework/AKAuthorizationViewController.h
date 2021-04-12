/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AKAuthorizationContainerViewControllerDelegate.h>
#import <libobjc.A.dylib/AKAuthorizationPaneViewControllerDelegate.h>

@protocol AKAuthorizationViewControllerDelegate;
@class AKAuthorizationPresentationContext, AKAuthorizationNavigationController, AKAuthorizationScopeChoices, NSString;

@interface AKAuthorizationViewController : UIViewController <AKAuthorizationContainerViewControllerDelegate, AKAuthorizationPaneViewControllerDelegate> {

	AKAuthorizationPresentationContext* _presentationContext;
	id<AKAuthorizationViewControllerDelegate> _delegate;
	AKAuthorizationNavigationController* _navigationController;
	AKAuthorizationScopeChoices* _scopeChoices;

}

@property (nonatomic,readonly) AKAuthorizationNavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,readonly) AKAuthorizationScopeChoices * scopeChoices;                              //@synthesize scopeChoices=_scopeChoices - In the implementation block
@property (nonatomic,readonly) AKAuthorizationPresentationContext * presentationContext;                //@synthesize presentationContext=_presentationContext - In the implementation block
@property (assign,nonatomic,__weak) id<AKAuthorizationViewControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id<AKAuthorizationViewControllerDelegate>)delegate;
-(void)setDelegate:(id<AKAuthorizationViewControllerDelegate>)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)_backBarButtonItem;
-(id)_cancelBarButtonItem;
-(AKAuthorizationNavigationController *)navigationController;
-(long long)modalPresentationStyle;
-(AKAuthorizationPresentationContext *)presentationContext;
-(void)authorizationPaneViewController:(id)arg1 didRequestIconWithCompletion:(/*^block*/id)arg2 ;
-(void)performPasswordAuthenticationForPaneViewController:(id)arg1 ;
-(void)authorizationPaneViewController:(id)arg1 pushEditScope:(id)arg2 presentationContext:(id)arg3 options:(id)arg4 ;
-(void)authorizationPaneViewController:(id)arg1 dismissWithAuthorization:(id)arg2 error:(id)arg3 ;
-(void)authorizationPaneViewController:(id)arg1 didRequestAuthorizationWithUserProvidedInformation:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)authorizationContainerViewControllerDidDismiss:(id)arg1 ;
-(void)_presentAuthorizationViewController;
-(BOOL)_isFirstTimeAppleIDAuthorization;
-(void)_presentFirstTimeViewController;
-(void)_presentConfirmPaneViewControllerReplacing:(BOOL)arg1 ;
-(id)firstTimeViewController;
-(id)passwordRequestController;
-(void)_presentContainerViewControllerWith:(id)arg1 ;
-(id)confirmPaneViewController;
-(void)_delegate_authorizationViewControllerDidCompleteWithAuthorization:(id)arg1 error:(id)arg2 ;
-(AKAuthorizationScopeChoices *)scopeChoices;
-(id)_logoBarButtonItem:(id)arg1 ;
-(void)_cancelButtonSelected:(id)arg1 ;
-(void)_backButtonSelected:(id)arg1 ;
-(void)presentConfirmPaneViewController;
-(void)performAppleIDAuthorizationForPaneViewController:(id)arg1 ;
-(id)initWithAuthorizationContext:(id)arg1 ;
-(void)presentAuthenticationChoiceUIWithCompletion:(/*^block*/id)arg1 ;
@end

