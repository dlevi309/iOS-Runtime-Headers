/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@protocol WFWorkflowEditingDelegate <NSObject>
@required
-(void)workflow:(id)arg1 reloadActions:(id)arg2;
-(void)workflow:(id)arg1 actionForSuggestionsDrawerDidUpdateOutputContentClasses:(id)arg2;
-(void)workflow:(id)arg1 removeAction:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)workflow:(id)arg1 moveActionsAtIndexes:(id)arg2 toIndexes:(id)arg3;
-(void)workflow:(id)arg1 insertActions:(id)arg2 atIndexes:(id)arg3;

@end

