/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AKBasicLoginAnimateProtocol.h>

@protocol AKSignInViewControllerDelegate;
@class AKAppleIDAuthenticationController, AKAppleIDAuthenticationInAppContext, NSString;

@interface AKBaseSignInViewController : UIViewController <AKBasicLoginAnimateProtocol> {

	AKAppleIDAuthenticationController* _authenticationController;
	BOOL _usesDarkMode;
	BOOL _authInProgress;
	AKAppleIDAuthenticationInAppContext* _context;
	id<AKSignInViewControllerDelegate> _delegate;

}

@property (assign,getter=isAuthInProgress,nonatomic) BOOL authInProgress;                       //@synthesize authInProgress=_authInProgress - In the implementation block
@property (assign,nonatomic) BOOL usesDarkMode;                                                 //@synthesize usesDarkMode=_usesDarkMode - In the implementation block
@property (retain) AKAppleIDAuthenticationInAppContext * context;                               //@synthesize context=_context - In the implementation block
@property (__weak) id<AKSignInViewControllerDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) AKAppleIDAuthenticationController * authenticationController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id<AKSignInViewControllerDelegate>)delegate;
-(AKAppleIDAuthenticationController *)authenticationController;
-(AKAppleIDAuthenticationInAppContext *)context;
-(void)setDelegate:(id<AKSignInViewControllerDelegate>)arg1 ;
-(void)startAnimating;
-(void)stopAnimating;
-(void)setUsesDarkMode:(BOOL)arg1 ;
-(void)setContext:(AKAppleIDAuthenticationInAppContext *)arg1 ;
-(BOOL)_isAccountModificationRestricted;
-(void)_setPasswordFieldHiddenIfNeeded;
-(void)_setPasswordFieldHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isAuthInProgress;
-(BOOL)_isSignInAllowed;
-(BOOL)_canBeginAuthenticationWithOption:(unsigned long long)arg1 ;
-(void)setAuthInProgress:(BOOL)arg1 ;
-(void)_authenticateWithContext:(id)arg1 ;
-(void)_provideDelegateWithAuthResults:(id)arg1 error:(id)arg2 ;
-(id)_initWithAuthController:(id)arg1 ;
-(id)_initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_beginAuthenticationIfPossibleWithOption:(unsigned long long)arg1 withUsername:(id)arg2 password:(id)arg3 ;
-(BOOL)usesDarkMode;
@end

