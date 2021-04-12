/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@interface FCPersonalizationItemScoringConfig : NSObject {

	double _baselineRatePrior;
	double _decayFactor;
	double _democratizationFactor;
	double _halfLifeCoefficient;
	double _subscribedChannelScoreCoefficient;
	double _mutedVoteCoefficient;
	double _personalizationCoefficient;
	double _publisherAggregateWeight;
	double _articleLengthAggregateWeight;
	double _globalScoreCoefficient;
	double _globalScoreCoefficientHalfLife;
	double _globalScoreCoefficientInitialMultiplier;
	double _cohortMembershipFavoritedBoost;
	double _cohortMembershipGlobalWeight;
	double _cohortMembershipUserBaseline;
	double _cohortMembershipPreBaselineCurvature;
	double _cohortMembershipPostBaselineCurvature;
	double _cohortMembershipDilutionFactor;
	double _cohortMembershipPaddingFactor;
	double _subscribedTopicsScoreCoefficient;
	double _ctrWithSubscribedChannel;
	double _ctrWithZeroSubscribed;
	double _ctrWithOneSubscribed;
	double _ctrWithTwoSubscribed;
	double _ctrWithThreeSubscribed;
	double _autofavoritedVoteCoefficient;
	double _ctrWithZeroAutofavorited;
	double _ctrWithOneAutofavorited;
	double _ctrWithTwoAutofavorited;
	double _ctrWithThreeAutofavorited;
	double _diversificationInitialPenalty;
	double _diversificationPenalty;
	double _diversificationPenaltyHalfLife;
	double _channelTopicDiversificationInitialPenalty;
	double _channelTopicDiversificationPenalty;
	double _channelTopicDiversificationPenaltyHalfLife;
	double _firstPassHalfLifeCoefficient;
	double _firstPassDiversificationPenalty;
	double _firstPassArticleFilter;
	double _bundlePaidMultiplierForFreeUsers;
	double _bundlePaidMultiplierForTrialUsers;
	double _bundlePaidMultiplierForPaidUsers;
	double _bundleFreeMultiplierForFreeUsers;
	double _bundleFreeMultiplierForTrialUsers;
	double _bundleFreeMultiplierForPaidUsers;
	double _featuredMultiplierForFreeUsers;
	double _featuredMultiplierForTrialUsers;
	double _featuredMultiplierForPaidUsers;
	double _headlineSeenPenalty;
	double _articleReadPenalty;

}

