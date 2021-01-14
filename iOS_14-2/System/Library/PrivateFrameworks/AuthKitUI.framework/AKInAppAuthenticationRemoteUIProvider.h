/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <libobjc.A.dylib/AKBasicLoginControllerDelegate.h>
#import <libobjc.A.dylib/AKInAppAuthenticationUIProvider.h>

@class AKBasicLoginAlertController, AKBasicLoginViewController, UINavigationController, AKInAppAuthenticationRemoteUIDelegate, AKAppleIDAuthenticationInAppContext, RemoteUIController, NSString;

@interface AKInAppAuthenticationRemoteUIProvider : NSObject <AKBasicLoginControllerDelegate, AKInAppAuthenticationUIProvider> {

	AKBasicLoginAlertController* _basicLoginAlertController;
	AKBasicLoginViewController* _basicLoginViewController;
	UINavigationController* _navController;
	AKInAppAuthenticationRemoteUIDelegate* _remoteUIControllerDelegate;
	AKAppleIDAuthenticationInAppContext* _context;
	RemoteUIController* _remoteUIController;

}

@property (assign,nonatomic,__weak) AKAppleIDAuthenticationInAppContext * context;                              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) RemoteUIController * remoteUIController;                                           //@synthesize remoteUIController=_remoteUIController - In the implementation block
@property (nonatomic,readonly) AKInAppAuthenticationRemoteUIDelegate * remoteUIControllerDelegate;              //@synthesize remoteUIControllerDelegate=_remoteUIControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dismissSecondFactorUIWithCompletion:(/*^block*/id)arg1 ;
-(void)presentBiometricOrPasscodeValidationForAppleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentServerProvidedUIWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithContext:(id)arg1 ;
-(void)dismissKeepUsingUIWithCompletion:(/*^block*/id)arg1 ;
-(void)dismissNativeRecoveryUIWithCompletion:(/*^block*/id)arg1 ;
-(void)presentBasicLoginUIWithCompletion:(/*^block*/id)arg1 ;
-(void)presentSecondFactorAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4 ;
-(AKAppleIDAuthenticationInAppContext *)context;
-(void)dismissServerProvidedUIWithCompletion:(/*^block*/id)arg1 ;
-(void)presentSecondFactorUIWithCompletion:(/*^block*/id)arg1 ;
-(void)presentKeepUsingUIForAppleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentNativeRecoveryUIWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)willPresentModalNavigationController:(id)arg1 ;
-(void)dismissBasicLoginUIWithCompletion:(/*^block*/id)arg1 ;
-(void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(/*^block*/id)arg4 ;
-(RemoteUIController *)remoteUIController;
-(id)_navController;
-(void)_startAnimating;
-(void)dealloc;
-(void)setContext:(AKAppleIDAuthenticationInAppContext *)arg1 ;
-(void)setRemoteUIController:(RemoteUIController *)arg1 ;
-(void)basicLoginControllerDidPresent:(id)arg1 ;
-(void)basicLoginControllerWillDismiss:(id)arg1 ;
-(void)basicLoginControllerDidDismiss:(id)arg1 ;
-(void)_clearRemoteUIController;
-(BOOL)_shouldShowAsView;
-(void)presentBasicLoginUIAsViewWithCompletion:(/*^block*/id)arg1 ;
-(void)presentBasicLoginUIAsAlertWithCompletion:(/*^block*/id)arg1 ;
-(void)presentLoginAlertUIAsViewWithError:(id)arg1 title:(id)arg2 message:(id)arg3 waitForInteraction:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 waitForInteraction:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)cleanUpBasicLoginWithCompletion:(/*^block*/id)arg1 ;
-(id)_secondFactorActionsForAlert:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_contextWillDismissLoginAlertController;
-(void)_contextDidPresentLoginController;
-(void)_contextDidDismissLoginAlertController;
-(void)_updateReason;
-(id)_actionsForLoginWithCompletion:(/*^block*/id)arg1 ;
-(void)_showMaxAttemptAlertWithCompletion:(/*^block*/id)arg1 ;
-(void)presentIDPProvidedUIWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
-(AKInAppAuthenticationRemoteUIDelegate *)remoteUIControllerDelegate;
@end

