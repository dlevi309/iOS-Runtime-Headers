/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFActionEnvironment.h>

@class NSString;

@interface WFWorkflowTypeActionEnvironment : WFActionEnvironment {

	NSString* _workflowType;

}

@property (nonatomic,readonly) NSString * workflowType;              //@synthesize workflowType=_workflowType - In the implementation block
-(BOOL)isAppExtension;
-(BOOL)isWatchOS;
-(BOOL)isMemoryConstrained;
-(id)initWithWorkflowType:(id)arg1 ;
-(NSString *)workflowType;
@end

