/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@interface WFAccessResourcePerWorkflowAuthorizationManager : NSObject
+(void)setAccessResourcesToAuthorizedIfNotDeterminedInActions:(id)arg1 existingActions:(id)arg2 forReference:(id)arg3 inDatabase:(id)arg4 ;
+(void)setAccessResourcesToAuthorizedIfNotDeterminedInWorkflow:(id)arg1 forReference:(id)arg2 inDatabase:(id)arg3 ;
+(void)setStatusForAllAccessResourcesTo:(long long)arg1 inWorkflow:(id)arg2 forReference:(id)arg3 inDatabase:(id)arg4 ;
+(void)setAccessResourcesToAuthorizedIfNotDetermined:(id)arg1 otherActions:(id)arg2 ;
+(void)setNotDeterminedAccessResourcesAuthorizedInAction:(id)arg1 forReference:(id)arg2 inDatabase:(id)arg3 existingAccessResources:(id)arg4 ;
@end

