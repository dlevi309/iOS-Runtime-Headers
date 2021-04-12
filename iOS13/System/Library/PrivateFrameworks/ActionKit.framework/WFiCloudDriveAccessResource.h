/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAccessResource.h>

@interface WFiCloudDriveAccessResource : WFAccessResource
+(BOOL)mustBeAvailableForDisplay;
+(BOOL)isSystemResource;
-(void)dealloc;
-(id)initWithDefinition:(id)arg1 ;
-(id)associatedAppIdentifier;
-(unsigned long long)globalLevelStatus;
-(id)protectedResourceDescription;
-(void)attemptRecoveryFromGlobalLevelErrorWithOptionIndex:(unsigned long long)arg1 userInterface:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)errorReasonForGlobalLevelStatus:(unsigned long long)arg1 ;
-(id)importErrorReasonForGlobalLevelStatus:(unsigned long long)arg1 ;
-(id)errorRecoveryOptionsForGlobalLevelStatus:(unsigned long long)arg1 ;
@end

