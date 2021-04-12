/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAuthenticationDelegate:(id<FPUIAuthenticationDelegate>)arg1 ;
-(id<FPUIAuthenticationDelegate>)authenticationDelegate;
-(void)setInitialConnectionURL:(NSURL *)arg1 ;
-(id)initWithServerURL:(id)arg1 ;
-(NSURL *)initialConnectionURL;
-(FPUIAuthenticationLandingViewController *)landingViewController;
-(void)setLandingViewController:(FPUIAuthenticationLandingViewController *)arg1 ;
@end

