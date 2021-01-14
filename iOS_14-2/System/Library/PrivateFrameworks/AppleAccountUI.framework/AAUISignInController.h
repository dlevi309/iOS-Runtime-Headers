/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/AAUISignInViewControllerInternalDelegate.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@protocol AIDAServiceOwnerProtocol;
@class NSDictionary, CDPUIController, AAUISignInFlowControllerDelegate, UMUserPersona, UMUserPersonaContext, NSString;

@interface AAUISignInController : UINavigationController <AAUISignInViewControllerInternalDelegate, UIAdaptivePresentationControllerDelegate> {

	NSDictionary* _authenticationResults;
	id<AIDAServiceOwnerProtocol> _serviceOwnersManager;
	long long _aidaOperationUIPermissions;
	CDPUIController* _cdpUIController;
	AAUISignInFlowControllerDelegate* _flowControllerDelegate;
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)signInViewControllerDidCancel:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(BOOL)_isAuthenticatingPrimary:(id)arg1 ;
-(void)_attemptSignInForCloudAndInactiveStoreWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_delegate_signInControllerDidCompleteWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)setCanEditUsername:(BOOL)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(void)_setServiceOwnersManager:(id)arg1 ;
-(void)_mainQueue_continueSignInWithAuthenticationResults:(id)arg1 parentViewController:(id)arg2 ;
-(void)_mainQueue_presentContinueUsingInViewController:(id)arg1 account:(id)arg2 serviceType:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_attemptSignInForService:(id)arg1 withAuthenticationResults:(id)arg2 parentViewController:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_spinnerViewController;
-(void)_setAuthenticationResults:(id)arg1 ;
-(void)_delegate_signInControllerDidCancel;
-(unsigned long long)supportedInterfaceOrientations;
-(void)_mainQueue_presentSpinnerViewControllerInParentViewController:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setServiceType:(NSString *)arg1 ;
-(NSString *)username;
-(BOOL)_showsServiceIconsForService:(id)arg1 ;
-(NSDictionary *)_authenticationResults;
-(void)viewDidLoad;
-(void)willAuthenticateWithContext:(id)arg1 ;
-(void)_updateStyleIfNeeded;
-(void)_mainQueue_presentAlertForError:(id)arg1 inViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(id)_spinnerMessageForService:(id)arg1 ;
-(void)prepareInViewController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_messageStringForService:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(NSString *)serviceType;
-(BOOL)canEditUsername;
-(id<AIDAServiceOwnerProtocol>)_serviceOwnersManager;
-(void)_performAuthenticationForAccount:(id)arg1 serviceType:(id)arg2 inViewController:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)serviceContextWithResults:(id)arg1 parentViewController:(id)arg2 ;
-(id)_continueUsingControllerForAccount:(id)arg1 serviceType:(id)arg2 inViewController:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_shouldForceOperation;
-(void)signInViewController:(id)arg1 didCompleteWithAuthenticationResults:(id)arg2 ;
-(void)_setShouldForceOperation:(BOOL)arg1 ;
-(BOOL)_allowsAccountCreationForService:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)_signInViewController;
@end

