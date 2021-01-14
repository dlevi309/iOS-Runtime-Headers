/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/


@protocol _DKKnowledgeQuerying_DKKnowledgeSaving;
#import <PeopleSuggester/PeopleSuggester-Structs.h>
@class _CDInteractionStore, PPTopicStore, PPContactStore, _CDInteractionCache, NSUserDefaults, CNContactStore, NSArray, NSString, _PSRuleMiningModel, _PSKNNModel, _PSHeuristics, _PSInteractionAndContactMonitor, NSSet, _PSContactResolver, NSDictionary, TRIClient, TRITrackingId;

@interface _PSEnsembleModel : NSObject {

	os_unfair_lock_s _lock;
	BOOL _allowNonSupportedBundleIDs;
	_CDInteractionStore* _interactionStore;
	id<_DKKnowledgeQuerying><_DKKnowledgeSaving> _knowledgeStore;
	PPTopicStore* _topicStore;
	PPContactStore* _portraitContactStore;
	_CDInteractionCache* _messageInteractionCache;
	_CDInteractionCache* _shareInteractionCache;
	NSUserDefaults* _peopleSuggesterDefaults;
	CNContactStore* _contactStore;
	NSArray* _defaultContactKeysToFetch;
	NSString* _trialID;
	_PSRuleMiningModel* _ruleMiningModel;
	_PSKNNModel* _knnModel;
	_PSKNNModel* _knnMapsModel;
	_PSKNNModel* _knnZkwModel;
	_PSKNNModel* _knnNameOrContactRankerModel;
	_PSKNNModel* _knnSiriNLContactRankerModel;
	_PSHeuristics* _heuristics;
	_PSInteractionAndContactMonitor* _contactMonitor;
	NSSet* _cachedSupportedBundleIDs;
	_PSContactResolver* _contactResolver;
	NSDictionary* _psConfig;
	NSDictionary* _psConfigForAdaptableModel;
	TRIClient* _trialClient;
	TRITrackingId* _trialTrackingID;

}

