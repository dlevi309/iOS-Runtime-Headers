/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SFPasswordRemoteViewController.h>

@class ASAccountAuthenticationModificationController;

@interface SFPasswordSavingRemoteViewController : SFPasswordRemoteViewController {

	ASAccountAuthenticationModificationController* _accountAuthenticationModificationController;

}
+(id)serviceViewControllerInterface;
+(id)passwordServiceViewControllerName;
-(void)accountAuthenticationModificationController:(id)arg1 didSuccessfullyCompleteRequest:(id)arg2 withUserInfo:(id)arg3 ;
-(void)accountAuthenticationModificationController:(id)arg1 didFailRequest:(id)arg2 withError:(id)arg3 ;
-(id)presentationAnchorForAccountAuthenticationModificationController:(id)arg1 ;
-(id)_accountAuthenticationModificationController;
-(void)performUpgradeToSignInWithAppleForCredential:(id)arg1 serviceIdentifier:(id)arg2 ;
-(void)performUpgradeToStrongPasswordForCredential:(id)arg1 serviceIdentifier:(id)arg2 ;
@end

