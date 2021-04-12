/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/


@protocol _DKKnowledgeQuerying;
@class _PSContactResolver, BMBehaviorRetriever;

@interface _PSRuleMiningModel : NSObject {

	id<_DKKnowledgeQuerying> _knowledgeStore;
	_PSContactResolver* _contactResolver;
	BMBehaviorRetriever* _behaviorRetriever;
	long long __PSRuleMiningModelDaysToPromoteRecentlyInstalledAppExtensions;
	long long __PSRuleMiningModelRegularizingContextOverlapConstraint;
	double __PSRuleMiningModelMinRuleConfidenceForSuggestion;

}

@property (nonatomic,readonly) BMBehaviorRetriever * behaviorRetriever;                                            //@synthesize behaviorRetriever=_behaviorRetriever - In the implementation block
@property (assign,nonatomic) long long _PSRuleMiningModelDaysToPromoteRecentlyInstalledAppExtensions;              //@synthesize _PSRuleMiningModelDaysToPromoteRecentlyInstalledAppExtensions=__PSRuleMiningModelDaysToPromoteRecentlyInstalledAppExtensions - In the implementation block
@property (assign,nonatomic) long long _PSRuleMiningModelRegularizingContextOverlapConstraint;                     //@synthesize _PSRuleMiningModelRegularizingContextOverlapConstraint=__PSRuleMiningModelRegularizingContextOverlapConstraint - In the implementation block
@property (assign,nonatomic) double _PSRuleMiningModelMinRuleConfidenceForSuggestion;                              //@synthesize _PSRuleMiningModelMinRuleConfidenceForSuggestion=__PSRuleMiningModelMinRuleConfidenceForSuggestion - In the implementation block
@property (nonatomic,readonly) id<_DKKnowledgeQuerying> knowledgeStore;                                            //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,readonly) _PSContactResolver * contactResolver;                                               //@synthesize contactResolver=_contactResolver - In the implementation block
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(id)shareExtensionSuggestionsFromContext:(id)arg1 ;
-(void)updateModelProperities:(id)arg1 ;
-(id)initWithKnowledgeStore:(id)arg1 contactresolver:(id)arg2 withConfig:(id)arg3 ;
-(id)suggestionProxiesWithPredictionContext:(id)arg1 photoSuggestedPeople:(id)arg2 supportedBundleIDs:(id)arg3 ;
-(_PSContactResolver *)contactResolver;
-(BMBehaviorRetriever *)behaviorRetriever;
-(void)set_PSRuleMiningModelDaysToPromoteRecentlyInstalledAppExtensions:(long long)arg1 ;
-(void)set_PSRuleMiningModelRegularizingContextOverlapConstraint:(long long)arg1 ;
-(void)set_PSRuleMiningModelMinRuleConfidenceForSuggestion:(double)arg1 ;
-(double)_PSRuleMiningModelMinRuleConfidenceForSuggestion;
-(id)filterByRegularizingRules:(id)arg1 invalidatedByAnyConflictingItems:(id)arg2 containingItemTypes:(id)arg3 ;
-(long long)_PSRuleMiningModelRegularizingContextOverlapConstraint;
-(id)filterByRegularizingRulesByContextOverlap:(id)arg1 regulularizeItems:(id)arg2 queryItems:(id)arg3 regularizationConstraint:(unsigned long long)arg4 ;
-(long long)_PSRuleMiningModelDaysToPromoteRecentlyInstalledAppExtensions;
-(id)suggestionArrayWithArray:(id)arg1 appendingUniqueElementsByBundleIdFromArray:(id)arg2 ;
@end