@property (nonatomic,readonly) double baselineRatePrior;                                       //@synthesize baselineRatePrior=_baselineRatePrior - In the implementation block
@property (nonatomic,readonly) double decayFactor;                                             //@synthesize decayFactor=_decayFactor - In the implementation block
@property (nonatomic,readonly) double democratizationFactor;                                   //@synthesize democratizationFactor=_democratizationFactor - In the implementation block
@property (nonatomic,readonly) double halfLifeCoefficient;                                     //@synthesize halfLifeCoefficient=_halfLifeCoefficient - In the implementation block
@property (nonatomic,readonly) double subscribedChannelScoreCoefficient;                       //@synthesize subscribedChannelScoreCoefficient=_subscribedChannelScoreCoefficient - In the implementation block
@property (nonatomic,readonly) double mutedVoteCoefficient;                                    //@synthesize mutedVoteCoefficient=_mutedVoteCoefficient - In the implementation block
@property (nonatomic,readonly) double personalizationCoefficient;                              //@synthesize personalizationCoefficient=_personalizationCoefficient - In the implementation block
@property (nonatomic,readonly) double publisherAggregateWeight;                                //@synthesize publisherAggregateWeight=_publisherAggregateWeight - In the implementation block
@property (nonatomic,readonly) double articleLengthAggregateWeight;                            //@synthesize articleLengthAggregateWeight=_articleLengthAggregateWeight - In the implementation block
@property (nonatomic,readonly) double globalScoreCoefficient;                                  //@synthesize globalScoreCoefficient=_globalScoreCoefficient - In the implementation block
@property (nonatomic,readonly) double globalScoreCoefficientHalfLife;                          //@synthesize globalScoreCoefficientHalfLife=_globalScoreCoefficientHalfLife - In the implementation block
@property (nonatomic,readonly) double globalScoreCoefficientInitialMultiplier;                 //@synthesize globalScoreCoefficientInitialMultiplier=_globalScoreCoefficientInitialMultiplier - In the implementation block
@property (nonatomic,readonly) double cohortMembershipFavoritedBoost;                          //@synthesize cohortMembershipFavoritedBoost=_cohortMembershipFavoritedBoost - In the implementation block
@property (nonatomic,readonly) double cohortMembershipGlobalWeight;                            //@synthesize cohortMembershipGlobalWeight=_cohortMembershipGlobalWeight - In the implementation block
@property (nonatomic,readonly) double cohortMembershipUserBaseline;                            //@synthesize cohortMembershipUserBaseline=_cohortMembershipUserBaseline - In the implementation block
@property (nonatomic,readonly) double cohortMembershipPreBaselineCurvature;                    //@synthesize cohortMembershipPreBaselineCurvature=_cohortMembershipPreBaselineCurvature - In the implementation block
@property (nonatomic,readonly) double cohortMembershipPostBaselineCurvature;                   //@synthesize cohortMembershipPostBaselineCurvature=_cohortMembershipPostBaselineCurvature - In the implementation block
@property (nonatomic,readonly) double cohortMembershipDilutionFactor;                          //@synthesize cohortMembershipDilutionFactor=_cohortMembershipDilutionFactor - In the implementation block
@property (nonatomic,readonly) double cohortMembershipPaddingFactor;                           //@synthesize cohortMembershipPaddingFactor=_cohortMembershipPaddingFactor - In the implementation block
@property (nonatomic,readonly) double subscribedTopicsScoreCoefficient;                        //@synthesize subscribedTopicsScoreCoefficient=_subscribedTopicsScoreCoefficient - In the implementation block
@property (nonatomic,readonly) double ctrWithSubscribedChannel;                                //@synthesize ctrWithSubscribedChannel=_ctrWithSubscribedChannel - In the implementation block
@property (nonatomic,readonly) double ctrWithZeroSubscribed;                                   //@synthesize ctrWithZeroSubscribed=_ctrWithZeroSubscribed - In the implementation block
@property (nonatomic,readonly) double ctrWithOneSubscribed;                                    //@synthesize ctrWithOneSubscribed=_ctrWithOneSubscribed - In the implementation block
@property (nonatomic,readonly) double ctrWithTwoSubscribed;                                    //@synthesize ctrWithTwoSubscribed=_ctrWithTwoSubscribed - In the implementation block
@property (nonatomic,readonly) double ctrWithThreeSubscribed;                                  //@synthesize ctrWithThreeSubscribed=_ctrWithThreeSubscribed - In the implementation block
@property (nonatomic,readonly) double autofavoritedVoteCoefficient;                            //@synthesize autofavoritedVoteCoefficient=_autofavoritedVoteCoefficient - In the implementation block
@property (nonatomic,readonly) double ctrWithZeroAutofavorited;                                //@synthesize ctrWithZeroAutofavorited=_ctrWithZeroAutofavorited - In the implementation block
@property (nonatomic,readonly) double ctrWithOneAutofavorited;                                 //@synthesize ctrWithOneAutofavorited=_ctrWithOneAutofavorited - In the implementation block
@property (nonatomic,readonly) double ctrWithTwoAutofavorited;                                 //@synthesize ctrWithTwoAutofavorited=_ctrWithTwoAutofavorited - In the implementation block
@property (nonatomic,readonly) double ctrWithThreeAutofavorited;                               //@synthesize ctrWithThreeAutofavorited=_ctrWithThreeAutofavorited - In the implementation block
@property (nonatomic,readonly) double diversificationInitialPenalty;                           //@synthesize diversificationInitialPenalty=_diversificationInitialPenalty - In the implementation block
@property (nonatomic,readonly) double diversificationPenalty;                                  //@synthesize diversificationPenalty=_diversificationPenalty - In the implementation block
@property (nonatomic,readonly) double diversificationPenaltyHalfLife;                          //@synthesize diversificationPenaltyHalfLife=_diversificationPenaltyHalfLife - In the implementation block
@property (nonatomic,readonly) double channelTopicDiversificationInitialPenalty;               //@synthesize channelTopicDiversificationInitialPenalty=_channelTopicDiversificationInitialPenalty - In the implementation block
@property (nonatomic,readonly) double channelTopicDiversificationPenalty;                      //@synthesize channelTopicDiversificationPenalty=_channelTopicDiversificationPenalty - In the implementation block
@property (nonatomic,readonly) double channelTopicDiversificationPenaltyHalfLife;              //@synthesize channelTopicDiversificationPenaltyHalfLife=_channelTopicDiversificationPenaltyHalfLife - In the implementation block
@property (nonatomic,readonly) double firstPassHalfLifeCoefficient;                            //@synthesize firstPassHalfLifeCoefficient=_firstPassHalfLifeCoefficient - In the implementation block
@property (nonatomic,readonly) double firstPassDiversificationPenalty;                         //@synthesize firstPassDiversificationPenalty=_firstPassDiversificationPenalty - In the implementation block
@property (nonatomic,readonly) double firstPassArticleFilter;                                  //@synthesize firstPassArticleFilter=_firstPassArticleFilter - In the implementation block
@property (nonatomic,readonly) double bundlePaidMultiplierForFreeUsers;                        //@synthesize bundlePaidMultiplierForFreeUsers=_bundlePaidMultiplierForFreeUsers - In the implementation block
@property (nonatomic,readonly) double bundlePaidMultiplierForTrialUsers;                       //@synthesize bundlePaidMultiplierForTrialUsers=_bundlePaidMultiplierForTrialUsers - In the implementation block
@property (nonatomic,readonly) double bundlePaidMultiplierForPaidUsers;                        //@synthesize bundlePaidMultiplierForPaidUsers=_bundlePaidMultiplierForPaidUsers - In the implementation block
@property (nonatomic,readonly) double bundleFreeMultiplierForFreeUsers;                        //@synthesize bundleFreeMultiplierForFreeUsers=_bundleFreeMultiplierForFreeUsers - In the implementation block
@property (nonatomic,readonly) double bundleFreeMultiplierForTrialUsers;                       //@synthesize bundleFreeMultiplierForTrialUsers=_bundleFreeMultiplierForTrialUsers - In the implementation block
@property (nonatomic,readonly) double bundleFreeMultiplierForPaidUsers;                        //@synthesize bundleFreeMultiplierForPaidUsers=_bundleFreeMultiplierForPaidUsers - In the implementation block
@property (nonatomic,readonly) double featuredMultiplierForFreeUsers;                          //@synthesize featuredMultiplierForFreeUsers=_featuredMultiplierForFreeUsers - In the implementation block
@property (nonatomic,readonly) double featuredMultiplierForTrialUsers;                         //@synthesize featuredMultiplierForTrialUsers=_featuredMultiplierForTrialUsers - In the implementation block
@property (nonatomic,readonly) double featuredMultiplierForPaidUsers;                          //@synthesize featuredMultiplierForPaidUsers=_featuredMultiplierForPaidUsers - In the implementation block
@property (nonatomic,readonly) double headlineSeenPenalty;                                     //@synthesize headlineSeenPenalty=_headlineSeenPenalty - In the implementation block
@property (nonatomic,readonly) double articleReadPenalty;                                      //@synthesize articleReadPenalty=_articleReadPenalty - In the implementation block
-(id)dictionaryRepresentation;
-(id)initWithConfigurationSet:(long long)arg1 configurableValues:(id)arg2 ;
-(double)cohortMembershipPreBaselineCurvature;
-(double)cohortMembershipPostBaselineCurvature;
-(double)cohortMembershipUserBaseline;
-(double)cohortMembershipFavoritedBoost;
-(double)decayFactor;
-(double)baselineRatePrior;
-(double)personalizationCoefficient;
-(double)subscribedTopicsScoreCoefficient;
-(double)subscribedChannelScoreCoefficient;
-(double)autofavoritedVoteCoefficient;
-(double)cohortMembershipDilutionFactor;
-(double)publisherAggregateWeight;
-(double)cohortMembershipPaddingFactor;
-(double)cohortMembershipGlobalWeight;
-(double)globalScoreCoefficient;
-(double)globalScoreCoefficientInitialMultiplier;
-(double)globalScoreCoefficientHalfLife;
-(double)democratizationFactor;
-(double)ctrWithZeroSubscribed;
-(double)ctrWithOneSubscribed;
-(double)ctrWithTwoSubscribed;
-(double)ctrWithThreeSubscribed;
-(double)ctrWithSubscribedChannel;
-(double)ctrWithZeroAutofavorited;
-(double)ctrWithOneAutofavorited;
-(double)ctrWithTwoAutofavorited;
-(double)ctrWithThreeAutofavorited;
-(double)mutedVoteCoefficient;
-(double)bundlePaidMultiplierForFreeUsers;
-(double)bundleFreeMultiplierForFreeUsers;
-(double)bundlePaidMultiplierForTrialUsers;
-(double)bundleFreeMultiplierForTrialUsers;
-(double)bundlePaidMultiplierForPaidUsers;
-(double)bundleFreeMultiplierForPaidUsers;
-(double)featuredMultiplierForFreeUsers;
-(double)featuredMultiplierForTrialUsers;
-(double)featuredMultiplierForPaidUsers;
-(double)headlineSeenPenalty;
-(double)articleReadPenalty;
-(double)halfLifeCoefficient;
-(double)firstPassHalfLifeCoefficient;
-(double)firstPassDiversificationPenalty;
-(double)firstPassArticleFilter;
-(double)articleLengthAggregateWeight;
-(id)initWithBaselineRatePrior:(double)arg1 decayFactor:(double)arg2 democratizationFactor:(double)arg3 halfLifeCoefficient:(double)arg4 subscribedChannelScoreCoefficient:(double)arg5 ctrWithSubscribedChannel:(double)arg6 mutedVoteCoefficient:(double)arg7 personalizationCoefficient:(double)arg8 publisherAggregateWeight:(double)arg9 articleLengthAggregateWeight:(double)arg10 globalScoreCoefficient:(double)arg11 globalScoreCoefficientHalfLife:(double)arg12 globalScoreCoefficientInitialMultiplier:(double)arg13 cohortMembershipFavoritedBoost:(double)arg14 cohortMembershipGlobalWeight:(double)arg15 cohortMembershipUserBaseline:(double)arg16 cohortMembershipPreBaselineCurvature:(double)arg17 cohortMembershipPostBaselineCurvature:(double)arg18 cohortMembershipDilutionFactor:(double)arg19 cohortMembershipPaddingFactor:(double)arg20 subscribedTopicsScoreCoefficient:(double)arg21 ctrWithZeroSubscribed:(double)arg22 ctrWithOneSubscribed:(double)arg23 ctrWithTwoSubscribed:(double)arg24 ctrWithThreeSubscribed:(double)arg25 autofavoritedVoteCoefficient:(double)arg26 ctrWithZeroAutofavorited:(double)arg27 ctrWithOneAutofavorited:(double)arg28 ctrWithTwoAutofavorited:(double)arg29 ctrWithThreeAutofavorited:(double)arg30 diversificationInitialPenalty:(double)arg31 diversificationPenalty:(double)arg32 diversificationPenaltyHalfLife:(double)arg33 channelTopicDiversificationInitialPenalty:(double)arg34 channelTopicDiversificationPenalty:(double)arg35 channelTopicDiversificationPenaltyHalfLife:(double)arg36 firstPassHalfLifeCoefficient:(double)arg37 firstPassDiversificationPenalty:(double)arg38 firstPassArticleFilter:(double)arg39 bundlePaidMultiplierForFreeUsers:(double)arg40 bundlePaidMultiplierForTrialUsers:(double)arg41 bundlePaidMultiplierForPaidUsers:(double)arg42 bundleFreeMultiplierForFreeUsers:(double)arg43 bundleFreeMultiplierForTrialUsers:(double)arg44 bundleFreeMultiplierForPaidUsers:(double)arg45 featuredMultiplierForFreeUsers:(double)arg46 featuredMultiplierForTrialUsers:(double)arg47 featuredMultiplierForPaidUsers:(double)arg48 headlineSeenPenalty:(double)arg49 articleReadPenalty:(double)arg50 ;
-(double)diversificationInitialPenalty;
-(double)diversificationPenalty;
-(double)diversificationPenaltyHalfLife;
-(double)channelTopicDiversificationInitialPenalty;
-(double)channelTopicDiversificationPenalty;
-(double)channelTopicDiversificationPenaltyHalfLife;
@end

