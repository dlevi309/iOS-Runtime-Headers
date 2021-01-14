/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@protocol OS_dispatch_queue;
@class HMHome, WFActionRegistry, WFActionDrawerResults, NSObject;

@interface WFActionDrawerResultsController : NSObject {

	HMHome* _home;
	WFActionRegistry* _actionRegistry;
	WFActionDrawerResults* _cachedSiriSuggestionsResults;
	NSObject*<OS_dispatch_queue> _searchQueue;

}

@property (nonatomic,readonly) HMHome * home;                                                     //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) WFActionRegistry * actionRegistry;                                 //@synthesize actionRegistry=_actionRegistry - In the implementation block
@property (nonatomic,readonly) WFActionDrawerResults * cachedSiriSuggestionsResults;              //@synthesize cachedSiriSuggestionsResults=_cachedSiriSuggestionsResults - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> searchQueue;                          //@synthesize searchQueue=_searchQueue - In the implementation block
+(id)localizedAppNames;
-(id)actions;
-(NSObject*<OS_dispatch_queue>)searchQueue;
-(HMHome *)home;
-(id)actionsForCategory:(id)arg1 ;
-(id)initWithActionRegistry:(id)arg1 home:(id)arg2 ;
-(void)resultsForSearchQuery:(id)arg1 includingSiriSuggestedResults:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getResultsForAppWithBundleIdentifier:(id)arg1 legacyIdentifier:(id)arg2 shouldFilterForAppsViewController:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)getResultsForCategory:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)resultsForSuggestionsWithWorkflow:(id)arg1 ;
-(id)resultsForFavorites;
-(void)getSiriSuggestedResultsForBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getSiriSuggestedGroupedResultsRefreshingCache:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)suggestedCategoriesForContentClasses:(id)arg1 ;
-(void)getHomeSectionsIncludingRelatedActions:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)filteringForResidentCompatibleActions;
-(WFActionRegistry *)actionRegistry;
-(WFActionDrawerResults *)cachedSiriSuggestionsResults;
@end

