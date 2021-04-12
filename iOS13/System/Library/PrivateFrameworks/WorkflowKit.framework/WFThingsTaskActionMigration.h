/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFWorkflowMigration.h>

@class NSDateFormatter;

@interface WFThingsTaskActionMigration : WFWorkflowMigration {

	NSDateFormatter* _dateFormatter;

}

@property (nonatomic,retain) NSDateFormatter * dateFormatter;              //@synthesize dateFormatter=_dateFormatter - In the implementation block
+(BOOL)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2 ;
-(NSDateFormatter *)dateFormatter;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(void)migrateWorkflow;
@end

