/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@protocol WFActionEventObserver <NSObject>
@optional
-(void)actionNameDidChange:(id)arg1;
-(void)actionOutputDetailsDidChange:(id)arg1;
-(void)actionRunningStateDidChange:(id)arg1;
-(void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;
-(void)action:(id)arg1 supplementalParameterValueDidChangeForKey:(id)arg2;

@end

