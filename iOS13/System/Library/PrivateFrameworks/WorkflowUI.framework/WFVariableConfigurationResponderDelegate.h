/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@protocol WFVariableConfigurationResponderDelegate <NSObject>
@optional
-(void)variableResponderDidBeginEditing:(id)arg1;
-(void)variableResponderWillEndEditing:(id)arg1;
-(void)variableResponderDidEndEditing:(id)arg1;
-(void)variableResponderDidReturnToKeyboard:(id)arg1;

@required
-(BOOL)variableResponderHasText:(id)arg1;
-(void)variableResponderDidDelete:(id)arg1 withReplacementText:(id)arg2;
-(void)variableResponderDidRevealAction:(id)arg1;
-(void)variableResponder:(id)arg1 didUpdateVariable:(id)arg2;
-(void)variableResponder:(id)arg1 presentPromptWithTitle:(id)arg2 message:(id)arg3 fieldConfigurationHandler:(/*^block*/id)arg4 commitHandler:(/*^block*/id)arg5;

@end

