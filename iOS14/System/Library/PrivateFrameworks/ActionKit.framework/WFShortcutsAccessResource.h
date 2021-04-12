/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAccessResource.h>

@interface WFShortcutsAccessResource : WFAccessResource
+(BOOL)isSystemResource;
-(unsigned long long)globalLevelStatus;
-(id)associatedAppIdentifier;
-(id)protectedResourceDescription;
-(void)makeAvailableAtLevel:(unsigned long long)arg1 withUserInterface:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)errorReasonForGlobalLevelStatus:(unsigned long long)arg1 ;
-(id)importErrorReasonForGlobalLevelStatus:(unsigned long long)arg1 ;
-(id)workflowLevelPromptTemplate;
-(id)attemptRecoveryFromGlobalLevelErrorMessage;
@end

