/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)_username;
-(id<AKAuthorizationPasswordAuthenticationDelegate>)delegate;
-(AKAuthorizationPresentationContext *)presentationContext;
-(void)setDelegate:(id<AKAuthorizationPasswordAuthenticationDelegate>)arg1 ;
-(void)keyboardDidShow:(id)arg1 ;
-(void)viewDidLoad;
-(void)setPresentationContext:(AKAuthorizationPresentationContext *)arg1 ;
-(void)signInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3 ;
-(void)dealloc;
-(double)intrinsicContentHeight;
-(id)_contextForAuthentication;
-(void)sizeToFitPaneContentAnimated:(BOOL)arg1 ;
@end

