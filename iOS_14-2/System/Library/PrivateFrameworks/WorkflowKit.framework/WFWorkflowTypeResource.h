/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFResource.h>
#import <libobjc.A.dylib/WFWorkflowReferencing.h>

@class WFWorkflow, NSString;

@interface WFWorkflowTypeResource : WFResource <WFWorkflowReferencing> {

	WFWorkflow* _workflow;

}

@property (assign,nonatomic,__weak) WFWorkflow * workflow;              //@synthesize workflow=_workflow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)mustBeAvailableForDisplay;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(WFWorkflow *)workflow;
-(void)setWorkflow:(WFWorkflow *)arg1 ;
-(void)refreshAvailability;
-(BOOL)workflowTypesAreValid;
@end

