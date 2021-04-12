/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
*/

#import <UIKitCore/UIViewController.h>

@protocol FPUIAuthenticationDelegate;
@class NSURL, FPUIAuthenticationLandingViewController;

@interface FPUIAuthenticationViewController : UIViewController {

	id<FPUIAuthenticationDelegate> _authenticationDelegate;
	NSURL* _initialConnectionURL;
	FPUIAuthenticationLandingViewController* _landingViewController;

}

@property (__weak) FPUIAuthenticationLandingViewController * landingViewController;                     //@synthesize landingViewController=_landingViewController - In the implementation block
@property (assign,nonatomic,__weak) id<FPUIAuthenticationDelegate> authenticationDelegate;              //@synthesize authenticationDelegate=_authenticationDelegate - In the implementation block
@property (nonatomic,copy) NSURL * initialConnectionURL;                                                //@synthesize initialConnectionURL=_initialConnectionURL - In the implementation block
-(void)viewDidLoad;
-(id<FPUIAuthenticationDelegate>)authenticationDelegate;
-(void)setAuthenticationDelegate:(id<FPUIAuthenticationDelegate>)arg1 ;
-(void)setInitialConnectionURL:(NSURL *)arg1 ;
-(id)initWithServerURL:(id)arg1 ;
-(NSURL *)initialConnectionURL;
-(FPUIAuthenticationLandingViewController *)landingViewController;
-(void)setLandingViewController:(FPUIAuthenticationLandingViewController *)arg1 ;
@end

