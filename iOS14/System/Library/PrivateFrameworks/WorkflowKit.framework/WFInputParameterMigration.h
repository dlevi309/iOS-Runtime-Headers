/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFWorkflowMigration.h>

@interface WFInputParameterMigration : WFWorkflowMigration
+(BOOL)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2 ;
-(void)migrateWorkflow;
-(id)findActionProvidingInputToActionAtIndex:(unsigned long long)arg1 inWorkflow:(id)arg2 reachedBeginning:(BOOL*)arg3 inputActionIndex:(unsigned long long*)arg4 ;
-(id)findGetVariableActionProvidingInputToActionAtIndex:(long long)arg1 inWorkflow:(id)arg2 ;
-(void)recursivelyFindDictionaryWithKey:(id)arg1 inObject:(id)arg2 then:(/*^block*/id)arg3 ;
-(void)recursivelyFindDictionaryWithKey:(id)arg1 inDictionary:(id)arg2 then:(/*^block*/id)arg3 ;
-(void)recursivelyFindDictionaryWithKey:(id)arg1 inArray:(id)arg2 then:(/*^block*/id)arg3 ;
-(void)migrateLegacyInputVariablesInParameterDictionary:(id)arg1 toVariable:(id)arg2 ;
@end

