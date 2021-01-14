/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFWorkflowMigration.h>

@class NSDateFormatter;

@interface WFCurrentDateActionMigration : WFWorkflowMigration {

	NSDateFormatter* _dateFormatter;

}

@property (nonatomic,retain) NSDateFormatter * dateFormatter;              //@synthesize dateFormatter=_dateFormatter - In the implementation block
+(BOOL)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2 ;
-(NSDateFormatter *)dateFormatter;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(void)migrateWorkflow;
@end

