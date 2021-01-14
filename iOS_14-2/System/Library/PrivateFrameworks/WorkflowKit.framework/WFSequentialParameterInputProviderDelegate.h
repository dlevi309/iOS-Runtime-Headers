/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol WFSequentialParameterInputProviderDelegate <NSObject>
@required
-(void)sequentialParameterInputProvider:(id)arg1 didAdvanceToParameter:(id)arg2 action:(id)arg3 defaultState:(id)arg4 completion:(/*^block*/id)arg5;
-(void)sequentialParameterInputProvider:(id)arg1 didFinishWithInputtedStates:(id)arg2;
-(void)sequentialParameterInputProviderDidCancel:(id)arg1;

@end

