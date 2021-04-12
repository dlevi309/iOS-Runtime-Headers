/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/


@protocol BFFFinishSetupFlowControlling
@optional
-(BOOL)controllerNeedsToRun;
-(id)prerequisiteFlowIdentifier;
-(id)preconditionViewControllerWithCompletion:(/*^block*/id)arg1;
-(void)performExtendedInitializationWithCompletion:(/*^block*/id)arg1;
-(BOOL)canCompleteExtendedInitializationQuickly;

@required
-(id)viewControllerWithCompletion:(/*^block*/id)arg1;

@end

