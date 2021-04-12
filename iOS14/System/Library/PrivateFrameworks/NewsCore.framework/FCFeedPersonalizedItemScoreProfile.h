/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NSDictionary;

@interface FCFeedPersonalizedItemScoreProfile : NSObject {

	double _featureCtr;
	double _subscribedChannelCtr;
	double _paidNonpaidSubscriptionCtr;
	double _autoSubscribeCtr;
	double _computedGlobalScoreCoefficient;
	double _userFeedbackScore;
	double _userConversionScore;
	double _personalizationScore;
	double _firstPassPersonalizationScore;
	double _agedPersonalizationScore;
	double _diversifiedPersonalizationScore;
	double _bundlePaidMultiplier;
	double _bundleFreeMultiplier;
	double _featuredMultiplier;
	double _audioMultiplier;
	double _evergreenMultiplier;
	double _seenPenalty;
	double _readPenalty;
	double _sparseTagsPenalty;
	NSDictionary* _cohortMemberships;
	NSDictionary* _articleCohortMemberships;
	NSDictionary* _conversionCohortMemberships;
	unsigned long long _groupingReason;
	unsigned long long _scoringType;

}

@property (assign,nonatomic) double featureCtr;                                       //@synthesize featureCtr=_featureCtr - In the implementation block
@property (assign,nonatomic) double subscribedChannelCtr;                             //@synthesize subscribedChannelCtr=_subscribedChannelCtr - In the implementation block
@property (assign,nonatomic) double paidNonpaidSubscriptionCtr;                       //@synthesize paidNonpaidSubscriptionCtr=_paidNonpaidSubscriptionCtr - In the implementation block
@property (assign,nonatomic) double autoSubscribeCtr;                                 //@synthesize autoSubscribeCtr=_autoSubscribeCtr - In the implementation block
@property (assign,nonatomic) double computedGlobalScoreCoefficient;                   //@synthesize computedGlobalScoreCoefficient=_computedGlobalScoreCoefficient - In the implementation block
@property (assign,nonatomic) double userFeedbackScore;                                //@synthesize userFeedbackScore=_userFeedbackScore - In the implementation block
@property (assign,nonatomic) double userConversionScore;                              //@synthesize userConversionScore=_userConversionScore - In the implementation block
@property (assign,nonatomic) double personalizationScore;                             //@synthesize personalizationScore=_personalizationScore - In the implementation block
@property (assign,nonatomic) double firstPassPersonalizationScore;                    //@synthesize firstPassPersonalizationScore=_firstPassPersonalizationScore - In the implementation block
@property (assign,nonatomic) double agedPersonalizationScore;                         //@synthesize agedPersonalizationScore=_agedPersonalizationScore - In the implementation block
@property (assign,nonatomic) double diversifiedPersonalizationScore;                  //@synthesize diversifiedPersonalizationScore=_diversifiedPersonalizationScore - In the implementation block
@property (assign,nonatomic) double bundlePaidMultiplier;                             //@synthesize bundlePaidMultiplier=_bundlePaidMultiplier - In the implementation block
@property (assign,nonatomic) double bundleFreeMultiplier;                             //@synthesize bundleFreeMultiplier=_bundleFreeMultiplier - In the implementation block
@property (assign,nonatomic) double featuredMultiplier;                               //@synthesize featuredMultiplier=_featuredMultiplier - In the implementation block
@property (assign,nonatomic) double audioMultiplier;                                  //@synthesize audioMultiplier=_audioMultiplier - In the implementation block
@property (assign,nonatomic) double evergreenMultiplier;                              //@synthesize evergreenMultiplier=_evergreenMultiplier - In the implementation block
@property (assign,nonatomic) double seenPenalty;                                      //@synthesize seenPenalty=_seenPenalty - In the implementation block
@property (assign,nonatomic) double readPenalty;                                      //@synthesize readPenalty=_readPenalty - In the implementation block
@property (assign,nonatomic) double sparseTagsPenalty;                                //@synthesize sparseTagsPenalty=_sparseTagsPenalty - In the implementation block
@property (nonatomic,retain) NSDictionary * cohortMemberships;                        //@synthesize cohortMemberships=_cohortMemberships - In the implementation block
@property (nonatomic,retain) NSDictionary * articleCohortMemberships;                 //@synthesize articleCohortMemberships=_articleCohortMemberships - In the implementation block
@property (nonatomic,retain) NSDictionary * conversionCohortMemberships;              //@synthesize conversionCohortMemberships=_conversionCohortMemberships - In the implementation block
@property (assign,nonatomic) unsigned long long groupingReason;                       //@synthesize groupingReason=_groupingReason - In the implementation block
@property (assign,nonatomic) unsigned long long scoringType;                          //@synthesize scoringType=_scoringType - In the implementation block
-(void)setPaidNonpaidSubscriptionCtr:(double)arg1 ;
-(void)setPersonalizationScore:(double)arg1 ;
-(void)setSubscribedChannelCtr:(double)arg1 ;
-(void)setAgedPersonalizationScore:(double)arg1 ;
-(double)personalizationScore;
-(double)diversifiedPersonalizationScore;
-(void)setUserFeedbackScore:(double)arg1 ;
-(void)setFeatureCtr:(double)arg1 ;
-(double)evergreenMultiplier;
-(double)featureCtr;
-(double)autoSubscribeCtr;
-(void)setAutoSubscribeCtr:(double)arg1 ;
-(double)paidNonpaidSubscriptionCtr;
-(void)setFeaturedMultiplier:(double)arg1 ;
-(void)setCohortMemberships:(NSDictionary *)arg1 ;
-(void)setBundlePaidMultiplier:(double)arg1 ;
-(void)setDiversifiedPersonalizationScore:(double)arg1 ;
-(void)setComputedGlobalScoreCoefficient:(double)arg1 ;
-(double)subscribedChannelCtr;
-(void)setSeenPenalty:(double)arg1 ;
-(void)setUserConversionScore:(double)arg1 ;
-(void)setEvergreenMultiplier:(double)arg1 ;
-(void)setReadPenalty:(double)arg1 ;
-(double)userConversionScore;
-(NSDictionary *)articleCohortMemberships;
-(double)firstPassPersonalizationScore;
-(void)setScoringType:(unsigned long long)arg1 ;
-(void)setArticleCohortMemberships:(NSDictionary *)arg1 ;
-(double)agedPersonalizationScore;
-(void)setFirstPassPersonalizationScore:(double)arg1 ;
-(double)userFeedbackScore;
-(id)description;
-(NSDictionary *)conversionCohortMemberships;
-(double)bundleFreeMultiplier;
-(void)setBundleFreeMultiplier:(double)arg1 ;
-(double)sparseTagsPenalty;
-(double)seenPenalty;
-(NSDictionary *)cohortMemberships;
-(double)bundlePaidMultiplier;
-(void)setConversionCohortMemberships:(NSDictionary *)arg1 ;
-(unsigned long long)hash;
-(void)setAudioMultiplier:(double)arg1 ;
-(double)computedGlobalScoreCoefficient;
-(unsigned long long)groupingReason;
-(void)setSparseTagsPenalty:(double)arg1 ;
-(double)readPenalty;
-(double)featuredMultiplier;
-(unsigned long long)scoringType;
-(BOOL)isEqual:(id)arg1 ;
-(double)audioMultiplier;
-(void)setGroupingReason:(unsigned long long)arg1 ;
@end

