/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFAccessResource.h>

@class NSString;

@interface WFIntentsAccessResource : WFAccessResource {

	NSString* _associatedAppIdentifier;

}
+(id)persistentIdentifierFromBundleIdentifier:(id)arg1 ;
+(id)bundleIdentifierFromPersistentIdentifier:(id)arg1 ;
+(BOOL)isSystemResource;
-(id)initWithDefinition:(id)arg1 persistentIdentifier:(id)arg2 ;
-(id)initWithBundleIdentifierForDisplay:(id)arg1 ;
-(unsigned long long)globalLevelStatus;
-(id)localizedWorkflowLevelNotDeterminedStatusMessage;
-(id)localizedWorkflowLevelDeniedStatusMessage;
-(id)localizedWorkflowLevelPromptTemplate;
-(id)localizedWorkflowLevelMessageTemplate;
-(id)associatedAppIdentifier;
@end

