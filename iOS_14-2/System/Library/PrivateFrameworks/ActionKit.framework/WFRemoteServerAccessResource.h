/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)icon;
-(id)name;
-(unsigned long long)globalLevelStatus;
-(id)localizedWorkflowLevelNotDeterminedStatusMessage;
-(id)localizedWorkflowLevelDeniedStatusMessage;
-(id)localizedWorkflowLevelPromptTemplate;
-(id)localizedWorkflowLevelMessageTemplate;
-(id)requestedEntries;
-(void)setRequestedURLs:(NSArray *)arg1 ;
-(NSArray *)requestedURLs;
@end