@property (nonatomic,retain) _PSRuleMiningModel * ruleMiningModel;                                     //@synthesize ruleMiningModel=_ruleMiningModel - In the implementation block
@property (nonatomic,retain) _PSKNNModel * knnModel;                                                   //@synthesize knnModel=_knnModel - In the implementation block
@property (nonatomic,retain) _PSKNNModel * knnMapsModel;                                               //@synthesize knnMapsModel=_knnMapsModel - In the implementation block
@property (nonatomic,retain) _PSKNNModel * knnZkwModel;                                                //@synthesize knnZkwModel=_knnZkwModel - In the implementation block
@property (nonatomic,retain) _PSKNNModel * knnNameOrContactRankerModel;                                //@synthesize knnNameOrContactRankerModel=_knnNameOrContactRankerModel - In the implementation block
@property (nonatomic,retain) _PSKNNModel * knnSiriNLContactRankerModel;                                //@synthesize knnSiriNLContactRankerModel=_knnSiriNLContactRankerModel - In the implementation block
@property (nonatomic,retain) _PSHeuristics * heuristics;                                               //@synthesize heuristics=_heuristics - In the implementation block
@property (nonatomic,retain) _PSInteractionAndContactMonitor * contactMonitor;                         //@synthesize contactMonitor=_contactMonitor - In the implementation block
@property (nonatomic,retain) NSSet * cachedSupportedBundleIDs;                                         //@synthesize cachedSupportedBundleIDs=_cachedSupportedBundleIDs - In the implementation block
@property (nonatomic,retain) _PSContactResolver * contactResolver;                                     //@synthesize contactResolver=_contactResolver - In the implementation block
@property (assign,nonatomic) BOOL allowNonSupportedBundleIDs;                                          //@synthesize allowNonSupportedBundleIDs=_allowNonSupportedBundleIDs - In the implementation block
@property (retain) NSDictionary * psConfig;                                                            //@synthesize psConfig=_psConfig - In the implementation block
@property (retain) NSDictionary * psConfigForAdaptableModel;                                           //@synthesize psConfigForAdaptableModel=_psConfigForAdaptableModel - In the implementation block
@property (retain) TRIClient * trialClient;                                                            //@synthesize trialClient=_trialClient - In the implementation block
@property (retain) TRITrackingId * trialTrackingID;                                                    //@synthesize trialTrackingID=_trialTrackingID - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeQuerying><_DKKnowledgeSaving> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,retain) _CDInteractionStore * interactionStore;                                   //@synthesize interactionStore=_interactionStore - In the implementation block
@property (nonatomic,retain) PPTopicStore * topicStore;                                                //@synthesize topicStore=_topicStore - In the implementation block
@property (nonatomic,retain) PPContactStore * portraitContactStore;                                    //@synthesize portraitContactStore=_portraitContactStore - In the implementation block
@property (nonatomic,retain) _CDInteractionCache * messageInteractionCache;                            //@synthesize messageInteractionCache=_messageInteractionCache - In the implementation block
@property (nonatomic,retain) _CDInteractionCache * shareInteractionCache;                              //@synthesize shareInteractionCache=_shareInteractionCache - In the implementation block
@property (nonatomic,retain) NSUserDefaults * peopleSuggesterDefaults;                                 //@synthesize peopleSuggesterDefaults=_peopleSuggesterDefaults - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                            //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSArray * defaultContactKeysToFetch;                                      //@synthesize defaultContactKeysToFetch=_defaultContactKeysToFetch - In the implementation block
@property (nonatomic,retain) NSString * trialID;                                                       //@synthesize trialID=_trialID - In the implementation block
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)setPortraitContactStore:(PPContactStore *)arg1 ;
-(CNContactStore *)contactStore;
-(id)rankedHandlesFromCandidateHandles:(id)arg1 ;
-(_CDInteractionStore *)interactionStore;
-(void)addAdaptedModelUsageInfoToSuggestions:(id)arg1 ;
-(void)setContactMonitor:(_PSInteractionAndContactMonitor *)arg1 ;
-(id)init;
-(PPTopicStore *)topicStore;
-(void)setKnnZkwModel:(_PSKNNModel *)arg1 ;
-(void)setMessageInteractionCache:(_CDInteractionCache *)arg1 ;
-(void)setKnnMapsModel:(_PSKNNModel *)arg1 ;
-(void)setTrialClient:(TRIClient *)arg1 ;
-(id)rankedGlobalSuggestionsWithPredictionContext:(id)arg1 contactsOnly:(BOOL)arg2 maxSuggestions:(unsigned long long)arg3 ;
-(void)updateFactorLevels;
-(NSSet *)cachedSupportedBundleIDs;
-(NSArray *)defaultContactKeysToFetch;
-(_PSKNNModel *)knnModel;
-(void)setAllowNonSupportedBundleIDs:(BOOL)arg1 ;
-(_CDInteractionCache *)shareInteractionCache;
-(void)setPsConfigForAdaptableModel:(NSDictionary *)arg1 ;
-(void)setKnnNameOrContactRankerModel:(_PSKNNModel *)arg1 ;
-(NSUserDefaults *)peopleSuggesterDefaults;
-(NSString *)trialID;
-(id)rankedAutocompleteSuggestionsFromContext:(id)arg1 candidates:(id)arg2 ;
-(id)familyPredictionsWithMaxSuggestions:(unsigned long long)arg1 ;
-(_PSInteractionAndContactMonitor *)contactMonitor;
-(void)registerWithTrial;
-(BOOL)copyRemoteRuleMinerMLModel:(id)arg1 ;
-(void)setHeuristics:(_PSHeuristics *)arg1 ;
-(void)loadDefaultAdaptableModelConfig;
-(id)predictWithMapsPredictionContext:(id)arg1 maxSuggestions:(unsigned long long)arg2 ;
-(void)populateCaches;
-(void)setTrialID:(NSString *)arg1 ;
-(NSDictionary *)psConfigForAdaptableModel;
-(id)mergedSuggestionsWithFamilySuggestions:(id)arg1 shareSheetSuggestions:(id)arg2 maxSuggestions:(unsigned long long)arg3 supportedBundleIds:(id)arg4 ;
-(id)rankedGlobalSuggestionsForSiriNLWithPredictionContext:(id)arg1 maxSuggestions:(unsigned long long)arg2 interactionId:(id)arg3 ;
-(id)rankedSiriMLCRHandles:(id)arg1 context:(id)arg2 ;
-(void)addUTIInfo:(id)arg1 predictionContext:(id)arg2 ;
-(PPContactStore *)portraitContactStore;
-(id)mapsSuggestionArrayWithArray:(id)arg1 appendingUniqueElementsFromArray:(id)arg2 contactResolver:(id)arg3 meContactId:(id)arg4 ;
-(_PSContactResolver *)contactResolver;
-(_PSHeuristics *)heuristics;
-(void)setTopicStore:(PPTopicStore *)arg1 ;
-(void)setShareInteractionCache:(_CDInteractionCache *)arg1 ;
-(NSDictionary *)psConfig;
-(void)setKnnSiriNLContactRankerModel:(_PSKNNModel *)arg1 ;
-(void)setTrialTrackingID:(TRITrackingId *)arg1 ;
-(id)rankedNameSuggestionsWithPredictionContext:(id)arg1 name:(id)arg2 ;
-(void)setKnowledgeStore:(id<_DKKnowledgeQuerying><_DKKnowledgeSaving>)arg1 ;
-(id<_DKKnowledgeQuerying><_DKKnowledgeSaving>)knowledgeStore;
-(id)fetchShareSheetSupportedBundleIDs;
-(_PSKNNModel *)knnMapsModel;
-(void)discardTrialModels;
-(void)addSupportedBundleIDs:(id)arg1 ;
-(void)setDefaultContactKeysToFetch:(NSArray *)arg1 ;
-(_PSRuleMiningModel *)ruleMiningModel;
-(TRITrackingId *)trialTrackingID;
-(void)updateTrialID:(id)arg1 ;
-(_PSKNNModel *)knnSiriNLContactRankerModel;
-(void)loadDefaultPSConfig;
-(void)setRuleMiningModel:(_PSRuleMiningModel *)arg1 ;
-(BOOL)loadPSConfig:(id)arg1 ;
-(void)setInteractionStore:(_CDInteractionStore *)arg1 ;
-(_PSKNNModel *)knnNameOrContactRankerModel;
-(void)setPsConfig:(NSDictionary *)arg1 ;
-(id)getLatestTrialMLModelVersion;
-(id)suggestZKWMessagesSuggestionsWithPredictionContext:(id)arg1 maxSuggestions:(unsigned long long)arg2 ;
-(id)appExtensionSuggestionsFromContext:(id)arg1 ;
-(_CDInteractionCache *)messageInteractionCache;
-(id)suggestionsFromSuggestionProxies:(id)arg1 supportedBundleIDs:(id)arg2 contactKeysToFetch:(id)arg3 meContactIdentifier:(id)arg4 maxSuggestions:(unsigned long long)arg5 ;
-(_PSKNNModel *)knnZkwModel;
-(TRIClient *)trialClient;
-(BOOL)allowNonSupportedBundleIDs;
-(void)setContactResolver:(_PSContactResolver *)arg1 ;
-(void)setCachedSupportedBundleIDs:(NSSet *)arg1 ;
-(void)setKnnModel:(_PSKNNModel *)arg1 ;
-(id)predictWithPredictionContext:(id)arg1 maxSuggestions:(unsigned long long)arg2 contactKeysToFetch:(id)arg3 ;
-(void)discardAdaptedModel;
-(void)populateCachesWithSupportedBundleIDs:(id)arg1 ;
-(void)setPeopleSuggesterDefaults:(NSUserDefaults *)arg1 ;
-(id)predictWithPredictionContext:(id)arg1 maxSuggestions:(unsigned long long)arg2 ;
@end

