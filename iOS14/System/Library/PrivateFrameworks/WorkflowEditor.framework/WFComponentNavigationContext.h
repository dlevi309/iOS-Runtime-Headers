/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

@class UIViewController;


@protocol WFComponentNavigationContext <NSObject>
@property (nonatomic,__weak,readonly) UIViewController * componentHostingViewController; 
@required
-(UIViewController *)componentHostingViewController;
-(void)componentWillBeginEditingSession:(id)arg1;
-(void)componentDidEndEditingSession:(id)arg1;
-(void)cancelEditingSessionsWithCompletionHandler:(/*^block*/id)arg1;

@end

