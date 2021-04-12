/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/


@protocol WFWorkflowEditingDelegate <NSObject>
@required
-(void)workflow:(id)arg1 reloadActions:(id)arg2;
-(void)workflow:(id)arg1 actionForSuggestionsDrawerDidUpdateOutputContentClasses:(id)arg2;
-(void)workflow:(id)arg1 removeAction:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)workflow:(id)arg1 moveActionsAtIndexes:(id)arg2 toIndexes:(id)arg3;
-(void)workflow:(id)arg1 insertActions:(id)arg2 atIndexes:(id)arg3;

@end

