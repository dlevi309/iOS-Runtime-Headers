/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFGranularAccessResource.h>

@class NSArray;

@interface WFRemoteServerAccessResource : WFGranularAccessResource {

	NSArray* _requestedURLs;

}

@property (nonatomic,copy) NSArray * requestedURLs;              //@synthesize requestedURLs=_requestedURLs - In the implementation block
+(BOOL)isSystemResource;
+(Class)perWorkflowStateClass;
-(id)name;
-(id)icon;
-(unsigned long long)globalLevelStatus;
-(id)localizedWorkflowLevelNotDeterminedStatusMessage;
-(id)localizedWorkflowLevelDeniedStatusMessage;
-(id)localizedWorkflowLevelPromptTemplate;
-(id)localizedWorkflowLevelMessageTemplate;
-(id)requestedEntries;
-(void)setRequestedURLs:(NSArray *)arg1 ;
-(NSArray *)requestedURLs;
@end

