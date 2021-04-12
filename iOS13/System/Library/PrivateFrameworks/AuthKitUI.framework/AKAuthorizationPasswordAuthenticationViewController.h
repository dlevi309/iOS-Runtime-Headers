/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <AuthKitUI/AKAuthorizationPaneViewController.h>
#import <libobjc.A.dylib/AKSignInViewControllerDelegate.h>

@protocol AKAuthorizationPasswordAuthenticationDelegate;
@class AKModalSignInViewController, AKAuthorizationPresentationContext, NSString;

@interface AKAuthorizationPasswordAuthenticationViewController : AKAuthorizationPaneViewController <AKSignInViewControllerDelegate> {

	AKModalSignInViewController* _modalSignInViewController;
	double _keyboardHeight;
	id<AKAuthorizationPasswordAuthenticationDelegate> _delegate;
	AKAuthorizationPresentationContext* _presentationContext;

}

@property (assign,nonatomic,__weak) id<AKAuthorizationPasswordAuthenticationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AKAuthorizationPresentationContext * presentationContext;                       //@synthesize presentationContext=_presentationContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<AKAuthorizationPasswordAuthenticationDelegate>)delegate;
-(void)setDelegate:(id<AKAuthorizationPasswordAuthenticationDelegate>)arg1 ;
-(id)_username;
-(void)viewDidLoad;
-(AKAuthorizationPresentationContext *)presentationContext;
-(void)keyboardDidShow:(id)arg1 ;
-(void)setPresentationContext:(AKAuthorizationPresentationContext *)arg1 ;
-(double)intrinsicContentHeight;
-(void)signInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3 ;
-(id)_contextForAuthentication;
-(void)sizeToFitPaneContentAnimated:(BOOL)arg1 ;
@end

