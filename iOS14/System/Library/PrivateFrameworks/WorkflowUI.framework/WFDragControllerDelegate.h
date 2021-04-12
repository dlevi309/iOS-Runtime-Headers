/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@protocol WFDragControllerDelegate <NSObject>
@optional
-(BOOL)dragController:(id)arg1 shouldAcceptViewWithCompletion:(/*^block*/id)arg2;
-(void)dragController:(id)arg1 movedInsideViewControllers:(id)arg2;
-(void)dragController:(id)arg1 didEnterViewController:(id)arg2;
-(void)dragController:(id)arg1 didExitViewController:(id)arg2;
-(void)dragController:(id)arg1 willBeAcceptedByDelegate:(id)arg2;
-(void)dragController:(id)arg1 wasAcceptedByDelegate:(id)arg2;
-(void)dragControllerWillBeginDragging:(id)arg1;

@end

