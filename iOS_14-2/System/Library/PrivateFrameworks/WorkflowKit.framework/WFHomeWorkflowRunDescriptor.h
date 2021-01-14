/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <VoiceShortcutClient/WFWorkflowRunDescriptor.h>

@class WFHomeWorkflow;

@interface WFHomeWorkflowRunDescriptor : WFWorkflowRunDescriptor {

	WFHomeWorkflow* _homeWorkflow;

}

@property (nonatomic,readonly) WFHomeWorkflow * homeWorkflow;              //@synthesize homeWorkflow=_homeWorkflow - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(WFHomeWorkflow *)homeWorkflow;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithHomeWorkflow:(id)arg1 ;
-(id)workflowRepresentationWithDatabase:(id)arg1 environment:(long long)arg2 error:(id*)arg3 ;
@end

