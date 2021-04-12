/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

