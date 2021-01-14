/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
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

