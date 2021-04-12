/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/VSAuthenticationViewControllerDelegate.h>
#import <libobjc.A.dylib/VSIdentityProviderRequestManagerDelegate.h>

@protocol VSIdentityProviderViewControllerDelegate;
@class VSIdentityProvider, VSAuditToken, NSOperationQueue, VSImageLoadOperation, VSViewModel, VSIdentityProviderRequestManager, UIBarButtonItem, UIViewController, NSString;

@interface VSIdentityProviderViewController : UIViewController <VSAuthenticationViewControllerDelegate, VSIdentityProviderRequestManagerDelegate> {

	BOOL _canIssuePrivacyVouchers;
	BOOL _cancellationAllowed;
	VSIdentityProvider* _identityProvider;
	id<VSIdentityProviderViewControllerDelegate> _delegate;
	VSAuditToken* _auditToken;
	NSOperationQueue* _privateQueue;
	VSImageLoadOperation* _logoLoadOperation;
	VSViewModel* _viewModel;
	VSIdentityProviderRequestManager* _requestManager;
	UIBarButtonItem* _signInButtonItem;
	UIBarButtonItem* _cancelButtonItem;
	UIViewController* _currentlyPresentedIdentityProviderAlert;

}

@property (nonatomic,retain) NSOperationQueue * privateQueue;                                           //@synthesize privateQueue=_privateQueue - In the implementation block
@property (nonatomic,retain) VSImageLoadOperation * logoLoadOperation;                                  //@synthesize logoLoadOperation=_logoLoadOperation - In the implementation block
@property (nonatomic,retain) VSViewModel * viewModel;                                                   //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,retain) VSIdentityProviderRequestManager * requestManager;                         //@synthesize requestManager=_requestManager - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * signInButtonItem;                                        //@synthesize signInButtonItem=_signInButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * cancelButtonItem;                                        //@synthesize cancelButtonItem=_cancelButtonItem - In the implementation block
@property (nonatomic,retain) UIViewController * currentlyPresentedIdentityProviderAlert;                //@synthesize currentlyPresentedIdentityProviderAlert=_currentlyPresentedIdentityProviderAlert - In the implementation block
@property (nonatomic,readonly) VSIdentityProvider * identityProvider;                                   //@synthesize identityProvider=_identityProvider - In the implementation block
@property (assign,nonatomic,__weak) id<VSIdentityProviderViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) VSAuditToken * auditToken;                                                   //@synthesize auditToken=_auditToken - In the implementation block
@property (assign,nonatomic) BOOL canIssuePrivacyVouchers;                                              //@synthesize canIssuePrivacyVouchers=_canIssuePrivacyVouchers - In the implementation block
@property (assign,getter=isCancellationAllowed,nonatomic) BOOL cancellationAllowed;                     //@synthesize cancellationAllowed=_cancellationAllowed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id<VSIdentityProviderViewControllerDelegate>)delegate;
-(void)setDelegate:(id<VSIdentityProviderViewControllerDelegate>)arg1 ;
-(VSAuditToken *)auditToken;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)enqueueRequest:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)_dismiss;
-(void)setAuditToken:(VSAuditToken *)arg1 ;
-(VSIdentityProviderRequestManager *)requestManager;
-(void)_didCancel;
-(void)_cancelButtonPressed:(id)arg1 ;
-(UIBarButtonItem *)cancelButtonItem;
-(void)setCancelButtonItem:(UIBarButtonItem *)arg1 ;
-(void)_showViewController:(id)arg1 ;
-(VSViewModel *)viewModel;
-(void)setViewModel:(VSViewModel *)arg1 ;
-(NSOperationQueue *)privateQueue;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(VSIdentityProvider *)identityProvider;
-(void)_startObservingViewModel:(id)arg1 ;
-(void)_stopObservingViewModel:(id)arg1 ;
-(id)initWithIdentityProvider:(id)arg1 ;
-(void)_hideNavigationBarButtons;
-(void)_showNavigationBarButtons;
-(UIBarButtonItem *)signInButtonItem;
-(BOOL)isCancellationAllowed;
-(void)setLogoLoadOperation:(VSImageLoadOperation *)arg1 ;
-(void)_stopValidationAndShowButtons:(BOOL)arg1 ;
-(void)_signInButtonPressed:(id)arg1 ;
-(void)setSignInButtonItem:(UIBarButtonItem *)arg1 ;
-(id)_logoLoadOperationForPreferredImageSize:(CGSize)arg1 ;
-(void)setCancellationAllowed:(BOOL)arg1 ;
-(void)_startValidation;
-(void)_showValidationAlertForError:(id)arg1 ;
-(UIViewController *)currentlyPresentedIdentityProviderAlert;
-(void)setCurrentlyPresentedIdentityProviderAlert:(UIViewController *)arg1 ;
-(void)authenticationViewControllerDidCancel:(id)arg1 ;
-(void)identityProviderRequestManager:(id)arg1 finishedRequest:(id)arg2 withResult:(id)arg3 ;
-(void)identityProviderRequestManager:(id)arg1 didAuthenticateAccount:(id)arg2 forRequest:(id)arg3 ;
-(BOOL)identityProviderRequestManager:(id)arg1 requestsAlert:(id)arg2 ;
-(BOOL)currentAuthenticationViewControllerSupportsPreAuth;
-(BOOL)canIssuePrivacyVouchers;
-(void)setCanIssuePrivacyVouchers:(BOOL)arg1 ;
-(VSImageLoadOperation *)logoLoadOperation;
-(void)setRequestManager:(VSIdentityProviderRequestManager *)arg1 ;
@end

