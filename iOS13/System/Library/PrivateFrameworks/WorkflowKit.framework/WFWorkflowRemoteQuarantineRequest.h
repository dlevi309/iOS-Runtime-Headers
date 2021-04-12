/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFBaseRemoteQuarantineRequest.h>

@class WFWorkflow, NSDictionary;

@interface WFWorkflowRemoteQuarantineRequest : WFBaseRemoteQuarantineRequest {

	WFWorkflow* _workflow;
	NSDictionary* _workflowJavaScriptCoreRepresentation;

}

@property (nonatomic,readonly) WFWorkflow * workflow;                                        //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,copy) NSDictionary * workflowJavaScriptCoreRepresentation;              //@synthesize workflowJavaScriptCoreRepresentation=_workflowJavaScriptCoreRepresentation - In the implementation block
+(id)JSONKeyPathsByPropertyKey;
-(WFWorkflow *)workflow;
-(id)initWithWorkflow:(id)arg1 ;
-(id)policyFunctionName;
-(id)defaultLocalizedDeniedErrorTitle;
-(id)defaultLocalizedDeniedErrorMessage;
-(id)javaScriptCoreRepresentationWithError:(id*)arg1 ;
-(id)workflowJavaScriptCoreRepresentationWithError:(id*)arg1 ;
-(NSDictionary *)workflowJavaScriptCoreRepresentation;
-(void)setWorkflowJavaScriptCoreRepresentation:(NSDictionary *)arg1 ;
@end

