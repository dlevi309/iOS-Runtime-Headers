/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/

#import <ManagedConfigurationUI/MCSectionBasedTableViewController.h>
#import <libobjc.A.dylib/AKInlineSignInViewControllerDelegate.h>

@protocol MCUISignInViewControllerDelegate;
@class MCSignInPageTitleSectionController, MCSignInPageAuthenticationSectionController, AKAppleIDAuthenticationInAppContext, NSString;

@interface MCUISignInViewController : MCSectionBasedTableViewController <AKInlineSignInViewControllerDelegate> {

	BOOL _signInButtonTapped;
	BOOL _authenticationFinished;
	id<MCUISignInViewControllerDelegate> _delegate;
	MCSignInPageTitleSectionController* _titleSectionController;
	MCSignInPageAuthenticationSectionController* _authSectionController;

}

@property (assign,nonatomic) BOOL signInButtonTapped;                                                          //@synthesize signInButtonTapped=_signInButtonTapped - In the implementation block
@property (assign,nonatomic) BOOL authenticationFinished;                                                      //@synthesize authenticationFinished=_authenticationFinished - In the implementation block
@property (nonatomic,retain) MCSignInPageTitleSectionController * titleSectionController;                      //@synthesize titleSectionController=_titleSectionController - In the implementation block
@property (nonatomic,retain) MCSignInPageAuthenticationSectionController * authSectionController;              //@synthesize authSectionController=_authSectionController - In the implementation block
@property (assign,nonatomic,__weak) id<MCUISignInViewControllerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AKAppleIDAuthenticationInAppContext * context; 
@property (nonatomic,retain) NSString * orgName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(NSString *)orgName;
-(id<MCUISignInViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(AKAppleIDAuthenticationInAppContext *)context;
-(void)setDelegate:(id<MCUISignInViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)signInViewController:(id)arg1 willPerformAuthenticationWithContext:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)signInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setContext:(AKAppleIDAuthenticationInAppContext *)arg1 ;
-(void)setOrgName:(NSString *)arg1 ;
-(MCSignInPageAuthenticationSectionController *)authSectionController;
-(BOOL)signInButtonTapped;
-(void)setSignInButtonTapped:(BOOL)arg1 ;
-(BOOL)authenticationFinished;
-(MCSignInPageTitleSectionController *)titleSectionController;
-(void)setAuthenticationFinished:(BOOL)arg1 ;
-(void)setTitleSectionController:(MCSignInPageTitleSectionController *)arg1 ;
-(void)setAuthSectionController:(MCSignInPageAuthenticationSectionController *)arg1 ;
@end

