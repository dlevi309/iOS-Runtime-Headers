/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/


@protocol _DKKnowledgeQuerying;
@class _CDInteractionStore, _PSContactResolver, _CDInteractionCache;

@interface _PSHeuristics : NSObject {

	id<_DKKnowledgeQuerying> _knowledgeStore;
	_CDInteractionStore* _interactionStore;
	_PSContactResolver* _contactResolver;
	_CDInteractionCache* _recencyCache;
	double _recencyMargin;

}

@property (nonatomic,retain) _CDInteractionCache * recencyCache;                     //@synthesize recencyCache=_recencyCache - In the implementation block
@property (assign,nonatomic) double recencyMargin;                                   //@synthesize recencyMargin=_recencyMargin - In the implementation block
@property (nonatomic,readonly) id<_DKKnowledgeQuerying> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,readonly) _CDInteractionStore * interactionStore;               //@synthesize interactionStore=_interactionStore - In the implementation block
@property (nonatomic,readonly) _PSContactResolver * contactResolver;                 //@synthesize contactResolver=_contactResolver - In the implementation block
+(id)templateForPhoneCallHeuristicWithContactId:(id)arg1 handle:(id)arg2 reason:(id)arg3 ;
-(_CDInteractionStore *)interactionStore;
-(id)photoSuggestionProxiesPartitionedByPresenceInAttachments:(id)arg1 photoSuggestedPeople:(id)arg2 contactIDsInAssets:(id)arg3 ;
-(void)updateModelProperties:(id)arg1 ;
-(void)prepareRecencyCacheWithSupportedBundleIds:(id)arg1 ;
-(id)seedSuggestionsForChatGuidsAndEmails:(id)arg1 ;
-(void)setRecencyMargin:(double)arg1 ;
-(id)hourOfDayProbabilitiesToInteractWithContacts:(id)arg1 ;
-(void)setRecencyCache:(_CDInteractionCache *)arg1 ;
-(_PSContactResolver *)contactResolver;
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(id)initWithKnowledgeStore:(id)arg1 interactionStore:(id)arg2 contactResolver:(id)arg3 shareSheetSupportedBundleIds:(id)arg4 ;
-(id)backFillProxiesByRecencyUsingInteractions:(id)arg1 startIndex:(unsigned long long)arg2 ;
-(id)recentNonSystemSuggestionsForBundleIDs:(id)arg1 numberOfSuggestion:(unsigned long long)arg2 ;
-(id)hyperRecentHeuristicSuggestionProxiesWithReferenceDate:(id)arg1 predictionContextBundleId:(id)arg2 ;
-(_CDInteractionCache *)recencyCache;
-(id)inPhoneCallHeuristicSuggestionProxies;
-(id)maximalIntersectionGroupChatSuggestionProxyWithSeedContactIdentifiers:(id)arg1 bundleIds:(id)arg2 meContactIdentifier:(id)arg3 ;
-(double)recencyMargin;
-(id)initWithKnowledgeStore:(id)arg1 interactionStore:(id)arg2 contactResolver:(id)arg3 ;
-(id)proximityBoostingHeuristicWithProximityBooster:(id)arg1 existingSuggestions:(id)arg2 ;
@end

