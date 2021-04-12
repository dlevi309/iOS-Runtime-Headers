/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,retain) AKAuthorizationPresentationContext * presentationContext;                  //@synthesize presentationContext=_presentationContext - In the implementation block
@property (assign,nonatomic,__weak) id<AKAuthorizationViewControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<AKAuthorizationViewControllerDelegate>)delegate;
-(AKAuthorizationPresentationContext *)presentationContext;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)modalPresentationStyle;
-(void)_cancelButtonSelected:(id)arg1 ;
-(void)setDelegate:(id<AKAuthorizationViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(id)_cancelBarButtonItem;
-(id)initWithCoder:(id)arg1 ;
-(void)setPresentationContext:(AKAuthorizationPresentationContext *)arg1 ;
-(id)_backBarButtonItem;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(AKAuthorizationNavigationController *)navigationController;
-(void)authorizationContainerViewControllerDidDismiss:(id)arg1 ;
-(void)_presentAuthorizationViewController;
-(BOOL)_isFirstTimeAppleIDAuthorization;
-(void)_presentFirstTimeViewController;
-(void)_presentInputPaneViewControllerReplacing:(BOOL)arg1 ;
-(id)firstTimeViewController;
-(id)_inputPaneViewController;
-(void)_presentContainerViewControllerWith:(id)arg1 ;
-(void)_delegate_authorizationViewControllerDidCompleteWithAuthorization:(id)arg1 error:(id)arg2 ;
-(id)_logoBarButtonItem:(id)arg1 ;
-(AKAuthorizationScopeChoices *)scopeChoices;
-(void)_backButtonSelected:(id)arg1 ;
-(void)presentInputPaneViewController;
-(void)authorizationPaneViewController:(id)arg1 dismissWithAuthorization:(id)arg2 error:(id)arg3 ;
-(void)authorizationPaneViewController:(id)arg1 didRequestAuthorizationWithUserProvidedInformation:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)authorizationPaneViewController:(id)arg1 didRequestIconWithCompletion:(/*^block*/id)arg2 ;
-(void)authorizationPaneViewController:(id)arg1 pushEditScope:(id)arg2 presentationContext:(id)arg3 options:(id)arg4 ;
-(void)performAppleIDAuthorizationForPaneViewController:(id)arg1 ;
-(void)performPasswordAuthenticationForPaneViewController:(id)arg1 ;
-(id)initWithAuthorizationContext:(id)arg1 ;
-(void)presentConfirmPaneViewController;
-(void)presentAuthenticationChoiceUIWithCompletion:(/*^block*/id)arg1 ;
@end

