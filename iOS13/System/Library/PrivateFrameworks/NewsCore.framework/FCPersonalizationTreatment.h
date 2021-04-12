/*
* Generated on Monday, March 1, 2021 at 2:32:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBPersonalizationTreatment, NSDictionary;

@interface FCPersonalizationTreatment : NSObject <NSSecureCoding, NSCopying> {

	NTPBPersonalizationTreatment* _pbTreatment;
	NSDictionary* _treatmentDictionary;
	double _featureClicksByAction[34];
	double _featureImpressionsByAction[34];
	double _baselineClicksByAction[34];
	double _baselineImpressionsByAction[34];
	double _portraitGlobalThreshold;
	BOOL _enableOptimizedLayoutIPhone;
	BOOL _enableOptimizedLayoutIPad;
	BOOL _onlyConsiderBestSourceFeedsInForYouGroup;
	long long _treatmentID;
	double _decayFactor;
	double _democratizationFactor;
	double _hourlyFlowRateMinimum;
	double _hourlyFlowRateSubscriptionCountBuffer;
	double _hourlyFlowRateDampeningFactor;
	double _hourlyFlowRatePerSubscription;
	long long _extraArticlesToShowUser;
	double _hourlyFlowRateDecayFactor;
	double _hourlyFlowRatePriorWeight;
	double _hourlyFlowRateFloor;
	double _hourlyFlowRateCeiling;
	double _hourlyFlowRateAlpha;
	double _hourlyFlowRateBeta;
	double _hourlyFlowRateGamma;
	double _baselineImpressionPrior;
	double _baselineRatePrior;
	double _featureImpressionPrior;
	double _cohortMembershipFavoritedBoost;
	double _cohortMembershipGlobalWeight;
	double _cohortMembershipUserBaseline;
	double _cohortMembershipPreBaselineCurvature;
	double _cohortMembershipPostBaselineCurvature;
	double _cohortMembershipDilutionFactor;
	double _cohortMembershipPaddingFactor;
	double _subscribedChannelScoreCoefficient;
	double _ctrWithSubscribedChannel;
	double _subscribedTopicsScoreCoefficient;
	double _ctrWithZeroSubscribed;
	double _ctrWithOneSubscribed;
	double _ctrWithTwoSubscribed;
	double _ctrWithThreeSubscribed;
	double _mutedVoteCoefficient;
	double _autofavoritedVoteCoefficient;
	double _ctrWithZeroAutofavorited;
	double _ctrWithOneAutofavorited;
	double _ctrWithTwoAutofavorited;
	double _ctrWithThreeAutofavorited;
	double _personalizationCoefficient;
	double _globalScoreCoefficient;
	double _globalScoreCoefficientHalfLife;
	double _globalScoreCoefficientInitialMultiplier;
	double _publisherAggregateWeight;
	double _articleLengthAggregateWeight;
	double _articleLengthLongThreshold;
	double _articleLengthMediumThreshold;
	double _halfLifeCoefficient;
	double _diversificationPenalty;
	double _diversificationInitialPenalty;
	double _diversificationPenaltyHalfLife;
	double _channelTopicDiversificationPenalty;
	double _channelTopicDiversificationInitialPenalty;
	double _channelTopicDiversificationPenaltyHalfLife;
	double _publisherDiversificationPenalty;
	double _publisherDiversificationInitialPenalty;
	double _publisherDiversificationPenaltyHalfLife;
	double _headlineSeenPenalty;
	double _articleReadPenalty;
	long long _publisherTopicIDEventCountMinimum;
	double _presentationImpressionValue;
	double _heavyClickImpressionValue;
	double _likeImpressionValue;
	double _shareImpressionValue;
	double _savedImpressionValue;
	double _subscribeImpressionValue;
	double _subscribeRelatedImpressionValue;
	double _existingSubscriptionImpressionValue;
	double _existingSubscriptionRelatedImpressionValue;
	double _unsubscribeImpressionValue;
	double _tappedImpressionValue;
	double _weakClickImpressionValue;
	double _visitImpressionValue;
	double _dislikeImpressionValue;
	double _recommendationPresentationFeedImpressionValue;
	double _recommendationPresentationExploreImpressionValue;
	double _premiumSubscriptionActivationImpressionValue;
	double _muteImpressionValue;
	double _unmuteImpressionValue;
	double _videoInitiatePlaybackImpressionValue;
	double _videoCompletePlaybackImpressionValue;
	double _videoComplete25ImpressionValue;
	double _videoComplete50ImpressionValue;
	double _videoComplete75ImpressionValue;
	double _newsTodayWidgetPresentationImpressionValue;
	double _newsTodayWidgetClickImpressionValue;
	double _newsTodayWidgetVideoPlaybackImpressionValue;
	double _appInstallImpressionValue;
	double _appInFocusImpressionValue;
	double _safariHistoryImpressionValue;
	double _publisherBoostForSourceMoreFromFeedImpressionValue;
	double _topicBoostForSourceRelatedFeedImpressionValue;
	double _publisherBoostForIssueOpenImpressionValue;
	double _presentationClickValue;
	double _heavyClickClickValue;
	double _likeClickValue;
	double _shareClickValue;
	double _savedClickValue;
	double _subscribeClickValue;
	double _subscribeRelatedClickValue;
	double _existingSubscriptionClickValue;
	double _existingSubscriptionRelatedClickValue;
	double _unsubscribeClickValue;
	double _tappedClickValue;
	double _weakClickClickValue;
	double _visitClickValue;
	double _dislikeClickValue;
	double _recommendationPresentationFeedClickValue;
	double _recommendationPresentationExploreClickValue;
	double _premiumSubscriptionActivationClickValue;
	double _muteClickValue;
	double _unmuteClickValue;
	double _videoInitiatePlaybackClickValue;
	double _videoCompletePlaybackClickValue;
	double _videoComplete25ClickValue;
	double _videoComplete50ClickValue;
	double _videoComplete75ClickValue;
	double _newsTodayWidgetPresentationClickValue;
	double _newsTodayWidgetClickClickValue;
	double _newsTodayWidgetVideoPlaybackClickValue;
	double _appInstallClickValue;
	double _appInFocusClickValue;
	double _safariHistoryClickValue;
	double _publisherBoostForSourceMoreFromFeedClickValue;
	double _topicBoostForSourceRelatedFeedClickValue;
	double _publisherBoostForIssueOpenClickValue;
	double _presentationBaselineImpressionValue;
	double _heavyClickBaselineImpressionValue;
	double _likeBaselineImpressionValue;
	double _shareBaselineImpressionValue;
	double _savedBaselineImpressionValue;
	double _subscribeBaselineImpressionValue;
	double _subscribeRelatedBaselineImpressionValue;
	double _existingSubscriptionBaselineImpressionValue;
	double _existingSubscriptionRelatedBaselineImpressionValue;
	double _unsubscribeBaselineImpressionValue;
	double _tappedBaselineImpressionValue;
	double _weakClickBaselineImpressionValue;
	double _visitBaselineImpressionValue;
	double _dislikeBaselineImpressionValue;
	double _recommendationPresentationFeedBaselineImpressionValue;
	double _recommendationPresentationExploreBaselineImpressionValue;
	double _premiumSubscriptionActivationBaselineImpressionValue;
	double _muteBaselineImpressionValue;
	double _unmuteBaselineImpressionValue;
	double _videoInitiatePlaybackBaselineImpressionValue;
	double _videoCompletePlaybackBaselineImpressionValue;
	double _videoComplete25BaselineImpressionValue;
	double _videoComplete50BaselineImpressionValue;
	double _videoComplete75BaselineImpressionValue;
	double _newsTodayWidgetPresentationBaselineImpressionValue;
	double _newsTodayWidgetClickBaselineImpressionValue;
	double _newsTodayWidgetVideoPlaybackBaselineImpressionValue;
	double _appInstallBaselineImpressionValue;
	double _appInFocusBaselineImpressionValue;
	double _safariHistoryBaselineImpressionValue;
	double _publisherBoostForSourceMoreFromFeedBaselineImpressionValue;
	double _topicBoostForSourceRelatedFeedBaselineImpressionValue;
	double _publisherBoostForIssueOpenBaselineImpressionValue;
	double _presentationBaselineClickValue;
	double _heavyClickBaselineClickValue;
	double _likeBaselineClickValue;
	double _shareBaselineClickValue;
	double _savedBaselineClickValue;
	double _subscribeBaselineClickValue;
	double _subscribeRelatedBaselineClickValue;
	double _existingSubscriptionBaselineClickValue;
	double _existingSubscriptionRelatedBaselineClickValue;
	double _unsubscribeBaselineClickValue;
	double _tappedBaselineClickValue;
	double _weakClickBaselineClickValue;
	double _visitBaselineClickValue;
	double _dislikeBaselineClickValue;
	double _recommendationPresentationFeedBaselineClickValue;
	double _recommendationPresentationExploreBaselineClickValue;
	double _premiumSubscriptionActivationBaselineClickValue;
	double _muteBaselineClickValue;
	double _unmuteBaselineClickValue;
	double _videoInitiatePlaybackBaselineClickValue;
	double _videoCompletePlaybackBaselineClickValue;
	double _videoComplete25BaselineClickValue;
	double _videoComplete50BaselineClickValue;
	double _videoComplete75BaselineClickValue;
	double _newsTodayWidgetPresentationBaselineClickValue;
	double _newsTodayWidgetClickBaselineClickValue;
	double _newsTodayWidgetVideoPlaybackBaselineClickValue;
	double _appInstallBaselineClickValue;
	double _appInFocusBaselineClickValue;
	double _safariHistoryBaselineClickValue;
	double _publisherBoostForSourceMoreFromFeedBaselineClickValue;
	double _topicBoostForSourceRelatedFeedBaselineClickValue;
	double _publisherBoostForIssueOpenBaselineClickValue;
	double _heavyClickMinimumDuration;
	double _swipeToArticleWeakClickMinimumDuration;
	double _swipeToArticleHeavyClickMinimumDuration;
	double _lowQualityContentThreshold;
	long long _minClusterSizeIPhone;
	long long _maxClusterSizeIPhone;
	long long _minIdealClusterSizeIPhone;
	long long _maxIdealClusterSizeIPhone;
	long long _minClusterSizeIPhoneAutoFavorite;
	long long _maxClusterSizeIPhoneAutoFavorite;
	long long _minIdealClusterSizeIPhoneAutoFavorite;
	long long _maxIdealClusterSizeIPhoneAutoFavorite;
	long long _maxPublisherOccurrencesIPhone;
	long long _maxPublisherOccurrencesIPhoneBestOfBundle;
	long long _maxPublisherOccurrencesIPhoneForYouGroup;
	long long _maxUnpaidArticlesIPhone;
	unsigned long long _optimizedLayoutSizeThresholdIPhone;
	unsigned long long _optimizedLayoutIncrementUnitIPhone;
	long long _heuristicSampleSizeIPhone;
	long long _searchBranchMultiplierIPhone;
	double _searchBranchDecayIPhone;
	long long _heuristicOptionIPhone;
	double _tagSizeCoeffIPhone;
	double _tagPersonalizationCoeffIPhone;
	double _tagArticleScoreCoeffIPhone;
	double _tagFavoritedCoeffIPhone;
	double _tagAutoFavoritedCoeffIPhone;
	double _tagGroupableCoeffIPhone;
	double _tagSpecificityCoeffIPhone;
	long long _minClusterSizeIPad;
	long long _maxClusterSizeIPad;
	long long _minIdealClusterSizeIPad;
	long long _maxIdealClusterSizeIPad;
	long long _minClusterSizeIPadAutoFavorite;
	long long _maxClusterSizeIPadAutoFavorite;
	long long _minIdealClusterSizeIPadAutoFavorite;
	long long _maxIdealClusterSizeIPadAutoFavorite;
	long long _maxPublisherOccurrencesIPad;
	long long _maxPublisherOccurrencesIPadBestOfBundle;
	long long _maxPublisherOccurrencesIPadForYouGroup;
	long long _maxUnpaidArticlesIPad;
	unsigned long long _optimizedLayoutSizeThresholdIPad;
	unsigned long long _optimizedLayoutIncrementUnitIPad;
	long long _heuristicSampleSizeIPad;
	long long _searchBranchMultiplierIPad;
	double _searchBranchDecayIPad;
	long long _heuristicOptionIPad;
	double _tagSizeCoeffIPad;
	double _tagPersonalizationCoeffIPad;
	double _tagArticleScoreCoeffIPad;
	double _tagFavoritedCoeffIPad;
	double _tagAutoFavoritedCoeffIPad;
	double _tagGroupableCoeffIPad;
	double _tagSpecificityCoeffIPad;
	double _maxExpandedAutofavoriteGroupCandidateRatio;
	double _expandedAutofavoriteClusterMinSizeMultiplier;
	double _expandedAutofavoriteClusterMaxSizeMultiplier;
	double _optionalTagSpecificityScore;
	double _searchTimeLimit;
	unsigned long long _publisherDiversityMinPublisherCount;
	unsigned long long _publisherDiversityMaxPublisherCount;
	double _publisherDiversityMaxArticleFilter;
	double _internalUsageSignalWeight;
	double _autoFavoriteMinClicks;
	double _autoFavoriteMinEvents;
	double _autoFavoriteMinRate;
	double _autoFavoriteMinRelativeRate;
	double _autoUnfavoriteFactor;
	double _autoGroupableFactor;
	double _autoFavoriteTagFavorabilityExponent;
	double _autoFavoritePriorFactorExponent;
	double _autoFavoriteMaxIdleTime;
	double _safariSignalWeight;
	double _safariTimeDecayMultiplier;
	double _safariOccurrenceDecayMultiplier;
	double _autoFavoriteMinObservationsSafari;
	double _autoFavoriteMinScoreSafari;
	double _safariTagFavorabilityExponent;
	double _safariPriorFactorExponent;
	double _safariEventBlackoutSeconds;
	double _appUsageSignalWeight;
	double _appUsageTimeDecayMultiplier;
	double _appUsageOccurrenceDecayMultiplier;
	double _autoFavoriteMinObservationsExtAppUsage;
	double _autoFavoriteMinScoreExtAppUsage;
	double _appUsageTagFavorabilityExponent;
	double _appUsagePriorFactorExponent;
	double _portraitSignalWeight;
	double _portraitDecayRate;
	double _portraitTagFavorabilityExponent;
	double _portraitPriorFactorExponent;
	double _groupImpressionBiasCorrectionFactor;
	double _indexImpressionBiasCorrectionFactor;
	long long _maxNumberOfSuggestions;
	double _uGroupMinimumSubscribedChannelSourceFeedArticleRatio;
	long long _numEventsToDisableDefaultTopics;
	long long _numSubscriptionsToDisableDefaultTopics;
	double _metaGroupingRelatednessThreshold;
	double _metaGroupingRelatednessKWeight;
	double _metaGroupingTopicScoreWeight;
	double _metaGroupingHighestScoringRelativeScoreMultiplier;
	double _metaGroupingSubscribedTopicMultiplier;
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
	long long _auditionedAutoFavoritesEmitterLimit;
	double _topicDiversityThreshold;
	long long _topicDiversityWindowSize;
	double _topicFeedBaselineRatePrior;
	double _topicFeedDecayFactor;
	double _topicFeedDemocratizationFactor;
	double _topicFeedHalfLifeCoefficient;
	double _topicFeedSubscribedChannelScoreCoefficient;
	double _topicFeedMutedVoteCoefficient;
	double _topicFeedPersonalizationCoefficient;
	double _topicFeedPublisherAggregateWeight;
	double _topicFeedArticleLengthAggregateWeight;
	double _topicFeedGlobalScoreCoefficient;
	double _topicFeedGlobalScoreCoefficientHalfLife;
	double _topicFeedGlobalScoreCoefficientInitialMultiplier;
	double _topicFeedCohortMembershipFavoritedBoost;
	double _topicFeedCohortMembershipGlobalWeight;
	double _topicFeedCohortMembershipUserBaseline;
	double _topicFeedCohortMembershipPreBaselineCurvature;
	double _topicFeedCohortMembershipPostBaselineCurvature;
	double _topicFeedCohortMembershipDilutionFactor;
	double _topicFeedCohortMembershipPaddingFactor;
	double _topicFeedSubscribedTopicsScoreCoefficient;
	double _topicFeedCtrWithSubscribedChannel;
	double _topicFeedCtrWithZeroSubscribed;
	double _topicFeedCtrWithOneSubscribed;
	double _topicFeedCtrWithTwoSubscribed;
	double _topicFeedCtrWithThreeSubscribed;
	double _topicFeedAutofavoritedVoteCoefficient;
	double _topicFeedCtrWithZeroAutofavorited;
	double _topicFeedCtrWithOneAutofavorited;
	double _topicFeedCtrWithTwoAutofavorited;
	double _topicFeedCtrWithThreeAutofavorited;
	double _topicFeedDiversificationInitialPenalty;
	double _topicFeedDiversificationPenalty;
	double _topicFeedDiversificationPenaltyHalfLife;
	double _topicFeedChannelTopicDiversificationInitialPenalty;
	double _topicFeedChannelTopicDiversificationPenalty;
	double _topicFeedChannelTopicDiversificationPenaltyHalfLife;
	double _topicFeedFirstPassHalfLifeCoefficient;
	double _topicFeedFirstPassDiversificationPenalty;
	double _topicFeedFirstPassArticleFilter;
	double _topicFeedBundlePaidMultiplierForFreeUsers;
	double _topicFeedBundlePaidMultiplierForTrialUsers;
	double _topicFeedBundlePaidMultiplierForPaidUsers;
	double _topicFeedBundleFreeMultiplierForFreeUsers;
	double _topicFeedBundleFreeMultiplierForTrialUsers;
	double _topicFeedBundleFreeMultiplierForPaidUsers;
	double _topicFeedFeaturedMultiplierForFreeUsers;
	double _topicFeedFeaturedMultiplierForTrialUsers;
	double _topicFeedFeaturedMultiplierForPaidUsers;
	double _topicFeedHeadlineSeenPenalty;
	double _topicFeedArticleReadPenalty;
	double _magazineFeedBaselineRatePrior;
	double _magazineFeedDecayFactor;
	double _magazineFeedDemocratizationFactor;
	double _magazineFeedHalfLifeCoefficient;
	double _magazineFeedSubscribedChannelScoreCoefficient;
	double _magazineFeedMutedVoteCoefficient;
	double _magazineFeedPersonalizationCoefficient;
	double _magazineFeedPublisherAggregateWeight;
	double _magazineFeedArticleLengthAggregateWeight;
	double _magazineFeedGlobalScoreCoefficient;
	double _magazineFeedGlobalScoreCoefficientHalfLife;
	double _magazineFeedGlobalScoreCoefficientInitialMultiplier;
	double _magazineFeedCohortMembershipFavoritedBoost;
	double _magazineFeedCohortMembershipGlobalWeight;
	double _magazineFeedCohortMembershipUserBaseline;
	double _magazineFeedCohortMembershipPreBaselineCurvature;
	double _magazineFeedCohortMembershipPostBaselineCurvature;
	double _magazineFeedCohortMembershipDilutionFactor;
	double _magazineFeedCohortMembershipPaddingFactor;
	double _magazineFeedSubscribedTopicsScoreCoefficient;
	double _magazineFeedCtrWithSubscribedChannel;
	double _magazineFeedCtrWithZeroSubscribed;
	double _magazineFeedCtrWithOneSubscribed;
	double _magazineFeedCtrWithTwoSubscribed;
	double _magazineFeedCtrWithThreeSubscribed;
	double _magazineFeedAutofavoritedVoteCoefficient;
	double _magazineFeedCtrWithZeroAutofavorited;
	double _magazineFeedCtrWithOneAutofavorited;
	double _magazineFeedCtrWithTwoAutofavorited;
	double _magazineFeedCtrWithThreeAutofavorited;
	double _magazineFeedDiversificationInitialPenalty;
	double _magazineFeedDiversificationPenalty;
	double _magazineFeedDiversificationPenaltyHalfLife;
	double _magazineFeedChannelTopicDiversificationInitialPenalty;
	double _magazineFeedChannelTopicDiversificationPenalty;
	double _magazineFeedChannelTopicDiversificationPenaltyHalfLife;
	double _magazineFeedFirstPassHalfLifeCoefficient;
	double _magazineFeedFirstPassDiversificationPenalty;
	double _magazineFeedFirstPassArticleFilter;
	double _magazineFeedBundlePaidMultiplierForFreeUsers;
	double _magazineFeedBundlePaidMultiplierForTrialUsers;
	double _magazineFeedBundlePaidMultiplierForPaidUsers;
	double _magazineFeedBundleFreeMultiplierForFreeUsers;
	double _magazineFeedBundleFreeMultiplierForTrialUsers;
	double _magazineFeedBundleFreeMultiplierForPaidUsers;
	double _magazineFeedFeaturedMultiplierForFreeUsers;
	double _magazineFeedFeaturedMultiplierForTrialUsers;
	double _magazineFeedFeaturedMultiplierForPaidUsers;
	double _magazineFeedHeadlineSeenPenalty;
	double _magazineFeedArticleReadPenalty;
	double _magazineFeedGroupScoreWeight;
	double _articleRecirculationPrimaryFeedBaselineRatePrior;
	double _articleRecirculationPrimaryFeedDecayFactor;
	double _articleRecirculationPrimaryFeedDemocratizationFactor;
	double _articleRecirculationPrimaryFeedHalfLifeCoefficient;
	double _articleRecirculationPrimaryFeedSubscribedChannelScoreCoefficient;
	double _articleRecirculationPrimaryFeedMutedVoteCoefficient;
	double _articleRecirculationPrimaryFeedPersonalizationCoefficient;
	double _articleRecirculationPrimaryFeedPublisherAggregateWeight;
	double _articleRecirculationPrimaryFeedArticleLengthAggregateWeight;
	double _articleRecirculationPrimaryFeedGlobalScoreCoefficient;
	double _articleRecirculationPrimaryFeedGlobalScoreCoefficientHalfLife;
	double _articleRecirculationPrimaryFeedGlobalScoreCoefficientInitialMultiplier;
	double _articleRecirculationPrimaryFeedCohortMembershipFavoritedBoost;
	double _articleRecirculationPrimaryFeedCohortMembershipGlobalWeight;
	double _articleRecirculationPrimaryFeedCohortMembershipUserBaseline;
	double _articleRecirculationPrimaryFeedCohortMembershipPreBaselineCurvature;
	double _articleRecirculationPrimaryFeedCohortMembershipPostBaselineCurvature;
	double _articleRecirculationPrimaryFeedCohortMembershipDilutionFactor;
	double _articleRecirculationPrimaryFeedCohortMembershipPaddingFactor;
	double _articleRecirculationPrimaryFeedSubscribedTopicsScoreCoefficient;
	double _articleRecirculationPrimaryFeedCtrWithSubscribedChannel;
	double _articleRecirculationPrimaryFeedCtrWithZeroSubscribed;
	double _articleRecirculationPrimaryFeedCtrWithOneSubscribed;
	double _articleRecirculationPrimaryFeedCtrWithTwoSubscribed;
	double _articleRecirculationPrimaryFeedCtrWithThreeSubscribed;
	double _articleRecirculationPrimaryFeedAutofavoritedVoteCoefficient;
	double _articleRecirculationPrimaryFeedCtrWithZeroAutofavorited;
	double _articleRecirculationPrimaryFeedCtrWithOneAutofavorited;
	double _articleRecirculationPrimaryFeedCtrWithTwoAutofavorited;
	double _articleRecirculationPrimaryFeedCtrWithThreeAutofavorited;
	double _articleRecirculationPrimaryFeedDiversificationInitialPenalty;
	double _articleRecirculationPrimaryFeedDiversificationPenalty;
	double _articleRecirculationPrimaryFeedDiversificationPenaltyHalfLife;
	double _articleRecirculationPrimaryFeedChannelTopicDiversificationInitialPenalty;
	double _articleRecirculationPrimaryFeedChannelTopicDiversificationPenalty;
	double _articleRecirculationPrimaryFeedChannelTopicDiversificationPenaltyHalfLife;
	double _articleRecirculationPrimaryFeedFirstPassHalfLifeCoefficient;
	double _articleRecirculationPrimaryFeedFirstPassDiversificationPenalty;
	double _articleRecirculationPrimaryFeedFirstPassArticleFilter;
	double _articleRecirculationPrimaryFeedBundlePaidMultiplierForFreeUsers;
	double _articleRecirculationPrimaryFeedBundlePaidMultiplierForTrialUsers;
	double _articleRecirculationPrimaryFeedBundlePaidMultiplierForPaidUsers;
	double _articleRecirculationPrimaryFeedBundleFreeMultiplierForFreeUsers;
	double _articleRecirculationPrimaryFeedBundleFreeMultiplierForTrialUsers;
	double _articleRecirculationPrimaryFeedBundleFreeMultiplierForPaidUsers;
	double _articleRecirculationPrimaryFeedFeaturedMultiplierForFreeUsers;
	double _articleRecirculationPrimaryFeedFeaturedMultiplierForTrialUsers;
	double _articleRecirculationPrimaryFeedFeaturedMultiplierForPaidUsers;
	double _articleRecirculationPrimaryFeedHeadlineSeenPenalty;
	double _articleRecirculationPrimaryFeedArticleReadPenalty;
	double _articleRecirculationSecondaryFeedBaselineRatePrior;
	double _articleRecirculationSecondaryFeedDecayFactor;
	double _articleRecirculationSecondaryFeedDemocratizationFactor;
	double _articleRecirculationSecondaryFeedHalfLifeCoefficient;
	double _articleRecirculationSecondaryFeedSubscribedChannelScoreCoefficient;
	double _articleRecirculationSecondaryFeedMutedVoteCoefficient;
	double _articleRecirculationSecondaryFeedPersonalizationCoefficient;
	double _articleRecirculationSecondaryFeedPublisherAggregateWeight;
	double _articleRecirculationSecondaryFeedArticleLengthAggregateWeight;
	double _articleRecirculationSecondaryFeedGlobalScoreCoefficient;
	double _articleRecirculationSecondaryFeedGlobalScoreCoefficientHalfLife;
	double _articleRecirculationSecondaryFeedGlobalScoreCoefficientInitialMultiplier;
	double _articleRecirculationSecondaryFeedCohortMembershipUserBaseline;
	double _articleRecirculationSecondaryFeedCohortMembershipPreBaselineCurvature;
	double _articleRecirculationSecondaryFeedCohortMembershipPostBaselineCurvature;
	double _articleRecirculationSecondaryFeedCohortMembershipDilutionFactor;
	double _articleRecirculationSecondaryFeedCohortMembershipPaddingFactor;
	double _articleRecirculationSecondaryFeedCohortMembershipFavoritedBoost;
	double _articleRecirculationSecondaryFeedCohortMembershipGlobalWeight;
	double _articleRecirculationSecondaryFeedSubscribedTopicsScoreCoefficient;
	double _articleRecirculationSecondaryFeedCtrWithSubscribedChannel;
	double _articleRecirculationSecondaryFeedCtrWithZeroSubscribed;
	double _articleRecirculationSecondaryFeedCtrWithOneSubscribed;
	double _articleRecirculationSecondaryFeedCtrWithTwoSubscribed;
	double _articleRecirculationSecondaryFeedCtrWithThreeSubscribed;
	double _articleRecirculationSecondaryFeedAutofavoritedVoteCoefficient;
	double _articleRecirculationSecondaryFeedCtrWithZeroAutofavorited;
	double _articleRecirculationSecondaryFeedCtrWithOneAutofavorited;
	double _articleRecirculationSecondaryFeedCtrWithTwoAutofavorited;
	double _articleRecirculationSecondaryFeedCtrWithThreeAutofavorited;
	double _articleRecirculationSecondaryFeedDiversificationInitialPenalty;
	double _articleRecirculationSecondaryFeedDiversificationPenalty;
	double _articleRecirculationSecondaryFeedDiversificationPenaltyHalfLife;
	double _articleRecirculationSecondaryFeedChannelTopicDiversificationInitialPenalty;
	double _articleRecirculationSecondaryFeedChannelTopicDiversificationPenalty;
	double _articleRecirculationSecondaryFeedChannelTopicDiversificationPenaltyHalfLife;
	double _articleRecirculationSecondaryFeedFirstPassHalfLifeCoefficient;
	double _articleRecirculationSecondaryFeedFirstPassDiversificationPenalty;
	double _articleRecirculationSecondaryFeedFirstPassArticleFilter;
	double _articleRecirculationSecondaryFeedBundlePaidMultiplierForFreeUsers;
	double _articleRecirculationSecondaryFeedBundlePaidMultiplierForTrialUsers;
	double _articleRecirculationSecondaryFeedBundlePaidMultiplierForPaidUsers;
	double _articleRecirculationSecondaryFeedBundleFreeMultiplierForFreeUsers;
	double _articleRecirculationSecondaryFeedBundleFreeMultiplierForTrialUsers;
	double _articleRecirculationSecondaryFeedBundleFreeMultiplierForPaidUsers;
	double _articleRecirculationSecondaryFeedFeaturedMultiplierForFreeUsers;
	double _articleRecirculationSecondaryFeedFeaturedMultiplierForTrialUsers;
	double _articleRecirculationSecondaryFeedFeaturedMultiplierForPaidUsers;
	double _articleRecirculationSecondaryFeedHeadlineSeenPenalty;
	double _articleRecirculationSecondaryFeedArticleReadPenalty;
	double _bestOfBundleBaselineRatePrior;
	double _bestOfBundleDecayFactor;
	double _bestOfBundleDemocratizationFactor;
	double _bestOfBundleHalfLifeCoefficient;
	double _bestOfBundleSubscribedChannelScoreCoefficient;
	double _bestOfBundleMutedVoteCoefficient;
	double _bestOfBundlePersonalizationCoefficient;
	double _bestOfBundlePublisherAggregateWeight;
	double _bestOfBundleArticleLengthAggregateWeight;
	double _bestOfBundleGlobalScoreCoefficient;
	double _bestOfBundleGlobalScoreCoefficientHalfLife;
	double _bestOfBundleGlobalScoreCoefficientInitialMultiplier;
	double _bestOfBundleCohortMembershipFavoritedBoost;
	double _bestOfBundleCohortMembershipGlobalWeight;
	double _bestOfBundleCohortMembershipUserBaseline;
	double _bestOfBundleCohortMembershipPreBaselineCurvature;
	double _bestOfBundleCohortMembershipPostBaselineCurvature;
	double _bestOfBundleCohortMembershipDilutionFactor;
	double _bestOfBundleCohortMembershipPaddingFactor;
	double _bestOfBundleSubscribedTopicsScoreCoefficient;
	double _bestOfBundleCtrWithSubscribedChannel;
	double _bestOfBundleCtrWithZeroSubscribed;
	double _bestOfBundleCtrWithOneSubscribed;
	double _bestOfBundleCtrWithTwoSubscribed;
	double _bestOfBundleCtrWithThreeSubscribed;
	double _bestOfBundleAutofavoritedVoteCoefficient;
	double _bestOfBundleCtrWithZeroAutofavorited;
	double _bestOfBundleCtrWithOneAutofavorited;
	double _bestOfBundleCtrWithTwoAutofavorited;
	double _bestOfBundleCtrWithThreeAutofavorited;
	double _bestOfBundleDiversificationInitialPenalty;
	double _bestOfBundleDiversificationPenalty;
	double _bestOfBundleDiversificationPenaltyHalfLife;
	double _bestOfBundleChannelTopicDiversificationInitialPenalty;
	double _bestOfBundleChannelTopicDiversificationPenalty;
	double _bestOfBundleChannelTopicDiversificationPenaltyHalfLife;
	double _bestOfBundleFirstPassHalfLifeCoefficient;
	double _bestOfBundleFirstPassDiversificationPenalty;
	double _bestOfBundleFirstPassArticleFilter;
	double _bestOfBundleBundlePaidMultiplierForFreeUsers;
	double _bestOfBundleBundlePaidMultiplierForTrialUsers;
	double _bestOfBundleBundlePaidMultiplierForPaidUsers;
	double _bestOfBundleBundleFreeMultiplierForFreeUsers;
	double _bestOfBundleBundleFreeMultiplierForTrialUsers;
	double _bestOfBundleBundleFreeMultiplierForPaidUsers;
	double _bestOfBundleFeaturedMultiplierForFreeUsers;
	double _bestOfBundleFeaturedMultiplierForTrialUsers;
	double _bestOfBundleFeaturedMultiplierForPaidUsers;
	double _bestOfBundleHeadlineSeenPenalty;
	double _bestOfBundleArticleReadPenalty;
	double _forYouGroupBaselineRatePrior;
	double _forYouGroupDecayFactor;
	double _forYouGroupDemocratizationFactor;
	double _forYouGroupHalfLifeCoefficient;
	double _forYouGroupSubscribedChannelScoreCoefficient;
	double _forYouGroupMutedVoteCoefficient;
	double _forYouGroupPersonalizationCoefficient;
	double _forYouGroupPublisherAggregateWeight;
	double _forYouGroupArticleLengthAggregateWeight;
	double _forYouGroupGlobalScoreCoefficient;
	double _forYouGroupGlobalScoreCoefficientHalfLife;
	double _forYouGroupGlobalScoreCoefficientInitialMultiplier;
	double _forYouGroupCohortMembershipFavoritedBoost;
	double _forYouGroupCohortMembershipGlobalWeight;
	double _forYouGroupCohortMembershipUserBaseline;
	double _forYouGroupCohortMembershipPreBaselineCurvature;
	double _forYouGroupCohortMembershipPostBaselineCurvature;
	double _forYouGroupCohortMembershipDilutionFactor;
	double _forYouGroupCohortMembershipPaddingFactor;
	double _forYouGroupSubscribedTopicsScoreCoefficient;
	double _forYouGroupCtrWithSubscribedChannel;
	double _forYouGroupCtrWithZeroSubscribed;
	double _forYouGroupCtrWithOneSubscribed;
	double _forYouGroupCtrWithTwoSubscribed;
	double _forYouGroupCtrWithThreeSubscribed;
	double _forYouGroupAutofavoritedVoteCoefficient;
	double _forYouGroupCtrWithZeroAutofavorited;
	double _forYouGroupCtrWithOneAutofavorited;
	double _forYouGroupCtrWithTwoAutofavorited;
	double _forYouGroupCtrWithThreeAutofavorited;
	double _forYouGroupDiversificationInitialPenalty;
	double _forYouGroupDiversificationPenalty;
	double _forYouGroupDiversificationPenaltyHalfLife;
	double _forYouGroupChannelTopicDiversificationInitialPenalty;
	double _forYouGroupChannelTopicDiversificationPenalty;
	double _forYouGroupChannelTopicDiversificationPenaltyHalfLife;
	double _forYouGroupFirstPassHalfLifeCoefficient;
	double _forYouGroupFirstPassDiversificationPenalty;
	double _forYouGroupFirstPassArticleFilter;
	double _forYouGroupBundlePaidMultiplierForFreeUsers;
	double _forYouGroupBundlePaidMultiplierForTrialUsers;
	double _forYouGroupBundlePaidMultiplierForPaidUsers;
	double _forYouGroupBundleFreeMultiplierForFreeUsers;
	double _forYouGroupBundleFreeMultiplierForTrialUsers;
	double _forYouGroupBundleFreeMultiplierForPaidUsers;
	double _forYouGroupFeaturedMultiplierForFreeUsers;
	double _forYouGroupFeaturedMultiplierForTrialUsers;
	double _forYouGroupFeaturedMultiplierForPaidUsers;
	double _forYouGroupHeadlineSeenPenalty;
	double _forYouGroupArticleReadPenalty;
	double _forYouGroupArticleSubset;
	double _topStoriesGroupAggregatesGroupBias;
	double _trendingGroupAggregatesGroupBias;

}

@property (nonatomic,readonly) long long treatmentID;                                                                           //@synthesize treatmentID=_treatmentID - In the implementation block
@property (nonatomic,readonly) double decayFactor;                                                                              //@synthesize decayFactor=_decayFactor - In the implementation block
@property (nonatomic,readonly) double democratizationFactor;                                                                    //@synthesize democratizationFactor=_democratizationFactor - In the implementation block
@property (nonatomic,readonly) double hourlyFlowRateMinimum;                                                                    //@synthesize hourlyFlowRateMinimum=_hourlyFlowRateMinimum - In the implementation block
@property (nonatomic,readonly) double hourlyFlowRateSubscriptionCountBuffer;                                                    //@synthesize hourlyFlowRateSubscriptionCountBuffer=_hourlyFlowRateSubscriptionCountBuffer - In the implementation block
@property (nonatomic,readonly) double hourlyFlowRateDampeningFactor;                                                            //@synthesize hourlyFlowRateDampeningFactor=_hourlyFlowRateDampeningFactor - In the implementation block
@property (nonatomic,readonly) double hourlyFlowRatePerSubscription;                                                            //@synthesize hourlyFlowRatePerSubscription=_hourlyFlowRatePerSubscription - In the implementation block
@property (nonatomic,readonly) long long extraArticlesToShowUser;                                                               //@synthesize extraArticlesToShowUser=_extraArticlesToShowUser - In the implementation block
@property (nonatomic,readonly) double hourlyFlowRateDecayFactor;                                                                //@synthesize hourlyFlowRateDecayFactor=_hourlyFlowRateDecayFactor - In the implementation block
@property (nonatomic,readonly) double hourlyFlowRatePriorWeight;                                                                //@synthesize hourlyFlowRatePriorWeight=_hourlyFlowRatePriorWeight - In the implementation block
@property (nonatomic,readonly) double hourlyFlowRateFloor;                                                                      //@synthesize hourlyFlowRateFloor=_hourlyFlowRateFloor - In the implementation block
@property (nonatomic,readonly) double hourlyFlowRateCeiling;                                                                    //@synthesize hourlyFlowRateCeiling=_hourlyFlowRateCeiling - In the implementation block
@property (nonatomic,readonly) double hourlyFlowRateAlpha;                                                                      //@synthesize hourlyFlowRateAlpha=_hourlyFlowRateAlpha - In the implementation block
@property (nonatomic,readonly) double hourlyFlowRateBeta;                                                                       //@synthesize hourlyFlowRateBeta=_hourlyFlowRateBeta - In the implementation block
@property (nonatomic,readonly) double hourlyFlowRateGamma;                                                                      //@synthesize hourlyFlowRateGamma=_hourlyFlowRateGamma - In the implementation block
@property (nonatomic,readonly) double baselineImpressionPrior;                                                                  //@synthesize baselineImpressionPrior=_baselineImpressionPrior - In the implementation block
@property (nonatomic,readonly) double baselineRatePrior;                                                                        //@synthesize baselineRatePrior=_baselineRatePrior - In the implementation block
@property (nonatomic,readonly) double featureImpressionPrior;                                                                   //@synthesize featureImpressionPrior=_featureImpressionPrior - In the implementation block
@property (nonatomic,readonly) double cohortMembershipFavoritedBoost;                                                           //@synthesize cohortMembershipFavoritedBoost=_cohortMembershipFavoritedBoost - In the implementation block
@property (nonatomic,readonly) double cohortMembershipGlobalWeight;                                                             //@synthesize cohortMembershipGlobalWeight=_cohortMembershipGlobalWeight - In the implementation block
@property (nonatomic,readonly) double cohortMembershipUserBaseline;                                                             //@synthesize cohortMembershipUserBaseline=_cohortMembershipUserBaseline - In the implementation block
@property (nonatomic,readonly) double cohortMembershipPreBaselineCurvature;                                                     //@synthesize cohortMembershipPreBaselineCurvature=_cohortMembershipPreBaselineCurvature - In the implementation block
@property (nonatomic,readonly) double cohortMembershipPostBaselineCurvature;                                                    //@synthesize cohortMembershipPostBaselineCurvature=_cohortMembershipPostBaselineCurvature - In the implementation block
@property (nonatomic,readonly) double cohortMembershipDilutionFactor;                                                           //@synthesize cohortMembershipDilutionFactor=_cohortMembershipDilutionFactor - In the implementation block
@property (nonatomic,readonly) double cohortMembershipPaddingFactor;                                                            //@synthesize cohortMembershipPaddingFactor=_cohortMembershipPaddingFactor - In the implementation block
@property (nonatomic,readonly) double subscribedChannelScoreCoefficient;                                                        //@synthesize subscribedChannelScoreCoefficient=_subscribedChannelScoreCoefficient - In the implementation block
@property (nonatomic,readonly) double ctrWithSubscribedChannel;                                                                 //@synthesize ctrWithSubscribedChannel=_ctrWithSubscribedChannel - In the implementation block
@property (nonatomic,readonly) double subscribedTopicsScoreCoefficient;                                                         //@synthesize subscribedTopicsScoreCoefficient=_subscribedTopicsScoreCoefficient - In the implementation block
@property (nonatomic,readonly) double ctrWithZeroSubscribed;                                                                    //@synthesize ctrWithZeroSubscribed=_ctrWithZeroSubscribed - In the implementation block
@property (nonatomic,readonly) double ctrWithOneSubscribed;                                                                     //@synthesize ctrWithOneSubscribed=_ctrWithOneSubscribed - In the implementation block
@property (nonatomic,readonly) double ctrWithTwoSubscribed;                                                                     //@synthesize ctrWithTwoSubscribed=_ctrWithTwoSubscribed - In the implementation block
@property (nonatomic,readonly) double ctrWithThreeSubscribed;                                                                   //@synthesize ctrWithThreeSubscribed=_ctrWithThreeSubscribed - In the implementation block
@property (nonatomic,readonly) double mutedVoteCoefficient;                                                                     //@synthesize mutedVoteCoefficient=_mutedVoteCoefficient - In the implementation block
@property (nonatomic,readonly) double autofavoritedVoteCoefficient;                                                             //@synthesize autofavoritedVoteCoefficient=_autofavoritedVoteCoefficient - In the implementation block
@property (nonatomic,readonly) double ctrWithZeroAutofavorited;                                                                 //@synthesize ctrWithZeroAutofavorited=_ctrWithZeroAutofavorited - In the implementation block
@property (nonatomic,readonly) double ctrWithOneAutofavorited;                                                                  //@synthesize ctrWithOneAutofavorited=_ctrWithOneAutofavorited - In the implementation block
@property (nonatomic,readonly) double ctrWithTwoAutofavorited;                                                                  //@synthesize ctrWithTwoAutofavorited=_ctrWithTwoAutofavorited - In the implementation block
@property (nonatomic,readonly) double ctrWithThreeAutofavorited;                                                                //@synthesize ctrWithThreeAutofavorited=_ctrWithThreeAutofavorited - In the implementation block
@property (nonatomic,readonly) double personalizationCoefficient;                                                               //@synthesize personalizationCoefficient=_personalizationCoefficient - In the implementation block
@property (nonatomic,readonly) double globalScoreCoefficient;                                                                   //@synthesize globalScoreCoefficient=_globalScoreCoefficient - In the implementation block
@property (nonatomic,readonly) double globalScoreCoefficientHalfLife;                                                           //@synthesize globalScoreCoefficientHalfLife=_globalScoreCoefficientHalfLife - In the implementation block
@property (nonatomic,readonly) double globalScoreCoefficientInitialMultiplier;                                                  //@synthesize globalScoreCoefficientInitialMultiplier=_globalScoreCoefficientInitialMultiplier - In the implementation block
@property (nonatomic,readonly) double publisherAggregateWeight;                                                                 //@synthesize publisherAggregateWeight=_publisherAggregateWeight - In the implementation block
@property (nonatomic,readonly) double articleLengthAggregateWeight;                                                             //@synthesize articleLengthAggregateWeight=_articleLengthAggregateWeight - In the implementation block
@property (nonatomic,readonly) double articleLengthLongThreshold;                                                               //@synthesize articleLengthLongThreshold=_articleLengthLongThreshold - In the implementation block
@property (nonatomic,readonly) double articleLengthMediumThreshold;                                                             //@synthesize articleLengthMediumThreshold=_articleLengthMediumThreshold - In the implementation block
@property (nonatomic,readonly) double halfLifeCoefficient;                                                                      //@synthesize halfLifeCoefficient=_halfLifeCoefficient - In the implementation block
@property (nonatomic,readonly) double diversificationPenalty;                                                                   //@synthesize diversificationPenalty=_diversificationPenalty - In the implementation block
@property (nonatomic,readonly) double diversificationInitialPenalty;                                                            //@synthesize diversificationInitialPenalty=_diversificationInitialPenalty - In the implementation block
@property (nonatomic,readonly) double diversificationPenaltyHalfLife;                                                           //@synthesize diversificationPenaltyHalfLife=_diversificationPenaltyHalfLife - In the implementation block
@property (nonatomic,readonly) double channelTopicDiversificationPenalty;                                                       //@synthesize channelTopicDiversificationPenalty=_channelTopicDiversificationPenalty - In the implementation block
@property (nonatomic,readonly) double channelTopicDiversificationInitialPenalty;                                                //@synthesize channelTopicDiversificationInitialPenalty=_channelTopicDiversificationInitialPenalty - In the implementation block
@property (nonatomic,readonly) double channelTopicDiversificationPenaltyHalfLife;                                               //@synthesize channelTopicDiversificationPenaltyHalfLife=_channelTopicDiversificationPenaltyHalfLife - In the implementation block
@property (nonatomic,readonly) double publisherDiversificationPenalty;                                                          //@synthesize publisherDiversificationPenalty=_publisherDiversificationPenalty - In the implementation block
@property (nonatomic,readonly) double publisherDiversificationInitialPenalty;                                                   //@synthesize publisherDiversificationInitialPenalty=_publisherDiversificationInitialPenalty - In the implementation block
@property (nonatomic,readonly) double publisherDiversificationPenaltyHalfLife;                                                  //@synthesize publisherDiversificationPenaltyHalfLife=_publisherDiversificationPenaltyHalfLife - In the implementation block
@property (nonatomic,readonly) double headlineSeenPenalty;                                                                      //@synthesize headlineSeenPenalty=_headlineSeenPenalty - In the implementation block
@property (nonatomic,readonly) double articleReadPenalty;                                                                       //@synthesize articleReadPenalty=_articleReadPenalty - In the implementation block
@property (nonatomic,readonly) long long publisherTopicIDEventCountMinimum;                                                     //@synthesize publisherTopicIDEventCountMinimum=_publisherTopicIDEventCountMinimum - In the implementation block
@property (nonatomic,readonly) double presentationImpressionValue;                                                              //@synthesize presentationImpressionValue=_presentationImpressionValue - In the implementation block
@property (nonatomic,readonly) double heavyClickImpressionValue;                                                                //@synthesize heavyClickImpressionValue=_heavyClickImpressionValue - In the implementation block
@property (nonatomic,readonly) double likeImpressionValue;                                                                      //@synthesize likeImpressionValue=_likeImpressionValue - In the implementation block
@property (nonatomic,readonly) double shareImpressionValue;                                                                     //@synthesize shareImpressionValue=_shareImpressionValue - In the implementation block
@property (nonatomic,readonly) double savedImpressionValue;                                                                     //@synthesize savedImpressionValue=_savedImpressionValue - In the implementation block
@property (nonatomic,readonly) double subscribeImpressionValue;                                                                 //@synthesize subscribeImpressionValue=_subscribeImpressionValue - In the implementation block
@property (nonatomic,readonly) double subscribeRelatedImpressionValue;                                                          //@synthesize subscribeRelatedImpressionValue=_subscribeRelatedImpressionValue - In the implementation block
@property (nonatomic,readonly) double existingSubscriptionImpressionValue;                                                      //@synthesize existingSubscriptionImpressionValue=_existingSubscriptionImpressionValue - In the implementation block
@property (nonatomic,readonly) double existingSubscriptionRelatedImpressionValue;                                               //@synthesize existingSubscriptionRelatedImpressionValue=_existingSubscriptionRelatedImpressionValue - In the implementation block
@property (nonatomic,readonly) double unsubscribeImpressionValue;                                                               //@synthesize unsubscribeImpressionValue=_unsubscribeImpressionValue - In the implementation block
@property (nonatomic,readonly) double tappedImpressionValue;                                                                    //@synthesize tappedImpressionValue=_tappedImpressionValue - In the implementation block
@property (nonatomic,readonly) double weakClickImpressionValue;                                                                 //@synthesize weakClickImpressionValue=_weakClickImpressionValue - In the implementation block
@property (nonatomic,readonly) double visitImpressionValue;                                                                     //@synthesize visitImpressionValue=_visitImpressionValue - In the implementation block
@property (nonatomic,readonly) double dislikeImpressionValue;                                                                   //@synthesize dislikeImpressionValue=_dislikeImpressionValue - In the implementation block
@property (nonatomic,readonly) double recommendationPresentationFeedImpressionValue;                                            //@synthesize recommendationPresentationFeedImpressionValue=_recommendationPresentationFeedImpressionValue - In the implementation block
@property (nonatomic,readonly) double recommendationPresentationExploreImpressionValue;                                         //@synthesize recommendationPresentationExploreImpressionValue=_recommendationPresentationExploreImpressionValue - In the implementation block
@property (nonatomic,readonly) double premiumSubscriptionActivationImpressionValue;                                             //@synthesize premiumSubscriptionActivationImpressionValue=_premiumSubscriptionActivationImpressionValue - In the implementation block
@property (nonatomic,readonly) double muteImpressionValue;                                                                      //@synthesize muteImpressionValue=_muteImpressionValue - In the implementation block
@property (nonatomic,readonly) double unmuteImpressionValue;                                                                    //@synthesize unmuteImpressionValue=_unmuteImpressionValue - In the implementation block
@property (nonatomic,readonly) double videoInitiatePlaybackImpressionValue;                                                     //@synthesize videoInitiatePlaybackImpressionValue=_videoInitiatePlaybackImpressionValue - In the implementation block
@property (nonatomic,readonly) double videoCompletePlaybackImpressionValue;                                                     //@synthesize videoCompletePlaybackImpressionValue=_videoCompletePlaybackImpressionValue - In the implementation block
@property (nonatomic,readonly) double videoComplete25ImpressionValue;                                                           //@synthesize videoComplete25ImpressionValue=_videoComplete25ImpressionValue - In the implementation block
@property (nonatomic,readonly) double videoComplete50ImpressionValue;                                                           //@synthesize videoComplete50ImpressionValue=_videoComplete50ImpressionValue - In the implementation block
@property (nonatomic,readonly) double videoComplete75ImpressionValue;                                                           //@synthesize videoComplete75ImpressionValue=_videoComplete75ImpressionValue - In the implementation block
@property (nonatomic,readonly) double newsTodayWidgetPresentationImpressionValue;                                               //@synthesize newsTodayWidgetPresentationImpressionValue=_newsTodayWidgetPresentationImpressionValue - In the implementation block
@property (nonatomic,readonly) double newsTodayWidgetClickImpressionValue;                                                      //@synthesize newsTodayWidgetClickImpressionValue=_newsTodayWidgetClickImpressionValue - In the implementation block
@property (nonatomic,readonly) double newsTodayWidgetVideoPlaybackImpressionValue;                                              //@synthesize newsTodayWidgetVideoPlaybackImpressionValue=_newsTodayWidgetVideoPlaybackImpressionValue - In the implementation block
@property (nonatomic,readonly) double appInstallImpressionValue;                                                                //@synthesize appInstallImpressionValue=_appInstallImpressionValue - In the implementation block
@property (nonatomic,readonly) double appInFocusImpressionValue;                                                                //@synthesize appInFocusImpressionValue=_appInFocusImpressionValue - In the implementation block
@property (nonatomic,readonly) double safariHistoryImpressionValue;                                                             //@synthesize safariHistoryImpressionValue=_safariHistoryImpressionValue - In the implementation block
@property (nonatomic,readonly) double publisherBoostForSourceMoreFromFeedImpressionValue;                                       //@synthesize publisherBoostForSourceMoreFromFeedImpressionValue=_publisherBoostForSourceMoreFromFeedImpressionValue - In the implementation block
@property (nonatomic,readonly) double topicBoostForSourceRelatedFeedImpressionValue;                                            //@synthesize topicBoostForSourceRelatedFeedImpressionValue=_topicBoostForSourceRelatedFeedImpressionValue - In the implementation block
@property (nonatomic,readonly) double publisherBoostForIssueOpenImpressionValue;                                                //@synthesize publisherBoostForIssueOpenImpressionValue=_publisherBoostForIssueOpenImpressionValue - In the implementation block
@property (nonatomic,readonly) double presentationClickValue;                                                                   //@synthesize presentationClickValue=_presentationClickValue - In the implementation block
@property (nonatomic,readonly) double heavyClickClickValue;                                                                     //@synthesize heavyClickClickValue=_heavyClickClickValue - In the implementation block
@property (nonatomic,readonly) double likeClickValue;                                                                           //@synthesize likeClickValue=_likeClickValue - In the implementation block
@property (nonatomic,readonly) double shareClickValue;                                                                          //@synthesize shareClickValue=_shareClickValue - In the implementation block
@property (nonatomic,readonly) double savedClickValue;                                                                          //@synthesize savedClickValue=_savedClickValue - In the implementation block
@property (nonatomic,readonly) double subscribeClickValue;                                                                      //@synthesize subscribeClickValue=_subscribeClickValue - In the implementation block
@property (nonatomic,readonly) double subscribeRelatedClickValue;                                                               //@synthesize subscribeRelatedClickValue=_subscribeRelatedClickValue - In the implementation block
@property (nonatomic,readonly) double existingSubscriptionClickValue;                                                           //@synthesize existingSubscriptionClickValue=_existingSubscriptionClickValue - In the implementation block
@property (nonatomic,readonly) double existingSubscriptionRelatedClickValue;                                                    //@synthesize existingSubscriptionRelatedClickValue=_existingSubscriptionRelatedClickValue - In the implementation block
@property (nonatomic,readonly) double unsubscribeClickValue;                                                                    //@synthesize unsubscribeClickValue=_unsubscribeClickValue - In the implementation block
@property (nonatomic,readonly) double tappedClickValue;                                                                         //@synthesize tappedClickValue=_tappedClickValue - In the implementation block
@property (nonatomic,readonly) double weakClickClickValue;                                                                      //@synthesize weakClickClickValue=_weakClickClickValue - In the implementation block
@property (nonatomic,readonly) double visitClickValue;                                                                          //@synthesize visitClickValue=_visitClickValue - In the implementation block
@property (nonatomic,readonly) double dislikeClickValue;                                                                        //@synthesize dislikeClickValue=_dislikeClickValue - In the implementation block
@property (nonatomic,readonly) double recommendationPresentationFeedClickValue;                                                 //@synthesize recommendationPresentationFeedClickValue=_recommendationPresentationFeedClickValue - In the implementation block
@property (nonatomic,readonly) double recommendationPresentationExploreClickValue;                                              //@synthesize recommendationPresentationExploreClickValue=_recommendationPresentationExploreClickValue - In the implementation block
@property (nonatomic,readonly) double premiumSubscriptionActivationClickValue;                                                  //@synthesize premiumSubscriptionActivationClickValue=_premiumSubscriptionActivationClickValue - In the implementation block
@property (nonatomic,readonly) double muteClickValue;                                                                           //@synthesize muteClickValue=_muteClickValue - In the implementation block
@property (nonatomic,readonly) double unmuteClickValue;                                                                         //@synthesize unmuteClickValue=_unmuteClickValue - In the implementation block
@property (nonatomic,readonly) double videoInitiatePlaybackClickValue;                                                          //@synthesize videoInitiatePlaybackClickValue=_videoInitiatePlaybackClickValue - In the implementation block
@property (nonatomic,readonly) double videoCompletePlaybackClickValue;                                                          //@synthesize videoCompletePlaybackClickValue=_videoCompletePlaybackClickValue - In the implementation block
@property (nonatomic,readonly) double videoComplete25ClickValue;                                                                //@synthesize videoComplete25ClickValue=_videoComplete25ClickValue - In the implementation block
@property (nonatomic,readonly) double videoComplete50ClickValue;                                                                //@synthesize videoComplete50ClickValue=_videoComplete50ClickValue - In the implementation block
@property (nonatomic,readonly) double videoComplete75ClickValue;                                                                //@synthesize videoComplete75ClickValue=_videoComplete75ClickValue - In the implementation block
@property (nonatomic,readonly) double newsTodayWidgetPresentationClickValue;                                                    //@synthesize newsTodayWidgetPresentationClickValue=_newsTodayWidgetPresentationClickValue - In the implementation block
@property (nonatomic,readonly) double newsTodayWidgetClickClickValue;                                                           //@synthesize newsTodayWidgetClickClickValue=_newsTodayWidgetClickClickValue - In the implementation block
@property (nonatomic,readonly) double newsTodayWidgetVideoPlaybackClickValue;                                                   //@synthesize newsTodayWidgetVideoPlaybackClickValue=_newsTodayWidgetVideoPlaybackClickValue - In the implementation block
@property (nonatomic,readonly) double appInstallClickValue;                                                                     //@synthesize appInstallClickValue=_appInstallClickValue - In the implementation block
@property (nonatomic,readonly) double appInFocusClickValue;                                                                     //@synthesize appInFocusClickValue=_appInFocusClickValue - In the implementation block
@property (nonatomic,readonly) double safariHistoryClickValue;                                                                  //@synthesize safariHistoryClickValue=_safariHistoryClickValue - In the implementation block
@property (nonatomic,readonly) double publisherBoostForSourceMoreFromFeedClickValue;                                            //@synthesize publisherBoostForSourceMoreFromFeedClickValue=_publisherBoostForSourceMoreFromFeedClickValue - In the implementation block
@property (nonatomic,readonly) double topicBoostForSourceRelatedFeedClickValue;                                                 //@synthesize topicBoostForSourceRelatedFeedClickValue=_topicBoostForSourceRelatedFeedClickValue - In the implementation block
@property (nonatomic,readonly) double publisherBoostForIssueOpenClickValue;                                                     //@synthesize publisherBoostForIssueOpenClickValue=_publisherBoostForIssueOpenClickValue - In the implementation block
@property (nonatomic,readonly) double presentationBaselineImpressionValue;                                                      //@synthesize presentationBaselineImpressionValue=_presentationBaselineImpressionValue - In the implementation block
@property (nonatomic,readonly) double heavyClickBaselineImpressionValue;                                                        //@synthesize heavyClickBaselineImpressionValue=_heavyClickBaselineImpressionValue - In the implementation block
@property (nonatomic,readonly) double likeBaselineImpressionValue;                                                              //@synthesize likeBaselineImpressionValue=_likeBaselineImpressionValue - In the implementation block
@property (nonatomic,readonly) double shareBaselineImpressionValue;                                                             //@synthesize shareBaselineImpressionValue=_shareBaselineImpressionValue - In the implementation block
@property (nonatomic,readonly) double savedBaselineImpressionValue;                                                             //@synthesize savedBaselineImpressionValue=_savedBaselineImpressionValue - In the implementation block
@property (nonatomic,readonly) double subscribeBaselineImpressionValue;                                                         //@synthesize subscribeBaselineImpressionValue=_subscribeBaselineImpressionValue - In the implementation block
@property (nonatomic,readonly) double subscribeRelatedBaselineImpressionValue;                                                  //@synthesize subscribeRelatedBaselineImpressionValue=_subscribeRelatedBaselineImpressionValue - In the implementation block
@property (nonatomic,readonly) double existingSubscriptionBaselineImpressionValue;                                              //@synthesize existingSubscriptionBaselineImpressionValue=_existingSubscriptionBaselineImpressionValue - In the implementation block
@property (nonatomic,readonly) double existingSubscriptionRelatedBaselineImpressionValue;                                       //@synthesize existingSubscriptionRelatedBaselineImpressionValue=_existingSubscriptionRelatedBaselineImpressionValue - In the implementation block
@property (nonatomic,readonly) double unsubscribeBaselineImpressionValue;                                                       //@synthesize unsubscribeBaselineImpressionValue=_unsubscribeBaselineImpressionValue - In the implementation block
@property (nonatomic,readonly) double tappedBaselineImpressionValue;                                                            //@synthesize tappedBaselineImpressionValue=_tappedBaselineImpressionValue - In the implementation block
@property (nonatomic,readonly) double weakClickBaselineImpressionValue;                                                         //@synthesize weakClickBaselineImpressionValue=_weakClickBaselineImpressionValue - In the implementation block
@property (nonatomic,readonly) double visitBaselineImpressionValue;                                                             //@synthesize visitBaselineImpressionValue=_visitBaselineImpressionValue - In the implementation block
@property (nonatomic,readonly) double dislikeBaselineImpressionValue;                                                           //@synthesize dislikeBaselineImpressionValue=_dislikeBaselineImpressionValue - In the implementation block
@property (nonatomic,readonly) double recommendationPresentationFeedBaselineImpressionValue;                                    //@synthesize recommendationPresentationFeedBaselineImpressionValue=_recommendationPresentationFeedBaselineImpressionValue - In the implementation block
@property (nonatomic,readonly) double recommendationPresentationExploreBaselineImpressionValue;                                 //@synthesize recommendationPresentationExploreBaselineImpressionValue=_recommendationPresentationExploreBaselineImpressionValue - In the implementation block
@property (nonatomic,readonly) double premiumSubscriptionActivationBaselineImpressionValue;                                     //@synthesize premiumSubscriptionActivationBaselineImpressionValue=_premiumSubscriptionActivationBaselineImpressionValue - In the implementation block
@property (nonatomic,readonly) double muteBaselineImpressionValue;                                                              //@synthesize muteBaselineImpressionValue=_muteBaselineImpressionValue - In the implementation block
@property (nonatomic,readonly) double unmuteBaselineImpressionValue;                                                            //@synthesize unmuteBaselineImpressionValue=_unmuteBaselineImpressionValue - In the implementation block
@property (nonatomic,readonly) double videoInitiatePlaybackBaselineImpressionValue;                                             //@synthesize videoInitiatePlaybackBaselineImpressionValue=_videoInitiatePlaybackBaselineImpressionValue - In the implementation block
@property (nonatomic,readonly) double videoCompletePlaybackBaselineImpressionValue;                                             //@synthesize videoCompletePlaybackBaselineImpressionValue=_videoCompletePlaybackBaselineImpressionValue - In the implementation block
@property (nonatomic,readonly) double videoComplete25BaselineImpressionValue;                                                   //@synthesize videoComplete25BaselineImpressionValue=_videoComplete25BaselineImpressionValue - In the implementation block
@property (nonatomic,readonly) double videoComplete50BaselineImpressionValue;                                                   //@synthesize videoComplete50BaselineImpressionValue=_videoComplete50BaselineImpressionValue - In the implementation block
@property (nonatomic,readonly) double videoComplete75BaselineImpressionValue;                                                   //@synthesize videoComplete75BaselineImpressionValue=_videoComplete75BaselineImpressionValue - In the implementation block
@property (nonatomic,readonly) double newsTodayWidgetPresentationBaselineImpressionValue;                                       //@synthesize newsTodayWidgetPresentationBaselineImpressionValue=_newsTodayWidgetPresentationBaselineImpressionValue - In the implementation block
@property (nonatomic,readonly) double newsTodayWidgetClickBaselineImpressionValue;                                              //@synthesize newsTodayWidgetClickBaselineImpressionValue=_newsTodayWidgetClickBaselineImpressionValue - In the implementation block
@property (nonatomic,readonly) double newsTodayWidgetVideoPlaybackBaselineImpressionValue;                                      //@synthesize newsTodayWidgetVideoPlaybackBaselineImpressionValue=_newsTodayWidgetVideoPlaybackBaselineImpressionValue - In the implementation block
@property (nonatomic,readonly) double appInstallBaselineImpressionValue;                                                        //@synthesize appInstallBaselineImpressionValue=_appInstallBaselineImpressionValue - In the implementation block
@property (nonatomic,readonly) double appInFocusBaselineImpressionValue;                                                        //@synthesize appInFocusBaselineImpressionValue=_appInFocusBaselineImpressionValue - In the implementation block
@property (nonatomic,readonly) double safariHistoryBaselineImpressionValue;                                                     //@synthesize safariHistoryBaselineImpressionValue=_safariHistoryBaselineImpressionValue - In the implementation block
@property (nonatomic,readonly) double publisherBoostForSourceMoreFromFeedBaselineImpressionValue;                               //@synthesize publisherBoostForSourceMoreFromFeedBaselineImpressionValue=_publisherBoostForSourceMoreFromFeedBaselineImpressionValue - In the implementation block
@property (nonatomic,readonly) double topicBoostForSourceRelatedFeedBaselineImpressionValue;                                    //@synthesize topicBoostForSourceRelatedFeedBaselineImpressionValue=_topicBoostForSourceRelatedFeedBaselineImpressionValue - In the implementation block
@property (nonatomic,readonly) double publisherBoostForIssueOpenBaselineImpressionValue;                                        //@synthesize publisherBoostForIssueOpenBaselineImpressionValue=_publisherBoostForIssueOpenBaselineImpressionValue - In the implementation block
@property (nonatomic,readonly) double presentationBaselineClickValue;                                                           //@synthesize presentationBaselineClickValue=_presentationBaselineClickValue - In the implementation block
@property (nonatomic,readonly) double heavyClickBaselineClickValue;                                                             //@synthesize heavyClickBaselineClickValue=_heavyClickBaselineClickValue - In the implementation block
@property (nonatomic,readonly) double likeBaselineClickValue;                                                                   //@synthesize likeBaselineClickValue=_likeBaselineClickValue - In the implementation block
@property (nonatomic,readonly) double shareBaselineClickValue;                                                                  //@synthesize shareBaselineClickValue=_shareBaselineClickValue - In the implementation block
@property (nonatomic,readonly) double savedBaselineClickValue;                                                                  //@synthesize savedBaselineClickValue=_savedBaselineClickValue - In the implementation block
@property (nonatomic,readonly) double subscribeBaselineClickValue;                                                              //@synthesize subscribeBaselineClickValue=_subscribeBaselineClickValue - In the implementation block
@property (nonatomic,readonly) double subscribeRelatedBaselineClickValue;                                                       //@synthesize subscribeRelatedBaselineClickValue=_subscribeRelatedBaselineClickValue - In the implementation block
@property (nonatomic,readonly) double existingSubscriptionBaselineClickValue;                                                   //@synthesize existingSubscriptionBaselineClickValue=_existingSubscriptionBaselineClickValue - In the implementation block
@property (nonatomic,readonly) double existingSubscriptionRelatedBaselineClickValue;                                            //@synthesize existingSubscriptionRelatedBaselineClickValue=_existingSubscriptionRelatedBaselineClickValue - In the implementation block
@property (nonatomic,readonly) double unsubscribeBaselineClickValue;                                                            //@synthesize unsubscribeBaselineClickValue=_unsubscribeBaselineClickValue - In the implementation block
@property (nonatomic,readonly) double tappedBaselineClickValue;                                                                 //@synthesize tappedBaselineClickValue=_tappedBaselineClickValue - In the implementation block
@property (nonatomic,readonly) double weakClickBaselineClickValue;                                                              //@synthesize weakClickBaselineClickValue=_weakClickBaselineClickValue - In the implementation block
@property (nonatomic,readonly) double visitBaselineClickValue;                                                                  //@synthesize visitBaselineClickValue=_visitBaselineClickValue - In the implementation block
@property (nonatomic,readonly) double dislikeBaselineClickValue;                                                                //@synthesize dislikeBaselineClickValue=_dislikeBaselineClickValue - In the implementation block
@property (nonatomic,readonly) double recommendationPresentationFeedBaselineClickValue;                                         //@synthesize recommendationPresentationFeedBaselineClickValue=_recommendationPresentationFeedBaselineClickValue - In the implementation block
@property (nonatomic,readonly) double recommendationPresentationExploreBaselineClickValue;                                      //@synthesize recommendationPresentationExploreBaselineClickValue=_recommendationPresentationExploreBaselineClickValue - In the implementation block
@property (nonatomic,readonly) double premiumSubscriptionActivationBaselineClickValue;                                          //@synthesize premiumSubscriptionActivationBaselineClickValue=_premiumSubscriptionActivationBaselineClickValue - In the implementation block
@property (nonatomic,readonly) double muteBaselineClickValue;                                                                   //@synthesize muteBaselineClickValue=_muteBaselineClickValue - In the implementation block
@property (nonatomic,readonly) double unmuteBaselineClickValue;                                                                 //@synthesize unmuteBaselineClickValue=_unmuteBaselineClickValue - In the implementation block
@property (nonatomic,readonly) double videoInitiatePlaybackBaselineClickValue;                                                  //@synthesize videoInitiatePlaybackBaselineClickValue=_videoInitiatePlaybackBaselineClickValue - In the implementation block
@property (nonatomic,readonly) double videoCompletePlaybackBaselineClickValue;                                                  //@synthesize videoCompletePlaybackBaselineClickValue=_videoCompletePlaybackBaselineClickValue - In the implementation block
@property (nonatomic,readonly) double videoComplete25BaselineClickValue;                                                        //@synthesize videoComplete25BaselineClickValue=_videoComplete25BaselineClickValue - In the implementation block
@property (nonatomic,readonly) double videoComplete50BaselineClickValue;                                                        //@synthesize videoComplete50BaselineClickValue=_videoComplete50BaselineClickValue - In the implementation block
@property (nonatomic,readonly) double videoComplete75BaselineClickValue;                                                        //@synthesize videoComplete75BaselineClickValue=_videoComplete75BaselineClickValue - In the implementation block
@property (nonatomic,readonly) double newsTodayWidgetPresentationBaselineClickValue;                                            //@synthesize newsTodayWidgetPresentationBaselineClickValue=_newsTodayWidgetPresentationBaselineClickValue - In the implementation block
@property (nonatomic,readonly) double newsTodayWidgetClickBaselineClickValue;                                                   //@synthesize newsTodayWidgetClickBaselineClickValue=_newsTodayWidgetClickBaselineClickValue - In the implementation block
@property (nonatomic,readonly) double newsTodayWidgetVideoPlaybackBaselineClickValue;                                           //@synthesize newsTodayWidgetVideoPlaybackBaselineClickValue=_newsTodayWidgetVideoPlaybackBaselineClickValue - In the implementation block
@property (nonatomic,readonly) double appInstallBaselineClickValue;                                                             //@synthesize appInstallBaselineClickValue=_appInstallBaselineClickValue - In the implementation block
@property (nonatomic,readonly) double appInFocusBaselineClickValue;                                                             //@synthesize appInFocusBaselineClickValue=_appInFocusBaselineClickValue - In the implementation block
@property (nonatomic,readonly) double safariHistoryBaselineClickValue;                                                          //@synthesize safariHistoryBaselineClickValue=_safariHistoryBaselineClickValue - In the implementation block
@property (nonatomic,readonly) double publisherBoostForSourceMoreFromFeedBaselineClickValue;                                    //@synthesize publisherBoostForSourceMoreFromFeedBaselineClickValue=_publisherBoostForSourceMoreFromFeedBaselineClickValue - In the implementation block
@property (nonatomic,readonly) double topicBoostForSourceRelatedFeedBaselineClickValue;                                         //@synthesize topicBoostForSourceRelatedFeedBaselineClickValue=_topicBoostForSourceRelatedFeedBaselineClickValue - In the implementation block
@property (nonatomic,readonly) double publisherBoostForIssueOpenBaselineClickValue;                                             //@synthesize publisherBoostForIssueOpenBaselineClickValue=_publisherBoostForIssueOpenBaselineClickValue - In the implementation block
@property (nonatomic,readonly) double heavyClickMinimumDuration;                                                                //@synthesize heavyClickMinimumDuration=_heavyClickMinimumDuration - In the implementation block
@property (nonatomic,readonly) double swipeToArticleWeakClickMinimumDuration;                                                   //@synthesize swipeToArticleWeakClickMinimumDuration=_swipeToArticleWeakClickMinimumDuration - In the implementation block
@property (nonatomic,readonly) double swipeToArticleHeavyClickMinimumDuration;                                                  //@synthesize swipeToArticleHeavyClickMinimumDuration=_swipeToArticleHeavyClickMinimumDuration - In the implementation block
@property (nonatomic,readonly) double lowQualityContentThreshold;                                                               //@synthesize lowQualityContentThreshold=_lowQualityContentThreshold - In the implementation block
@property (nonatomic,readonly) long long minClusterSizeIPhone;                                                                  //@synthesize minClusterSizeIPhone=_minClusterSizeIPhone - In the implementation block
@property (nonatomic,readonly) long long maxClusterSizeIPhone;                                                                  //@synthesize maxClusterSizeIPhone=_maxClusterSizeIPhone - In the implementation block
@property (nonatomic,readonly) long long minIdealClusterSizeIPhone;                                                             //@synthesize minIdealClusterSizeIPhone=_minIdealClusterSizeIPhone - In the implementation block
@property (nonatomic,readonly) long long maxIdealClusterSizeIPhone;                                                             //@synthesize maxIdealClusterSizeIPhone=_maxIdealClusterSizeIPhone - In the implementation block
@property (nonatomic,readonly) long long minClusterSizeIPhoneAutoFavorite;                                                      //@synthesize minClusterSizeIPhoneAutoFavorite=_minClusterSizeIPhoneAutoFavorite - In the implementation block
@property (nonatomic,readonly) long long maxClusterSizeIPhoneAutoFavorite;                                                      //@synthesize maxClusterSizeIPhoneAutoFavorite=_maxClusterSizeIPhoneAutoFavorite - In the implementation block
@property (nonatomic,readonly) long long minIdealClusterSizeIPhoneAutoFavorite;                                                 //@synthesize minIdealClusterSizeIPhoneAutoFavorite=_minIdealClusterSizeIPhoneAutoFavorite - In the implementation block
@property (nonatomic,readonly) long long maxIdealClusterSizeIPhoneAutoFavorite;                                                 //@synthesize maxIdealClusterSizeIPhoneAutoFavorite=_maxIdealClusterSizeIPhoneAutoFavorite - In the implementation block
@property (nonatomic,readonly) long long maxPublisherOccurrencesIPhone;                                                         //@synthesize maxPublisherOccurrencesIPhone=_maxPublisherOccurrencesIPhone - In the implementation block
@property (nonatomic,readonly) long long maxPublisherOccurrencesIPhoneBestOfBundle;                                             //@synthesize maxPublisherOccurrencesIPhoneBestOfBundle=_maxPublisherOccurrencesIPhoneBestOfBundle - In the implementation block
@property (nonatomic,readonly) long long maxPublisherOccurrencesIPhoneForYouGroup;                                              //@synthesize maxPublisherOccurrencesIPhoneForYouGroup=_maxPublisherOccurrencesIPhoneForYouGroup - In the implementation block
@property (nonatomic,readonly) long long maxUnpaidArticlesIPhone;                                                               //@synthesize maxUnpaidArticlesIPhone=_maxUnpaidArticlesIPhone - In the implementation block
@property (nonatomic,readonly) BOOL enableOptimizedLayoutIPhone;                                                                //@synthesize enableOptimizedLayoutIPhone=_enableOptimizedLayoutIPhone - In the implementation block
@property (nonatomic,readonly) unsigned long long optimizedLayoutSizeThresholdIPhone;                                           //@synthesize optimizedLayoutSizeThresholdIPhone=_optimizedLayoutSizeThresholdIPhone - In the implementation block
@property (nonatomic,readonly) unsigned long long optimizedLayoutIncrementUnitIPhone;                                           //@synthesize optimizedLayoutIncrementUnitIPhone=_optimizedLayoutIncrementUnitIPhone - In the implementation block
@property (nonatomic,readonly) long long heuristicSampleSizeIPhone;                                                             //@synthesize heuristicSampleSizeIPhone=_heuristicSampleSizeIPhone - In the implementation block
@property (nonatomic,readonly) long long searchBranchMultiplierIPhone;                                                          //@synthesize searchBranchMultiplierIPhone=_searchBranchMultiplierIPhone - In the implementation block
@property (nonatomic,readonly) double searchBranchDecayIPhone;                                                                  //@synthesize searchBranchDecayIPhone=_searchBranchDecayIPhone - In the implementation block
@property (nonatomic,readonly) long long heuristicOptionIPhone;                                                                 //@synthesize heuristicOptionIPhone=_heuristicOptionIPhone - In the implementation block
@property (nonatomic,readonly) double tagSizeCoeffIPhone;                                                                       //@synthesize tagSizeCoeffIPhone=_tagSizeCoeffIPhone - In the implementation block
@property (nonatomic,readonly) double tagPersonalizationCoeffIPhone;                                                            //@synthesize tagPersonalizationCoeffIPhone=_tagPersonalizationCoeffIPhone - In the implementation block
@property (nonatomic,readonly) double tagArticleScoreCoeffIPhone;                                                               //@synthesize tagArticleScoreCoeffIPhone=_tagArticleScoreCoeffIPhone - In the implementation block
@property (nonatomic,readonly) double tagFavoritedCoeffIPhone;                                                                  //@synthesize tagFavoritedCoeffIPhone=_tagFavoritedCoeffIPhone - In the implementation block
@property (nonatomic,readonly) double tagAutoFavoritedCoeffIPhone;                                                              //@synthesize tagAutoFavoritedCoeffIPhone=_tagAutoFavoritedCoeffIPhone - In the implementation block
@property (nonatomic,readonly) double tagGroupableCoeffIPhone;                                                                  //@synthesize tagGroupableCoeffIPhone=_tagGroupableCoeffIPhone - In the implementation block
@property (nonatomic,readonly) double tagSpecificityCoeffIPhone;                                                                //@synthesize tagSpecificityCoeffIPhone=_tagSpecificityCoeffIPhone - In the implementation block
@property (nonatomic,readonly) long long minClusterSizeIPad;                                                                    //@synthesize minClusterSizeIPad=_minClusterSizeIPad - In the implementation block
@property (nonatomic,readonly) long long maxClusterSizeIPad;                                                                    //@synthesize maxClusterSizeIPad=_maxClusterSizeIPad - In the implementation block
@property (nonatomic,readonly) long long minIdealClusterSizeIPad;                                                               //@synthesize minIdealClusterSizeIPad=_minIdealClusterSizeIPad - In the implementation block
@property (nonatomic,readonly) long long maxIdealClusterSizeIPad;                                                               //@synthesize maxIdealClusterSizeIPad=_maxIdealClusterSizeIPad - In the implementation block
@property (nonatomic,readonly) long long minClusterSizeIPadAutoFavorite;                                                        //@synthesize minClusterSizeIPadAutoFavorite=_minClusterSizeIPadAutoFavorite - In the implementation block
@property (nonatomic,readonly) long long maxClusterSizeIPadAutoFavorite;                                                        //@synthesize maxClusterSizeIPadAutoFavorite=_maxClusterSizeIPadAutoFavorite - In the implementation block
@property (nonatomic,readonly) long long minIdealClusterSizeIPadAutoFavorite;                                                   //@synthesize minIdealClusterSizeIPadAutoFavorite=_minIdealClusterSizeIPadAutoFavorite - In the implementation block
@property (nonatomic,readonly) long long maxIdealClusterSizeIPadAutoFavorite;                                                   //@synthesize maxIdealClusterSizeIPadAutoFavorite=_maxIdealClusterSizeIPadAutoFavorite - In the implementation block
@property (nonatomic,readonly) long long maxPublisherOccurrencesIPad;                                                           //@synthesize maxPublisherOccurrencesIPad=_maxPublisherOccurrencesIPad - In the implementation block
@property (nonatomic,readonly) long long maxPublisherOccurrencesIPadBestOfBundle;                                               //@synthesize maxPublisherOccurrencesIPadBestOfBundle=_maxPublisherOccurrencesIPadBestOfBundle - In the implementation block
@property (nonatomic,readonly) long long maxPublisherOccurrencesIPadForYouGroup;                                                //@synthesize maxPublisherOccurrencesIPadForYouGroup=_maxPublisherOccurrencesIPadForYouGroup - In the implementation block
@property (nonatomic,readonly) long long maxUnpaidArticlesIPad;                                                                 //@synthesize maxUnpaidArticlesIPad=_maxUnpaidArticlesIPad - In the implementation block
@property (nonatomic,readonly) BOOL enableOptimizedLayoutIPad;                                                                  //@synthesize enableOptimizedLayoutIPad=_enableOptimizedLayoutIPad - In the implementation block
@property (nonatomic,readonly) unsigned long long optimizedLayoutSizeThresholdIPad;                                             //@synthesize optimizedLayoutSizeThresholdIPad=_optimizedLayoutSizeThresholdIPad - In the implementation block
@property (nonatomic,readonly) unsigned long long optimizedLayoutIncrementUnitIPad;                                             //@synthesize optimizedLayoutIncrementUnitIPad=_optimizedLayoutIncrementUnitIPad - In the implementation block
@property (nonatomic,readonly) long long heuristicSampleSizeIPad;                                                               //@synthesize heuristicSampleSizeIPad=_heuristicSampleSizeIPad - In the implementation block
@property (nonatomic,readonly) long long searchBranchMultiplierIPad;                                                            //@synthesize searchBranchMultiplierIPad=_searchBranchMultiplierIPad - In the implementation block
@property (nonatomic,readonly) double searchBranchDecayIPad;                                                                    //@synthesize searchBranchDecayIPad=_searchBranchDecayIPad - In the implementation block
@property (nonatomic,readonly) long long heuristicOptionIPad;                                                                   //@synthesize heuristicOptionIPad=_heuristicOptionIPad - In the implementation block
@property (nonatomic,readonly) double tagSizeCoeffIPad;                                                                         //@synthesize tagSizeCoeffIPad=_tagSizeCoeffIPad - In the implementation block
@property (nonatomic,readonly) double tagPersonalizationCoeffIPad;                                                              //@synthesize tagPersonalizationCoeffIPad=_tagPersonalizationCoeffIPad - In the implementation block
@property (nonatomic,readonly) double tagArticleScoreCoeffIPad;                                                                 //@synthesize tagArticleScoreCoeffIPad=_tagArticleScoreCoeffIPad - In the implementation block
@property (nonatomic,readonly) double tagFavoritedCoeffIPad;                                                                    //@synthesize tagFavoritedCoeffIPad=_tagFavoritedCoeffIPad - In the implementation block
@property (nonatomic,readonly) double tagAutoFavoritedCoeffIPad;                                                                //@synthesize tagAutoFavoritedCoeffIPad=_tagAutoFavoritedCoeffIPad - In the implementation block
@property (nonatomic,readonly) double tagGroupableCoeffIPad;                                                                    //@synthesize tagGroupableCoeffIPad=_tagGroupableCoeffIPad - In the implementation block
@property (nonatomic,readonly) double tagSpecificityCoeffIPad;                                                                  //@synthesize tagSpecificityCoeffIPad=_tagSpecificityCoeffIPad - In the implementation block
@property (nonatomic,readonly) double maxExpandedAutofavoriteGroupCandidateRatio;                                               //@synthesize maxExpandedAutofavoriteGroupCandidateRatio=_maxExpandedAutofavoriteGroupCandidateRatio - In the implementation block
@property (nonatomic,readonly) double expandedAutofavoriteClusterMinSizeMultiplier;                                             //@synthesize expandedAutofavoriteClusterMinSizeMultiplier=_expandedAutofavoriteClusterMinSizeMultiplier - In the implementation block
@property (nonatomic,readonly) double expandedAutofavoriteClusterMaxSizeMultiplier;                                             //@synthesize expandedAutofavoriteClusterMaxSizeMultiplier=_expandedAutofavoriteClusterMaxSizeMultiplier - In the implementation block
@property (nonatomic,readonly) double optionalTagSpecificityScore;                                                              //@synthesize optionalTagSpecificityScore=_optionalTagSpecificityScore - In the implementation block
@property (nonatomic,readonly) double searchTimeLimit;                                                                          //@synthesize searchTimeLimit=_searchTimeLimit - In the implementation block
@property (nonatomic,readonly) unsigned long long publisherDiversityMinPublisherCount;                                          //@synthesize publisherDiversityMinPublisherCount=_publisherDiversityMinPublisherCount - In the implementation block
@property (nonatomic,readonly) unsigned long long publisherDiversityMaxPublisherCount;                                          //@synthesize publisherDiversityMaxPublisherCount=_publisherDiversityMaxPublisherCount - In the implementation block
@property (nonatomic,readonly) double publisherDiversityMaxArticleFilter;                                                       //@synthesize publisherDiversityMaxArticleFilter=_publisherDiversityMaxArticleFilter - In the implementation block
@property (nonatomic,readonly) double internalUsageSignalWeight;                                                                //@synthesize internalUsageSignalWeight=_internalUsageSignalWeight - In the implementation block
@property (nonatomic,readonly) double autoFavoriteMinClicks;                                                                    //@synthesize autoFavoriteMinClicks=_autoFavoriteMinClicks - In the implementation block
@property (nonatomic,readonly) double autoFavoriteMinEvents;                                                                    //@synthesize autoFavoriteMinEvents=_autoFavoriteMinEvents - In the implementation block
@property (nonatomic,readonly) double autoFavoriteMinRate;                                                                      //@synthesize autoFavoriteMinRate=_autoFavoriteMinRate - In the implementation block
@property (nonatomic,readonly) double autoFavoriteMinRelativeRate;                                                              //@synthesize autoFavoriteMinRelativeRate=_autoFavoriteMinRelativeRate - In the implementation block
@property (nonatomic,readonly) double autoUnfavoriteFactor;                                                                     //@synthesize autoUnfavoriteFactor=_autoUnfavoriteFactor - In the implementation block
@property (nonatomic,readonly) double autoGroupableFactor;                                                                      //@synthesize autoGroupableFactor=_autoGroupableFactor - In the implementation block
@property (nonatomic,readonly) double autoFavoriteTagFavorabilityExponent;                                                      //@synthesize autoFavoriteTagFavorabilityExponent=_autoFavoriteTagFavorabilityExponent - In the implementation block
@property (nonatomic,readonly) double autoFavoritePriorFactorExponent;                                                          //@synthesize autoFavoritePriorFactorExponent=_autoFavoritePriorFactorExponent - In the implementation block
@property (nonatomic,readonly) double autoFavoriteMaxIdleTime;                                                                  //@synthesize autoFavoriteMaxIdleTime=_autoFavoriteMaxIdleTime - In the implementation block
@property (nonatomic,readonly) double safariSignalWeight;                                                                       //@synthesize safariSignalWeight=_safariSignalWeight - In the implementation block
@property (nonatomic,readonly) double safariTimeDecayMultiplier;                                                                //@synthesize safariTimeDecayMultiplier=_safariTimeDecayMultiplier - In the implementation block
@property (nonatomic,readonly) double safariOccurrenceDecayMultiplier;                                                          //@synthesize safariOccurrenceDecayMultiplier=_safariOccurrenceDecayMultiplier - In the implementation block
@property (nonatomic,readonly) double autoFavoriteMinObservationsSafari;                                                        //@synthesize autoFavoriteMinObservationsSafari=_autoFavoriteMinObservationsSafari - In the implementation block
@property (nonatomic,readonly) double autoFavoriteMinScoreSafari;                                                               //@synthesize autoFavoriteMinScoreSafari=_autoFavoriteMinScoreSafari - In the implementation block
@property (nonatomic,readonly) double safariTagFavorabilityExponent;                                                            //@synthesize safariTagFavorabilityExponent=_safariTagFavorabilityExponent - In the implementation block
@property (nonatomic,readonly) double safariPriorFactorExponent;                                                                //@synthesize safariPriorFactorExponent=_safariPriorFactorExponent - In the implementation block
@property (nonatomic,readonly) double safariEventBlackoutSeconds;                                                               //@synthesize safariEventBlackoutSeconds=_safariEventBlackoutSeconds - In the implementation block
@property (nonatomic,readonly) double appUsageSignalWeight;                                                                     //@synthesize appUsageSignalWeight=_appUsageSignalWeight - In the implementation block
@property (nonatomic,readonly) double appUsageTimeDecayMultiplier;                                                              //@synthesize appUsageTimeDecayMultiplier=_appUsageTimeDecayMultiplier - In the implementation block
@property (nonatomic,readonly) double appUsageOccurrenceDecayMultiplier;                                                        //@synthesize appUsageOccurrenceDecayMultiplier=_appUsageOccurrenceDecayMultiplier - In the implementation block
@property (nonatomic,readonly) double autoFavoriteMinObservationsExtAppUsage;                                                   //@synthesize autoFavoriteMinObservationsExtAppUsage=_autoFavoriteMinObservationsExtAppUsage - In the implementation block
@property (nonatomic,readonly) double autoFavoriteMinScoreExtAppUsage;                                                          //@synthesize autoFavoriteMinScoreExtAppUsage=_autoFavoriteMinScoreExtAppUsage - In the implementation block
@property (nonatomic,readonly) double appUsageTagFavorabilityExponent;                                                          //@synthesize appUsageTagFavorabilityExponent=_appUsageTagFavorabilityExponent - In the implementation block
@property (nonatomic,readonly) double appUsagePriorFactorExponent;                                                              //@synthesize appUsagePriorFactorExponent=_appUsagePriorFactorExponent - In the implementation block
@property (nonatomic,readonly) double portraitSignalWeight;                                                                     //@synthesize portraitSignalWeight=_portraitSignalWeight - In the implementation block
@property (nonatomic,readonly) double portraitDecayRate;                                                                        //@synthesize portraitDecayRate=_portraitDecayRate - In the implementation block
@property (nonatomic,readonly) double portraitGlobalThreshold;                                                                  //@synthesize portraitGlobalThreshold=_portraitGlobalThreshold - In the implementation block
@property (nonatomic,readonly) double portraitTagFavorabilityExponent;                                                          //@synthesize portraitTagFavorabilityExponent=_portraitTagFavorabilityExponent - In the implementation block
@property (nonatomic,readonly) double portraitPriorFactorExponent;                                                              //@synthesize portraitPriorFactorExponent=_portraitPriorFactorExponent - In the implementation block
@property (nonatomic,readonly) double groupImpressionBiasCorrectionFactor;                                                      //@synthesize groupImpressionBiasCorrectionFactor=_groupImpressionBiasCorrectionFactor - In the implementation block
@property (nonatomic,readonly) double indexImpressionBiasCorrectionFactor;                                                      //@synthesize indexImpressionBiasCorrectionFactor=_indexImpressionBiasCorrectionFactor - In the implementation block
@property (nonatomic,readonly) long long maxNumberOfSuggestions;                                                                //@synthesize maxNumberOfSuggestions=_maxNumberOfSuggestions - In the implementation block
@property (nonatomic,readonly) double uGroupMinimumSubscribedChannelSourceFeedArticleRatio;                                     //@synthesize uGroupMinimumSubscribedChannelSourceFeedArticleRatio=_uGroupMinimumSubscribedChannelSourceFeedArticleRatio - In the implementation block
@property (nonatomic,readonly) BOOL onlyConsiderBestSourceFeedsInForYouGroup;                                                   //@synthesize onlyConsiderBestSourceFeedsInForYouGroup=_onlyConsiderBestSourceFeedsInForYouGroup - In the implementation block
@property (nonatomic,readonly) long long numEventsToDisableDefaultTopics;                                                       //@synthesize numEventsToDisableDefaultTopics=_numEventsToDisableDefaultTopics - In the implementation block
@property (nonatomic,readonly) long long numSubscriptionsToDisableDefaultTopics;                                                //@synthesize numSubscriptionsToDisableDefaultTopics=_numSubscriptionsToDisableDefaultTopics - In the implementation block
@property (nonatomic,readonly) double metaGroupingRelatednessThreshold;                                                         //@synthesize metaGroupingRelatednessThreshold=_metaGroupingRelatednessThreshold - In the implementation block
@property (nonatomic,readonly) double metaGroupingRelatednessKWeight;                                                           //@synthesize metaGroupingRelatednessKWeight=_metaGroupingRelatednessKWeight - In the implementation block
@property (nonatomic,readonly) double metaGroupingTopicScoreWeight;                                                             //@synthesize metaGroupingTopicScoreWeight=_metaGroupingTopicScoreWeight - In the implementation block
@property (nonatomic,readonly) double metaGroupingHighestScoringRelativeScoreMultiplier;                                        //@synthesize metaGroupingHighestScoringRelativeScoreMultiplier=_metaGroupingHighestScoringRelativeScoreMultiplier - In the implementation block
@property (nonatomic,readonly) double metaGroupingSubscribedTopicMultiplier;                                                    //@synthesize metaGroupingSubscribedTopicMultiplier=_metaGroupingSubscribedTopicMultiplier - In the implementation block
@property (nonatomic,readonly) double firstPassHalfLifeCoefficient;                                                             //@synthesize firstPassHalfLifeCoefficient=_firstPassHalfLifeCoefficient - In the implementation block
@property (nonatomic,readonly) double firstPassDiversificationPenalty;                                                          //@synthesize firstPassDiversificationPenalty=_firstPassDiversificationPenalty - In the implementation block
@property (nonatomic,readonly) double firstPassArticleFilter;                                                                   //@synthesize firstPassArticleFilter=_firstPassArticleFilter - In the implementation block
@property (nonatomic,readonly) double bundlePaidMultiplierForFreeUsers;                                                         //@synthesize bundlePaidMultiplierForFreeUsers=_bundlePaidMultiplierForFreeUsers - In the implementation block
@property (nonatomic,readonly) double bundlePaidMultiplierForTrialUsers;                                                        //@synthesize bundlePaidMultiplierForTrialUsers=_bundlePaidMultiplierForTrialUsers - In the implementation block
@property (nonatomic,readonly) double bundlePaidMultiplierForPaidUsers;                                                         //@synthesize bundlePaidMultiplierForPaidUsers=_bundlePaidMultiplierForPaidUsers - In the implementation block
@property (nonatomic,readonly) double bundleFreeMultiplierForFreeUsers;                                                         //@synthesize bundleFreeMultiplierForFreeUsers=_bundleFreeMultiplierForFreeUsers - In the implementation block
@property (nonatomic,readonly) double bundleFreeMultiplierForTrialUsers;                                                        //@synthesize bundleFreeMultiplierForTrialUsers=_bundleFreeMultiplierForTrialUsers - In the implementation block
@property (nonatomic,readonly) double bundleFreeMultiplierForPaidUsers;                                                         //@synthesize bundleFreeMultiplierForPaidUsers=_bundleFreeMultiplierForPaidUsers - In the implementation block
@property (nonatomic,readonly) double featuredMultiplierForFreeUsers;                                                           //@synthesize featuredMultiplierForFreeUsers=_featuredMultiplierForFreeUsers - In the implementation block
@property (nonatomic,readonly) double featuredMultiplierForTrialUsers;                                                          //@synthesize featuredMultiplierForTrialUsers=_featuredMultiplierForTrialUsers - In the implementation block
@property (nonatomic,readonly) double featuredMultiplierForPaidUsers;                                                           //@synthesize featuredMultiplierForPaidUsers=_featuredMultiplierForPaidUsers - In the implementation block
@property (nonatomic,readonly) long long auditionedAutoFavoritesEmitterLimit;                                                   //@synthesize auditionedAutoFavoritesEmitterLimit=_auditionedAutoFavoritesEmitterLimit - In the implementation block
@property (nonatomic,readonly) double topicDiversityThreshold;                                                                  //@synthesize topicDiversityThreshold=_topicDiversityThreshold - In the implementation block
@property (nonatomic,readonly) long long topicDiversityWindowSize;                                                              //@synthesize topicDiversityWindowSize=_topicDiversityWindowSize - In the implementation block
@property (nonatomic,readonly) double topicFeedBaselineRatePrior;                                                               //@synthesize topicFeedBaselineRatePrior=_topicFeedBaselineRatePrior - In the implementation block
@property (nonatomic,readonly) double topicFeedDecayFactor;                                                                     //@synthesize topicFeedDecayFactor=_topicFeedDecayFactor - In the implementation block
@property (nonatomic,readonly) double topicFeedDemocratizationFactor;                                                           //@synthesize topicFeedDemocratizationFactor=_topicFeedDemocratizationFactor - In the implementation block
@property (nonatomic,readonly) double topicFeedHalfLifeCoefficient;                                                             //@synthesize topicFeedHalfLifeCoefficient=_topicFeedHalfLifeCoefficient - In the implementation block
@property (nonatomic,readonly) double topicFeedSubscribedChannelScoreCoefficient;                                               //@synthesize topicFeedSubscribedChannelScoreCoefficient=_topicFeedSubscribedChannelScoreCoefficient - In the implementation block
@property (nonatomic,readonly) double topicFeedMutedVoteCoefficient;                                                            //@synthesize topicFeedMutedVoteCoefficient=_topicFeedMutedVoteCoefficient - In the implementation block
@property (nonatomic,readonly) double topicFeedPersonalizationCoefficient;                                                      //@synthesize topicFeedPersonalizationCoefficient=_topicFeedPersonalizationCoefficient - In the implementation block
@property (nonatomic,readonly) double topicFeedPublisherAggregateWeight;                                                        //@synthesize topicFeedPublisherAggregateWeight=_topicFeedPublisherAggregateWeight - In the implementation block
@property (nonatomic,readonly) double topicFeedArticleLengthAggregateWeight;                                                    //@synthesize topicFeedArticleLengthAggregateWeight=_topicFeedArticleLengthAggregateWeight - In the implementation block
@property (nonatomic,readonly) double topicFeedGlobalScoreCoefficient;                                                          //@synthesize topicFeedGlobalScoreCoefficient=_topicFeedGlobalScoreCoefficient - In the implementation block
@property (nonatomic,readonly) double topicFeedGlobalScoreCoefficientHalfLife;                                                  //@synthesize topicFeedGlobalScoreCoefficientHalfLife=_topicFeedGlobalScoreCoefficientHalfLife - In the implementation block
@property (nonatomic,readonly) double topicFeedGlobalScoreCoefficientInitialMultiplier;                                         //@synthesize topicFeedGlobalScoreCoefficientInitialMultiplier=_topicFeedGlobalScoreCoefficientInitialMultiplier - In the implementation block
@property (nonatomic,readonly) double topicFeedCohortMembershipFavoritedBoost;                                                  //@synthesize topicFeedCohortMembershipFavoritedBoost=_topicFeedCohortMembershipFavoritedBoost - In the implementation block
@property (nonatomic,readonly) double topicFeedCohortMembershipGlobalWeight;                                                    //@synthesize topicFeedCohortMembershipGlobalWeight=_topicFeedCohortMembershipGlobalWeight - In the implementation block
@property (nonatomic,readonly) double topicFeedCohortMembershipUserBaseline;                                                    //@synthesize topicFeedCohortMembershipUserBaseline=_topicFeedCohortMembershipUserBaseline - In the implementation block
@property (nonatomic,readonly) double topicFeedCohortMembershipPreBaselineCurvature;                                            //@synthesize topicFeedCohortMembershipPreBaselineCurvature=_topicFeedCohortMembershipPreBaselineCurvature - In the implementation block
@property (nonatomic,readonly) double topicFeedCohortMembershipPostBaselineCurvature;                                           //@synthesize topicFeedCohortMembershipPostBaselineCurvature=_topicFeedCohortMembershipPostBaselineCurvature - In the implementation block
@property (nonatomic,readonly) double topicFeedCohortMembershipDilutionFactor;                                                  //@synthesize topicFeedCohortMembershipDilutionFactor=_topicFeedCohortMembershipDilutionFactor - In the implementation block
@property (nonatomic,readonly) double topicFeedCohortMembershipPaddingFactor;                                                   //@synthesize topicFeedCohortMembershipPaddingFactor=_topicFeedCohortMembershipPaddingFactor - In the implementation block
@property (nonatomic,readonly) double topicFeedSubscribedTopicsScoreCoefficient;                                                //@synthesize topicFeedSubscribedTopicsScoreCoefficient=_topicFeedSubscribedTopicsScoreCoefficient - In the implementation block
@property (nonatomic,readonly) double topicFeedCtrWithSubscribedChannel;                                                        //@synthesize topicFeedCtrWithSubscribedChannel=_topicFeedCtrWithSubscribedChannel - In the implementation block
@property (nonatomic,readonly) double topicFeedCtrWithZeroSubscribed;                                                           //@synthesize topicFeedCtrWithZeroSubscribed=_topicFeedCtrWithZeroSubscribed - In the implementation block
@property (nonatomic,readonly) double topicFeedCtrWithOneSubscribed;                                                            //@synthesize topicFeedCtrWithOneSubscribed=_topicFeedCtrWithOneSubscribed - In the implementation block
@property (nonatomic,readonly) double topicFeedCtrWithTwoSubscribed;                                                            //@synthesize topicFeedCtrWithTwoSubscribed=_topicFeedCtrWithTwoSubscribed - In the implementation block
@property (nonatomic,readonly) double topicFeedCtrWithThreeSubscribed;                                                          //@synthesize topicFeedCtrWithThreeSubscribed=_topicFeedCtrWithThreeSubscribed - In the implementation block
@property (nonatomic,readonly) double topicFeedAutofavoritedVoteCoefficient;                                                    //@synthesize topicFeedAutofavoritedVoteCoefficient=_topicFeedAutofavoritedVoteCoefficient - In the implementation block
@property (nonatomic,readonly) double topicFeedCtrWithZeroAutofavorited;                                                        //@synthesize topicFeedCtrWithZeroAutofavorited=_topicFeedCtrWithZeroAutofavorited - In the implementation block
@property (nonatomic,readonly) double topicFeedCtrWithOneAutofavorited;                                                         //@synthesize topicFeedCtrWithOneAutofavorited=_topicFeedCtrWithOneAutofavorited - In the implementation block
@property (nonatomic,readonly) double topicFeedCtrWithTwoAutofavorited;                                                         //@synthesize topicFeedCtrWithTwoAutofavorited=_topicFeedCtrWithTwoAutofavorited - In the implementation block
@property (nonatomic,readonly) double topicFeedCtrWithThreeAutofavorited;                                                       //@synthesize topicFeedCtrWithThreeAutofavorited=_topicFeedCtrWithThreeAutofavorited - In the implementation block
@property (nonatomic,readonly) double topicFeedDiversificationInitialPenalty;                                                   //@synthesize topicFeedDiversificationInitialPenalty=_topicFeedDiversificationInitialPenalty - In the implementation block
@property (nonatomic,readonly) double topicFeedDiversificationPenalty;                                                          //@synthesize topicFeedDiversificationPenalty=_topicFeedDiversificationPenalty - In the implementation block
@property (nonatomic,readonly) double topicFeedDiversificationPenaltyHalfLife;                                                  //@synthesize topicFeedDiversificationPenaltyHalfLife=_topicFeedDiversificationPenaltyHalfLife - In the implementation block
@property (nonatomic,readonly) double topicFeedChannelTopicDiversificationInitialPenalty;                                       //@synthesize topicFeedChannelTopicDiversificationInitialPenalty=_topicFeedChannelTopicDiversificationInitialPenalty - In the implementation block
@property (nonatomic,readonly) double topicFeedChannelTopicDiversificationPenalty;                                              //@synthesize topicFeedChannelTopicDiversificationPenalty=_topicFeedChannelTopicDiversificationPenalty - In the implementation block
@property (nonatomic,readonly) double topicFeedChannelTopicDiversificationPenaltyHalfLife;                                      //@synthesize topicFeedChannelTopicDiversificationPenaltyHalfLife=_topicFeedChannelTopicDiversificationPenaltyHalfLife - In the implementation block
@property (nonatomic,readonly) double topicFeedFirstPassHalfLifeCoefficient;                                                    //@synthesize topicFeedFirstPassHalfLifeCoefficient=_topicFeedFirstPassHalfLifeCoefficient - In the implementation block
@property (nonatomic,readonly) double topicFeedFirstPassDiversificationPenalty;                                                 //@synthesize topicFeedFirstPassDiversificationPenalty=_topicFeedFirstPassDiversificationPenalty - In the implementation block
@property (nonatomic,readonly) double topicFeedFirstPassArticleFilter;                                                          //@synthesize topicFeedFirstPassArticleFilter=_topicFeedFirstPassArticleFilter - In the implementation block
@property (nonatomic,readonly) double topicFeedBundlePaidMultiplierForFreeUsers;                                                //@synthesize topicFeedBundlePaidMultiplierForFreeUsers=_topicFeedBundlePaidMultiplierForFreeUsers - In the implementation block
@property (nonatomic,readonly) double topicFeedBundlePaidMultiplierForTrialUsers;                                               //@synthesize topicFeedBundlePaidMultiplierForTrialUsers=_topicFeedBundlePaidMultiplierForTrialUsers - In the implementation block
@property (nonatomic,readonly) double topicFeedBundlePaidMultiplierForPaidUsers;                                                //@synthesize topicFeedBundlePaidMultiplierForPaidUsers=_topicFeedBundlePaidMultiplierForPaidUsers - In the implementation block
@property (nonatomic,readonly) double topicFeedBundleFreeMultiplierForFreeUsers;                                                //@synthesize topicFeedBundleFreeMultiplierForFreeUsers=_topicFeedBundleFreeMultiplierForFreeUsers - In the implementation block
@property (nonatomic,readonly) double topicFeedBundleFreeMultiplierForTrialUsers;                                               //@synthesize topicFeedBundleFreeMultiplierForTrialUsers=_topicFeedBundleFreeMultiplierForTrialUsers - In the implementation block
@property (nonatomic,readonly) double topicFeedBundleFreeMultiplierForPaidUsers;                                                //@synthesize topicFeedBundleFreeMultiplierForPaidUsers=_topicFeedBundleFreeMultiplierForPaidUsers - In the implementation block
@property (nonatomic,readonly) double topicFeedFeaturedMultiplierForFreeUsers;                                                  //@synthesize topicFeedFeaturedMultiplierForFreeUsers=_topicFeedFeaturedMultiplierForFreeUsers - In the implementation block
@property (nonatomic,readonly) double topicFeedFeaturedMultiplierForTrialUsers;                                                 //@synthesize topicFeedFeaturedMultiplierForTrialUsers=_topicFeedFeaturedMultiplierForTrialUsers - In the implementation block
@property (nonatomic,readonly) double topicFeedFeaturedMultiplierForPaidUsers;                                                  //@synthesize topicFeedFeaturedMultiplierForPaidUsers=_topicFeedFeaturedMultiplierForPaidUsers - In the implementation block
@property (nonatomic,readonly) double topicFeedHeadlineSeenPenalty;                                                             //@synthesize topicFeedHeadlineSeenPenalty=_topicFeedHeadlineSeenPenalty - In the implementation block
@property (nonatomic,readonly) double topicFeedArticleReadPenalty;                                                              //@synthesize topicFeedArticleReadPenalty=_topicFeedArticleReadPenalty - In the implementation block
@property (nonatomic,readonly) double magazineFeedBaselineRatePrior;                                                            //@synthesize magazineFeedBaselineRatePrior=_magazineFeedBaselineRatePrior - In the implementation block
@property (nonatomic,readonly) double magazineFeedDecayFactor;                                                                  //@synthesize magazineFeedDecayFactor=_magazineFeedDecayFactor - In the implementation block
@property (nonatomic,readonly) double magazineFeedDemocratizationFactor;                                                        //@synthesize magazineFeedDemocratizationFactor=_magazineFeedDemocratizationFactor - In the implementation block
@property (nonatomic,readonly) double magazineFeedHalfLifeCoefficient;                                                          //@synthesize magazineFeedHalfLifeCoefficient=_magazineFeedHalfLifeCoefficient - In the implementation block
@property (nonatomic,readonly) double magazineFeedSubscribedChannelScoreCoefficient;                                            //@synthesize magazineFeedSubscribedChannelScoreCoefficient=_magazineFeedSubscribedChannelScoreCoefficient - In the implementation block
@property (nonatomic,readonly) double magazineFeedMutedVoteCoefficient;                                                         //@synthesize magazineFeedMutedVoteCoefficient=_magazineFeedMutedVoteCoefficient - In the implementation block
@property (nonatomic,readonly) double magazineFeedPersonalizationCoefficient;                                                   //@synthesize magazineFeedPersonalizationCoefficient=_magazineFeedPersonalizationCoefficient - In the implementation block
@property (nonatomic,readonly) double magazineFeedPublisherAggregateWeight;                                                     //@synthesize magazineFeedPublisherAggregateWeight=_magazineFeedPublisherAggregateWeight - In the implementation block
@property (nonatomic,readonly) double magazineFeedArticleLengthAggregateWeight;                                                 //@synthesize magazineFeedArticleLengthAggregateWeight=_magazineFeedArticleLengthAggregateWeight - In the implementation block
@property (nonatomic,readonly) double magazineFeedGlobalScoreCoefficient;                                                       //@synthesize magazineFeedGlobalScoreCoefficient=_magazineFeedGlobalScoreCoefficient - In the implementation block
@property (nonatomic,readonly) double magazineFeedGlobalScoreCoefficientHalfLife;                                               //@synthesize magazineFeedGlobalScoreCoefficientHalfLife=_magazineFeedGlobalScoreCoefficientHalfLife - In the implementation block
@property (nonatomic,readonly) double magazineFeedGlobalScoreCoefficientInitialMultiplier;                                      //@synthesize magazineFeedGlobalScoreCoefficientInitialMultiplier=_magazineFeedGlobalScoreCoefficientInitialMultiplier - In the implementation block
@property (nonatomic,readonly) double magazineFeedCohortMembershipFavoritedBoost;                                               //@synthesize magazineFeedCohortMembershipFavoritedBoost=_magazineFeedCohortMembershipFavoritedBoost - In the implementation block
@property (nonatomic,readonly) double magazineFeedCohortMembershipGlobalWeight;                                                 //@synthesize magazineFeedCohortMembershipGlobalWeight=_magazineFeedCohortMembershipGlobalWeight - In the implementation block
@property (nonatomic,readonly) double magazineFeedCohortMembershipUserBaseline;                                                 //@synthesize magazineFeedCohortMembershipUserBaseline=_magazineFeedCohortMembershipUserBaseline - In the implementation block
@property (nonatomic,readonly) double magazineFeedCohortMembershipPreBaselineCurvature;                                         //@synthesize magazineFeedCohortMembershipPreBaselineCurvature=_magazineFeedCohortMembershipPreBaselineCurvature - In the implementation block
@property (nonatomic,readonly) double magazineFeedCohortMembershipPostBaselineCurvature;                                        //@synthesize magazineFeedCohortMembershipPostBaselineCurvature=_magazineFeedCohortMembershipPostBaselineCurvature - In the implementation block
@property (nonatomic,readonly) double magazineFeedCohortMembershipDilutionFactor;                                               //@synthesize magazineFeedCohortMembershipDilutionFactor=_magazineFeedCohortMembershipDilutionFactor - In the implementation block
@property (nonatomic,readonly) double magazineFeedCohortMembershipPaddingFactor;                                                //@synthesize magazineFeedCohortMembershipPaddingFactor=_magazineFeedCohortMembershipPaddingFactor - In the implementation block
@property (nonatomic,readonly) double magazineFeedSubscribedTopicsScoreCoefficient;                                             //@synthesize magazineFeedSubscribedTopicsScoreCoefficient=_magazineFeedSubscribedTopicsScoreCoefficient - In the implementation block
@property (nonatomic,readonly) double magazineFeedCtrWithSubscribedChannel;                                                     //@synthesize magazineFeedCtrWithSubscribedChannel=_magazineFeedCtrWithSubscribedChannel - In the implementation block
@property (nonatomic,readonly) double magazineFeedCtrWithZeroSubscribed;                                                        //@synthesize magazineFeedCtrWithZeroSubscribed=_magazineFeedCtrWithZeroSubscribed - In the implementation block
@property (nonatomic,readonly) double magazineFeedCtrWithOneSubscribed;                                                         //@synthesize magazineFeedCtrWithOneSubscribed=_magazineFeedCtrWithOneSubscribed - In the implementation block
@property (nonatomic,readonly) double magazineFeedCtrWithTwoSubscribed;                                                         //@synthesize magazineFeedCtrWithTwoSubscribed=_magazineFeedCtrWithTwoSubscribed - In the implementation block
@property (nonatomic,readonly) double magazineFeedCtrWithThreeSubscribed;                                                       //@synthesize magazineFeedCtrWithThreeSubscribed=_magazineFeedCtrWithThreeSubscribed - In the implementation block
@property (nonatomic,readonly) double magazineFeedAutofavoritedVoteCoefficient;                                                 //@synthesize magazineFeedAutofavoritedVoteCoefficient=_magazineFeedAutofavoritedVoteCoefficient - In the implementation block
@property (nonatomic,readonly) double magazineFeedCtrWithZeroAutofavorited;                                                     //@synthesize magazineFeedCtrWithZeroAutofavorited=_magazineFeedCtrWithZeroAutofavorited - In the implementation block
@property (nonatomic,readonly) double magazineFeedCtrWithOneAutofavorited;                                                      //@synthesize magazineFeedCtrWithOneAutofavorited=_magazineFeedCtrWithOneAutofavorited - In the implementation block
@property (nonatomic,readonly) double magazineFeedCtrWithTwoAutofavorited;                                                      //@synthesize magazineFeedCtrWithTwoAutofavorited=_magazineFeedCtrWithTwoAutofavorited - In the implementation block
@property (nonatomic,readonly) double magazineFeedCtrWithThreeAutofavorited;                                                    //@synthesize magazineFeedCtrWithThreeAutofavorited=_magazineFeedCtrWithThreeAutofavorited - In the implementation block
@property (nonatomic,readonly) double magazineFeedDiversificationInitialPenalty;                                                //@synthesize magazineFeedDiversificationInitialPenalty=_magazineFeedDiversificationInitialPenalty - In the implementation block
@property (nonatomic,readonly) double magazineFeedDiversificationPenalty;                                                       //@synthesize magazineFeedDiversificationPenalty=_magazineFeedDiversificationPenalty - In the implementation block
@property (nonatomic,readonly) double magazineFeedDiversificationPenaltyHalfLife;                                               //@synthesize magazineFeedDiversificationPenaltyHalfLife=_magazineFeedDiversificationPenaltyHalfLife - In the implementation block
@property (nonatomic,readonly) double magazineFeedChannelTopicDiversificationInitialPenalty;                                    //@synthesize magazineFeedChannelTopicDiversificationInitialPenalty=_magazineFeedChannelTopicDiversificationInitialPenalty - In the implementation block
@property (nonatomic,readonly) double magazineFeedChannelTopicDiversificationPenalty;                                           //@synthesize magazineFeedChannelTopicDiversificationPenalty=_magazineFeedChannelTopicDiversificationPenalty - In the implementation block
@property (nonatomic,readonly) double magazineFeedChannelTopicDiversificationPenaltyHalfLife;                                   //@synthesize magazineFeedChannelTopicDiversificationPenaltyHalfLife=_magazineFeedChannelTopicDiversificationPenaltyHalfLife - In the implementation block
@property (nonatomic,readonly) double magazineFeedFirstPassHalfLifeCoefficient;                                                 //@synthesize magazineFeedFirstPassHalfLifeCoefficient=_magazineFeedFirstPassHalfLifeCoefficient - In the implementation block
@property (nonatomic,readonly) double magazineFeedFirstPassDiversificationPenalty;                                              //@synthesize magazineFeedFirstPassDiversificationPenalty=_magazineFeedFirstPassDiversificationPenalty - In the implementation block
@property (nonatomic,readonly) double magazineFeedFirstPassArticleFilter;                                                       //@synthesize magazineFeedFirstPassArticleFilter=_magazineFeedFirstPassArticleFilter - In the implementation block
@property (nonatomic,readonly) double magazineFeedBundlePaidMultiplierForFreeUsers;                                             //@synthesize magazineFeedBundlePaidMultiplierForFreeUsers=_magazineFeedBundlePaidMultiplierForFreeUsers - In the implementation block
@property (nonatomic,readonly) double magazineFeedBundlePaidMultiplierForTrialUsers;                                            //@synthesize magazineFeedBundlePaidMultiplierForTrialUsers=_magazineFeedBundlePaidMultiplierForTrialUsers - In the implementation block
@property (nonatomic,readonly) double magazineFeedBundlePaidMultiplierForPaidUsers;                                             //@synthesize magazineFeedBundlePaidMultiplierForPaidUsers=_magazineFeedBundlePaidMultiplierForPaidUsers - In the implementation block
@property (nonatomic,readonly) double magazineFeedBundleFreeMultiplierForFreeUsers;                                             //@synthesize magazineFeedBundleFreeMultiplierForFreeUsers=_magazineFeedBundleFreeMultiplierForFreeUsers - In the implementation block
@property (nonatomic,readonly) double magazineFeedBundleFreeMultiplierForTrialUsers;                                            //@synthesize magazineFeedBundleFreeMultiplierForTrialUsers=_magazineFeedBundleFreeMultiplierForTrialUsers - In the implementation block
@property (nonatomic,readonly) double magazineFeedBundleFreeMultiplierForPaidUsers;                                             //@synthesize magazineFeedBundleFreeMultiplierForPaidUsers=_magazineFeedBundleFreeMultiplierForPaidUsers - In the implementation block
@property (nonatomic,readonly) double magazineFeedFeaturedMultiplierForFreeUsers;                                               //@synthesize magazineFeedFeaturedMultiplierForFreeUsers=_magazineFeedFeaturedMultiplierForFreeUsers - In the implementation block
@property (nonatomic,readonly) double magazineFeedFeaturedMultiplierForTrialUsers;                                              //@synthesize magazineFeedFeaturedMultiplierForTrialUsers=_magazineFeedFeaturedMultiplierForTrialUsers - In the implementation block
@property (nonatomic,readonly) double magazineFeedFeaturedMultiplierForPaidUsers;                                               //@synthesize magazineFeedFeaturedMultiplierForPaidUsers=_magazineFeedFeaturedMultiplierForPaidUsers - In the implementation block
@property (nonatomic,readonly) double magazineFeedHeadlineSeenPenalty;                                                          //@synthesize magazineFeedHeadlineSeenPenalty=_magazineFeedHeadlineSeenPenalty - In the implementation block
@property (nonatomic,readonly) double magazineFeedArticleReadPenalty;                                                           //@synthesize magazineFeedArticleReadPenalty=_magazineFeedArticleReadPenalty - In the implementation block
@property (nonatomic,readonly) double magazineFeedGroupScoreWeight;                                                             //@synthesize magazineFeedGroupScoreWeight=_magazineFeedGroupScoreWeight - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedBaselineRatePrior;                                         //@synthesize articleRecirculationPrimaryFeedBaselineRatePrior=_articleRecirculationPrimaryFeedBaselineRatePrior - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedDecayFactor;                                               //@synthesize articleRecirculationPrimaryFeedDecayFactor=_articleRecirculationPrimaryFeedDecayFactor - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedDemocratizationFactor;                                     //@synthesize articleRecirculationPrimaryFeedDemocratizationFactor=_articleRecirculationPrimaryFeedDemocratizationFactor - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedHalfLifeCoefficient;                                       //@synthesize articleRecirculationPrimaryFeedHalfLifeCoefficient=_articleRecirculationPrimaryFeedHalfLifeCoefficient - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedSubscribedChannelScoreCoefficient;                         //@synthesize articleRecirculationPrimaryFeedSubscribedChannelScoreCoefficient=_articleRecirculationPrimaryFeedSubscribedChannelScoreCoefficient - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedMutedVoteCoefficient;                                      //@synthesize articleRecirculationPrimaryFeedMutedVoteCoefficient=_articleRecirculationPrimaryFeedMutedVoteCoefficient - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedPersonalizationCoefficient;                                //@synthesize articleRecirculationPrimaryFeedPersonalizationCoefficient=_articleRecirculationPrimaryFeedPersonalizationCoefficient - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedPublisherAggregateWeight;                                  //@synthesize articleRecirculationPrimaryFeedPublisherAggregateWeight=_articleRecirculationPrimaryFeedPublisherAggregateWeight - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedArticleLengthAggregateWeight;                              //@synthesize articleRecirculationPrimaryFeedArticleLengthAggregateWeight=_articleRecirculationPrimaryFeedArticleLengthAggregateWeight - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedGlobalScoreCoefficient;                                    //@synthesize articleRecirculationPrimaryFeedGlobalScoreCoefficient=_articleRecirculationPrimaryFeedGlobalScoreCoefficient - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedGlobalScoreCoefficientHalfLife;                            //@synthesize articleRecirculationPrimaryFeedGlobalScoreCoefficientHalfLife=_articleRecirculationPrimaryFeedGlobalScoreCoefficientHalfLife - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedGlobalScoreCoefficientInitialMultiplier;                   //@synthesize articleRecirculationPrimaryFeedGlobalScoreCoefficientInitialMultiplier=_articleRecirculationPrimaryFeedGlobalScoreCoefficientInitialMultiplier - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedCohortMembershipFavoritedBoost;                            //@synthesize articleRecirculationPrimaryFeedCohortMembershipFavoritedBoost=_articleRecirculationPrimaryFeedCohortMembershipFavoritedBoost - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedCohortMembershipGlobalWeight;                              //@synthesize articleRecirculationPrimaryFeedCohortMembershipGlobalWeight=_articleRecirculationPrimaryFeedCohortMembershipGlobalWeight - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedCohortMembershipUserBaseline;                              //@synthesize articleRecirculationPrimaryFeedCohortMembershipUserBaseline=_articleRecirculationPrimaryFeedCohortMembershipUserBaseline - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedCohortMembershipPreBaselineCurvature;                      //@synthesize articleRecirculationPrimaryFeedCohortMembershipPreBaselineCurvature=_articleRecirculationPrimaryFeedCohortMembershipPreBaselineCurvature - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedCohortMembershipPostBaselineCurvature;                     //@synthesize articleRecirculationPrimaryFeedCohortMembershipPostBaselineCurvature=_articleRecirculationPrimaryFeedCohortMembershipPostBaselineCurvature - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedCohortMembershipDilutionFactor;                            //@synthesize articleRecirculationPrimaryFeedCohortMembershipDilutionFactor=_articleRecirculationPrimaryFeedCohortMembershipDilutionFactor - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedCohortMembershipPaddingFactor;                             //@synthesize articleRecirculationPrimaryFeedCohortMembershipPaddingFactor=_articleRecirculationPrimaryFeedCohortMembershipPaddingFactor - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedSubscribedTopicsScoreCoefficient;                          //@synthesize articleRecirculationPrimaryFeedSubscribedTopicsScoreCoefficient=_articleRecirculationPrimaryFeedSubscribedTopicsScoreCoefficient - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedCtrWithSubscribedChannel;                                  //@synthesize articleRecirculationPrimaryFeedCtrWithSubscribedChannel=_articleRecirculationPrimaryFeedCtrWithSubscribedChannel - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedCtrWithZeroSubscribed;                                     //@synthesize articleRecirculationPrimaryFeedCtrWithZeroSubscribed=_articleRecirculationPrimaryFeedCtrWithZeroSubscribed - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedCtrWithOneSubscribed;                                      //@synthesize articleRecirculationPrimaryFeedCtrWithOneSubscribed=_articleRecirculationPrimaryFeedCtrWithOneSubscribed - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedCtrWithTwoSubscribed;                                      //@synthesize articleRecirculationPrimaryFeedCtrWithTwoSubscribed=_articleRecirculationPrimaryFeedCtrWithTwoSubscribed - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedCtrWithThreeSubscribed;                                    //@synthesize articleRecirculationPrimaryFeedCtrWithThreeSubscribed=_articleRecirculationPrimaryFeedCtrWithThreeSubscribed - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedAutofavoritedVoteCoefficient;                              //@synthesize articleRecirculationPrimaryFeedAutofavoritedVoteCoefficient=_articleRecirculationPrimaryFeedAutofavoritedVoteCoefficient - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedCtrWithZeroAutofavorited;                                  //@synthesize articleRecirculationPrimaryFeedCtrWithZeroAutofavorited=_articleRecirculationPrimaryFeedCtrWithZeroAutofavorited - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedCtrWithOneAutofavorited;                                   //@synthesize articleRecirculationPrimaryFeedCtrWithOneAutofavorited=_articleRecirculationPrimaryFeedCtrWithOneAutofavorited - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedCtrWithTwoAutofavorited;                                   //@synthesize articleRecirculationPrimaryFeedCtrWithTwoAutofavorited=_articleRecirculationPrimaryFeedCtrWithTwoAutofavorited - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedCtrWithThreeAutofavorited;                                 //@synthesize articleRecirculationPrimaryFeedCtrWithThreeAutofavorited=_articleRecirculationPrimaryFeedCtrWithThreeAutofavorited - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedDiversificationInitialPenalty;                             //@synthesize articleRecirculationPrimaryFeedDiversificationInitialPenalty=_articleRecirculationPrimaryFeedDiversificationInitialPenalty - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedDiversificationPenalty;                                    //@synthesize articleRecirculationPrimaryFeedDiversificationPenalty=_articleRecirculationPrimaryFeedDiversificationPenalty - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedDiversificationPenaltyHalfLife;                            //@synthesize articleRecirculationPrimaryFeedDiversificationPenaltyHalfLife=_articleRecirculationPrimaryFeedDiversificationPenaltyHalfLife - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedChannelTopicDiversificationInitialPenalty;                 //@synthesize articleRecirculationPrimaryFeedChannelTopicDiversificationInitialPenalty=_articleRecirculationPrimaryFeedChannelTopicDiversificationInitialPenalty - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedChannelTopicDiversificationPenalty;                        //@synthesize articleRecirculationPrimaryFeedChannelTopicDiversificationPenalty=_articleRecirculationPrimaryFeedChannelTopicDiversificationPenalty - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedChannelTopicDiversificationPenaltyHalfLife;                //@synthesize articleRecirculationPrimaryFeedChannelTopicDiversificationPenaltyHalfLife=_articleRecirculationPrimaryFeedChannelTopicDiversificationPenaltyHalfLife - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedFirstPassHalfLifeCoefficient;                              //@synthesize articleRecirculationPrimaryFeedFirstPassHalfLifeCoefficient=_articleRecirculationPrimaryFeedFirstPassHalfLifeCoefficient - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedFirstPassDiversificationPenalty;                           //@synthesize articleRecirculationPrimaryFeedFirstPassDiversificationPenalty=_articleRecirculationPrimaryFeedFirstPassDiversificationPenalty - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedFirstPassArticleFilter;                                    //@synthesize articleRecirculationPrimaryFeedFirstPassArticleFilter=_articleRecirculationPrimaryFeedFirstPassArticleFilter - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedBundlePaidMultiplierForFreeUsers;                          //@synthesize articleRecirculationPrimaryFeedBundlePaidMultiplierForFreeUsers=_articleRecirculationPrimaryFeedBundlePaidMultiplierForFreeUsers - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedBundlePaidMultiplierForTrialUsers;                         //@synthesize articleRecirculationPrimaryFeedBundlePaidMultiplierForTrialUsers=_articleRecirculationPrimaryFeedBundlePaidMultiplierForTrialUsers - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedBundlePaidMultiplierForPaidUsers;                          //@synthesize articleRecirculationPrimaryFeedBundlePaidMultiplierForPaidUsers=_articleRecirculationPrimaryFeedBundlePaidMultiplierForPaidUsers - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedBundleFreeMultiplierForFreeUsers;                          //@synthesize articleRecirculationPrimaryFeedBundleFreeMultiplierForFreeUsers=_articleRecirculationPrimaryFeedBundleFreeMultiplierForFreeUsers - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedBundleFreeMultiplierForTrialUsers;                         //@synthesize articleRecirculationPrimaryFeedBundleFreeMultiplierForTrialUsers=_articleRecirculationPrimaryFeedBundleFreeMultiplierForTrialUsers - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedBundleFreeMultiplierForPaidUsers;                          //@synthesize articleRecirculationPrimaryFeedBundleFreeMultiplierForPaidUsers=_articleRecirculationPrimaryFeedBundleFreeMultiplierForPaidUsers - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedFeaturedMultiplierForFreeUsers;                            //@synthesize articleRecirculationPrimaryFeedFeaturedMultiplierForFreeUsers=_articleRecirculationPrimaryFeedFeaturedMultiplierForFreeUsers - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedFeaturedMultiplierForTrialUsers;                           //@synthesize articleRecirculationPrimaryFeedFeaturedMultiplierForTrialUsers=_articleRecirculationPrimaryFeedFeaturedMultiplierForTrialUsers - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedFeaturedMultiplierForPaidUsers;                            //@synthesize articleRecirculationPrimaryFeedFeaturedMultiplierForPaidUsers=_articleRecirculationPrimaryFeedFeaturedMultiplierForPaidUsers - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedHeadlineSeenPenalty;                                       //@synthesize articleRecirculationPrimaryFeedHeadlineSeenPenalty=_articleRecirculationPrimaryFeedHeadlineSeenPenalty - In the implementation block
@property (nonatomic,readonly) double articleRecirculationPrimaryFeedArticleReadPenalty;                                        //@synthesize articleRecirculationPrimaryFeedArticleReadPenalty=_articleRecirculationPrimaryFeedArticleReadPenalty - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedBaselineRatePrior;                                       //@synthesize articleRecirculationSecondaryFeedBaselineRatePrior=_articleRecirculationSecondaryFeedBaselineRatePrior - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedDecayFactor;                                             //@synthesize articleRecirculationSecondaryFeedDecayFactor=_articleRecirculationSecondaryFeedDecayFactor - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedDemocratizationFactor;                                   //@synthesize articleRecirculationSecondaryFeedDemocratizationFactor=_articleRecirculationSecondaryFeedDemocratizationFactor - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedHalfLifeCoefficient;                                     //@synthesize articleRecirculationSecondaryFeedHalfLifeCoefficient=_articleRecirculationSecondaryFeedHalfLifeCoefficient - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedSubscribedChannelScoreCoefficient;                       //@synthesize articleRecirculationSecondaryFeedSubscribedChannelScoreCoefficient=_articleRecirculationSecondaryFeedSubscribedChannelScoreCoefficient - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedMutedVoteCoefficient;                                    //@synthesize articleRecirculationSecondaryFeedMutedVoteCoefficient=_articleRecirculationSecondaryFeedMutedVoteCoefficient - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedPersonalizationCoefficient;                              //@synthesize articleRecirculationSecondaryFeedPersonalizationCoefficient=_articleRecirculationSecondaryFeedPersonalizationCoefficient - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedPublisherAggregateWeight;                                //@synthesize articleRecirculationSecondaryFeedPublisherAggregateWeight=_articleRecirculationSecondaryFeedPublisherAggregateWeight - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedArticleLengthAggregateWeight;                            //@synthesize articleRecirculationSecondaryFeedArticleLengthAggregateWeight=_articleRecirculationSecondaryFeedArticleLengthAggregateWeight - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedGlobalScoreCoefficient;                                  //@synthesize articleRecirculationSecondaryFeedGlobalScoreCoefficient=_articleRecirculationSecondaryFeedGlobalScoreCoefficient - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedGlobalScoreCoefficientHalfLife;                          //@synthesize articleRecirculationSecondaryFeedGlobalScoreCoefficientHalfLife=_articleRecirculationSecondaryFeedGlobalScoreCoefficientHalfLife - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedGlobalScoreCoefficientInitialMultiplier;                 //@synthesize articleRecirculationSecondaryFeedGlobalScoreCoefficientInitialMultiplier=_articleRecirculationSecondaryFeedGlobalScoreCoefficientInitialMultiplier - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedCohortMembershipUserBaseline;                            //@synthesize articleRecirculationSecondaryFeedCohortMembershipUserBaseline=_articleRecirculationSecondaryFeedCohortMembershipUserBaseline - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedCohortMembershipPreBaselineCurvature;                    //@synthesize articleRecirculationSecondaryFeedCohortMembershipPreBaselineCurvature=_articleRecirculationSecondaryFeedCohortMembershipPreBaselineCurvature - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedCohortMembershipPostBaselineCurvature;                   //@synthesize articleRecirculationSecondaryFeedCohortMembershipPostBaselineCurvature=_articleRecirculationSecondaryFeedCohortMembershipPostBaselineCurvature - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedCohortMembershipDilutionFactor;                          //@synthesize articleRecirculationSecondaryFeedCohortMembershipDilutionFactor=_articleRecirculationSecondaryFeedCohortMembershipDilutionFactor - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedCohortMembershipPaddingFactor;                           //@synthesize articleRecirculationSecondaryFeedCohortMembershipPaddingFactor=_articleRecirculationSecondaryFeedCohortMembershipPaddingFactor - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedCohortMembershipFavoritedBoost;                          //@synthesize articleRecirculationSecondaryFeedCohortMembershipFavoritedBoost=_articleRecirculationSecondaryFeedCohortMembershipFavoritedBoost - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedCohortMembershipGlobalWeight;                            //@synthesize articleRecirculationSecondaryFeedCohortMembershipGlobalWeight=_articleRecirculationSecondaryFeedCohortMembershipGlobalWeight - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedSubscribedTopicsScoreCoefficient;                        //@synthesize articleRecirculationSecondaryFeedSubscribedTopicsScoreCoefficient=_articleRecirculationSecondaryFeedSubscribedTopicsScoreCoefficient - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedCtrWithSubscribedChannel;                                //@synthesize articleRecirculationSecondaryFeedCtrWithSubscribedChannel=_articleRecirculationSecondaryFeedCtrWithSubscribedChannel - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedCtrWithZeroSubscribed;                                   //@synthesize articleRecirculationSecondaryFeedCtrWithZeroSubscribed=_articleRecirculationSecondaryFeedCtrWithZeroSubscribed - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedCtrWithOneSubscribed;                                    //@synthesize articleRecirculationSecondaryFeedCtrWithOneSubscribed=_articleRecirculationSecondaryFeedCtrWithOneSubscribed - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedCtrWithTwoSubscribed;                                    //@synthesize articleRecirculationSecondaryFeedCtrWithTwoSubscribed=_articleRecirculationSecondaryFeedCtrWithTwoSubscribed - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedCtrWithThreeSubscribed;                                  //@synthesize articleRecirculationSecondaryFeedCtrWithThreeSubscribed=_articleRecirculationSecondaryFeedCtrWithThreeSubscribed - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedAutofavoritedVoteCoefficient;                            //@synthesize articleRecirculationSecondaryFeedAutofavoritedVoteCoefficient=_articleRecirculationSecondaryFeedAutofavoritedVoteCoefficient - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedCtrWithZeroAutofavorited;                                //@synthesize articleRecirculationSecondaryFeedCtrWithZeroAutofavorited=_articleRecirculationSecondaryFeedCtrWithZeroAutofavorited - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedCtrWithOneAutofavorited;                                 //@synthesize articleRecirculationSecondaryFeedCtrWithOneAutofavorited=_articleRecirculationSecondaryFeedCtrWithOneAutofavorited - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedCtrWithTwoAutofavorited;                                 //@synthesize articleRecirculationSecondaryFeedCtrWithTwoAutofavorited=_articleRecirculationSecondaryFeedCtrWithTwoAutofavorited - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedCtrWithThreeAutofavorited;                               //@synthesize articleRecirculationSecondaryFeedCtrWithThreeAutofavorited=_articleRecirculationSecondaryFeedCtrWithThreeAutofavorited - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedDiversificationInitialPenalty;                           //@synthesize articleRecirculationSecondaryFeedDiversificationInitialPenalty=_articleRecirculationSecondaryFeedDiversificationInitialPenalty - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedDiversificationPenalty;                                  //@synthesize articleRecirculationSecondaryFeedDiversificationPenalty=_articleRecirculationSecondaryFeedDiversificationPenalty - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedDiversificationPenaltyHalfLife;                          //@synthesize articleRecirculationSecondaryFeedDiversificationPenaltyHalfLife=_articleRecirculationSecondaryFeedDiversificationPenaltyHalfLife - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedChannelTopicDiversificationInitialPenalty;               //@synthesize articleRecirculationSecondaryFeedChannelTopicDiversificationInitialPenalty=_articleRecirculationSecondaryFeedChannelTopicDiversificationInitialPenalty - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedChannelTopicDiversificationPenalty;                      //@synthesize articleRecirculationSecondaryFeedChannelTopicDiversificationPenalty=_articleRecirculationSecondaryFeedChannelTopicDiversificationPenalty - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedChannelTopicDiversificationPenaltyHalfLife;              //@synthesize articleRecirculationSecondaryFeedChannelTopicDiversificationPenaltyHalfLife=_articleRecirculationSecondaryFeedChannelTopicDiversificationPenaltyHalfLife - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedFirstPassHalfLifeCoefficient;                            //@synthesize articleRecirculationSecondaryFeedFirstPassHalfLifeCoefficient=_articleRecirculationSecondaryFeedFirstPassHalfLifeCoefficient - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedFirstPassDiversificationPenalty;                         //@synthesize articleRecirculationSecondaryFeedFirstPassDiversificationPenalty=_articleRecirculationSecondaryFeedFirstPassDiversificationPenalty - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedFirstPassArticleFilter;                                  //@synthesize articleRecirculationSecondaryFeedFirstPassArticleFilter=_articleRecirculationSecondaryFeedFirstPassArticleFilter - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedBundlePaidMultiplierForFreeUsers;                        //@synthesize articleRecirculationSecondaryFeedBundlePaidMultiplierForFreeUsers=_articleRecirculationSecondaryFeedBundlePaidMultiplierForFreeUsers - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedBundlePaidMultiplierForTrialUsers;                       //@synthesize articleRecirculationSecondaryFeedBundlePaidMultiplierForTrialUsers=_articleRecirculationSecondaryFeedBundlePaidMultiplierForTrialUsers - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedBundlePaidMultiplierForPaidUsers;                        //@synthesize articleRecirculationSecondaryFeedBundlePaidMultiplierForPaidUsers=_articleRecirculationSecondaryFeedBundlePaidMultiplierForPaidUsers - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedBundleFreeMultiplierForFreeUsers;                        //@synthesize articleRecirculationSecondaryFeedBundleFreeMultiplierForFreeUsers=_articleRecirculationSecondaryFeedBundleFreeMultiplierForFreeUsers - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedBundleFreeMultiplierForTrialUsers;                       //@synthesize articleRecirculationSecondaryFeedBundleFreeMultiplierForTrialUsers=_articleRecirculationSecondaryFeedBundleFreeMultiplierForTrialUsers - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedBundleFreeMultiplierForPaidUsers;                        //@synthesize articleRecirculationSecondaryFeedBundleFreeMultiplierForPaidUsers=_articleRecirculationSecondaryFeedBundleFreeMultiplierForPaidUsers - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedFeaturedMultiplierForFreeUsers;                          //@synthesize articleRecirculationSecondaryFeedFeaturedMultiplierForFreeUsers=_articleRecirculationSecondaryFeedFeaturedMultiplierForFreeUsers - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedFeaturedMultiplierForTrialUsers;                         //@synthesize articleRecirculationSecondaryFeedFeaturedMultiplierForTrialUsers=_articleRecirculationSecondaryFeedFeaturedMultiplierForTrialUsers - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedFeaturedMultiplierForPaidUsers;                          //@synthesize articleRecirculationSecondaryFeedFeaturedMultiplierForPaidUsers=_articleRecirculationSecondaryFeedFeaturedMultiplierForPaidUsers - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedHeadlineSeenPenalty;                                     //@synthesize articleRecirculationSecondaryFeedHeadlineSeenPenalty=_articleRecirculationSecondaryFeedHeadlineSeenPenalty - In the implementation block
@property (nonatomic,readonly) double articleRecirculationSecondaryFeedArticleReadPenalty;                                      //@synthesize articleRecirculationSecondaryFeedArticleReadPenalty=_articleRecirculationSecondaryFeedArticleReadPenalty - In the implementation block
@property (nonatomic,readonly) double bestOfBundleBaselineRatePrior;                                                            //@synthesize bestOfBundleBaselineRatePrior=_bestOfBundleBaselineRatePrior - In the implementation block
@property (nonatomic,readonly) double bestOfBundleDecayFactor;                                                                  //@synthesize bestOfBundleDecayFactor=_bestOfBundleDecayFactor - In the implementation block
@property (nonatomic,readonly) double bestOfBundleDemocratizationFactor;                                                        //@synthesize bestOfBundleDemocratizationFactor=_bestOfBundleDemocratizationFactor - In the implementation block
@property (nonatomic,readonly) double bestOfBundleHalfLifeCoefficient;                                                          //@synthesize bestOfBundleHalfLifeCoefficient=_bestOfBundleHalfLifeCoefficient - In the implementation block
@property (nonatomic,readonly) double bestOfBundleSubscribedChannelScoreCoefficient;                                            //@synthesize bestOfBundleSubscribedChannelScoreCoefficient=_bestOfBundleSubscribedChannelScoreCoefficient - In the implementation block
@property (nonatomic,readonly) double bestOfBundleMutedVoteCoefficient;                                                         //@synthesize bestOfBundleMutedVoteCoefficient=_bestOfBundleMutedVoteCoefficient - In the implementation block
@property (nonatomic,readonly) double bestOfBundlePersonalizationCoefficient;                                                   //@synthesize bestOfBundlePersonalizationCoefficient=_bestOfBundlePersonalizationCoefficient - In the implementation block
@property (nonatomic,readonly) double bestOfBundlePublisherAggregateWeight;                                                     //@synthesize bestOfBundlePublisherAggregateWeight=_bestOfBundlePublisherAggregateWeight - In the implementation block
@property (nonatomic,readonly) double bestOfBundleArticleLengthAggregateWeight;                                                 //@synthesize bestOfBundleArticleLengthAggregateWeight=_bestOfBundleArticleLengthAggregateWeight - In the implementation block
@property (nonatomic,readonly) double bestOfBundleGlobalScoreCoefficient;                                                       //@synthesize bestOfBundleGlobalScoreCoefficient=_bestOfBundleGlobalScoreCoefficient - In the implementation block
@property (nonatomic,readonly) double bestOfBundleGlobalScoreCoefficientHalfLife;                                               //@synthesize bestOfBundleGlobalScoreCoefficientHalfLife=_bestOfBundleGlobalScoreCoefficientHalfLife - In the implementation block
@property (nonatomic,readonly) double bestOfBundleGlobalScoreCoefficientInitialMultiplier;                                      //@synthesize bestOfBundleGlobalScoreCoefficientInitialMultiplier=_bestOfBundleGlobalScoreCoefficientInitialMultiplier - In the implementation block
@property (nonatomic,readonly) double bestOfBundleCohortMembershipFavoritedBoost;                                               //@synthesize bestOfBundleCohortMembershipFavoritedBoost=_bestOfBundleCohortMembershipFavoritedBoost - In the implementation block
@property (nonatomic,readonly) double bestOfBundleCohortMembershipGlobalWeight;                                                 //@synthesize bestOfBundleCohortMembershipGlobalWeight=_bestOfBundleCohortMembershipGlobalWeight - In the implementation block
@property (nonatomic,readonly) double bestOfBundleCohortMembershipUserBaseline;                                                 //@synthesize bestOfBundleCohortMembershipUserBaseline=_bestOfBundleCohortMembershipUserBaseline - In the implementation block
@property (nonatomic,readonly) double bestOfBundleCohortMembershipPreBaselineCurvature;                                         //@synthesize bestOfBundleCohortMembershipPreBaselineCurvature=_bestOfBundleCohortMembershipPreBaselineCurvature - In the implementation block
@property (nonatomic,readonly) double bestOfBundleCohortMembershipPostBaselineCurvature;                                        //@synthesize bestOfBundleCohortMembershipPostBaselineCurvature=_bestOfBundleCohortMembershipPostBaselineCurvature - In the implementation block
@property (nonatomic,readonly) double bestOfBundleCohortMembershipDilutionFactor;                                               //@synthesize bestOfBundleCohortMembershipDilutionFactor=_bestOfBundleCohortMembershipDilutionFactor - In the implementation block
@property (nonatomic,readonly) double bestOfBundleCohortMembershipPaddingFactor;                                                //@synthesize bestOfBundleCohortMembershipPaddingFactor=_bestOfBundleCohortMembershipPaddingFactor - In the implementation block
@property (nonatomic,readonly) double bestOfBundleSubscribedTopicsScoreCoefficient;                                             //@synthesize bestOfBundleSubscribedTopicsScoreCoefficient=_bestOfBundleSubscribedTopicsScoreCoefficient - In the implementation block
@property (nonatomic,readonly) double bestOfBundleCtrWithSubscribedChannel;                                                     //@synthesize bestOfBundleCtrWithSubscribedChannel=_bestOfBundleCtrWithSubscribedChannel - In the implementation block
@property (nonatomic,readonly) double bestOfBundleCtrWithZeroSubscribed;                                                        //@synthesize bestOfBundleCtrWithZeroSubscribed=_bestOfBundleCtrWithZeroSubscribed - In the implementation block
@property (nonatomic,readonly) double bestOfBundleCtrWithOneSubscribed;                                                         //@synthesize bestOfBundleCtrWithOneSubscribed=_bestOfBundleCtrWithOneSubscribed - In the implementation block
@property (nonatomic,readonly) double bestOfBundleCtrWithTwoSubscribed;                                                         //@synthesize bestOfBundleCtrWithTwoSubscribed=_bestOfBundleCtrWithTwoSubscribed - In the implementation block
@property (nonatomic,readonly) double bestOfBundleCtrWithThreeSubscribed;                                                       //@synthesize bestOfBundleCtrWithThreeSubscribed=_bestOfBundleCtrWithThreeSubscribed - In the implementation block
@property (nonatomic,readonly) double bestOfBundleAutofavoritedVoteCoefficient;                                                 //@synthesize bestOfBundleAutofavoritedVoteCoefficient=_bestOfBundleAutofavoritedVoteCoefficient - In the implementation block
@property (nonatomic,readonly) double bestOfBundleCtrWithZeroAutofavorited;                                                     //@synthesize bestOfBundleCtrWithZeroAutofavorited=_bestOfBundleCtrWithZeroAutofavorited - In the implementation block
@property (nonatomic,readonly) double bestOfBundleCtrWithOneAutofavorited;                                                      //@synthesize bestOfBundleCtrWithOneAutofavorited=_bestOfBundleCtrWithOneAutofavorited - In the implementation block
@property (nonatomic,readonly) double bestOfBundleCtrWithTwoAutofavorited;                                                      //@synthesize bestOfBundleCtrWithTwoAutofavorited=_bestOfBundleCtrWithTwoAutofavorited - In the implementation block
@property (nonatomic,readonly) double bestOfBundleCtrWithThreeAutofavorited;                                                    //@synthesize bestOfBundleCtrWithThreeAutofavorited=_bestOfBundleCtrWithThreeAutofavorited - In the implementation block
@property (nonatomic,readonly) double bestOfBundleDiversificationInitialPenalty;                                                //@synthesize bestOfBundleDiversificationInitialPenalty=_bestOfBundleDiversificationInitialPenalty - In the implementation block
@property (nonatomic,readonly) double bestOfBundleDiversificationPenalty;                                                       //@synthesize bestOfBundleDiversificationPenalty=_bestOfBundleDiversificationPenalty - In the implementation block
@property (nonatomic,readonly) double bestOfBundleDiversificationPenaltyHalfLife;                                               //@synthesize bestOfBundleDiversificationPenaltyHalfLife=_bestOfBundleDiversificationPenaltyHalfLife - In the implementation block
@property (nonatomic,readonly) double bestOfBundleChannelTopicDiversificationInitialPenalty;                                    //@synthesize bestOfBundleChannelTopicDiversificationInitialPenalty=_bestOfBundleChannelTopicDiversificationInitialPenalty - In the implementation block
@property (nonatomic,readonly) double bestOfBundleChannelTopicDiversificationPenalty;                                           //@synthesize bestOfBundleChannelTopicDiversificationPenalty=_bestOfBundleChannelTopicDiversificationPenalty - In the implementation block
@property (nonatomic,readonly) double bestOfBundleChannelTopicDiversificationPenaltyHalfLife;                                   //@synthesize bestOfBundleChannelTopicDiversificationPenaltyHalfLife=_bestOfBundleChannelTopicDiversificationPenaltyHalfLife - In the implementation block
@property (nonatomic,readonly) double bestOfBundleFirstPassHalfLifeCoefficient;                                                 //@synthesize bestOfBundleFirstPassHalfLifeCoefficient=_bestOfBundleFirstPassHalfLifeCoefficient - In the implementation block
@property (nonatomic,readonly) double bestOfBundleFirstPassDiversificationPenalty;                                              //@synthesize bestOfBundleFirstPassDiversificationPenalty=_bestOfBundleFirstPassDiversificationPenalty - In the implementation block
@property (nonatomic,readonly) double bestOfBundleFirstPassArticleFilter;                                                       //@synthesize bestOfBundleFirstPassArticleFilter=_bestOfBundleFirstPassArticleFilter - In the implementation block
@property (nonatomic,readonly) double bestOfBundleBundlePaidMultiplierForFreeUsers;                                             //@synthesize bestOfBundleBundlePaidMultiplierForFreeUsers=_bestOfBundleBundlePaidMultiplierForFreeUsers - In the implementation block
@property (nonatomic,readonly) double bestOfBundleBundlePaidMultiplierForTrialUsers;                                            //@synthesize bestOfBundleBundlePaidMultiplierForTrialUsers=_bestOfBundleBundlePaidMultiplierForTrialUsers - In the implementation block
@property (nonatomic,readonly) double bestOfBundleBundlePaidMultiplierForPaidUsers;                                             //@synthesize bestOfBundleBundlePaidMultiplierForPaidUsers=_bestOfBundleBundlePaidMultiplierForPaidUsers - In the implementation block
@property (nonatomic,readonly) double bestOfBundleBundleFreeMultiplierForFreeUsers;                                             //@synthesize bestOfBundleBundleFreeMultiplierForFreeUsers=_bestOfBundleBundleFreeMultiplierForFreeUsers - In the implementation block
@property (nonatomic,readonly) double bestOfBundleBundleFreeMultiplierForTrialUsers;                                            //@synthesize bestOfBundleBundleFreeMultiplierForTrialUsers=_bestOfBundleBundleFreeMultiplierForTrialUsers - In the implementation block
@property (nonatomic,readonly) double bestOfBundleBundleFreeMultiplierForPaidUsers;                                             //@synthesize bestOfBundleBundleFreeMultiplierForPaidUsers=_bestOfBundleBundleFreeMultiplierForPaidUsers - In the implementation block
@property (nonatomic,readonly) double bestOfBundleFeaturedMultiplierForFreeUsers;                                               //@synthesize bestOfBundleFeaturedMultiplierForFreeUsers=_bestOfBundleFeaturedMultiplierForFreeUsers - In the implementation block
@property (nonatomic,readonly) double bestOfBundleFeaturedMultiplierForTrialUsers;                                              //@synthesize bestOfBundleFeaturedMultiplierForTrialUsers=_bestOfBundleFeaturedMultiplierForTrialUsers - In the implementation block
@property (nonatomic,readonly) double bestOfBundleFeaturedMultiplierForPaidUsers;                                               //@synthesize bestOfBundleFeaturedMultiplierForPaidUsers=_bestOfBundleFeaturedMultiplierForPaidUsers - In the implementation block
@property (nonatomic,readonly) double bestOfBundleHeadlineSeenPenalty;                                                          //@synthesize bestOfBundleHeadlineSeenPenalty=_bestOfBundleHeadlineSeenPenalty - In the implementation block
@property (nonatomic,readonly) double bestOfBundleArticleReadPenalty;                                                           //@synthesize bestOfBundleArticleReadPenalty=_bestOfBundleArticleReadPenalty - In the implementation block
@property (nonatomic,readonly) double forYouGroupBaselineRatePrior;                                                             //@synthesize forYouGroupBaselineRatePrior=_forYouGroupBaselineRatePrior - In the implementation block
@property (nonatomic,readonly) double forYouGroupDecayFactor;                                                                   //@synthesize forYouGroupDecayFactor=_forYouGroupDecayFactor - In the implementation block
@property (nonatomic,readonly) double forYouGroupDemocratizationFactor;                                                         //@synthesize forYouGroupDemocratizationFactor=_forYouGroupDemocratizationFactor - In the implementation block
@property (nonatomic,readonly) double forYouGroupHalfLifeCoefficient;                                                           //@synthesize forYouGroupHalfLifeCoefficient=_forYouGroupHalfLifeCoefficient - In the implementation block
@property (nonatomic,readonly) double forYouGroupSubscribedChannelScoreCoefficient;                                             //@synthesize forYouGroupSubscribedChannelScoreCoefficient=_forYouGroupSubscribedChannelScoreCoefficient - In the implementation block
@property (nonatomic,readonly) double forYouGroupMutedVoteCoefficient;                                                          //@synthesize forYouGroupMutedVoteCoefficient=_forYouGroupMutedVoteCoefficient - In the implementation block
@property (nonatomic,readonly) double forYouGroupPersonalizationCoefficient;                                                    //@synthesize forYouGroupPersonalizationCoefficient=_forYouGroupPersonalizationCoefficient - In the implementation block
@property (nonatomic,readonly) double forYouGroupPublisherAggregateWeight;                                                      //@synthesize forYouGroupPublisherAggregateWeight=_forYouGroupPublisherAggregateWeight - In the implementation block
@property (nonatomic,readonly) double forYouGroupArticleLengthAggregateWeight;                                                  //@synthesize forYouGroupArticleLengthAggregateWeight=_forYouGroupArticleLengthAggregateWeight - In the implementation block
@property (nonatomic,readonly) double forYouGroupGlobalScoreCoefficient;                                                        //@synthesize forYouGroupGlobalScoreCoefficient=_forYouGroupGlobalScoreCoefficient - In the implementation block
@property (nonatomic,readonly) double forYouGroupGlobalScoreCoefficientHalfLife;                                                //@synthesize forYouGroupGlobalScoreCoefficientHalfLife=_forYouGroupGlobalScoreCoefficientHalfLife - In the implementation block
@property (nonatomic,readonly) double forYouGroupGlobalScoreCoefficientInitialMultiplier;                                       //@synthesize forYouGroupGlobalScoreCoefficientInitialMultiplier=_forYouGroupGlobalScoreCoefficientInitialMultiplier - In the implementation block
@property (nonatomic,readonly) double forYouGroupCohortMembershipFavoritedBoost;                                                //@synthesize forYouGroupCohortMembershipFavoritedBoost=_forYouGroupCohortMembershipFavoritedBoost - In the implementation block
@property (nonatomic,readonly) double forYouGroupCohortMembershipGlobalWeight;                                                  //@synthesize forYouGroupCohortMembershipGlobalWeight=_forYouGroupCohortMembershipGlobalWeight - In the implementation block
@property (nonatomic,readonly) double forYouGroupCohortMembershipUserBaseline;                                                  //@synthesize forYouGroupCohortMembershipUserBaseline=_forYouGroupCohortMembershipUserBaseline - In the implementation block
@property (nonatomic,readonly) double forYouGroupCohortMembershipPreBaselineCurvature;                                          //@synthesize forYouGroupCohortMembershipPreBaselineCurvature=_forYouGroupCohortMembershipPreBaselineCurvature - In the implementation block
@property (nonatomic,readonly) double forYouGroupCohortMembershipPostBaselineCurvature;                                         //@synthesize forYouGroupCohortMembershipPostBaselineCurvature=_forYouGroupCohortMembershipPostBaselineCurvature - In the implementation block
@property (nonatomic,readonly) double forYouGroupCohortMembershipDilutionFactor;                                                //@synthesize forYouGroupCohortMembershipDilutionFactor=_forYouGroupCohortMembershipDilutionFactor - In the implementation block
@property (nonatomic,readonly) double forYouGroupCohortMembershipPaddingFactor;                                                 //@synthesize forYouGroupCohortMembershipPaddingFactor=_forYouGroupCohortMembershipPaddingFactor - In the implementation block
@property (nonatomic,readonly) double forYouGroupSubscribedTopicsScoreCoefficient;                                              //@synthesize forYouGroupSubscribedTopicsScoreCoefficient=_forYouGroupSubscribedTopicsScoreCoefficient - In the implementation block
@property (nonatomic,readonly) double forYouGroupCtrWithSubscribedChannel;                                                      //@synthesize forYouGroupCtrWithSubscribedChannel=_forYouGroupCtrWithSubscribedChannel - In the implementation block
@property (nonatomic,readonly) double forYouGroupCtrWithZeroSubscribed;                                                         //@synthesize forYouGroupCtrWithZeroSubscribed=_forYouGroupCtrWithZeroSubscribed - In the implementation block
@property (nonatomic,readonly) double forYouGroupCtrWithOneSubscribed;                                                          //@synthesize forYouGroupCtrWithOneSubscribed=_forYouGroupCtrWithOneSubscribed - In the implementation block
@property (nonatomic,readonly) double forYouGroupCtrWithTwoSubscribed;                                                          //@synthesize forYouGroupCtrWithTwoSubscribed=_forYouGroupCtrWithTwoSubscribed - In the implementation block
@property (nonatomic,readonly) double forYouGroupCtrWithThreeSubscribed;                                                        //@synthesize forYouGroupCtrWithThreeSubscribed=_forYouGroupCtrWithThreeSubscribed - In the implementation block
@property (nonatomic,readonly) double forYouGroupAutofavoritedVoteCoefficient;                                                  //@synthesize forYouGroupAutofavoritedVoteCoefficient=_forYouGroupAutofavoritedVoteCoefficient - In the implementation block
@property (nonatomic,readonly) double forYouGroupCtrWithZeroAutofavorited;                                                      //@synthesize forYouGroupCtrWithZeroAutofavorited=_forYouGroupCtrWithZeroAutofavorited - In the implementation block
@property (nonatomic,readonly) double forYouGroupCtrWithOneAutofavorited;                                                       //@synthesize forYouGroupCtrWithOneAutofavorited=_forYouGroupCtrWithOneAutofavorited - In the implementation block
@property (nonatomic,readonly) double forYouGroupCtrWithTwoAutofavorited;                                                       //@synthesize forYouGroupCtrWithTwoAutofavorited=_forYouGroupCtrWithTwoAutofavorited - In the implementation block
@property (nonatomic,readonly) double forYouGroupCtrWithThreeAutofavorited;                                                     //@synthesize forYouGroupCtrWithThreeAutofavorited=_forYouGroupCtrWithThreeAutofavorited - In the implementation block
@property (nonatomic,readonly) double forYouGroupDiversificationInitialPenalty;                                                 //@synthesize forYouGroupDiversificationInitialPenalty=_forYouGroupDiversificationInitialPenalty - In the implementation block
@property (nonatomic,readonly) double forYouGroupDiversificationPenalty;                                                        //@synthesize forYouGroupDiversificationPenalty=_forYouGroupDiversificationPenalty - In the implementation block
@property (nonatomic,readonly) double forYouGroupDiversificationPenaltyHalfLife;                                                //@synthesize forYouGroupDiversificationPenaltyHalfLife=_forYouGroupDiversificationPenaltyHalfLife - In the implementation block
@property (nonatomic,readonly) double forYouGroupChannelTopicDiversificationInitialPenalty;                                     //@synthesize forYouGroupChannelTopicDiversificationInitialPenalty=_forYouGroupChannelTopicDiversificationInitialPenalty - In the implementation block
@property (nonatomic,readonly) double forYouGroupChannelTopicDiversificationPenalty;                                            //@synthesize forYouGroupChannelTopicDiversificationPenalty=_forYouGroupChannelTopicDiversificationPenalty - In the implementation block
@property (nonatomic,readonly) double forYouGroupChannelTopicDiversificationPenaltyHalfLife;                                    //@synthesize forYouGroupChannelTopicDiversificationPenaltyHalfLife=_forYouGroupChannelTopicDiversificationPenaltyHalfLife - In the implementation block
@property (nonatomic,readonly) double forYouGroupFirstPassHalfLifeCoefficient;                                                  //@synthesize forYouGroupFirstPassHalfLifeCoefficient=_forYouGroupFirstPassHalfLifeCoefficient - In the implementation block
@property (nonatomic,readonly) double forYouGroupFirstPassDiversificationPenalty;                                               //@synthesize forYouGroupFirstPassDiversificationPenalty=_forYouGroupFirstPassDiversificationPenalty - In the implementation block
@property (nonatomic,readonly) double forYouGroupFirstPassArticleFilter;                                                        //@synthesize forYouGroupFirstPassArticleFilter=_forYouGroupFirstPassArticleFilter - In the implementation block
@property (nonatomic,readonly) double forYouGroupBundlePaidMultiplierForFreeUsers;                                              //@synthesize forYouGroupBundlePaidMultiplierForFreeUsers=_forYouGroupBundlePaidMultiplierForFreeUsers - In the implementation block
@property (nonatomic,readonly) double forYouGroupBundlePaidMultiplierForTrialUsers;                                             //@synthesize forYouGroupBundlePaidMultiplierForTrialUsers=_forYouGroupBundlePaidMultiplierForTrialUsers - In the implementation block
@property (nonatomic,readonly) double forYouGroupBundlePaidMultiplierForPaidUsers;                                              //@synthesize forYouGroupBundlePaidMultiplierForPaidUsers=_forYouGroupBundlePaidMultiplierForPaidUsers - In the implementation block
@property (nonatomic,readonly) double forYouGroupBundleFreeMultiplierForFreeUsers;                                              //@synthesize forYouGroupBundleFreeMultiplierForFreeUsers=_forYouGroupBundleFreeMultiplierForFreeUsers - In the implementation block
@property (nonatomic,readonly) double forYouGroupBundleFreeMultiplierForTrialUsers;                                             //@synthesize forYouGroupBundleFreeMultiplierForTrialUsers=_forYouGroupBundleFreeMultiplierForTrialUsers - In the implementation block
@property (nonatomic,readonly) double forYouGroupBundleFreeMultiplierForPaidUsers;                                              //@synthesize forYouGroupBundleFreeMultiplierForPaidUsers=_forYouGroupBundleFreeMultiplierForPaidUsers - In the implementation block
@property (nonatomic,readonly) double forYouGroupFeaturedMultiplierForFreeUsers;                                                //@synthesize forYouGroupFeaturedMultiplierForFreeUsers=_forYouGroupFeaturedMultiplierForFreeUsers - In the implementation block
@property (nonatomic,readonly) double forYouGroupFeaturedMultiplierForTrialUsers;                                               //@synthesize forYouGroupFeaturedMultiplierForTrialUsers=_forYouGroupFeaturedMultiplierForTrialUsers - In the implementation block
@property (nonatomic,readonly) double forYouGroupFeaturedMultiplierForPaidUsers;                                                //@synthesize forYouGroupFeaturedMultiplierForPaidUsers=_forYouGroupFeaturedMultiplierForPaidUsers - In the implementation block
@property (nonatomic,readonly) double forYouGroupHeadlineSeenPenalty;                                                           //@synthesize forYouGroupHeadlineSeenPenalty=_forYouGroupHeadlineSeenPenalty - In the implementation block
@property (nonatomic,readonly) double forYouGroupArticleReadPenalty;                                                            //@synthesize forYouGroupArticleReadPenalty=_forYouGroupArticleReadPenalty - In the implementation block
@property (nonatomic,readonly) double forYouGroupArticleSubset;                                                                 //@synthesize forYouGroupArticleSubset=_forYouGroupArticleSubset - In the implementation block
@property (nonatomic,readonly) double topStoriesGroupAggregatesGroupBias;                                                       //@synthesize topStoriesGroupAggregatesGroupBias=_topStoriesGroupAggregatesGroupBias - In the implementation block
@property (nonatomic,readonly) double trendingGroupAggregatesGroupBias;                                                         //@synthesize trendingGroupAggregatesGroupBias=_trendingGroupAggregatesGroupBias - In the implementation block
@property (nonatomic,readonly) double* featureClicksByAction; 
@property (nonatomic,readonly) double* baselineClicksByAction; 
@property (nonatomic,readonly) double* featureImpressionsByAction; 
@property (nonatomic,readonly) double* baselineImpressionsByAction; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)optionalTagSpecificityScore;
-(double)metaGroupingSubscribedTopicMultiplier;
-(double)metaGroupingRelatednessThreshold;
-(double)metaGroupingRelatednessKWeight;
-(double)metaGroupingTopicScoreWeight;
-(double)metaGroupingHighestScoringRelativeScoreMultiplier;
-(long long)heuristicSampleSizeIPad;
-(long long)heuristicSampleSizeIPhone;
-(long long)searchBranchMultiplierIPad;
-(long long)searchBranchMultiplierIPhone;
-(double)searchBranchDecayIPad;
-(double)searchBranchDecayIPhone;
-(double)searchTimeLimit;
-(double)tagSizeCoeffIPad;
-(double)tagSizeCoeffIPhone;
-(double)tagFavoritedCoeffIPad;
-(double)tagFavoritedCoeffIPhone;
-(double)tagAutoFavoritedCoeffIPad;
-(double)tagAutoFavoritedCoeffIPhone;
-(double)tagGroupableCoeffIPad;
-(double)tagGroupableCoeffIPhone;
-(double)tagArticleScoreCoeffIPad;
-(double)tagArticleScoreCoeffIPhone;
-(double)tagPersonalizationCoeffIPad;
-(double)tagPersonalizationCoeffIPhone;
-(double)tagSpecificityCoeffIPad;
-(double)tagSpecificityCoeffIPhone;
-(long long)heuristicOptionIPad;
-(long long)heuristicOptionIPhone;
-(id)initWithPersonalizationTreatmentDictionary:(id)arg1 ;
-(double)topicDiversityThreshold;
-(long long)topicDiversityWindowSize;
-(long long)auditionedAutoFavoritesEmitterLimit;
-(double)forYouGroupArticleSubset;
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
-(double*)baselineClicksByAction;
-(double*)featureClicksByAction;
-(double*)baselineImpressionsByAction;
-(double*)featureImpressionsByAction;
-(double)articleLengthMediumThreshold;
-(double)articleLengthLongThreshold;
-(double)articleLengthAggregateWeight;
-(long long)maxClusterSizeIPad;
-(long long)maxClusterSizeIPhone;
-(long long)maxUnpaidArticlesIPad;
-(long long)maxUnpaidArticlesIPhone;
-(long long)minClusterSizeIPad;
-(long long)minClusterSizeIPhone;
-(long long)minIdealClusterSizeIPad;
-(long long)minIdealClusterSizeIPhone;
-(long long)maxIdealClusterSizeIPad;
-(long long)maxIdealClusterSizeIPhone;
-(long long)minClusterSizeIPadAutoFavorite;
-(long long)minClusterSizeIPhoneAutoFavorite;
-(long long)maxClusterSizeIPadAutoFavorite;
-(long long)maxClusterSizeIPhoneAutoFavorite;
-(long long)minIdealClusterSizeIPadAutoFavorite;
-(long long)minIdealClusterSizeIPhoneAutoFavorite;
-(long long)maxIdealClusterSizeIPadAutoFavorite;
-(long long)maxIdealClusterSizeIPhoneAutoFavorite;
-(long long)maxPublisherOccurrencesIPadBestOfBundle;
-(long long)maxPublisherOccurrencesIPhoneBestOfBundle;
-(BOOL)enableOptimizedLayoutIPad;
-(BOOL)enableOptimizedLayoutIPhone;
-(unsigned long long)optimizedLayoutSizeThresholdIPad;
-(unsigned long long)optimizedLayoutSizeThresholdIPhone;
-(unsigned long long)optimizedLayoutIncrementUnitIPad;
-(unsigned long long)optimizedLayoutIncrementUnitIPhone;
-(double)uGroupMinimumSubscribedChannelSourceFeedArticleRatio;
-(double)maxExpandedAutofavoriteGroupCandidateRatio;
-(double)expandedAutofavoriteClusterMinSizeMultiplier;
-(double)expandedAutofavoriteClusterMaxSizeMultiplier;
-(long long)maxPublisherOccurrencesIPadForYouGroup;
-(long long)maxPublisherOccurrencesIPhoneForYouGroup;
-(long long)maxPublisherOccurrencesIPad;
-(long long)maxPublisherOccurrencesIPhone;
-(BOOL)onlyConsiderBestSourceFeedsInForYouGroup;
-(double)topicFeedBaselineRatePrior;
-(double)topicFeedDecayFactor;
-(double)topicFeedDemocratizationFactor;
-(double)topicFeedHalfLifeCoefficient;
-(double)topicFeedSubscribedChannelScoreCoefficient;
-(double)topicFeedCtrWithSubscribedChannel;
-(double)topicFeedMutedVoteCoefficient;
-(double)topicFeedPersonalizationCoefficient;
-(double)topicFeedPublisherAggregateWeight;
-(double)topicFeedArticleLengthAggregateWeight;
-(double)topicFeedGlobalScoreCoefficient;
-(double)topicFeedGlobalScoreCoefficientHalfLife;
-(double)topicFeedGlobalScoreCoefficientInitialMultiplier;
-(double)topicFeedCohortMembershipFavoritedBoost;
-(double)topicFeedCohortMembershipGlobalWeight;
-(double)topicFeedCohortMembershipUserBaseline;
-(double)topicFeedCohortMembershipPreBaselineCurvature;
-(double)topicFeedCohortMembershipPostBaselineCurvature;
-(double)topicFeedCohortMembershipDilutionFactor;
-(double)topicFeedCohortMembershipPaddingFactor;
-(double)topicFeedSubscribedTopicsScoreCoefficient;
-(double)topicFeedCtrWithZeroSubscribed;
-(double)topicFeedCtrWithOneSubscribed;
-(double)topicFeedCtrWithTwoSubscribed;
-(double)topicFeedCtrWithThreeSubscribed;
-(double)topicFeedAutofavoritedVoteCoefficient;
-(double)topicFeedCtrWithZeroAutofavorited;
-(double)topicFeedCtrWithOneAutofavorited;
-(double)topicFeedCtrWithTwoAutofavorited;
-(double)topicFeedCtrWithThreeAutofavorited;
-(double)topicFeedDiversificationInitialPenalty;
-(double)topicFeedDiversificationPenalty;
-(double)topicFeedDiversificationPenaltyHalfLife;
-(double)topicFeedChannelTopicDiversificationInitialPenalty;
-(double)topicFeedChannelTopicDiversificationPenalty;
-(double)topicFeedChannelTopicDiversificationPenaltyHalfLife;
-(double)topicFeedFirstPassHalfLifeCoefficient;
-(double)topicFeedFirstPassDiversificationPenalty;
-(double)topicFeedFirstPassArticleFilter;
-(double)topicFeedBundlePaidMultiplierForFreeUsers;
-(double)topicFeedBundlePaidMultiplierForTrialUsers;
-(double)topicFeedBundlePaidMultiplierForPaidUsers;
-(double)topicFeedBundleFreeMultiplierForFreeUsers;
-(double)topicFeedBundleFreeMultiplierForTrialUsers;
-(double)topicFeedBundleFreeMultiplierForPaidUsers;
-(double)topicFeedFeaturedMultiplierForFreeUsers;
-(double)topicFeedFeaturedMultiplierForTrialUsers;
-(double)topicFeedFeaturedMultiplierForPaidUsers;
-(double)topicFeedHeadlineSeenPenalty;
-(double)topicFeedArticleReadPenalty;
-(double)magazineFeedBaselineRatePrior;
-(double)magazineFeedDecayFactor;
-(double)magazineFeedDemocratizationFactor;
-(double)magazineFeedHalfLifeCoefficient;
-(double)magazineFeedSubscribedChannelScoreCoefficient;
-(double)magazineFeedCtrWithSubscribedChannel;
-(double)magazineFeedMutedVoteCoefficient;
-(double)magazineFeedPersonalizationCoefficient;
-(double)magazineFeedPublisherAggregateWeight;
-(double)magazineFeedArticleLengthAggregateWeight;
-(double)magazineFeedGlobalScoreCoefficient;
-(double)magazineFeedGlobalScoreCoefficientHalfLife;
-(double)magazineFeedGlobalScoreCoefficientInitialMultiplier;
-(double)magazineFeedCohortMembershipFavoritedBoost;
-(double)magazineFeedCohortMembershipGlobalWeight;
-(double)magazineFeedCohortMembershipUserBaseline;
-(double)magazineFeedCohortMembershipPreBaselineCurvature;
-(double)magazineFeedCohortMembershipPostBaselineCurvature;
-(double)magazineFeedCohortMembershipDilutionFactor;
-(double)magazineFeedCohortMembershipPaddingFactor;
-(double)magazineFeedSubscribedTopicsScoreCoefficient;
-(double)magazineFeedCtrWithZeroSubscribed;
-(double)magazineFeedCtrWithOneSubscribed;
-(double)magazineFeedCtrWithTwoSubscribed;
-(double)magazineFeedCtrWithThreeSubscribed;
-(double)magazineFeedAutofavoritedVoteCoefficient;
-(double)magazineFeedCtrWithZeroAutofavorited;
-(double)magazineFeedCtrWithOneAutofavorited;
-(double)magazineFeedCtrWithTwoAutofavorited;
-(double)magazineFeedCtrWithThreeAutofavorited;
-(double)magazineFeedDiversificationInitialPenalty;
-(double)magazineFeedDiversificationPenalty;
-(double)magazineFeedDiversificationPenaltyHalfLife;
-(double)magazineFeedChannelTopicDiversificationInitialPenalty;
-(double)magazineFeedChannelTopicDiversificationPenalty;
-(double)magazineFeedChannelTopicDiversificationPenaltyHalfLife;
-(double)magazineFeedFirstPassHalfLifeCoefficient;
-(double)magazineFeedFirstPassDiversificationPenalty;
-(double)magazineFeedFirstPassArticleFilter;
-(double)magazineFeedBundlePaidMultiplierForFreeUsers;
-(double)magazineFeedBundlePaidMultiplierForTrialUsers;
-(double)magazineFeedBundlePaidMultiplierForPaidUsers;
-(double)magazineFeedBundleFreeMultiplierForFreeUsers;
-(double)magazineFeedBundleFreeMultiplierForTrialUsers;
-(double)magazineFeedBundleFreeMultiplierForPaidUsers;
-(double)magazineFeedFeaturedMultiplierForFreeUsers;
-(double)magazineFeedFeaturedMultiplierForTrialUsers;
-(double)magazineFeedFeaturedMultiplierForPaidUsers;
-(double)magazineFeedHeadlineSeenPenalty;
-(double)magazineFeedArticleReadPenalty;
-(double)articleRecirculationPrimaryFeedBaselineRatePrior;
-(double)articleRecirculationPrimaryFeedDecayFactor;
-(double)articleRecirculationPrimaryFeedDemocratizationFactor;
-(double)articleRecirculationPrimaryFeedHalfLifeCoefficient;
-(double)articleRecirculationPrimaryFeedSubscribedChannelScoreCoefficient;
-(double)articleRecirculationPrimaryFeedCtrWithSubscribedChannel;
-(double)articleRecirculationPrimaryFeedMutedVoteCoefficient;
-(double)articleRecirculationPrimaryFeedPersonalizationCoefficient;
-(double)articleRecirculationPrimaryFeedPublisherAggregateWeight;
-(double)articleRecirculationPrimaryFeedArticleLengthAggregateWeight;
-(double)articleRecirculationPrimaryFeedGlobalScoreCoefficient;
-(double)articleRecirculationPrimaryFeedGlobalScoreCoefficientHalfLife;
-(double)articleRecirculationPrimaryFeedGlobalScoreCoefficientInitialMultiplier;
-(double)articleRecirculationPrimaryFeedCohortMembershipFavoritedBoost;
-(double)articleRecirculationPrimaryFeedCohortMembershipGlobalWeight;
-(double)articleRecirculationPrimaryFeedCohortMembershipUserBaseline;
-(double)articleRecirculationPrimaryFeedCohortMembershipPreBaselineCurvature;
-(double)articleRecirculationPrimaryFeedCohortMembershipPostBaselineCurvature;
-(double)articleRecirculationPrimaryFeedCohortMembershipDilutionFactor;
-(double)articleRecirculationPrimaryFeedCohortMembershipPaddingFactor;
-(double)articleRecirculationPrimaryFeedSubscribedTopicsScoreCoefficient;
-(double)articleRecirculationPrimaryFeedCtrWithZeroSubscribed;
-(double)articleRecirculationPrimaryFeedCtrWithOneSubscribed;
-(double)articleRecirculationPrimaryFeedCtrWithTwoSubscribed;
-(double)articleRecirculationPrimaryFeedCtrWithThreeSubscribed;
-(double)articleRecirculationPrimaryFeedAutofavoritedVoteCoefficient;
-(double)articleRecirculationPrimaryFeedCtrWithZeroAutofavorited;
-(double)articleRecirculationPrimaryFeedCtrWithOneAutofavorited;
-(double)articleRecirculationPrimaryFeedCtrWithTwoAutofavorited;
-(double)articleRecirculationPrimaryFeedCtrWithThreeAutofavorited;
-(double)articleRecirculationPrimaryFeedDiversificationInitialPenalty;
-(double)articleRecirculationPrimaryFeedDiversificationPenalty;
-(double)articleRecirculationPrimaryFeedDiversificationPenaltyHalfLife;
-(double)articleRecirculationPrimaryFeedChannelTopicDiversificationInitialPenalty;
-(double)articleRecirculationPrimaryFeedChannelTopicDiversificationPenalty;
-(double)articleRecirculationPrimaryFeedChannelTopicDiversificationPenaltyHalfLife;
-(double)articleRecirculationPrimaryFeedFirstPassHalfLifeCoefficient;
-(double)articleRecirculationPrimaryFeedFirstPassDiversificationPenalty;
-(double)articleRecirculationPrimaryFeedFirstPassArticleFilter;
-(double)articleRecirculationPrimaryFeedBundlePaidMultiplierForFreeUsers;
-(double)articleRecirculationPrimaryFeedBundlePaidMultiplierForTrialUsers;
-(double)articleRecirculationPrimaryFeedBundlePaidMultiplierForPaidUsers;
-(double)articleRecirculationPrimaryFeedBundleFreeMultiplierForFreeUsers;
-(double)articleRecirculationPrimaryFeedBundleFreeMultiplierForTrialUsers;
-(double)articleRecirculationPrimaryFeedBundleFreeMultiplierForPaidUsers;
-(double)articleRecirculationPrimaryFeedFeaturedMultiplierForFreeUsers;
-(double)articleRecirculationPrimaryFeedFeaturedMultiplierForTrialUsers;
-(double)articleRecirculationPrimaryFeedFeaturedMultiplierForPaidUsers;
-(double)articleRecirculationPrimaryFeedHeadlineSeenPenalty;
-(double)articleRecirculationPrimaryFeedArticleReadPenalty;
-(double)articleRecirculationSecondaryFeedBaselineRatePrior;
-(double)articleRecirculationSecondaryFeedDecayFactor;
-(double)articleRecirculationSecondaryFeedDemocratizationFactor;
-(double)articleRecirculationSecondaryFeedHalfLifeCoefficient;
-(double)articleRecirculationSecondaryFeedSubscribedChannelScoreCoefficient;
-(double)articleRecirculationSecondaryFeedCtrWithSubscribedChannel;
-(double)articleRecirculationSecondaryFeedMutedVoteCoefficient;
-(double)articleRecirculationSecondaryFeedPersonalizationCoefficient;
-(double)articleRecirculationSecondaryFeedPublisherAggregateWeight;
-(double)articleRecirculationSecondaryFeedArticleLengthAggregateWeight;
-(double)articleRecirculationSecondaryFeedGlobalScoreCoefficient;
-(double)articleRecirculationSecondaryFeedGlobalScoreCoefficientHalfLife;
-(double)articleRecirculationSecondaryFeedGlobalScoreCoefficientInitialMultiplier;
-(double)articleRecirculationSecondaryFeedCohortMembershipFavoritedBoost;
-(double)articleRecirculationSecondaryFeedCohortMembershipGlobalWeight;
-(double)articleRecirculationSecondaryFeedCohortMembershipUserBaseline;
-(double)articleRecirculationSecondaryFeedCohortMembershipPreBaselineCurvature;
-(double)articleRecirculationSecondaryFeedCohortMembershipPostBaselineCurvature;
-(double)articleRecirculationSecondaryFeedCohortMembershipDilutionFactor;
-(double)articleRecirculationSecondaryFeedCohortMembershipPaddingFactor;
-(double)articleRecirculationSecondaryFeedSubscribedTopicsScoreCoefficient;
-(double)articleRecirculationSecondaryFeedCtrWithZeroSubscribed;
-(double)articleRecirculationSecondaryFeedCtrWithOneSubscribed;
-(double)articleRecirculationSecondaryFeedCtrWithTwoSubscribed;
-(double)articleRecirculationSecondaryFeedCtrWithThreeSubscribed;
-(double)articleRecirculationSecondaryFeedAutofavoritedVoteCoefficient;
-(double)articleRecirculationSecondaryFeedCtrWithZeroAutofavorited;
-(double)articleRecirculationSecondaryFeedCtrWithOneAutofavorited;
-(double)articleRecirculationSecondaryFeedCtrWithTwoAutofavorited;
-(double)articleRecirculationSecondaryFeedCtrWithThreeAutofavorited;
-(double)articleRecirculationSecondaryFeedDiversificationInitialPenalty;
-(double)articleRecirculationSecondaryFeedDiversificationPenalty;
-(double)articleRecirculationSecondaryFeedDiversificationPenaltyHalfLife;
-(double)articleRecirculationSecondaryFeedChannelTopicDiversificationInitialPenalty;
-(double)articleRecirculationSecondaryFeedChannelTopicDiversificationPenalty;
-(double)articleRecirculationSecondaryFeedChannelTopicDiversificationPenaltyHalfLife;
-(double)articleRecirculationSecondaryFeedFirstPassHalfLifeCoefficient;
-(double)articleRecirculationSecondaryFeedFirstPassDiversificationPenalty;
-(double)articleRecirculationSecondaryFeedFirstPassArticleFilter;
-(double)articleRecirculationSecondaryFeedBundlePaidMultiplierForFreeUsers;
-(double)articleRecirculationSecondaryFeedBundlePaidMultiplierForTrialUsers;
-(double)articleRecirculationSecondaryFeedBundlePaidMultiplierForPaidUsers;
-(double)articleRecirculationSecondaryFeedBundleFreeMultiplierForFreeUsers;
-(double)articleRecirculationSecondaryFeedBundleFreeMultiplierForTrialUsers;
-(double)articleRecirculationSecondaryFeedBundleFreeMultiplierForPaidUsers;
-(double)articleRecirculationSecondaryFeedFeaturedMultiplierForFreeUsers;
-(double)articleRecirculationSecondaryFeedFeaturedMultiplierForTrialUsers;
-(double)articleRecirculationSecondaryFeedFeaturedMultiplierForPaidUsers;
-(double)articleRecirculationSecondaryFeedHeadlineSeenPenalty;
-(double)articleRecirculationSecondaryFeedArticleReadPenalty;
-(double)bestOfBundleBaselineRatePrior;
-(double)bestOfBundleDecayFactor;
-(double)bestOfBundleDemocratizationFactor;
-(double)bestOfBundleHalfLifeCoefficient;
-(double)bestOfBundleSubscribedChannelScoreCoefficient;
-(double)bestOfBundleCtrWithSubscribedChannel;
-(double)bestOfBundleMutedVoteCoefficient;
-(double)bestOfBundlePersonalizationCoefficient;
-(double)bestOfBundlePublisherAggregateWeight;
-(double)bestOfBundleArticleLengthAggregateWeight;
-(double)bestOfBundleGlobalScoreCoefficient;
-(double)bestOfBundleGlobalScoreCoefficientHalfLife;
-(double)bestOfBundleGlobalScoreCoefficientInitialMultiplier;
-(double)bestOfBundleCohortMembershipFavoritedBoost;
-(double)bestOfBundleCohortMembershipGlobalWeight;
-(double)bestOfBundleCohortMembershipUserBaseline;
-(double)bestOfBundleCohortMembershipPreBaselineCurvature;
-(double)bestOfBundleCohortMembershipPostBaselineCurvature;
-(double)bestOfBundleCohortMembershipDilutionFactor;
-(double)bestOfBundleCohortMembershipPaddingFactor;
-(double)bestOfBundleSubscribedTopicsScoreCoefficient;
-(double)bestOfBundleCtrWithZeroSubscribed;
-(double)bestOfBundleCtrWithOneSubscribed;
-(double)bestOfBundleCtrWithTwoSubscribed;
-(double)bestOfBundleCtrWithThreeSubscribed;
-(double)bestOfBundleAutofavoritedVoteCoefficient;
-(double)bestOfBundleCtrWithZeroAutofavorited;
-(double)bestOfBundleCtrWithOneAutofavorited;
-(double)bestOfBundleCtrWithTwoAutofavorited;
-(double)bestOfBundleCtrWithThreeAutofavorited;
-(double)bestOfBundleDiversificationInitialPenalty;
-(double)bestOfBundleDiversificationPenalty;
-(double)bestOfBundleDiversificationPenaltyHalfLife;
-(double)bestOfBundleChannelTopicDiversificationInitialPenalty;
-(double)bestOfBundleChannelTopicDiversificationPenalty;
-(double)bestOfBundleChannelTopicDiversificationPenaltyHalfLife;
-(double)bestOfBundleFirstPassHalfLifeCoefficient;
-(double)bestOfBundleFirstPassDiversificationPenalty;
-(double)bestOfBundleFirstPassArticleFilter;
-(double)bestOfBundleBundlePaidMultiplierForFreeUsers;
-(double)bestOfBundleBundlePaidMultiplierForTrialUsers;
-(double)bestOfBundleBundlePaidMultiplierForPaidUsers;
-(double)bestOfBundleBundleFreeMultiplierForFreeUsers;
-(double)bestOfBundleBundleFreeMultiplierForTrialUsers;
-(double)bestOfBundleBundleFreeMultiplierForPaidUsers;
-(double)bestOfBundleFeaturedMultiplierForFreeUsers;
-(double)bestOfBundleFeaturedMultiplierForTrialUsers;
-(double)bestOfBundleFeaturedMultiplierForPaidUsers;
-(double)bestOfBundleHeadlineSeenPenalty;
-(double)bestOfBundleArticleReadPenalty;
-(double)forYouGroupBaselineRatePrior;
-(double)forYouGroupDecayFactor;
-(double)forYouGroupDemocratizationFactor;
-(double)forYouGroupHalfLifeCoefficient;
-(double)forYouGroupSubscribedChannelScoreCoefficient;
-(double)forYouGroupCtrWithSubscribedChannel;
-(double)forYouGroupMutedVoteCoefficient;
-(double)forYouGroupPersonalizationCoefficient;
-(double)forYouGroupPublisherAggregateWeight;
-(double)forYouGroupArticleLengthAggregateWeight;
-(double)forYouGroupGlobalScoreCoefficient;
-(double)forYouGroupGlobalScoreCoefficientHalfLife;
-(double)forYouGroupGlobalScoreCoefficientInitialMultiplier;
-(double)forYouGroupCohortMembershipFavoritedBoost;
-(double)forYouGroupCohortMembershipGlobalWeight;
-(double)forYouGroupCohortMembershipUserBaseline;
-(double)forYouGroupCohortMembershipPreBaselineCurvature;
-(double)forYouGroupCohortMembershipPostBaselineCurvature;
-(double)forYouGroupCohortMembershipDilutionFactor;
-(double)forYouGroupCohortMembershipPaddingFactor;
-(double)forYouGroupSubscribedTopicsScoreCoefficient;
-(double)forYouGroupCtrWithZeroSubscribed;
-(double)forYouGroupCtrWithOneSubscribed;
-(double)forYouGroupCtrWithTwoSubscribed;
-(double)forYouGroupCtrWithThreeSubscribed;
-(double)forYouGroupAutofavoritedVoteCoefficient;
-(double)forYouGroupCtrWithZeroAutofavorited;
-(double)forYouGroupCtrWithOneAutofavorited;
-(double)forYouGroupCtrWithTwoAutofavorited;
-(double)forYouGroupCtrWithThreeAutofavorited;
-(double)forYouGroupDiversificationInitialPenalty;
-(double)forYouGroupDiversificationPenalty;
-(double)forYouGroupDiversificationPenaltyHalfLife;
-(double)forYouGroupChannelTopicDiversificationInitialPenalty;
-(double)forYouGroupChannelTopicDiversificationPenalty;
-(double)forYouGroupChannelTopicDiversificationPenaltyHalfLife;
-(double)forYouGroupFirstPassHalfLifeCoefficient;
-(double)forYouGroupFirstPassDiversificationPenalty;
-(double)forYouGroupFirstPassArticleFilter;
-(double)forYouGroupBundlePaidMultiplierForFreeUsers;
-(double)forYouGroupBundlePaidMultiplierForTrialUsers;
-(double)forYouGroupBundlePaidMultiplierForPaidUsers;
-(double)forYouGroupBundleFreeMultiplierForFreeUsers;
-(double)forYouGroupBundleFreeMultiplierForTrialUsers;
-(double)forYouGroupBundleFreeMultiplierForPaidUsers;
-(double)forYouGroupFeaturedMultiplierForFreeUsers;
-(double)forYouGroupFeaturedMultiplierForTrialUsers;
-(double)forYouGroupFeaturedMultiplierForPaidUsers;
-(double)forYouGroupHeadlineSeenPenalty;
-(double)forYouGroupArticleReadPenalty;
-(double)diversificationInitialPenalty;
-(double)diversificationPenalty;
-(double)diversificationPenaltyHalfLife;
-(double)channelTopicDiversificationInitialPenalty;
-(double)channelTopicDiversificationPenalty;
-(double)channelTopicDiversificationPenaltyHalfLife;
-(id)treatmentDictionary;
-(long long)treatmentID;
-(double)hourlyFlowRateMinimum;
-(double)hourlyFlowRateSubscriptionCountBuffer;
-(double)hourlyFlowRateDampeningFactor;
-(double)hourlyFlowRatePerSubscription;
-(long long)extraArticlesToShowUser;
-(double)hourlyFlowRateDecayFactor;
-(double)hourlyFlowRatePriorWeight;
-(double)hourlyFlowRateFloor;
-(double)hourlyFlowRateCeiling;
-(double)hourlyFlowRateAlpha;
-(double)hourlyFlowRateBeta;
-(double)hourlyFlowRateGamma;
-(double)baselineImpressionPrior;
-(double)featureImpressionPrior;
-(double)publisherDiversificationPenalty;
-(double)publisherDiversificationInitialPenalty;
-(double)publisherDiversificationPenaltyHalfLife;
-(long long)publisherTopicIDEventCountMinimum;
-(double)presentationImpressionValue;
-(double)heavyClickImpressionValue;
-(double)likeImpressionValue;
-(double)shareImpressionValue;
-(double)savedImpressionValue;
-(double)subscribeImpressionValue;
-(double)subscribeRelatedImpressionValue;
-(double)existingSubscriptionImpressionValue;
-(double)existingSubscriptionRelatedImpressionValue;
-(double)unsubscribeImpressionValue;
-(double)tappedImpressionValue;
-(double)weakClickImpressionValue;
-(double)visitImpressionValue;
-(double)dislikeImpressionValue;
-(double)recommendationPresentationFeedImpressionValue;
-(double)recommendationPresentationExploreImpressionValue;
-(double)premiumSubscriptionActivationImpressionValue;
-(double)muteImpressionValue;
-(double)unmuteImpressionValue;
-(double)videoInitiatePlaybackImpressionValue;
-(double)videoCompletePlaybackImpressionValue;
-(double)videoComplete25ImpressionValue;
-(double)videoComplete50ImpressionValue;
-(double)videoComplete75ImpressionValue;
-(double)newsTodayWidgetPresentationImpressionValue;
-(double)newsTodayWidgetClickImpressionValue;
-(double)newsTodayWidgetVideoPlaybackImpressionValue;
-(double)appInstallImpressionValue;
-(double)appInFocusImpressionValue;
-(double)safariHistoryImpressionValue;
-(double)publisherBoostForSourceMoreFromFeedImpressionValue;
-(double)topicBoostForSourceRelatedFeedImpressionValue;
-(double)publisherBoostForIssueOpenImpressionValue;
-(double)presentationClickValue;
-(double)heavyClickClickValue;
-(double)likeClickValue;
-(double)shareClickValue;
-(double)savedClickValue;
-(double)subscribeClickValue;
-(double)subscribeRelatedClickValue;
-(double)existingSubscriptionClickValue;
-(double)existingSubscriptionRelatedClickValue;
-(double)unsubscribeClickValue;
-(double)tappedClickValue;
-(double)weakClickClickValue;
-(double)visitClickValue;
-(double)dislikeClickValue;
-(double)recommendationPresentationFeedClickValue;
-(double)recommendationPresentationExploreClickValue;
-(double)premiumSubscriptionActivationClickValue;
-(double)muteClickValue;
-(double)unmuteClickValue;
-(double)videoInitiatePlaybackClickValue;
-(double)videoCompletePlaybackClickValue;
-(double)videoComplete25ClickValue;
-(double)videoComplete50ClickValue;
-(double)videoComplete75ClickValue;
-(double)newsTodayWidgetPresentationClickValue;
-(double)newsTodayWidgetClickClickValue;
-(double)newsTodayWidgetVideoPlaybackClickValue;
-(double)appInstallClickValue;
-(double)appInFocusClickValue;
-(double)safariHistoryClickValue;
-(double)publisherBoostForSourceMoreFromFeedClickValue;
-(double)topicBoostForSourceRelatedFeedClickValue;
-(double)publisherBoostForIssueOpenClickValue;
-(double)presentationBaselineImpressionValue;
-(double)heavyClickBaselineImpressionValue;
-(double)likeBaselineImpressionValue;
-(double)shareBaselineImpressionValue;
-(double)savedBaselineImpressionValue;
-(double)subscribeBaselineImpressionValue;
-(double)subscribeRelatedBaselineImpressionValue;
-(double)existingSubscriptionBaselineImpressionValue;
-(double)existingSubscriptionRelatedBaselineImpressionValue;
-(double)unsubscribeBaselineImpressionValue;
-(double)tappedBaselineImpressionValue;
-(double)weakClickBaselineImpressionValue;
-(double)visitBaselineImpressionValue;
-(double)dislikeBaselineImpressionValue;
-(double)recommendationPresentationFeedBaselineImpressionValue;
-(double)recommendationPresentationExploreBaselineImpressionValue;
-(double)premiumSubscriptionActivationBaselineImpressionValue;
-(double)muteBaselineImpressionValue;
-(double)unmuteBaselineImpressionValue;
-(double)videoInitiatePlaybackBaselineImpressionValue;
-(double)videoCompletePlaybackBaselineImpressionValue;
-(double)videoComplete25BaselineImpressionValue;
-(double)videoComplete50BaselineImpressionValue;
-(double)videoComplete75BaselineImpressionValue;
-(double)newsTodayWidgetPresentationBaselineImpressionValue;
-(double)newsTodayWidgetClickBaselineImpressionValue;
-(double)newsTodayWidgetVideoPlaybackBaselineImpressionValue;
-(double)appInstallBaselineImpressionValue;
-(double)appInFocusBaselineImpressionValue;
-(double)safariHistoryBaselineImpressionValue;
-(double)publisherBoostForSourceMoreFromFeedBaselineImpressionValue;
-(double)topicBoostForSourceRelatedFeedBaselineImpressionValue;
-(double)publisherBoostForIssueOpenBaselineImpressionValue;
-(double)presentationBaselineClickValue;
-(double)heavyClickBaselineClickValue;
-(double)likeBaselineClickValue;
-(double)shareBaselineClickValue;
-(double)savedBaselineClickValue;
-(double)subscribeBaselineClickValue;
-(double)subscribeRelatedBaselineClickValue;
-(double)existingSubscriptionBaselineClickValue;
-(double)existingSubscriptionRelatedBaselineClickValue;
-(double)unsubscribeBaselineClickValue;
-(double)tappedBaselineClickValue;
-(double)weakClickBaselineClickValue;
-(double)visitBaselineClickValue;
-(double)dislikeBaselineClickValue;
-(double)recommendationPresentationFeedBaselineClickValue;
-(double)recommendationPresentationExploreBaselineClickValue;
-(double)premiumSubscriptionActivationBaselineClickValue;
-(double)muteBaselineClickValue;
-(double)unmuteBaselineClickValue;
-(double)videoInitiatePlaybackBaselineClickValue;
-(double)videoCompletePlaybackBaselineClickValue;
-(double)videoComplete25BaselineClickValue;
-(double)videoComplete50BaselineClickValue;
-(double)videoComplete75BaselineClickValue;
-(double)newsTodayWidgetPresentationBaselineClickValue;
-(double)newsTodayWidgetClickBaselineClickValue;
-(double)newsTodayWidgetVideoPlaybackBaselineClickValue;
-(double)appInstallBaselineClickValue;
-(double)appInFocusBaselineClickValue;
-(double)safariHistoryBaselineClickValue;
-(double)publisherBoostForSourceMoreFromFeedBaselineClickValue;
-(double)topicBoostForSourceRelatedFeedBaselineClickValue;
-(double)publisherBoostForIssueOpenBaselineClickValue;
-(double)heavyClickMinimumDuration;
-(double)swipeToArticleWeakClickMinimumDuration;
-(double)swipeToArticleHeavyClickMinimumDuration;
-(double)lowQualityContentThreshold;
-(unsigned long long)publisherDiversityMinPublisherCount;
-(unsigned long long)publisherDiversityMaxPublisherCount;
-(double)publisherDiversityMaxArticleFilter;
-(double)internalUsageSignalWeight;
-(double)autoFavoriteMinClicks;
-(double)autoFavoriteMinEvents;
-(double)autoFavoriteMinRate;
-(double)autoFavoriteMinRelativeRate;
-(double)autoUnfavoriteFactor;
-(double)autoGroupableFactor;
-(double)autoFavoriteTagFavorabilityExponent;
-(double)autoFavoritePriorFactorExponent;
-(double)autoFavoriteMaxIdleTime;
-(double)safariSignalWeight;
-(double)safariTimeDecayMultiplier;
-(double)safariOccurrenceDecayMultiplier;
-(double)autoFavoriteMinObservationsSafari;
-(double)autoFavoriteMinScoreSafari;
-(double)safariTagFavorabilityExponent;
-(double)safariPriorFactorExponent;
-(double)safariEventBlackoutSeconds;
-(double)appUsageSignalWeight;
-(double)appUsageTimeDecayMultiplier;
-(double)appUsageOccurrenceDecayMultiplier;
-(double)autoFavoriteMinObservationsExtAppUsage;
-(double)autoFavoriteMinScoreExtAppUsage;
-(double)appUsageTagFavorabilityExponent;
-(double)appUsagePriorFactorExponent;
-(double)portraitSignalWeight;
-(double)portraitDecayRate;
-(double)portraitGlobalThreshold;
-(double)portraitTagFavorabilityExponent;
-(double)portraitPriorFactorExponent;
-(double)groupImpressionBiasCorrectionFactor;
-(double)indexImpressionBiasCorrectionFactor;
-(long long)maxNumberOfSuggestions;
-(long long)numEventsToDisableDefaultTopics;
-(long long)numSubscriptionsToDisableDefaultTopics;
-(double)magazineFeedGroupScoreWeight;
-(double)topStoriesGroupAggregatesGroupBias;
-(double)trendingGroupAggregatesGroupBias;
@end

