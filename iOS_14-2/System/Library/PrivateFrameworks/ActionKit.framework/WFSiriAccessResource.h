/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAccessResource.h>

@interface WFSiriAccessResource : WFAccessResource
+(BOOL)isSystemResource;
-(void)dealloc;
-(id)initWithDefinition:(id)arg1 ;
-(unsigned long long)globalLevelStatus;
-(unsigned long long)workflowLevelStatus;
-(void)attemptRecoveryFromGlobalLevelErrorWithOptionIndex:(unsigned long long)arg1 userInterface:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)localizedErrorReasonForGlobalLevelStatus:(unsigned long long)arg1 ;
-(id)errorRecoveryOptionsForGlobalLevelStatus:(unsigned long long)arg1 ;
@end

