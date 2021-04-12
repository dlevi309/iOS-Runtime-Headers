/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <ShareSheet/UIActivity.h>

@class WFWorkflow;

@interface WFWorkflowDuplicateActivity : UIActivity {

	/*^block*/id _dismissToHomeHandler;
	WFWorkflow* _workflow;

}

@property (nonatomic,retain) WFWorkflow * workflow;              //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,copy) id dismissToHomeHandler;              //@synthesize dismissToHomeHandler=_dismissToHomeHandler - In the implementation block
+(id)workflowFromActivityItems:(id)arg1 ;
-(id)activityType;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)activityImage;
-(void)performActivity;
-(WFWorkflow *)workflow;
-(void)setWorkflow:(WFWorkflow *)arg1 ;
-(id)dismissToHomeHandler;
-(void)setDismissToHomeHandler:(id)arg1 ;
@end

