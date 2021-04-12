/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <ShareSheet/UIActivityItemProvider.h>

@protocol WFUserInterface;
@class WFWorkflow, NSString, NSURL;

@interface WFWorkflowLinkProvider : UIActivityItemProvider {

	WFWorkflow* _workflow;
	NSString* _exclusiveActivityType;
	NSURL* _workflowURL;
	NSString* _workflowID;
	NSURL* _realmURL;
	id<WFUserInterface> _userInterface;

}

@property (nonatomic,readonly) WFWorkflow * workflow;                          //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,readonly) NSString * workflowID;                          //@synthesize workflowID=_workflowID - In the implementation block
@property (nonatomic,readonly) NSURL * realmURL;                               //@synthesize realmURL=_realmURL - In the implementation block
@property (nonatomic,readonly) id<WFUserInterface> userInterface;              //@synthesize userInterface=_userInterface - In the implementation block
@property (nonatomic,copy) NSString * exclusiveActivityType;                   //@synthesize exclusiveActivityType=_exclusiveActivityType - In the implementation block
@property (nonatomic,retain) NSURL * workflowURL;                              //@synthesize workflowURL=_workflowURL - In the implementation block
-(id)item;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(CGSize)arg3 ;
-(id)activityViewControllerLinkMetadata:(id)arg1 ;
-(WFWorkflow *)workflow;
-(id<WFUserInterface>)userInterface;
-(NSString *)workflowID;
-(id)initWithPlaceholderItem:(id)arg1 workflow:(id)arg2 userInterface:(id)arg3 ;
-(NSURL *)workflowURL;
-(NSString *)exclusiveActivityType;
-(void)setExclusiveActivityType:(NSString *)arg1 ;
-(void)setWorkflowURL:(NSURL *)arg1 ;
-(NSURL *)realmURL;
@end

