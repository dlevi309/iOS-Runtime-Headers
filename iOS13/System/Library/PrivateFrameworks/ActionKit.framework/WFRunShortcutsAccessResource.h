/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAccessResource.h>

@interface WFRunShortcutsAccessResource : WFAccessResource
+(BOOL)isSystemResource;
-(id)associatedAppIdentifier;
-(unsigned long long)globalLevelStatus;
-(id)protectedResourceDescription;
-(void)makeAvailableAtLevel:(unsigned long long)arg1 withUserInterface:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)errorReasonForGlobalLevelStatus:(unsigned long long)arg1 ;
-(id)importErrorReasonForGlobalLevelStatus:(unsigned long long)arg1 ;
-(id)workflowLevelPromptTemplate;
-(id)workflowLevelMessageTemplate;
-(id)workflowLevelNotDeterminedStatusMessage;
-(id)workflowLevelDeniedStatusMessage;
-(id)attemptRecoveryFromGlobalLevelErrorMessage;
@end

