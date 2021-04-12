/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

@class UIViewController;


@protocol WFComponentNavigationContext <NSObject>
@property (nonatomic,__weak,readonly) UIViewController * componentHostingViewController; 
@optional
-(void)componentPresentDocumentationForAction:(id)arg1 withSourceView:(id)arg2;
-(void)componentWillBeginEditingSession:(id)arg1;
-(void)componentDidEndEditingSession:(id)arg1;
-(void)componentPresentWorkflowSettings;

@required
-(UIViewController *)componentHostingViewController;

@end

