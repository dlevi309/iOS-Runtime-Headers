/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/

#import <SpotlightServices/SpotlightServices-Structs.h>
#import <libobjc.A.dylib/SSDataCollectible.h>

@class NSString, PRSL2FeatureVector, NSData, PRSRankingSpanCalculator, NSMutableArray, NSArray;

@interface PRSRankingItem : NSObject <SSDataCollectible> {

	BOOL _isInternal;
	BOOL _eligibleForDemotion;
	BOOL _shouldHideUnderShowMore;
	BOOL _matchedQueryTerms;
	BOOL _isPrepared;
	unsigned short _bundleIDType;
	float _rawScore;
	float _feedbackScore;
	float _score;
	float _withinBundleScore;
	NSString* _identifier;
	NSString* _sectionBundleIdentifier;
	PRSL2FeatureVector* _L2FeatureVector;
	NSData* _serverFeaturesJSON;
	double _mostRecentUsedDate;
	double _closestUpComingDate;
	SCD_Struct_PR8* _attributes;
	PRSRankingSpanCalculator* _spanCalculator;
	NSMutableArray* _matchedSenders;
	NSMutableArray* _matchedVipSenders;
	NSMutableArray* _matchedRecipients;
	NSArray* _emailAddresses;
	unsigned long long _importantPropertiesPrefixMatched;
	unsigned long long _importantPropertiesWordMatched;
	NSString* _contentType;
	T _indexScore;
	T _inputToModelScore;

}

