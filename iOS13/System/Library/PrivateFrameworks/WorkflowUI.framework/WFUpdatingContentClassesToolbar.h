/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFContentClassesToolbar.h>

@class WFWorkflow;

@interface WFUpdatingContentClassesToolbar : WFContentClassesToolbar {

	WFWorkflow* _workflow;

}

@property (nonatomic,retain) WFWorkflow * workflow;              //@synthesize workflow=_workflow - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)accessibilityElementsHidden;
-(WFWorkflow *)workflow;
-(void)setWorkflow:(WFWorkflow *)arg1 ;
@end

