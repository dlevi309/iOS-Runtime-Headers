/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/


@protocol BFFPasscodeViewControllerDelegate
@optional
-(BOOL)passcodeViewControllerAllowSkip:(id)arg1;
-(void)passcodeViewControllerWillSetPasscode:(id)arg1;
-(void)passcodeViewController:(id)arg1 didSetPasscode:(id)arg2;
-(id)passcodeViewControllerCustomFirstEntryInstructions:(id)arg1;

@required
-(void)passcodeViewController:(id)arg1 didFinishWithPasscodeCreation:(id)arg2;

@end

