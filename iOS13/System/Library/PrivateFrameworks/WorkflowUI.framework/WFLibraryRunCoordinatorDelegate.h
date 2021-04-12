/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@protocol WFLibraryRunCoordinatorDelegate <NSObject>
@optional
-(void)runCoordinator:(id)arg1 handOffWithState:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(BOOL)runCoordinator:(id)arg1 handleUnsupportedEnvironmentForAction:(id)arg2 currentState:(id)arg3 completionHandler:(/*^block*/id)arg4;

@required
-(id)runCoordinator:(id)arg1 userInterfaceForWorkflow:(id)arg2;

@end

