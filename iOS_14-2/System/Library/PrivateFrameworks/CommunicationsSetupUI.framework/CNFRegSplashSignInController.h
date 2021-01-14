/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_handleTimeout;
-(void)tapToSignInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3 ;
-(void)dealloc;
-(id)specifierList;
-(id)_existingLearnMoreViewForSpecifier:(id)arg1 ;
-(id)_existingLearnMoreViewForSection:(long long)arg1 ;
-(id)_controllerToPresentOn;
@end

