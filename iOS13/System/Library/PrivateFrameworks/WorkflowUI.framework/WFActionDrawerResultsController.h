/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/


@class HMHome, WFActionRegistry, WFActionDrawerResults;

@interface WFActionDrawerResultsController : NSObject {

	HMHome* _home;
	WFActionRegistry* _actionRegistry;
	WFActionDrawerResults* _cachedSiriSuggestionsResults;

}

@property (nonatomic,readonly) WFActionRegistry * actionRegistry;                                 //@synthesize actionRegistry=_actionRegistry - In the implementation block
@property (nonatomic,readonly) WFActionDrawerResults * cachedSiriSuggestionsResults;              //@synthesize cachedSiriSuggestionsResults=_cachedSiriSuggestionsResults - In the implementation block
@property (nonatomic,retain) HMHome * home;                                                       //@synthesize home=_home - In the implementation block
+(id)localizedAppNames;
-(HMHome *)home;
-(id)actions;
-(void)setHome:(HMHome *)arg1 ;
-(id)actionsForCategory:(id)arg1 ;
-(id)initWithActionRegistry:(id)arg1 ;
-(void)resultsForSearchQuery:(id)arg1 includingSiriSuggestedResults:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getResultsForAppWithBundleIdentifier:(id)arg1 legacyIdentifier:(id)arg2 shouldFilterForAppsViewController:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)getResultsForCategory:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)resultsForSuggestionsWithWorkflow:(id)arg1 ;
-(id)resultsForFavorites;
-(void)getSiriSuggestedResultsForBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getSiriSuggestedGroupedResultsRefreshingCache:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getDeveloperSuggestedResultsForAppIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)suggestedCategoriesForContentClasses:(id)arg1 ;
-(void)getHomeSectionsIncludingRelatedActions:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)filteringForResidentCompatibleActions;
-(WFActionRegistry *)actionRegistry;
-(WFActionDrawerResults *)cachedSiriSuggestionsResults;
@end

