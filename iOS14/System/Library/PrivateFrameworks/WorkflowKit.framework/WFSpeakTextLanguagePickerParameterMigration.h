/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFWorkflowMigration.h>

@interface WFSpeakTextLanguagePickerParameterMigration : WFWorkflowMigration
+(BOOL)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2 ;
-(id)availableLanguageCodes;
-(void)migrateWorkflow;
-(void)migrateSpeakTextLanguageParameterInParametersDictionary:(id)arg1 ;
@end

