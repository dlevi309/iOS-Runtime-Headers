/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/


@protocol _DKKnowledgeQuerying;
@class _CDInteractionStore, _PSContactResolver, _CDInteractionCache;

@interface _PSHeuristics : NSObject {

	id<_DKKnowledgeQuerying> _knowledgeStore;
	_CDInteractionStore* _interactionStore;
	_PSContactResolver* _contactResolver;
	_CDInteractionCache* _recencyCache;

}

@property (nonatomic,retain) _CDInteractionCache * recencyCache;                     //@synthesize recencyCache=_recencyCache - In the implementation block
@property (nonatomic,readonly) id<_DKKnowledgeQuerying> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,readonly) _CDInteractionStore * interactionStore;               //@synthesize interactionStore=_interactionStore - In the implementation block
@property (nonatomic,readonly) _PSContactResolver * contactResolver;                 //@synthesize contactResolver=_contactResolver - In the implementation block
+(id)templateForInPhoneCallHeuristicWithContactId:(id)arg1 handle:(id)arg2 ;
-(_CDInteractionStore *)interactionStore;
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(id)initWithKnowledgeStore:(id)arg1 interactionStore:(id)arg2 contactResolver:(id)arg3 ;
-(id)recentNonSystemSuggestionsForBundleIDs:(id)arg1 numberOfSuggestion:(unsigned long long)arg2 ;
-(id)hyperRecentHeuristicSuggestionProxiesWithReferenceDate:(id)arg1 predictionContextBundleId:(id)arg2 ;
-(id)inPhoneCallHeuristicSuggestionProxies;
-(id)photoSuggestionProxiesPartitionedByPresenceInAttachments:(id)arg1 photoSuggestedPeople:(id)arg2 contactIDsInAssets:(id)arg3 ;
-(id)maximalIntersectionGroupChatSuggestionProxyWithSeedContactIdentifiers:(id)arg1 bundleIds:(id)arg2 meContactIdentifier:(id)arg3 ;
-(id)backFillProxiesByRecencyUsingMessagesCache:(id)arg1 startIndex:(unsigned long long)arg2 ;
-(id)seedSuggestionsForChatGuidsAndEmails:(id)arg1 ;
-(id)hourOfDayProbabilitiesToInteractWithContacts:(id)arg1 ;
-(void)prepareRecencyCache;
-(void)setRecencyCache:(_CDInteractionCache *)arg1 ;
-(_PSContactResolver *)contactResolver;
-(_CDInteractionCache *)recencyCache;
-(id)proximityBoostingHeuristicWithProximityBooster:(id)arg1 existingSuggestions:(id)arg2 ;
@end

