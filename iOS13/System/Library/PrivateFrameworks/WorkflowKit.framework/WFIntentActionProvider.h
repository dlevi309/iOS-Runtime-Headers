/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFActionProvider.h>

@class NSDictionary;

@interface WFIntentActionProvider : WFActionProvider {

	BOOL _observingInstalledApplicationsChanges;
	NSDictionary* _cachedSchemasByBundleIdentifier;

}

@property (assign,getter=isObservingInstalledApplicationsChanges,nonatomic) BOOL observingInstalledApplicationsChanges;              //@synthesize observingInstalledApplicationsChanges=_observingInstalledApplicationsChanges - In the implementation block
@property (nonatomic,copy) NSDictionary * cachedSchemasByBundleIdentifier;                                                           //@synthesize cachedSchemasByBundleIdentifier=_cachedSchemasByBundleIdentifier - In the implementation block
+(void)initialize;
-(id)availableActionIdentifiers;
-(void)createActionsForRequests:(id)arg1 ;
-(id)createAllAvailableActions;
-(id)schemasByBundleIdentifier;
-(id)schemaForBundleIdentifier:(id)arg1 ignoreCache:(BOOL)arg2 ;
-(id)actionIdentifiersForBundleIdentifier:(id)arg1 schema:(id)arg2 ;
-(BOOL)shouldCreateActionForIntentClassName:(id)arg1 actionIdentifier:(id)arg2 bundleIdentifier:(id)arg3 inSchema:(id)arg4 ;
-(void)observeInstalledApplicationsChangesIfNeeded;
-(void)installedApplicationsDidChange:(id)arg1 ;
-(BOOL)isObservingInstalledApplicationsChanges;
-(void)setObservingInstalledApplicationsChanges:(BOOL)arg1 ;
-(NSDictionary *)cachedSchemasByBundleIdentifier;
-(void)setCachedSchemasByBundleIdentifier:(NSDictionary *)arg1 ;
@end

