/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFActionProvider.h>

@class NSSet;

@interface WFBundledActionProvider : WFActionProvider

@property (nonatomic,readonly) NSSet * identifiersOfActionsDisabledOnWatch; 
-(id)currentVersion;
-(id)cacheURL;
-(id)cacheDirectoryURL;
-(void)updateCache:(/*^block*/id)arg1 ;
-(NSSet *)identifiersOfActionsDisabledOnWatch;
-(id)actionDefinitionsWithIdentifiers:(id)arg1 ;
-(id)availableActionIdentifiers;
-(void)createActionsForRequests:(id)arg1 ;
-(void)deleteCache;
-(id)bundledURL;
-(id)createAllAvailableActions;
@end

