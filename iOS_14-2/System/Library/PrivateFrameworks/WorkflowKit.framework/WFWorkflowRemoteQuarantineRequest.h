/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFBaseRemoteQuarantineRequest.h>

@class WFWorkflow, NSDictionary, NSString;

@interface WFWorkflowRemoteQuarantineRequest : WFBaseRemoteQuarantineRequest {

	WFWorkflow* _workflow;
	NSDictionary* _workflowJavaScriptCoreRepresentation;

}

@property (nonatomic,readonly) WFWorkflow * workflow;                                        //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,copy) NSDictionary * workflowJavaScriptCoreRepresentation;              //@synthesize workflowJavaScriptCoreRepresentation=_workflowJavaScriptCoreRepresentation - In the implementation block
@property (nonatomic,readonly) NSString * workflowName; 
+(id)JSONKeyPathsByPropertyKey;
-(WFWorkflow *)workflow;
-(id)initWithWorkflow:(id)arg1 ;
-(id)policyFunctionName;
-(id)defaultLocalizedDeniedErrorTitle;
-(id)defaultLocalizedDeniedErrorMessage;
-(NSString *)workflowName;
-(id)workflowJavaScriptCoreRepresentationWithError:(id*)arg1 ;
-(id)javaScriptCoreRepresentationWithError:(id*)arg1 ;
-(NSDictionary *)workflowJavaScriptCoreRepresentation;
-(void)setWorkflowJavaScriptCoreRepresentation:(NSDictionary *)arg1 ;
@end

