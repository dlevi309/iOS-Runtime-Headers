/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/AAUISignInViewControllerInternalDelegate.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@protocol AIDAServiceOwnerProtocol;
@class NSDictionary, UMUserPersona, UMUserPersonaContext, NSString;

@interface AAUISignInController : UINavigationController <AAUISignInViewControllerInternalDelegate, UIAdaptivePresentationControllerDelegate> {

	NSDictionary* _authenticationResults;
	id<AIDAServiceOwnerProtocol> _serviceOwnersManager;
	long long _aidaOperationUIPermissions;
	UMUserPersona* _originalPersona;
	UMUserPersonaContext* _originalPersonaContext;
	long long _currentStyle;
	BOOL _canEditUsername;
	BOOL __shouldForceOperation;
	NSString* _username;
	NSString* _serviceType;

}

@property (setter=_setAuthenticationResults:,nonatomic,retain) NSDictionary * _authenticationResults; 
@property (setter=_setServiceOwnersManager:,nonatomic,retain) id<AIDAServiceOwnerProtocol> _serviceOwnersManager; 
@property (assign,setter=_setShouldForceOperation:,nonatomic) BOOL _shouldForceOperation;                                      //@synthesize _shouldForceOperation=__shouldForceOperation - In the implementation block
@property (nonatomic,copy) NSString * username;                                                                                //@synthesize username=_username - In the implementation block
@property (assign,nonatomic) BOOL canEditUsername;                                                                             //@synthesize canEditUsername=_canEditUsername - In the implementation block
@property (assign,nonatomic,__weak) id<AAUISignInControllerDelegate> delegate; 
@property (nonatomic,retain) NSString * serviceType;                                                                           //@synthesize serviceType=_serviceType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(NSString *)serviceType;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(void)_commonInit;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(NSDictionary *)_authenticationResults;
-(void)_updateStyleIfNeeded;
-(void)willAuthenticateWithContext:(id)arg1 ;
-(void)signInViewController:(id)arg1 didCompleteWithAuthenticationResults:(id)arg2 ;
-(void)signInViewControllerDidCancel:(id)arg1 ;
-(BOOL)canEditUsername;
-(void)setCanEditUsername:(BOOL)arg1 ;
-(id)_spinnerViewController;
-(id)_signInViewController;
-(void)_mainQueue_continueSignInWithAuthenticationResults:(id)arg1 parentViewController:(id)arg2 ;
-(void)_performAuthenticationForAccount:(id)arg1 serviceType:(id)arg2 inViewController:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_allowsAccountCreationForService:(id)arg1 ;
-(BOOL)_showsServiceIconsForService:(id)arg1 ;
-(id)_messageStringForService:(id)arg1 ;
-(BOOL)_isAuthenticatingPrimary:(id)arg1 ;
-(id)_spinnerMessageForService:(id)arg1 ;
-(id<AIDAServiceOwnerProtocol>)_serviceOwnersManager;
-(void)_mainQueue_presentContinueUsingInViewController:(id)arg1 account:(id)arg2 serviceType:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_continueUsingControllerForAccount:(id)arg1 serviceType:(id)arg2 inViewController:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_delegate_signInControllerDidCompleteWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)_attemptSignInForService:(id)arg1 withAuthenticationResults:(id)arg2 parentViewController:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_attemptSignInForServices:(id)arg1 withAuthenticationResults:(id)arg2 parentViewController:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_performSilentRenewalWithResults:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_shouldForceOperation;
-(void)_mainQueue_presentAlertForError:(id)arg1 inViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_mainQueue_presentSpinnerViewControllerInParentViewController:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_delegate_signInControllerDidCancel;
-(void)_setAuthenticationResults:(id)arg1 ;
-(void)_setServiceOwnersManager:(id)arg1 ;
-(void)prepareInViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setShouldForceOperation:(BOOL)arg1 ;
@end

