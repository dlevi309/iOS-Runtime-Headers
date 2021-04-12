/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@protocol WFDragControllerDelegate <NSObject>
@optional
-(void)dragControllerWillBeginDragging:(id)arg1;
-(void)dragController:(id)arg1 didEnterViewController:(id)arg2;
-(void)dragController:(id)arg1 didExitViewController:(id)arg2;
-(void)dragController:(id)arg1 movedInsideViewControllers:(id)arg2;
-(BOOL)dragController:(id)arg1 shouldAcceptViewWithCompletion:(/*^block*/id)arg2;
-(void)dragController:(id)arg1 willBeAcceptedByDelegate:(id)arg2;
-(void)dragController:(id)arg1 wasAcceptedByDelegate:(id)arg2;

@end

