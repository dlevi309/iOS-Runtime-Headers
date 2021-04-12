/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <ShareSheet/UIActivityViewController.h>

@class WFFileRepresentation;

@interface WFWorkflowActivityViewController : UIActivityViewController {

	WFFileRepresentation* _workflowFile;

}

@property (nonatomic,retain) WFFileRepresentation * workflowFile;              //@synthesize workflowFile=_workflowFile - In the implementation block
-(id)initWithWorkflow:(id)arg1 applicationActivities:(id)arg2 ;
-(WFFileRepresentation *)workflowFile;
-(void)setWorkflowFile:(WFFileRepresentation *)arg1 ;
@end

