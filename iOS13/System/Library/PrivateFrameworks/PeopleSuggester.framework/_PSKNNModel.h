/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/


@protocol _DKKnowledgeQuerying;
@class _CDInteractionStore, _PSContactResolver, NSArray, _CDInteractionCache;

@interface _PSKNNModel : NSObject {

	unsigned long long _k;
	id<_DKKnowledgeQuerying> _knowledgeStore;
	_CDInteractionStore* _interactionStore;
	_PSContactResolver* _contactResolver;
	NSArray* _filterBundleIds;
	_CDInteractionCache* _messageInteractionCache;
	_CDInteractionCache* _shareInteractionCache;
	unsigned long long __PSKnnTopKShares;
	unsigned long long __PSKnnMessagesZkwTopNFilter;
	unsigned long long __PSKnnModelRecencyMarginToPromoteShares;
	unsigned long long __PSKnnModelRecencyMarginToPromoteSharesMatchingBundleId;
	unsigned long long __PSKnnModelRecencyMarginToRetainShares;

}

@property (assign,nonatomic) unsigned long long _PSKnnTopKShares;                                                     //@synthesize _PSKnnTopKShares=__PSKnnTopKShares - In the implementation block
@property (assign,nonatomic) unsigned long long _PSKnnMessagesZkwTopNFilter;                                          //@synthesize _PSKnnMessagesZkwTopNFilter=__PSKnnMessagesZkwTopNFilter - In the implementation block
@property (assign,nonatomic) unsigned long long _PSKnnModelRecencyMarginToPromoteShares;                              //@synthesize _PSKnnModelRecencyMarginToPromoteShares=__PSKnnModelRecencyMarginToPromoteShares - In the implementation block
@property (assign,nonatomic) unsigned long long _PSKnnModelRecencyMarginToPromoteSharesMatchingBundleId;              //@synthesize _PSKnnModelRecencyMarginToPromoteSharesMatchingBundleId=__PSKnnModelRecencyMarginToPromoteSharesMatchingBundleId - In the implementation block
@property (assign,nonatomic) unsigned long long _PSKnnModelRecencyMarginToRetainShares;                               //@synthesize _PSKnnModelRecencyMarginToRetainShares=__PSKnnModelRecencyMarginToRetainShares - In the implementation block
@property (k,nonatomic,readonly) unsigned long long k;                                                                //@synthesize k=_k - In the implementation block
@property (nonatomic,readonly) id<_DKKnowledgeQuerying> knowledgeStore;                                               //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,readonly) _CDInteractionStore * interactionStore;                                                //@synthesize interactionStore=_interactionStore - In the implementation block
@property (nonatomic,readonly) _PSContactResolver * contactResolver;                                                  //@synthesize contactResolver=_contactResolver - In the implementation block
@property (nonatomic,readonly) NSArray * filterBundleIds;                                                             //@synthesize filterBundleIds=_filterBundleIds - In the implementation block
@property (nonatomic,retain) _CDInteractionCache * messageInteractionCache;                                           //@synthesize messageInteractionCache=_messageInteractionCache - In the implementation block
@property (nonatomic,retain) _CDInteractionCache * shareInteractionCache;                                             //@synthesize shareInteractionCache=_shareInteractionCache - In the implementation block
-(_CDInteractionStore *)interactionStore;
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(unsigned long long)k;
-(void)updateModelProperities:(id)arg1 ;
-(void)setMessageInteractionCache:(_CDInteractionCache *)arg1 ;
-(void)setShareInteractionCache:(_CDInteractionCache *)arg1 ;
-(_CDInteractionCache *)messageInteractionCache;
-(_CDInteractionCache *)shareInteractionCache;
-(NSArray *)filterBundleIds;
-(id)initWithK:(unsigned long long)arg1 interactionStore:(id)arg2 filterByBundleIds:(id)arg3 knowledgeStore:(id)arg4 contactResolver:(id)arg5 messageInteractionCache:(id)arg6 shareInteractionCache:(id)arg7 ;
-(id)suggestionProxiesWithPredictionContext:(id)arg1 ;
-(id)rankedMapsShareEtaSuggestions:(id)arg1 maxSuggestions:(unsigned long long)arg2 ;
-(id)mapsShareEtaDefaultKnnSuggestions:(id)arg1 maxSuggestions:(unsigned long long)arg2 ;
-(id)rankedZkwSuggestionsWithPredictionContext:(id)arg1 maxSuggestions:(unsigned long long)arg2 ;
-(id)rankedGlobalSuggestionsWithPredictionContext:(id)arg1 maxSuggestions:(unsigned long long)arg2 contactsOnly:(BOOL)arg3 interactions:(id)arg4 contactIdsCurrentlyInStore:(id)arg5 ;
-(id)rankedNameSuggestionsWithPredictionContext:(id)arg1 forName:(id)arg2 ;
-(id)rankedAutocompleteSuggestionsWithPredictionContext:(id)arg1 candidates:(id)arg2 ;
-(_PSContactResolver *)contactResolver;
-(void)set_PSKnnTopKShares:(unsigned long long)arg1 ;
-(void)set_PSKnnMessagesZkwTopNFilter:(unsigned long long)arg1 ;
-(void)set_PSKnnModelRecencyMarginToPromoteShares:(unsigned long long)arg1 ;
-(void)set_PSKnnModelRecencyMarginToPromoteSharesMatchingBundleId:(unsigned long long)arg1 ;
-(void)set_PSKnnModelRecencyMarginToRetainShares:(unsigned long long)arg1 ;
-(id)rankedMessagesAutocompleteSuggestionsWithPredictionContext:(id)arg1 bundleId:(id)arg2 candidates:(id)arg3 ;
-(id)featureVectorFromPredictionDate:(id)arg1 bundleId:(id)arg2 ;
-(id)candidatePropertyFromCandidates:(id)arg1 ;
-(id)featuresFromInteractionsSplitRecipients:(id)arg1 ;
-(id)interactionLabelsForQueryResult:(id)arg1 queryPoint:(id)arg2 rankerType:(long long)arg3 frequencyOnly:(BOOL)arg4 contactsOnly:(BOOL)arg5 ;
-(long long)suggestionExists:(id)arg1 withValue:(id)arg2 inArray:(id)arg3 ;
-(id)filterSuggestionsFrom:(id)arg1 byFilteringOutSeedRecipients:(id)arg2 ;
-(id)rankedMessagesZkwSuggestionsWithPredictionContext:(id)arg1 bundleId:(id)arg2 maxSuggestions:(unsigned long long)arg3 frequencyOnly:(BOOL)arg4 interactions:(id)arg5 ;
-(id)indexesOfObjectsWithKey:(id)arg1 withValues:(id)arg2 inArray:(id)arg3 ;
-(unsigned long long)_PSKnnMessagesZkwTopNFilter;
-(id)featuresFromInteractions:(id)arg1 ;
-(id)normalizedStringFromString:(id)arg1 ;
-(id)filterShareInteractions:(id)arg1 minimumOccurences:(unsigned long long)arg2 ;
-(id)neighborsFromTrainingData:(id)arg1 k:(unsigned long long)arg2 queryPoint:(id)arg3 ;
-(id)extractNearestNeighborLabelsForQueryResult:(id)arg1 andNeighbors:(id)arg2 frequencyOnly:(BOOL)arg3 rankerType:(long long)arg4 contactsOnly:(BOOL)arg5 ;
-(id)splitShareLabels:(id)arg1 suggestionDate:(id)arg2 contextBundleId:(id)arg3 ;
-(unsigned long long)_PSKnnTopKShares;
-(id)sliceStart:(unsigned long long)arg1 end:(unsigned long long)arg2 ofArray:(id)arg3 ;
-(id)mergedSuggestionsFromShares:(id)arg1 andInteractions:(id)arg2 ;
-(unsigned long long)_PSKnnModelRecencyMarginToPromoteSharesMatchingBundleId;
-(unsigned long long)_PSKnnModelRecencyMarginToPromoteShares;
-(unsigned long long)_PSKnnModelRecencyMarginToRetainShares;
-(id)rankedLabelsFromInteractionsSingleRecipientArray:(id)arg1 andDistances:(id)arg2 freqOnly:(BOOL)arg3 contactsOnly:(BOOL)arg4 ;
-(id)rankedLabelsFromInteractionsMaintainRecipientsArray:(id)arg1 andDistances:(id)arg2 freqOnly:(BOOL)arg3 ;
-(unsigned long long)indexToInsertNeighbor:(id)arg1 array:(id)arg2 ;
-(id)featuresFromMapsFeedbackEvents:(id)arg1 ;
-(id)extractNearestNeighborsForMapsQueryResult:(id)arg1 andNeighbors:(id)arg2 frequencyOnly:(BOOL)arg3 ;
-(id)targetBundleIdsForFilterBundlesIds:(id)arg1 ;
@end

