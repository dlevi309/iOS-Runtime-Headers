/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <CommunicationsSetupUI/CNFRegSignInController.h>
#import <libobjc.A.dylib/AKTapToSignInViewControllerDelegate.h>

@class CNFRegSigninLearnMoreView, AKTapToSignInViewController, NSString;

@interface CNFRegSplashSignInController : CNFRegSignInController <AKTapToSignInViewControllerDelegate> {

	CNFRegSigninLearnMoreView* _signInView;
	AKTapToSignInViewController* _akSignInVC;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)_handleTimeout;
-(void)tapToSignInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3 ;
-(id)specifierList;
-(id)_existingLearnMoreViewForSpecifier:(id)arg1 ;
-(id)_existingLearnMoreViewForSection:(long long)arg1 ;
-(id)_controllerToPresentOn;
@end