@property (assign,nonatomic) SCD_Struct_PR8* attributes;                                       //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) T indexScore;                                                     //@synthesize indexScore=_indexScore - In the implementation block
@property (nonatomic,retain) PRSRankingSpanCalculator * spanCalculator;                        //@synthesize spanCalculator=_spanCalculator - In the implementation block
@property (assign,nonatomic) T inputToModelScore;                                              //@synthesize inputToModelScore=_inputToModelScore - In the implementation block
@property (nonatomic,retain) NSMutableArray * matchedSenders;                                  //@synthesize matchedSenders=_matchedSenders - In the implementation block
@property (nonatomic,retain) NSMutableArray * matchedVipSenders;                               //@synthesize matchedVipSenders=_matchedVipSenders - In the implementation block
@property (nonatomic,retain) NSMutableArray * matchedRecipients;                               //@synthesize matchedRecipients=_matchedRecipients - In the implementation block
@property (nonatomic,retain) NSArray * emailAddresses;                                         //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (assign,nonatomic) unsigned long long importantPropertiesPrefixMatched;              //@synthesize importantPropertiesPrefixMatched=_importantPropertiesPrefixMatched - In the implementation block
@property (assign,nonatomic) unsigned long long importantPropertiesWordMatched;                //@synthesize importantPropertiesWordMatched=_importantPropertiesWordMatched - In the implementation block
@property (assign,nonatomic) unsigned short bundleIDType;                                      //@synthesize bundleIDType=_bundleIDType - In the implementation block
@property (assign,nonatomic) BOOL isPrepared;                                                  //@synthesize isPrepared=_isPrepared - In the implementation block
@property (nonatomic,retain) NSString * contentType;                                           //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                            //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) float rawScore;                                                   //@synthesize rawScore=_rawScore - In the implementation block
@property (assign,nonatomic) float feedbackScore;                                              //@synthesize feedbackScore=_feedbackScore - In the implementation block
@property (assign,nonatomic) float score;                                                      //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) float withinBundleScore;                                          //@synthesize withinBundleScore=_withinBundleScore - In the implementation block
@property (nonatomic,retain) NSString * sectionBundleIdentifier;                               //@synthesize sectionBundleIdentifier=_sectionBundleIdentifier - In the implementation block
@property (nonatomic,retain) PRSL2FeatureVector * L2FeatureVector;                             //@synthesize L2FeatureVector=_L2FeatureVector - In the implementation block
@property (nonatomic,retain) NSData * serverFeaturesJSON;                                      //@synthesize serverFeaturesJSON=_serverFeaturesJSON - In the implementation block
@property (assign,nonatomic) BOOL eligibleForDemotion;                                         //@synthesize eligibleForDemotion=_eligibleForDemotion - In the implementation block
@property (assign,nonatomic) BOOL shouldHideUnderShowMore;                                     //@synthesize shouldHideUnderShowMore=_shouldHideUnderShowMore - In the implementation block
@property (assign,nonatomic) BOOL matchedQueryTerms;                                           //@synthesize matchedQueryTerms=_matchedQueryTerms - In the implementation block
@property (assign,nonatomic) double mostRecentUsedDate;                                        //@synthesize mostRecentUsedDate=_mostRecentUsedDate - In the implementation block
@property (assign,nonatomic) double closestUpComingDate;                                       //@synthesize closestUpComingDate=_closestUpComingDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)rankingDescriptorForBundleFeature:(unsigned long long)arg1 ;
+(unsigned short)featureFromVirtualIdx:(unsigned long long)arg1 ;
+(unsigned long long)indexOfShortcutBit;
-(void)dealloc;
-(NSString *)description;
-(NSString *)identifier;
-(SCD_Struct_PR8*)attributes;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setAttributes:(SCD_Struct_PR8*)arg1 ;
-(NSString *)contentType;
-(void)setContentType:(NSString *)arg1 ;
-(float)score;
-(id)displayName;
-(void)setScore:(float)arg1 ;
-(NSArray *)emailAddresses;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(BOOL)isPrepared;
-(NSString *)sectionBundleIdentifier;
-(void)setSectionBundleIdentifier:(NSString *)arg1 ;
-(id)interestingDate;
-(unsigned short)bundleIDType;
-(id)dataCollectionBundle;
-(BOOL)serializeToJSON:(void*)arg1 valuesOnly:(BOOL)arg2 ;
-(void)setIndexScore:(T)arg1 ;
-(void)updateAccumulatedBundleFeatures:(float*)arg1 values:(float*)arg2 feature:(unsigned long long)arg3 ;
-(void)updateScoreDescriptorBundleFeatures:(float*)arg1 feature:(unsigned long long)arg2 ;
-(void)updateNumScoreDescriptorBundleFeatures:(float*)arg1 feature:(unsigned long long)arg2 featureScoreInfo:(PRSL2FeatureScoreInfo*)arg3 ;
-(void)populateContactFeatures:(PRSL2FeatureScoreInfo*)arg1 currentTime:(double)arg2 ;
-(void)populateMailFeatures:(PRSL2FeatureScoreInfo*)arg1 ;
-(void)populateSMSFeatures:(PRSL2FeatureScoreInfo*)arg1 ;
-(void)populateParsecAlbumFeatures:(PRSL2FeatureScoreInfo*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3 ;
-(void)populateParsecAppFeatures:(PRSL2FeatureScoreInfo*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3 ;
-(void)populateParsecEPubBookFeatures:(PRSL2FeatureScoreInfo*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3 ;
-(void)populateParsecMovieFeatures:(PRSL2FeatureScoreInfo*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3 ;
-(void)populateParsecPodcastFeatures:(PRSL2FeatureScoreInfo*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3 ;
-(void)populateParsecProfileFeatures:(PRSL2FeatureScoreInfo*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3 ;
-(void)populateParsecSongFeatures:(PRSL2FeatureScoreInfo*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3 ;
-(void)populateParsecTvShowFeatures:(PRSL2FeatureScoreInfo*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3 ;
-(void)populateParsecWebVideoFeatures:(PRSL2FeatureScoreInfo*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3 ;
-(void)populateParsecAnyFeatures:(PRSL2FeatureScoreInfo*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3 ;
-(void)inferDateBinsFromDates:(id)arg1 intoBins:(int*)arg2 ;
-(void)populateTextFeatureValuesForProperty:(id)arg1 updatingBundleFeatureValues:(float*)arg2 propertyIndex:(unsigned long long)arg3 withEvaluator:(id)arg4 withContext:(prs_feature_population_ctx_t*)arg5 featureScoreInfo:(PRSL2FeatureScoreInfo*)arg6 propertyCanFuzzyMatch:(BOOL)arg7 keyboardLanguage:(id)arg8 isCJK:(BOOL)arg9 ;
-(void)populateCrossAttributeDerivedFeaturesWithContext:(prs_feature_population_ctx_t*)arg1 featureScoreInfo:(PRSL2FeatureScoreInfo*)arg2 ;
-(void)populateBundleSpecificFeatures:(PRSL2FeatureScoreInfo*)arg1 currentTime:(double)arg2 ;
-(void)populateOtherFeatures:(PRSL2FeatureScoreInfo*)arg1 ;
-(void)updateBundleFeatures:(float*)arg1 withArrValues:(float*)arg2 featureScoreInfo:(PRSL2FeatureScoreInfo*)arg3 ;
-(void)populateTextFeatureValuesForProperty:(id)arg1 updatingBundleFeatureValues:(float*)arg2 propertyIndex:(unsigned long long)arg3 withEvaluator:(id)arg4 withContext:(prs_feature_population_ctx_t*)arg5 featureScoreInfo:(PRSL2FeatureScoreInfo*)arg6 propertyCanFuzzyMatch:(BOOL)arg7 keyboardLanguage:(id)arg8 isCJK:(BOOL)arg9 featureList:(const unsigned short*)arg10 ;
-(void)populateParsecBundleSpecificFeatures:(PRSL2FeatureScoreInfo*)arg1 currentTime:(double)arg2 forParsecResult:(id)arg3 ;
-(void)populateParsecRoundTripFeatures:(id)arg1 forParsecResult:(id)arg2 ;
-(PRSL2FeatureVector *)L2FeatureVector;
-(id)moreRecentDateFromDate1:(id)arg1 date2:(id)arg2 ;
-(T)indexScore;
-(unsigned long long)importantPropertiesPrefixMatched;
-(float)withinBundleScore;
-(long long)compareWithDates:(id)arg1 currentTime:(double)arg2 ;
-(id)likelyDisplayTitle;
-(id)initWithAttrs:(SCD_Struct_PR8*)arg1 ;
-(id)initForParsecResultWithBundleID:(id)arg1 ;
-(BOOL)didMatchRankingDescriptor:(id)arg1 ;
-(void)populateFeaturesWithEvaluator:(id)arg1 updatingBundleFeatures:(float*)arg2 withContext:(prs_feature_population_ctx_t*)arg3 keyboardLanguage:(id)arg4 isCJK:(BOOL)arg5 currentTime:(double)arg6 ;
-(void)populateFeaturesWithEvaluator:(id)arg1 withContext:(prs_feature_population_ctx_t*)arg2 keyboardLanguage:(id)arg3 isCJK:(BOOL)arg4 currentTime:(double)arg5 forParsecResult:(id)arg6 ;
-(long long)compareWithTypes:(id)arg1 ;
-(long long)compare:(id)arg1 currentTime:(double)arg2 ;
-(long long)recencyTestForVisibilityWithCurrentTime:(double)arg1 ;
-(long long)passesRecencyTestWithCurrentTime:(double)arg1 ;
-(float)rawScore;
-(void)setRawScore:(float)arg1 ;
-(float)feedbackScore;
-(void)setFeedbackScore:(float)arg1 ;
-(void)setWithinBundleScore:(float)arg1 ;
-(void)setL2FeatureVector:(PRSL2FeatureVector *)arg1 ;
-(NSData *)serverFeaturesJSON;
-(void)setServerFeaturesJSON:(NSData *)arg1 ;
-(BOOL)eligibleForDemotion;
-(void)setEligibleForDemotion:(BOOL)arg1 ;
-(BOOL)shouldHideUnderShowMore;
-(void)setShouldHideUnderShowMore:(BOOL)arg1 ;
-(BOOL)matchedQueryTerms;
-(void)setMatchedQueryTerms:(BOOL)arg1 ;
-(double)mostRecentUsedDate;
-(void)setMostRecentUsedDate:(double)arg1 ;
-(double)closestUpComingDate;
-(void)setClosestUpComingDate:(double)arg1 ;
-(PRSRankingSpanCalculator *)spanCalculator;
-(void)setSpanCalculator:(PRSRankingSpanCalculator *)arg1 ;
-(T)inputToModelScore;
-(void)setInputToModelScore:(T)arg1 ;
-(NSMutableArray *)matchedSenders;
-(void)setMatchedSenders:(NSMutableArray *)arg1 ;
-(NSMutableArray *)matchedVipSenders;
-(void)setMatchedVipSenders:(NSMutableArray *)arg1 ;
-(NSMutableArray *)matchedRecipients;
-(void)setMatchedRecipients:(NSMutableArray *)arg1 ;
-(void)setImportantPropertiesPrefixMatched:(unsigned long long)arg1 ;
-(unsigned long long)importantPropertiesWordMatched;
-(void)setImportantPropertiesWordMatched:(unsigned long long)arg1 ;
-(void)setBundleIDType:(unsigned short)arg1 ;
-(void)setIsPrepared:(BOOL)arg1 ;
@end

