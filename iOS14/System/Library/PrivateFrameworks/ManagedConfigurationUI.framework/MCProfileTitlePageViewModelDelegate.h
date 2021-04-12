/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/


@protocol MCProfileTitlePageViewModelDelegate <NSObject>
@required
-(void)setUserInteractionEnabled:(BOOL)arg1;
-(void)promptForPasscodeWithCompletionHandler:(/*^block*/id)arg1;
-(void)installationFinishedSuccessfully:(BOOL)arg1 shouldDismiss:(BOOL)arg2 shouldRedirect:(BOOL)arg3 errorToDisplay:(id)arg4;
-(void)promptForUserInput:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)presentAuthenticationViewControllerWithContext:(id)arg1 authenticationPreparationHandler:(/*^block*/id)arg2 authenticationCompletionHandler:(/*^block*/id)arg3;
-(void)presentSpinnerViewController;
-(void)informQuestionViewControllerOfPreflightResult:(id)arg1 profileConnection:(id)arg2;

@end

