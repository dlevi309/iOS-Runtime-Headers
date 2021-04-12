/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

