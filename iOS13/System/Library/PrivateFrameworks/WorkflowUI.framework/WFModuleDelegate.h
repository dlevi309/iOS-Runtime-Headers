/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@protocol WFModuleDelegate <NSObject>
@optional
-(BOOL)module:(id)arg1 setParameterState:(id)arg2 forParameter:(id)arg3 action:(id)arg4;
-(BOOL)module:(id)arg1 shouldAllowRemovingAction:(id)arg2;
-(void)removeActionPressedForModule:(id)arg1 withAction:(id)arg2;
-(unsigned long long)indentationLevelForModule:(id)arg1 withAction:(id)arg2;

@end

