/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/GKExtensionParentViewControllerProtocol.h>
#import <libobjc.A.dylib/GKAuthenticateViewController.h>

@class NSError, GKAuthenticateHostViewController, NSString;

@interface GKHostedAuthenticateViewController : UIViewController <GKExtensionParentViewControllerProtocol, GKAuthenticateViewController> {

	BOOL _disablesSignIn;
	BOOL _rotationLocked;
	/*^block*/id _completionHandler;
	NSError* _error;
	/*^block*/id _remoteViewReadyHandler;
	GKAuthenticateHostViewController* _extensionHostViewController;
	long long _mode;
	/*^block*/id _dismissCompletionHandler;

}

@property (nonatomic,retain) GKAuthenticateHostViewController * extensionHostViewController;              //@synthesize extensionHostViewController=_extensionHostViewController - In the implementation block
@property (assign,nonatomic) long long mode;                                                              //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy) id dismissCompletionHandler;                                                   //@synthesize dismissCompletionHandler=_dismissCompletionHandler - In the implementation block
@property (assign,getter=isRotationLocked,nonatomic) BOOL rotationLocked;                                 //@synthesize rotationLocked=_rotationLocked - In the implementation block
@property (nonatomic,retain) NSError * error;                                                             //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id remoteViewReadyHandler;                                                     //@synthesize remoteViewReadyHandler=_remoteViewReadyHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id completionHandler;                                                          //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL disablesSignIn;                                                         //@synthesize disablesSignIn=_disablesSignIn - In the implementation block
+(BOOL)_preventsAppearanceProxyCustomization;
-(long long)mode;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(id)init;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setRemoteViewReadyHandler:(id)arg1 ;
-(id)remoteViewReadyHandler;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)completionHandler;
-(void)setError:(NSError *)arg1 ;
-(void)setMode:(long long)arg1 ;
-(NSError *)error;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)shouldAutorotate;
-(void)setExtensionHostViewController:(GKAuthenticateHostViewController *)arg1 ;
-(GKAuthenticateHostViewController *)extensionHostViewController;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(void)_setupChildViewController;
-(void)extensionDidFinishWithError:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)dismissCompletionHandler;
-(void)setDismissCompletionHandler:(id)arg1 ;
-(void)_setupExtensionHostViewController;
-(void)setRotationLocked:(BOOL)arg1 ;
-(void)continueWithMode:(long long)arg1 ;
-(void)onboardingFlowDidSignOut;
-(BOOL)isRotationLocked;
-(void)finishAuthenticationWithError:(id)arg1 ;
-(void)showPasswordChangeAlertWithURL:(id)arg1 ;
-(BOOL)disablesSignIn;
-(void)setDisablesSignIn:(BOOL)arg1 ;
-(void)dealloc;
@end

