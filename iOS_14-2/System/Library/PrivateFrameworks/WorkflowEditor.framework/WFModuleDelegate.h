/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


@protocol WFModuleDelegate <NSObject>
@optional
-(BOOL)module:(id)arg1 setParameterState:(id)arg2 forParameter:(id)arg3 action:(id)arg4;
-(BOOL)module:(id)arg1 shouldAllowRemovingAction:(id)arg2;
-(void)removeActionPressedForModule:(id)arg1 withAction:(id)arg2;
-(void)documentationPressedForModule:(id)arg1 withAction:(id)arg2 sender:(id)arg3;
-(unsigned long long)indentationLevelForModule:(id)arg1 withAction:(id)arg2;
-(id)module:(id)arg1 displayableErrorForResourceError:(id)arg2;
-(id)menuForModule:(id)arg1 withAction:(id)arg2;

@end

