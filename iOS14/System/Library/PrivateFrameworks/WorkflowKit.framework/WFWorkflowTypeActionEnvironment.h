/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFActionEnvironment.h>

@class NSString;

@interface WFWorkflowTypeActionEnvironment : WFActionEnvironment {

	NSString* _workflowType;

}

@property (nonatomic,readonly) NSString * workflowType;              //@synthesize workflowType=_workflowType - In the implementation block
-(BOOL)isAppExtension;
-(id)initWithWorkflowType:(id)arg1 ;
-(NSString *)workflowType;
-(BOOL)isWatchOS;
@end

