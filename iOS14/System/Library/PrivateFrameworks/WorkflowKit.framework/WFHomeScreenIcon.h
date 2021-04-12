/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithWorkflowIcon:(id)arg1 customImageData:(id)arg2 ;
-(NSData *)customImageData;
@end

