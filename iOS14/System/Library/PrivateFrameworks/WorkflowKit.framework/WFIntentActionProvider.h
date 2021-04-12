/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFActionProvider.h>

@class NSDictionary, INStringLocalizer;

@interface WFIntentActionProvider : WFActionProvider {

	BOOL _observingInstalledApplicationsChanges;
	NSDictionary* _cachedSchemasByBundleIdentifier;
	INStringLocalizer* _stringLocalizer;

}

@property (assign,getter=isObservingInstalledApplicationsChanges,nonatomic) BOOL observingInstalledApplicationsChanges;              //@synthesize observingInstalledApplicationsChanges=_observingInstalledApplicationsChanges - In the implementation block
@property (nonatomic,copy) NSDictionary * cachedSchemasByBundleIdentifier;                                                           //@synthesize cachedSchemasByBundleIdentifier=_cachedSchemasByBundleIdentifier - In the implementation block
@property (nonatomic,readonly) INStringLocalizer * stringLocalizer;                                                                  //@synthesize stringLocalizer=_stringLocalizer - In the implementation block
+(void)initialize;
+(id)disabledPlatformsForIntentWithTypeName:(id)arg1 ;
-(id)init;
-(void)installedApplicationsDidChange:(id)arg1 ;
-(id)availableActionIdentifiers;
-(void)createActionsForRequests:(id)arg1 ;
-(INStringLocalizer *)stringLocalizer;
-(id)createAllAvailableActions;
-(id)schemasByBundleIdentifier;
-(id)schemaForBundleIdentifier:(id)arg1 ignoreCache:(BOOL)arg2 ;
-(id)actionIdentifiersForBundleIdentifier:(id)arg1 schema:(id)arg2 ;
-(BOOL)shouldCreateActionForIntentClassName:(id)arg1 actionIdentifier:(id)arg2 bundleIdentifier:(id)arg3 inSchema:(id)arg4 ;
-(void)observeInstalledApplicationsChangesIfNeeded;
-(BOOL)isObservingInstalledApplicationsChanges;
-(void)setObservingInstalledApplicationsChanges:(BOOL)arg1 ;
-(NSDictionary *)cachedSchemasByBundleIdentifier;
-(void)setCachedSchemasByBundleIdentifier:(NSDictionary *)arg1 ;
@end

