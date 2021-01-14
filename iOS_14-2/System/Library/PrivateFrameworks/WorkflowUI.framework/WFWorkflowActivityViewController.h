/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

