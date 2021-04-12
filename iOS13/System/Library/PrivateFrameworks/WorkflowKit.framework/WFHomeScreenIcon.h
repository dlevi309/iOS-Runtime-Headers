/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class WFWorkflowIcon, NSData;

@interface WFHomeScreenIcon : NSObject {

	WFWorkflowIcon* _workflowIcon;
	NSData* _customImageData;

}

@property (nonatomic,readonly) WFWorkflowIcon * workflowIcon;              //@synthesize workflowIcon=_workflowIcon - In the implementation block
@property (nonatomic,readonly) NSData * customImageData;                   //@synthesize customImageData=_customImageData - In the implementation block
-(WFWorkflowIcon *)workflowIcon;
-(NSData *)customImageData;
-(id)initWithWorkflowIcon:(id)arg1 customImageData:(id)arg2 ;
@end

