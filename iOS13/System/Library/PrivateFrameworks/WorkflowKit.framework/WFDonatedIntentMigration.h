/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFWorkflowMigration.h>

@interface WFDonatedIntentMigration : WFWorkflowMigration
+(BOOL)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2 ;
+(id)parameterConversion;
+(id)classNameConversion;
+(id)launchIdConversion;
-(void)migrateWorkflow;
-(BOOL)updateBundleIdentifierForIntent:(id)arg1 ;
-(BOOL)updateClassNameForIntent:(id)arg1 ;
-(BOOL)convertParametersAndUpdateIntent:(id*)arg1 ;
@end

