/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/


@protocol _DKKnowledgeQuerying_DKKnowledgeSaving;
#import <PeopleSuggester/PeopleSuggester-Structs.h>
@class _CDInteractionStore, _CDInteractionCache, NSUserDefaults, CNContactStore, NSArray, NSString, _PSRuleMiningModel, _PSKNNModel, _PSHeuristics, _PSInteractionAndContactMonitor, NSSet, NSDictionary, TRIClient, TRITrackingId;

@interface _PSEnsembleModel : NSObject {

	os_unfair_lock_s _lock;
	_CDInteractionStore* _interactionStore;
	id<_DKKnowledgeQuerying><_DKKnowledgeSaving> _knowledgeStore;
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
	_PSHeuristics* _heuristics;
	_PSInteractionAndContactMonitor* _contactMonitor;
	NSSet* _cachedSupportedBundleIDs;
	NSDictionary* _psConfig;
	TRIClient* _trialClient;
	TRITrackingId* _trialTrackingID;

}

@property (nonatomic,retain) _PSRuleMiningModel * ruleMiningModel;                                     //@synthesize ruleMiningModel=_ruleMiningModel - In the implementation block
@property (nonatomic,retain) _PSKNNModel * knnModel;                                                   //@synthesize knnModel=_knnModel - In the implementation block
@property (nonatomic,retain) _PSKNNModel * knnMapsModel;                                               //@synthesize knnMapsModel=_knnMapsModel - In the implementation block
@property (nonatomic,retain) _PSKNNModel * knnZkwModel;                                                //@synthesize knnZkwModel=_knnZkwModel - In the implementation block
@property (nonatomic,retain) _PSKNNModel * knnNameOrContactRankerModel;                                //@synthesize knnNameOrContactRankerModel=_knnNameOrContactRankerModel - In the implementation block
@property (nonatomic,retain) _PSHeuristics * heuristics;                                               //@synthesize heuristics=_heuristics - In the implementation block
@property (nonatomic,retain) _PSInteractionAndContactMonitor * contactMonitor;                         //@synthesize contactMonitor=_contactMonitor - In the implementation block
@property (nonatomic,retain) NSSet * cachedSupportedBundleIDs;                                         //@synthesize cachedSupportedBundleIDs=_cachedSupportedBundleIDs - In the implementation block
@property (retain) NSDictionary * psConfig;                                                            //@synthesize psConfig=_psConfig - In the implementation block
@property (retain) TRIClient * trialClient;                                                            //@synthesize trialClient=_trialClient - In the implementation block
@property (retain) TRITrackingId * trialTrackingID;                                                    //@synthesize trialTrackingID=_trialTrackingID - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeQuerying><_DKKnowledgeSaving> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,retain) _CDInteractionStore * interactionStore;                                   //@synthesize interactionStore=_interactionStore - In the implementation block
@property (nonatomic,retain) _CDInteractionCache * messageInteractionCache;                            //@synthesize messageInteractionCache=_messageInteractionCache - In the implementation block
@property (nonatomic,retain) _CDInteractionCache * shareInteractionCache;                              //@synthesize shareInteractionCache=_shareInteractionCache - In the implementation block
@property (nonatomic,retain) NSUserDefaults * peopleSuggesterDefaults;                                 //@synthesize peopleSuggesterDefaults=_peopleSuggesterDefaults - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                            //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSArray * defaultContactKeysToFetch;                                      //@synthesize defaultContactKeysToFetch=_defaultContactKeysToFetch - In the implementation block
@property (nonatomic,retain) NSString * trialID;                                                       //@synthesize trialID=_trialID - In the implementation block
-(id)init;
-(_CDInteractionStore *)interactionStore;
-(id<_DKKnowledgeQuerying><_DKKnowledgeSaving>)knowledgeStore;
-(void)setKnowledgeStore:(id<_DKKnowledgeQuerying><_DKKnowledgeSaving>)arg1 ;
-(CNContactStore *)contactStore;
-(void)setInteractionStore:(_CDInteractionStore *)arg1 ;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)setHeuristics:(_PSHeuristics *)arg1 ;
-(_PSHeuristics *)heuristics;
-(void)loadDefaultPSConfig;
-(void)setTrialID:(NSString *)arg1 ;
-(BOOL)loadPSConfig:(id)arg1 ;
-(_PSRuleMiningModel *)ruleMiningModel;
-(_PSKNNModel *)knnModel;
-(_PSKNNModel *)knnMapsModel;
-(_PSKNNModel *)knnZkwModel;
-(_PSKNNModel *)knnNameOrContactRankerModel;
-(NSString *)trialID;
-(void)updateFactorLevels;
-(NSUserDefaults *)peopleSuggesterDefaults;
-(id)fetchShareSheetSupportedBundleIDs;
-(void)populateCachesWithSupportedBundleIDs:(id)arg1 ;
-(NSArray *)defaultContactKeysToFetch;
-(NSSet *)cachedSupportedBundleIDs;
-(void)setMessageInteractionCache:(_CDInteractionCache *)arg1 ;
-(void)setShareInteractionCache:(_CDInteractionCache *)arg1 ;
-(void)setCachedSupportedBundleIDs:(NSSet *)arg1 ;
-(_CDInteractionCache *)messageInteractionCache;
-(_CDInteractionCache *)shareInteractionCache;
-(_PSInteractionAndContactMonitor *)contactMonitor;
-(void)setContactMonitor:(_PSInteractionAndContactMonitor *)arg1 ;
-(NSDictionary *)psConfig;
-(void)setRuleMiningModel:(_PSRuleMiningModel *)arg1 ;
-(void)setKnnModel:(_PSKNNModel *)arg1 ;
-(void)setKnnZkwModel:(_PSKNNModel *)arg1 ;
-(void)setKnnNameOrContactRankerModel:(_PSKNNModel *)arg1 ;
-(id)predictWithPredictionContext:(id)arg1 maxSuggestions:(unsigned long long)arg2 contactKeysToFetch:(id)arg3 ;
-(id)suggestionsFromSuggestionProxies:(id)arg1 supportedBundleIDs:(id)arg2 contactKeysToFetch:(id)arg3 meContactIdentifier:(id)arg4 maxSuggestions:(unsigned long long)arg5 ;
-(void)updateTrialID:(id)arg1 ;
-(void)setKnnMapsModel:(_PSKNNModel *)arg1 ;
-(id)mapsSuggestionArrayWithArray:(id)arg1 appendingUniqueElementsFromArray:(id)arg2 contactResolver:(id)arg3 meContactId:(id)arg4 ;
-(void)registerWithTrial;
-(void)populateCaches;
-(id)predictWithPredictionContext:(id)arg1 maxSuggestions:(unsigned long long)arg2 ;
-(id)predictWithMapsPredictionContext:(id)arg1 maxSuggestions:(unsigned long long)arg2 ;
-(id)suggestZKWMessagesSuggestionsWithPredictionContext:(id)arg1 maxSuggestions:(unsigned long long)arg2 ;
-(id)rankedContactSuggestionsWithPredictionContext:(id)arg1 contactsOnly:(BOOL)arg2 maxSuggestions:(unsigned long long)arg3 ;
-(id)rankedNameSuggestionsWithPredictionContext:(id)arg1 name:(id)arg2 ;
-(id)rankedAutocompleteSuggestionsFromContext:(id)arg1 candidates:(id)arg2 ;
-(id)appExtensionSuggestionsFromContext:(id)arg1 ;
-(void)setPeopleSuggesterDefaults:(NSUserDefaults *)arg1 ;
-(void)setDefaultContactKeysToFetch:(NSArray *)arg1 ;
-(void)setPsConfig:(NSDictionary *)arg1 ;
-(TRIClient *)trialClient;
-(void)setTrialClient:(TRIClient *)arg1 ;
-(TRITrackingId *)trialTrackingID;
-(void)setTrialTrackingID:(TRITrackingId *)arg1 ;
@end

