/*
* Generated on Thursday, January 14, 2021 at 2:23:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBAlternateHeadline, NSString, NSData, NTPBChannelData, NSMutableArray, NTPBIssueData, NTPBIssueExposureData, NTPBIssueViewContextData, NTPBIssueViewData, NTPBWidgetEngagement;

@interface NTPBArticleHostViewExposure : PBCodable <NSCopying> {

	double _agedPersonalizationScore;
	double _agedUserFeedbackScore;
	double _autoSubscribeCtr;
	long long _backendArticleVersionInt64;
	double _computedGlobalScoreCoefficient;
	double _diversifiedPersonalizationScore;
	double _featureCtr;
	double _globalScore;
	double _paidNonpaidSubscriptionCtr;
	double _personalizationScore;
	long long _personalizationTreatmentId;
	long long _previousArticlePublisherArticleVersion;
	long long _publisherArticleVersionInt64;
	double _subscribedChannelCtr;
	double _userFeedbackScore;
	int _activeTimeSpent;
	NTPBAlternateHeadline* _alternateHeadline;
	NSString* _anfComponentId;
	int _articleDisplayRankInGroup;
	int _articleHostViewType;
	NSString* _articleId;
	NSData* _articleSessionId;
	int _articleSuggestionOrigin;
	int _articleType;
	int _articleViewPresentationReason;
	NSData* _articleViewingSessionId;
	int _backendArticleVersion;
	int _breakingNewsArticleCount;
	int _breakingNewsArticlePosition;
	NSString* _campaignId;
	NSString* _campaignType;
	NTPBChannelData* _channelData;
	int _characterCount;
	int _coverArticleDisplayRank;
	int _coverArticleFeatureType;
	NSString* _creativeId;
	NSString* _curatedBatchId;
	int _curatedContentType;
	int _displayRank;
	NSString* _exposedGroupSourceChannelId;
	NSString* _exposedInLocationId;
	int _feedAutoSubscribeType;
	int _feedCellHostType;
	int _feedPresentationReason;
	NSString* _feedPresentationReasonSearchString;
	int _feedSubscriptionOrigin;
	NSData* _feedViewExposureId;
	NSMutableArray* _fractionalCohortMemberships;
	int _groupArticleCountInForYou;
	int _groupDisplayRankInForYou;
	NSString* _groupFeedId;
	int _groupFormationReason;
	int _groupLocation;
	int _groupPresentationReason;
	int _groupType;
	NSData* _groupViewExposureId;
	int _heroArticleType;
	NSString* _iadNativeAd;
	NSString* _iadNativeCampaign;
	NSString* _iadNativeCampaignAd;
	NSString* _iadNativeLine;
	NTPBIssueData* _issueData;
	NTPBIssueExposureData* _issueExposureData;
	NTPBIssueViewContextData* _issueViewContextData;
	NTPBIssueViewData* _issueViewData;
	NSString* _language;
	int _loadFailureReason;
	int _maxActiveTimeSpent;
	float _maxVerticalScrollPositionEnding;
	int _moduleEventType;
	NSData* _moduleExposureId;
	int _moduleItemCount;
	int _moduleItemPosition;
	int _moduleLocation;
	NSMutableArray* _namedEntities;
	NSString* _nativeCampaignData;
	int _nextArticleAffordanceType;
	NSString* _nextArticleAffordanceTypeFeedId;
	NSString* _notificationId;
	int _paidSubscriberToFeedType;
	NSString* _parentFeedId;
	int _parentFeedType;
	int _previousArticleHostViewTypeIfSwipe;
	NSString* _previousArticleId;
	NSString* _previousArticleVersion;
	NSString* _previousWebEmbedId;
	int _previousWebEmbedLocation;
	int _publisherArticleVersion;
	NSMutableArray* _purchaseOffersItems;
	int _rankInVideoPlaylist;
	NSString* _referencedArticleId;
	NSString* _referringSourceApplication;
	NSString* _referringUrl;
	int _role;
	NSString* _sectionHeadlineId;
	NSString* _sourceBinId;
	NSString* _sourceChannelId;
	NSString* _storyType;
	NSString* _surfacedByChannelId;
	NSString* _surfacedBySectionId;
	NSMutableArray* _surfacedByTagIds;
	NSString* _surfacedByTopicId;
	int _topStoryMandatoryArticleCount;
	int _topStoryOptionalArticleCount;
	int _topStoryType;
	NSMutableArray* _topicIds;
	NSString* _userActivityType;
	NSString* _viewFrameInScreen;
	NSString* _webEmbedId;
	int _widgetArticleRank;
	NTPBWidgetEngagement* _widgetEngagement;
	int _widgetSection;
	int _widgetSectionArticleRank;
	BOOL _adSupportedChannel;
	BOOL _articleLoaded;
	BOOL _badgeExposure;
	BOOL _didBounce;
	BOOL _didExpandDuringView;
	BOOL _didOpenInSafari;
	BOOL _isAudioEligible;
	BOOL _isAudioEngaged;
	BOOL _isBreakingNewsArticle;
	BOOL _isCoverArticle;
	BOOL _isDigitalReplicaAd;
	BOOL _isExplorationArticle;
	BOOL _isFreeArticle;
	BOOL _isGroupedArticle;
	BOOL _isNativeAd;
	BOOL _isNewUserToArticle;
	BOOL _isPaidSubscriberToFeed;
	BOOL _isPaidSubscriberToSourceChannel;
	BOOL _isSharedSubscriptionOnlyArticle;
	BOOL _isSubscribedToGroupFeed;
	BOOL _isSubscribedToSourceChannel;
	BOOL _isTopStoryArticle;
	BOOL _isUserSubscribedToParentFeed;
	BOOL _isVideoInFeed;
	BOOL _subscriptionOnlyArticle;
	BOOL _viewFromNotificationDirectOpen;
	SCD_Struct_NT16 _has;

}

@property (assign,nonatomic) BOOL hasArticleHostViewType; 
@property (assign,nonatomic) int articleHostViewType;                                       //@synthesize articleHostViewType=_articleHostViewType - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                                          //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasReferencedArticleId; 
@property (nonatomic,retain) NSString * referencedArticleId;                                //@synthesize referencedArticleId=_referencedArticleId - In the implementation block
@property (assign,nonatomic) BOOL hasPublisherArticleVersion; 
@property (assign,nonatomic) int publisherArticleVersion;                                   //@synthesize publisherArticleVersion=_publisherArticleVersion - In the implementation block
@property (assign,nonatomic) BOOL hasBackendArticleVersion; 
@property (assign,nonatomic) int backendArticleVersion;                                     //@synthesize backendArticleVersion=_backendArticleVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleSessionId; 
@property (nonatomic,retain) NSData * articleSessionId;                                     //@synthesize articleSessionId=_articleSessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleViewingSessionId; 
@property (nonatomic,retain) NSData * articleViewingSessionId;                              //@synthesize articleViewingSessionId=_articleViewingSessionId - In the implementation block
@property (assign,nonatomic) BOOL hasDisplayRank; 
@property (assign,nonatomic) int displayRank;                                               //@synthesize displayRank=_displayRank - In the implementation block
@property (assign,nonatomic) BOOL hasArticleViewPresentationReason; 
@property (assign,nonatomic) int articleViewPresentationReason;                             //@synthesize articleViewPresentationReason=_articleViewPresentationReason - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedViewExposureId; 
@property (nonatomic,retain) NSData * feedViewExposureId;                                   //@synthesize feedViewExposureId=_feedViewExposureId - In the implementation block
@property (assign,nonatomic) BOOL hasFeedPresentationReason; 
@property (assign,nonatomic) int feedPresentationReason;                                    //@synthesize feedPresentationReason=_feedPresentationReason - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedPresentationReasonSearchString; 
@property (nonatomic,retain) NSString * feedPresentationReasonSearchString;                 //@synthesize feedPresentationReasonSearchString=_feedPresentationReasonSearchString - In the implementation block
@property (assign,nonatomic) BOOL hasFeedCellHostType; 
@property (assign,nonatomic) int feedCellHostType;                                          //@synthesize feedCellHostType=_feedCellHostType - In the implementation block
@property (assign,nonatomic) BOOL hasParentFeedType; 
@property (assign,nonatomic) int parentFeedType;                                            //@synthesize parentFeedType=_parentFeedType - In the implementation block
@property (nonatomic,readonly) BOOL hasParentFeedId; 
@property (nonatomic,retain) NSString * parentFeedId;                                       //@synthesize parentFeedId=_parentFeedId - In the implementation block
@property (assign,nonatomic) BOOL hasIsUserSubscribedToParentFeed; 
@property (assign,nonatomic) BOOL isUserSubscribedToParentFeed;                             //@synthesize isUserSubscribedToParentFeed=_isUserSubscribedToParentFeed - In the implementation block
@property (assign,nonatomic) BOOL hasActiveTimeSpent; 
@property (assign,nonatomic) int activeTimeSpent;                                           //@synthesize activeTimeSpent=_activeTimeSpent - In the implementation block
@property (assign,nonatomic) BOOL hasMaxActiveTimeSpent; 
@property (assign,nonatomic) int maxActiveTimeSpent;                                        //@synthesize maxActiveTimeSpent=_maxActiveTimeSpent - In the implementation block
@property (assign,nonatomic) BOOL hasDidBounce; 
@property (assign,nonatomic) BOOL didBounce;                                                //@synthesize didBounce=_didBounce - In the implementation block
@property (assign,nonatomic) BOOL hasIsNewUserToArticle; 
@property (assign,nonatomic) BOOL isNewUserToArticle;                                       //@synthesize isNewUserToArticle=_isNewUserToArticle - In the implementation block
@property (assign,nonatomic) BOOL hasDidOpenInSafari; 
@property (assign,nonatomic) BOOL didOpenInSafari;                                          //@synthesize didOpenInSafari=_didOpenInSafari - In the implementation block
@property (assign,nonatomic) BOOL hasIsExplorationArticle; 
@property (assign,nonatomic) BOOL isExplorationArticle;                                     //@synthesize isExplorationArticle=_isExplorationArticle - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceBinId; 
@property (nonatomic,retain) NSString * sourceBinId;                                        //@synthesize sourceBinId=_sourceBinId - In the implementation block
@property (assign,nonatomic) BOOL hasAdSupportedChannel; 
@property (assign,nonatomic) BOOL adSupportedChannel;                                       //@synthesize adSupportedChannel=_adSupportedChannel - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                                    //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (nonatomic,readonly) BOOL hasViewFrameInScreen; 
@property (nonatomic,retain) NSString * viewFrameInScreen;                                  //@synthesize viewFrameInScreen=_viewFrameInScreen - In the implementation block
@property (assign,nonatomic) BOOL hasCharacterCount; 
@property (assign,nonatomic) int characterCount;                                            //@synthesize characterCount=_characterCount - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language;                                           //@synthesize language=_language - In the implementation block
@property (nonatomic,retain) NSMutableArray * namedEntities;                                //@synthesize namedEntities=_namedEntities - In the implementation block
@property (assign,nonatomic) BOOL hasArticleType; 
@property (assign,nonatomic) int articleType;                                               //@synthesize articleType=_articleType - In the implementation block
@property (nonatomic,readonly) BOOL hasSurfacedByChannelId; 
@property (nonatomic,retain) NSString * surfacedByChannelId;                                //@synthesize surfacedByChannelId=_surfacedByChannelId - In the implementation block
@property (nonatomic,readonly) BOOL hasSurfacedBySectionId; 
@property (nonatomic,retain) NSString * surfacedBySectionId;                                //@synthesize surfacedBySectionId=_surfacedBySectionId - In the implementation block
@property (nonatomic,readonly) BOOL hasSurfacedByTopicId; 
@property (nonatomic,retain) NSString * surfacedByTopicId;                                  //@synthesize surfacedByTopicId=_surfacedByTopicId - In the implementation block
@property (nonatomic,readonly) BOOL hasSectionHeadlineId; 
@property (nonatomic,retain) NSString * sectionHeadlineId;                                  //@synthesize sectionHeadlineId=_sectionHeadlineId - In the implementation block
@property (nonatomic,readonly) BOOL hasReferringSourceApplication; 
@property (nonatomic,retain) NSString * referringSourceApplication;                         //@synthesize referringSourceApplication=_referringSourceApplication - In the implementation block
@property (nonatomic,readonly) BOOL hasReferringUrl; 
@property (nonatomic,retain) NSString * referringUrl;                                       //@synthesize referringUrl=_referringUrl - In the implementation block
@property (assign,nonatomic) BOOL hasIsDigitalReplicaAd; 
@property (assign,nonatomic) BOOL isDigitalReplicaAd;                                       //@synthesize isDigitalReplicaAd=_isDigitalReplicaAd - In the implementation block
@property (assign,nonatomic) BOOL hasPreviousArticleHostViewTypeIfSwipe; 
@property (assign,nonatomic) int previousArticleHostViewTypeIfSwipe;                        //@synthesize previousArticleHostViewTypeIfSwipe=_previousArticleHostViewTypeIfSwipe - In the implementation block
@property (assign,nonatomic) BOOL hasIsVideoInFeed; 
@property (assign,nonatomic) BOOL isVideoInFeed;                                            //@synthesize isVideoInFeed=_isVideoInFeed - In the implementation block
@property (assign,nonatomic) BOOL hasIsTopStoryArticle; 
@property (assign,nonatomic) BOOL isTopStoryArticle;                                        //@synthesize isTopStoryArticle=_isTopStoryArticle - In the implementation block
@property (nonatomic,readonly) BOOL hasStoryType; 
@property (nonatomic,retain) NSString * storyType;                                          //@synthesize storyType=_storyType - In the implementation block
@property (assign,nonatomic) BOOL hasPersonalizationTreatmentId; 
@property (assign,nonatomic) long long personalizationTreatmentId;                          //@synthesize personalizationTreatmentId=_personalizationTreatmentId - In the implementation block
@property (nonatomic,readonly) BOOL hasUserActivityType; 
@property (nonatomic,retain) NSString * userActivityType;                                   //@synthesize userActivityType=_userActivityType - In the implementation block
@property (assign,nonatomic) BOOL hasIsGroupedArticle; 
@property (assign,nonatomic) BOOL isGroupedArticle;                                         //@synthesize isGroupedArticle=_isGroupedArticle - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupFeedId; 
@property (nonatomic,retain) NSString * groupFeedId;                                        //@synthesize groupFeedId=_groupFeedId - In the implementation block
@property (assign,nonatomic) BOOL hasGroupType; 
@property (assign,nonatomic) int groupType;                                                 //@synthesize groupType=_groupType - In the implementation block
@property (assign,nonatomic) BOOL hasIsSubscribedToGroupFeed; 
@property (assign,nonatomic) BOOL isSubscribedToGroupFeed;                                  //@synthesize isSubscribedToGroupFeed=_isSubscribedToGroupFeed - In the implementation block
@property (assign,nonatomic) BOOL hasArticleDisplayRankInGroup; 
@property (assign,nonatomic) int articleDisplayRankInGroup;                                 //@synthesize articleDisplayRankInGroup=_articleDisplayRankInGroup - In the implementation block
@property (assign,nonatomic) BOOL hasSubscriptionOnlyArticle; 
@property (assign,nonatomic) BOOL subscriptionOnlyArticle;                                  //@synthesize subscriptionOnlyArticle=_subscriptionOnlyArticle - In the implementation block
@property (assign,nonatomic) BOOL hasIsSharedSubscriptionOnlyArticle; 
@property (assign,nonatomic) BOOL isSharedSubscriptionOnlyArticle;                          //@synthesize isSharedSubscriptionOnlyArticle=_isSharedSubscriptionOnlyArticle - In the implementation block
@property (assign,nonatomic) BOOL hasIsFreeArticle; 
@property (assign,nonatomic) BOOL isFreeArticle;                                            //@synthesize isFreeArticle=_isFreeArticle - In the implementation block
@property (assign,nonatomic) BOOL hasIsPaidSubscriberToFeed; 
@property (assign,nonatomic) BOOL isPaidSubscriberToFeed;                                   //@synthesize isPaidSubscriberToFeed=_isPaidSubscriberToFeed - In the implementation block
@property (assign,nonatomic) BOOL hasIsCoverArticle; 
@property (assign,nonatomic) BOOL isCoverArticle;                                           //@synthesize isCoverArticle=_isCoverArticle - In the implementation block
@property (assign,nonatomic) BOOL hasCoverArticleDisplayRank; 
@property (assign,nonatomic) int coverArticleDisplayRank;                                   //@synthesize coverArticleDisplayRank=_coverArticleDisplayRank - In the implementation block
@property (assign,nonatomic) BOOL hasCoverArticleFeatureType; 
@property (assign,nonatomic) int coverArticleFeatureType;                                   //@synthesize coverArticleFeatureType=_coverArticleFeatureType - In the implementation block
@property (assign,nonatomic) BOOL hasPaidSubscriberToFeedType; 
@property (assign,nonatomic) int paidSubscriberToFeedType;                                  //@synthesize paidSubscriberToFeedType=_paidSubscriberToFeedType - In the implementation block
@property (assign,nonatomic) BOOL hasIsPaidSubscriberToSourceChannel; 
@property (assign,nonatomic) BOOL isPaidSubscriberToSourceChannel;                          //@synthesize isPaidSubscriberToSourceChannel=_isPaidSubscriberToSourceChannel - In the implementation block
@property (assign,nonatomic) BOOL hasMaxVerticalScrollPositionEnding; 
@property (assign,nonatomic) float maxVerticalScrollPositionEnding;                         //@synthesize maxVerticalScrollPositionEnding=_maxVerticalScrollPositionEnding - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignId; 
@property (nonatomic,retain) NSString * campaignId;                                         //@synthesize campaignId=_campaignId - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignType; 
@property (nonatomic,retain) NSString * campaignType;                                       //@synthesize campaignType=_campaignType - In the implementation block
@property (nonatomic,readonly) BOOL hasCreativeId; 
@property (nonatomic,retain) NSString * creativeId;                                         //@synthesize creativeId=_creativeId - In the implementation block
@property (assign,nonatomic) BOOL hasViewFromNotificationDirectOpen; 
@property (assign,nonatomic) BOOL viewFromNotificationDirectOpen;                           //@synthesize viewFromNotificationDirectOpen=_viewFromNotificationDirectOpen - In the implementation block
@property (nonatomic,readonly) BOOL hasNotificationId; 
@property (nonatomic,retain) NSString * notificationId;                                     //@synthesize notificationId=_notificationId - In the implementation block
@property (assign,nonatomic) BOOL hasNextArticleAffordanceType; 
@property (assign,nonatomic) int nextArticleAffordanceType;                                 //@synthesize nextArticleAffordanceType=_nextArticleAffordanceType - In the implementation block
@property (nonatomic,readonly) BOOL hasNextArticleAffordanceTypeFeedId; 
@property (nonatomic,retain) NSString * nextArticleAffordanceTypeFeedId;                    //@synthesize nextArticleAffordanceTypeFeedId=_nextArticleAffordanceTypeFeedId - In the implementation block
@property (assign,nonatomic) BOOL hasGroupArticleCountInForYou; 
@property (assign,nonatomic) int groupArticleCountInForYou;                                 //@synthesize groupArticleCountInForYou=_groupArticleCountInForYou - In the implementation block
@property (assign,nonatomic) BOOL hasGroupDisplayRankInForYou; 
@property (assign,nonatomic) int groupDisplayRankInForYou;                                  //@synthesize groupDisplayRankInForYou=_groupDisplayRankInForYou - In the implementation block
@property (assign,nonatomic) BOOL hasArticleLoaded; 
@property (assign,nonatomic) BOOL articleLoaded;                                            //@synthesize articleLoaded=_articleLoaded - In the implementation block
@property (assign,nonatomic) BOOL hasLoadFailureReason; 
@property (assign,nonatomic) int loadFailureReason;                                         //@synthesize loadFailureReason=_loadFailureReason - In the implementation block
@property (nonatomic,readonly) BOOL hasPreviousArticleId; 
@property (nonatomic,retain) NSString * previousArticleId;                                  //@synthesize previousArticleId=_previousArticleId - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetSection; 
@property (assign,nonatomic) int widgetSection;                                             //@synthesize widgetSection=_widgetSection - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetSectionArticleRank; 
@property (assign,nonatomic) int widgetSectionArticleRank;                                  //@synthesize widgetSectionArticleRank=_widgetSectionArticleRank - In the implementation block
@property (assign,nonatomic) BOOL hasWidgetArticleRank; 
@property (assign,nonatomic) int widgetArticleRank;                                         //@synthesize widgetArticleRank=_widgetArticleRank - In the implementation block
@property (nonatomic,retain) NSMutableArray * fractionalCohortMemberships;                  //@synthesize fractionalCohortMemberships=_fractionalCohortMemberships - In the implementation block
@property (assign,nonatomic) BOOL hasIsBreakingNewsArticle; 
@property (assign,nonatomic) BOOL isBreakingNewsArticle;                                    //@synthesize isBreakingNewsArticle=_isBreakingNewsArticle - In the implementation block
@property (assign,nonatomic) BOOL hasBreakingNewsArticlePosition; 
@property (assign,nonatomic) int breakingNewsArticlePosition;                               //@synthesize breakingNewsArticlePosition=_breakingNewsArticlePosition - In the implementation block
@property (assign,nonatomic) BOOL hasBreakingNewsArticleCount; 
@property (assign,nonatomic) int breakingNewsArticleCount;                                  //@synthesize breakingNewsArticleCount=_breakingNewsArticleCount - In the implementation block
@property (assign,nonatomic) BOOL hasTopStoryType; 
@property (assign,nonatomic) int topStoryType;                                              //@synthesize topStoryType=_topStoryType - In the implementation block
@property (assign,nonatomic) BOOL hasTopStoryMandatoryArticleCount; 
@property (assign,nonatomic) int topStoryMandatoryArticleCount;                             //@synthesize topStoryMandatoryArticleCount=_topStoryMandatoryArticleCount - In the implementation block
@property (assign,nonatomic) BOOL hasTopStoryOptionalArticleCount; 
@property (assign,nonatomic) int topStoryOptionalArticleCount;                              //@synthesize topStoryOptionalArticleCount=_topStoryOptionalArticleCount - In the implementation block
@property (assign,nonatomic) BOOL hasGroupPresentationReason; 
@property (assign,nonatomic) int groupPresentationReason;                                   //@synthesize groupPresentationReason=_groupPresentationReason - In the implementation block
@property (assign,nonatomic) BOOL hasPersonalizationScore; 
@property (assign,nonatomic) double personalizationScore;                                   //@synthesize personalizationScore=_personalizationScore - In the implementation block
@property (assign,nonatomic) BOOL hasIsSubscribedToSourceChannel; 
@property (assign,nonatomic) BOOL isSubscribedToSourceChannel;                              //@synthesize isSubscribedToSourceChannel=_isSubscribedToSourceChannel - In the implementation block
@property (assign,nonatomic) BOOL hasIsNativeAd; 
@property (assign,nonatomic) BOOL isNativeAd;                                               //@synthesize isNativeAd=_isNativeAd - In the implementation block
@property (nonatomic,readonly) BOOL hasNativeCampaignData; 
@property (nonatomic,retain) NSString * nativeCampaignData;                                 //@synthesize nativeCampaignData=_nativeCampaignData - In the implementation block
@property (nonatomic,readonly) BOOL hasPreviousArticleVersion; 
@property (nonatomic,retain) NSString * previousArticleVersion;                             //@synthesize previousArticleVersion=_previousArticleVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasAnfComponentId; 
@property (nonatomic,retain) NSString * anfComponentId;                                     //@synthesize anfComponentId=_anfComponentId - In the implementation block
@property (assign,nonatomic) BOOL hasBadgeExposure; 
@property (assign,nonatomic) BOOL badgeExposure;                                            //@synthesize badgeExposure=_badgeExposure - In the implementation block
@property (nonatomic,readonly) BOOL hasWidgetEngagement; 
@property (nonatomic,retain) NTPBWidgetEngagement * widgetEngagement;                       //@synthesize widgetEngagement=_widgetEngagement - In the implementation block
@property (assign,nonatomic) BOOL hasPublisherArticleVersionInt64; 
@property (assign,nonatomic) long long publisherArticleVersionInt64;                        //@synthesize publisherArticleVersionInt64=_publisherArticleVersionInt64 - In the implementation block
@property (assign,nonatomic) BOOL hasBackendArticleVersionInt64; 
@property (assign,nonatomic) long long backendArticleVersionInt64;                          //@synthesize backendArticleVersionInt64=_backendArticleVersionInt64 - In the implementation block
@property (assign,nonatomic) BOOL hasFeedSubscriptionOrigin; 
@property (assign,nonatomic) int feedSubscriptionOrigin;                                    //@synthesize feedSubscriptionOrigin=_feedSubscriptionOrigin - In the implementation block
@property (nonatomic,readonly) BOOL hasIadNativeCampaign; 
@property (nonatomic,retain) NSString * iadNativeCampaign;                                  //@synthesize iadNativeCampaign=_iadNativeCampaign - In the implementation block
@property (nonatomic,readonly) BOOL hasIadNativeLine; 
@property (nonatomic,retain) NSString * iadNativeLine;                                      //@synthesize iadNativeLine=_iadNativeLine - In the implementation block
@property (nonatomic,readonly) BOOL hasIadNativeAd; 
@property (nonatomic,retain) NSString * iadNativeAd;                                        //@synthesize iadNativeAd=_iadNativeAd - In the implementation block
@property (assign,nonatomic) BOOL hasPreviousArticlePublisherArticleVersion; 
@property (assign,nonatomic) long long previousArticlePublisherArticleVersion;              //@synthesize previousArticlePublisherArticleVersion=_previousArticlePublisherArticleVersion - In the implementation block
@property (assign,nonatomic) BOOL hasGroupFormationReason; 
@property (assign,nonatomic) int groupFormationReason;                                      //@synthesize groupFormationReason=_groupFormationReason - In the implementation block
@property (assign,nonatomic) BOOL hasFeedAutoSubscribeType; 
@property (assign,nonatomic) int feedAutoSubscribeType;                                     //@synthesize feedAutoSubscribeType=_feedAutoSubscribeType - In the implementation block
@property (assign,nonatomic) BOOL hasFeatureCtr; 
@property (assign,nonatomic) double featureCtr;                                             //@synthesize featureCtr=_featureCtr - In the implementation block
@property (assign,nonatomic) BOOL hasPaidNonpaidSubscriptionCtr; 
@property (assign,nonatomic) double paidNonpaidSubscriptionCtr;                             //@synthesize paidNonpaidSubscriptionCtr=_paidNonpaidSubscriptionCtr - In the implementation block
@property (assign,nonatomic) BOOL hasAutoSubscribeCtr; 
@property (assign,nonatomic) double autoSubscribeCtr;                                       //@synthesize autoSubscribeCtr=_autoSubscribeCtr - In the implementation block
@property (assign,nonatomic) BOOL hasComputedGlobalScoreCoefficient; 
@property (assign,nonatomic) double computedGlobalScoreCoefficient;                         //@synthesize computedGlobalScoreCoefficient=_computedGlobalScoreCoefficient - In the implementation block
@property (assign,nonatomic) BOOL hasGlobalScore; 
@property (assign,nonatomic) double globalScore;                                            //@synthesize globalScore=_globalScore - In the implementation block
@property (assign,nonatomic) BOOL hasUserFeedbackScore; 
@property (assign,nonatomic) double userFeedbackScore;                                      //@synthesize userFeedbackScore=_userFeedbackScore - In the implementation block
@property (assign,nonatomic) BOOL hasAgedUserFeedbackScore; 
@property (assign,nonatomic) double agedUserFeedbackScore;                                  //@synthesize agedUserFeedbackScore=_agedUserFeedbackScore - In the implementation block
@property (assign,nonatomic) BOOL hasAgedPersonalizationScore; 
@property (assign,nonatomic) double agedPersonalizationScore;                               //@synthesize agedPersonalizationScore=_agedPersonalizationScore - In the implementation block
@property (assign,nonatomic) BOOL hasDiversifiedPersonalizationScore; 
@property (assign,nonatomic) double diversifiedPersonalizationScore;                        //@synthesize diversifiedPersonalizationScore=_diversifiedPersonalizationScore - In the implementation block
@property (assign,nonatomic) BOOL hasModuleEventType; 
@property (assign,nonatomic) int moduleEventType;                                           //@synthesize moduleEventType=_moduleEventType - In the implementation block
@property (assign,nonatomic) BOOL hasModuleLocation; 
@property (assign,nonatomic) int moduleLocation;                                            //@synthesize moduleLocation=_moduleLocation - In the implementation block
@property (assign,nonatomic) BOOL hasModuleItemCount; 
@property (assign,nonatomic) int moduleItemCount;                                           //@synthesize moduleItemCount=_moduleItemCount - In the implementation block
@property (assign,nonatomic) BOOL hasModuleItemPosition; 
@property (assign,nonatomic) int moduleItemPosition;                                        //@synthesize moduleItemPosition=_moduleItemPosition - In the implementation block
@property (nonatomic,readonly) BOOL hasModuleExposureId; 
@property (nonatomic,retain) NSData * moduleExposureId;                                     //@synthesize moduleExposureId=_moduleExposureId - In the implementation block
@property (nonatomic,readonly) BOOL hasPreviousWebEmbedId; 
@property (nonatomic,retain) NSString * previousWebEmbedId;                                 //@synthesize previousWebEmbedId=_previousWebEmbedId - In the implementation block
@property (assign,nonatomic) BOOL hasPreviousWebEmbedLocation; 
@property (assign,nonatomic) int previousWebEmbedLocation;                                  //@synthesize previousWebEmbedLocation=_previousWebEmbedLocation - In the implementation block
@property (nonatomic,retain) NSMutableArray * surfacedByTagIds;                             //@synthesize surfacedByTagIds=_surfacedByTagIds - In the implementation block
@property (nonatomic,readonly) BOOL hasIadNativeCampaignAd; 
@property (nonatomic,retain) NSString * iadNativeCampaignAd;                                //@synthesize iadNativeCampaignAd=_iadNativeCampaignAd - In the implementation block
@property (assign,nonatomic) BOOL hasCuratedContentType; 
@property (assign,nonatomic) int curatedContentType;                                        //@synthesize curatedContentType=_curatedContentType - In the implementation block
@property (assign,nonatomic) BOOL hasGroupLocation; 
@property (assign,nonatomic) int groupLocation;                                             //@synthesize groupLocation=_groupLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasExposedInLocationId; 
@property (nonatomic,retain) NSString * exposedInLocationId;                                //@synthesize exposedInLocationId=_exposedInLocationId - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupViewExposureId; 
@property (nonatomic,retain) NSData * groupViewExposureId;                                  //@synthesize groupViewExposureId=_groupViewExposureId - In the implementation block
@property (nonatomic,readonly) BOOL hasExposedGroupSourceChannelId; 
@property (nonatomic,retain) NSString * exposedGroupSourceChannelId;                        //@synthesize exposedGroupSourceChannelId=_exposedGroupSourceChannelId - In the implementation block
@property (assign,nonatomic) BOOL hasArticleSuggestionOrigin; 
@property (assign,nonatomic) int articleSuggestionOrigin;                                   //@synthesize articleSuggestionOrigin=_articleSuggestionOrigin - In the implementation block
@property (assign,nonatomic) BOOL hasDidExpandDuringView; 
@property (assign,nonatomic) BOOL didExpandDuringView;                                      //@synthesize didExpandDuringView=_didExpandDuringView - In the implementation block
@property (assign,nonatomic) BOOL hasSubscribedChannelCtr; 
@property (assign,nonatomic) double subscribedChannelCtr;                                   //@synthesize subscribedChannelCtr=_subscribedChannelCtr - In the implementation block
@property (nonatomic,readonly) BOOL hasAlternateHeadline; 
@property (nonatomic,retain) NTPBAlternateHeadline * alternateHeadline;                     //@synthesize alternateHeadline=_alternateHeadline - In the implementation block
@property (assign,nonatomic) BOOL hasRankInVideoPlaylist; 
@property (assign,nonatomic) int rankInVideoPlaylist;                                       //@synthesize rankInVideoPlaylist=_rankInVideoPlaylist - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueData; 
@property (nonatomic,retain) NTPBIssueData * issueData;                                     //@synthesize issueData=_issueData - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueExposureData; 
@property (nonatomic,retain) NTPBIssueExposureData * issueExposureData;                     //@synthesize issueExposureData=_issueExposureData - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueViewData; 
@property (nonatomic,retain) NTPBIssueViewData * issueViewData;                             //@synthesize issueViewData=_issueViewData - In the implementation block
@property (assign,nonatomic) BOOL hasRole; 
@property (assign,nonatomic) int role;                                                      //@synthesize role=_role - In the implementation block
@property (nonatomic,readonly) BOOL hasChannelData; 
@property (nonatomic,retain) NTPBChannelData * channelData;                                 //@synthesize channelData=_channelData - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueViewContextData; 
@property (nonatomic,retain) NTPBIssueViewContextData * issueViewContextData;               //@synthesize issueViewContextData=_issueViewContextData - In the implementation block
@property (assign,nonatomic) BOOL hasHeroArticleType; 
@property (assign,nonatomic) int heroArticleType;                                           //@synthesize heroArticleType=_heroArticleType - In the implementation block
@property (nonatomic,readonly) BOOL hasWebEmbedId; 
@property (nonatomic,retain) NSString * webEmbedId;                                         //@synthesize webEmbedId=_webEmbedId - In the implementation block
@property (nonatomic,readonly) BOOL hasCuratedBatchId; 
@property (nonatomic,retain) NSString * curatedBatchId;                                     //@synthesize curatedBatchId=_curatedBatchId - In the implementation block
@property (assign,nonatomic) BOOL hasIsAudioEligible; 
@property (assign,nonatomic) BOOL isAudioEligible;                                          //@synthesize isAudioEligible=_isAudioEligible - In the implementation block
@property (assign,nonatomic) BOOL hasIsAudioEngaged; 
@property (assign,nonatomic) BOOL isAudioEngaged;                                           //@synthesize isAudioEngaged=_isAudioEngaged - In the implementation block
@property (nonatomic,retain) NSMutableArray * topicIds;                                     //@synthesize topicIds=_topicIds - In the implementation block
@property (nonatomic,retain) NSMutableArray * purchaseOffersItems;                          //@synthesize purchaseOffersItems=_purchaseOffersItems - In the implementation block
+(Class)topicIdsType;
+(Class)namedEntitiesType;
+(Class)purchaseOffersItemType;
+(Class)surfacedByTagIdsType;
+(Class)fractionalCohortMembershipType;
-(BOOL)hasGroupFormationReason;
-(void)setHasGroupLocation:(BOOL)arg1 ;
-(BOOL)hasIadNativeLine;
-(BOOL)hasIsNativeAd;
-(BOOL)hasIsAudioEngaged;
-(id)groupTypeAsString:(int)arg1 ;
-(BOOL)hasRole;
-(void)setChannelData:(NTPBChannelData *)arg1 ;
-(unsigned long long)fractionalCohortMembershipsCount;
-(void)setHasWidgetSection:(BOOL)arg1 ;
-(BOOL)isAudioEligible;
-(NSString *)viewFrameInScreen;
-(BOOL)hasTopStoryMandatoryArticleCount;
-(BOOL)hasParentFeedType;
-(void)setBadgeExposure:(BOOL)arg1 ;
-(BOOL)hasDidExpandDuringView;
-(int)feedCellHostType;
-(unsigned long long)surfacedByTagIdsCount;
-(void)setPaidNonpaidSubscriptionCtr:(double)arg1 ;
-(void)setSubscriptionOnlyArticle:(BOOL)arg1 ;
-(void)setDidBounce:(BOOL)arg1 ;
-(BOOL)hasCuratedContentType;
-(void)setIadNativeLine:(NSString *)arg1 ;
-(BOOL)hasCampaignId;
-(BOOL)hasAnfComponentId;
-(BOOL)hasDidOpenInSafari;
-(BOOL)hasWidgetArticleRank;
-(int)heroArticleType;
-(void)setGroupLocation:(int)arg1 ;
-(NSString *)campaignId;
-(void)setCuratedBatchId:(NSString *)arg1 ;
-(int)characterCount;
-(BOOL)hasGroupDisplayRankInForYou;
-(void)clearTopicIds;
-(void)setHasRole:(BOOL)arg1 ;
-(id)moduleEventTypeAsString:(int)arg1 ;
-(void)setIsVideoInFeed:(BOOL)arg1 ;
-(void)setTopicIds:(NSMutableArray *)arg1 ;
-(void)setHasModuleEventType:(BOOL)arg1 ;
-(BOOL)subscriptionOnlyArticle;
-(int)moduleLocation;
-(void)setWidgetEngagement:(NTPBWidgetEngagement *)arg1 ;
-(NSString *)surfacedByTopicId;
-(BOOL)hasPreviousArticleId;
-(int)StringAsCuratedContentType:(id)arg1 ;
-(void)setPersonalizationScore:(double)arg1 ;
-(int)displayRank;
-(BOOL)hasBadgeExposure;
-(NSData *)groupViewExposureId;
-(BOOL)hasIsPaidSubscriberToFeed;
-(BOOL)isNativeAd;
-(BOOL)hasExposedGroupSourceChannelId;
-(NSString *)notificationId;
-(void)setSubscribedChannelCtr:(double)arg1 ;
-(void)setHasParentFeedType:(BOOL)arg1 ;
-(int)StringAsTopStoryType:(id)arg1 ;
-(id)feedAutoSubscribeTypeAsString:(int)arg1 ;
-(BOOL)hasArticleType;
-(void)setArticleHostViewType:(int)arg1 ;
-(void)setHasModuleLocation:(BOOL)arg1 ;
-(BOOL)hasUserFeedbackScore;
-(BOOL)hasPreviousWebEmbedLocation;
-(void)setArticleSuggestionOrigin:(int)arg1 ;
-(int)parentFeedType;
-(void)setAgedPersonalizationScore:(double)arg1 ;
-(NSString *)userActivityType;
-(int)widgetSectionArticleRank;
-(void)setPublisherArticleVersionInt64:(long long)arg1 ;
-(void)setHasFeatureCtr:(BOOL)arg1 ;
-(BOOL)hasIssueExposureData;
-(NTPBIssueData *)issueData;
-(BOOL)hasNextArticleAffordanceType;
-(BOOL)hasPreviousArticleVersion;
-(int)topStoryMandatoryArticleCount;
-(int)StringAsArticleType:(id)arg1 ;
-(void)setHasPaidSubscriberToFeedType:(BOOL)arg1 ;
-(void)setWidgetSectionArticleRank:(int)arg1 ;
-(void)setHasGroupPresentationReason:(BOOL)arg1 ;
-(long long)backendArticleVersionInt64;
-(BOOL)hasSurfacedByTopicId;
-(void)clearFractionalCohortMemberships;
-(void)setIadNativeCampaignAd:(NSString *)arg1 ;
-(void)setHasArticleHostViewType:(BOOL)arg1 ;
-(BOOL)hasFeedAutoSubscribeType;
-(int)moduleItemCount;
-(int)feedSubscriptionOrigin;
-(BOOL)hasDidBounce;
-(BOOL)hasArticleLoaded;
-(BOOL)hasGroupViewExposureId;
-(void)setPreviousArticleVersion:(NSString *)arg1 ;
-(double)personalizationScore;
-(void)setHasWidgetArticleRank:(BOOL)arg1 ;
-(id)topStoryTypeAsString:(int)arg1 ;
-(void)setNamedEntities:(NSMutableArray *)arg1 ;
-(BOOL)hasGlobalScore;
-(int)groupPresentationReason;
-(BOOL)isPaidSubscriberToSourceChannel;
-(NSString *)referringSourceApplication;
-(void)setHasCuratedContentType:(BOOL)arg1 ;
-(int)moduleEventType;
-(void)setHasIsTopStoryArticle:(BOOL)arg1 ;
-(void)setReferencedArticleId:(NSString *)arg1 ;
-(BOOL)hasExposedInLocationId;
-(BOOL)hasGroupFeedId;
-(void)setMaxActiveTimeSpent:(int)arg1 ;
-(BOOL)hasWidgetSectionArticleRank;
-(NSMutableArray *)topicIds;
-(NSString *)previousArticleId;
-(int)topStoryOptionalArticleCount;
-(double)diversifiedPersonalizationScore;
-(void)setHasAdSupportedChannel:(BOOL)arg1 ;
-(void)setGroupFeedId:(NSString *)arg1 ;
-(BOOL)hasFeedViewExposureId;
-(void)setHasFeedAutoSubscribeType:(BOOL)arg1 ;
-(void)setUserFeedbackScore:(double)arg1 ;
-(void)setGroupViewExposureId:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasIsPaidSubscriberToFeed:(BOOL)arg1 ;
-(BOOL)hasWidgetEngagement;
-(BOOL)hasSourceChannelId;
-(BOOL)hasReferringSourceApplication;
-(void)setHasFeedCellHostType:(BOOL)arg1 ;
-(id)groupLocationAsString:(int)arg1 ;
-(void)setGroupType:(int)arg1 ;
-(void)setFeatureCtr:(double)arg1 ;
-(void)setReferringSourceApplication:(NSString *)arg1 ;
-(int)groupLocation;
-(id)widgetSectionAsString:(int)arg1 ;
-(void)setFeedCellHostType:(int)arg1 ;
-(double)featureCtr;
-(int)groupFormationReason;
-(BOOL)isPaidSubscriberToFeed;
-(void)setGroupPresentationReason:(int)arg1 ;
-(void)setPreviousArticleId:(NSString *)arg1 ;
-(BOOL)hasGroupArticleCountInForYou;
-(double)autoSubscribeCtr;
-(BOOL)hasTopStoryOptionalArticleCount;
-(NSString *)exposedInLocationId;
-(int)groupDisplayRankInForYou;
-(int)StringAsWidgetSection:(id)arg1 ;
-(id)groupPresentationReasonAsString:(int)arg1 ;
-(void)setHasGroupArticleCountInForYou:(BOOL)arg1 ;
-(void)setAutoSubscribeCtr:(double)arg1 ;
-(BOOL)hasPreviousArticlePublisherArticleVersion;
-(void)setHasTopStoryOptionalArticleCount:(BOOL)arg1 ;
-(double)paidNonpaidSubscriptionCtr;
-(int)StringAsFeedAutoSubscribeType:(id)arg1 ;
-(void)setTopStoryOptionalArticleCount:(int)arg1 ;
-(void)setTopStoryMandatoryArticleCount:(int)arg1 ;
-(NSString *)referringUrl;
-(BOOL)hasReferringUrl;
-(NSString *)curatedBatchId;
-(BOOL)hasArticleViewingSessionId;
-(BOOL)hasNotificationId;
-(long long)previousArticlePublisherArticleVersion;
-(void)setCampaignType:(NSString *)arg1 ;
-(void)setHasGroupFormationReason:(BOOL)arg1 ;
-(BOOL)hasViewFrameInScreen;
-(void)setFeedAutoSubscribeType:(int)arg1 ;
-(void)setGroupFormationReason:(int)arg1 ;
-(void)setPreviousArticlePublisherArticleVersion:(long long)arg1 ;
-(BOOL)hasCampaignType;
-(BOOL)hasFeedCellHostType;
-(NSString *)campaignType;
-(BOOL)isSubscribedToGroupFeed;
-(void)setIsPaidSubscriberToFeed:(BOOL)arg1 ;
-(int)StringAsGroupLocation:(id)arg1 ;
-(void)setFeedSubscriptionOrigin:(int)arg1 ;
-(void)setGroupDisplayRankInForYou:(int)arg1 ;
-(int)StringAsGroupFormationReason:(id)arg1 ;
-(void)setArticleViewingSessionId:(NSData *)arg1 ;
-(BOOL)hasGroupLocation;
-(NSString *)sourceChannelId;
-(void)setHasIsSubscribedToGroupFeed:(BOOL)arg1 ;
-(void)setHasWidgetSectionArticleRank:(BOOL)arg1 ;
-(void)setModuleExposureId:(NSData *)arg1 ;
-(int)feedAutoSubscribeType;
-(NSString *)previousArticleVersion;
-(void)setHasGroupType:(BOOL)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(BOOL)hasCreativeId;
-(void)setIsSubscribedToGroupFeed:(BOOL)arg1 ;
-(id)groupFormationReasonAsString:(int)arg1 ;
-(id)curatedContentTypeAsString:(int)arg1 ;
-(void)setReferringUrl:(NSString *)arg1 ;
-(BOOL)hasWidgetSection;
-(void)setViewFrameInScreen:(NSString *)arg1 ;
-(BOOL)hasIsSubscribedToGroupFeed;
-(id)feedCellHostTypeAsString:(int)arg1 ;
-(BOOL)hasGroupType;
-(BOOL)hasFeedPresentationReason;
-(void)setCampaignId:(NSString *)arg1 ;
-(void)setHasTopStoryMandatoryArticleCount:(BOOL)arg1 ;
-(BOOL)hasCuratedBatchId;
-(int)widgetSection;
-(BOOL)hasAdSupportedChannel;
-(void)setHasGroupDisplayRankInForYou:(BOOL)arg1 ;
-(int)StringAsGroupType:(id)arg1 ;
-(void)setCuratedContentType:(int)arg1 ;
-(int)StringAsFeedCellHostType:(id)arg1 ;
-(NTPBWidgetEngagement *)widgetEngagement;
-(BOOL)hasUserActivityType;
-(NSString *)groupFeedId;
-(int)widgetArticleRank;
-(NSString *)storyType;
-(int)curatedContentType;
-(void)addFractionalCohortMembership:(id)arg1 ;
-(void)setUserActivityType:(NSString *)arg1 ;
-(NSData *)feedViewExposureId;
-(void)setCoverArticleDisplayRank:(int)arg1 ;
-(NSString *)creativeId;
-(void)setNotificationId:(NSString *)arg1 ;
-(void)setHasPreviousArticlePublisherArticleVersion:(BOOL)arg1 ;
-(void)setWidgetArticleRank:(int)arg1 ;
-(void)setGroupArticleCountInForYou:(int)arg1 ;
-(void)setWidgetSection:(int)arg1 ;
-(void)setIsCoverArticle:(BOOL)arg1 ;
-(int)StringAsGroupPresentationReason:(id)arg1 ;
-(BOOL)hasIsVideoInFeed;
-(int)groupArticleCountInForYou;
-(void)setCreativeId:(NSString *)arg1 ;
-(BOOL)hasGroupPresentationReason;
-(void)setAdSupportedChannel:(BOOL)arg1 ;
-(NSData *)articleViewingSessionId;
-(BOOL)adSupportedChannel;
-(int)previousWebEmbedLocation;
-(void)setHasIsDigitalReplicaAd:(BOOL)arg1 ;
-(int)feedPresentationReason;
-(double)globalScore;
-(BOOL)hasBreakingNewsArticleCount;
-(id)parentFeedTypeAsString:(int)arg1 ;
-(void)setNextArticleAffordanceType:(int)arg1 ;
-(void)setHasComputedGlobalScoreCoefficient:(BOOL)arg1 ;
-(BOOL)hasTopStoryType;
-(BOOL)hasPaidNonpaidSubscriptionCtr;
-(void)setArticleSessionId:(NSData *)arg1 ;
-(BOOL)viewFromNotificationDirectOpen;
-(BOOL)hasLanguage;
-(int)articleType;
-(void)setFeedViewExposureId:(NSData *)arg1 ;
-(void)setExposedGroupSourceChannelId:(NSString *)arg1 ;
-(void)setHasPreviousWebEmbedLocation:(BOOL)arg1 ;
-(BOOL)hasComputedGlobalScoreCoefficient;
-(void)setHasArticleType:(BOOL)arg1 ;
-(void)setHasAutoSubscribeCtr:(BOOL)arg1 ;
-(BOOL)hasStoryType;
-(void)setDisplayRank:(int)arg1 ;
-(BOOL)hasModuleLocation;
-(BOOL)isSharedSubscriptionOnlyArticle;
-(BOOL)articleLoaded;
-(NSString *)sectionHeadlineId;
-(int)articleHostViewType;
-(void)setHasPublisherArticleVersionInt64:(BOOL)arg1 ;
-(void)setHasUserFeedbackScore:(BOOL)arg1 ;
-(void)setDiversifiedPersonalizationScore:(double)arg1 ;
-(void)setComputedGlobalScoreCoefficient:(double)arg1 ;
-(BOOL)hasSubscribedChannelCtr;
-(id)previousWebEmbedLocationAsString:(int)arg1 ;
-(void)setAgedUserFeedbackScore:(double)arg1 ;
-(void)setHasIsNativeAd:(BOOL)arg1 ;
-(void)setHasBreakingNewsArticleCount:(BOOL)arg1 ;
-(void)setHasCoverArticleDisplayRank:(BOOL)arg1 ;
-(double)subscribedChannelCtr;
-(BOOL)hasArticleId;
-(BOOL)hasBackendArticleVersionInt64;
-(void)setHasArticleLoaded:(BOOL)arg1 ;
-(int)coverArticleDisplayRank;
-(BOOL)didOpenInSafari;
-(void)setPurchaseOffersItems:(NSMutableArray *)arg1 ;
-(void)setHasAgedUserFeedbackScore:(BOOL)arg1 ;
-(void)setIsUserSubscribedToParentFeed:(BOOL)arg1 ;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setIadNativeAd:(NSString *)arg1 ;
-(id)feedPresentationReasonAsString:(int)arg1 ;
-(NSString *)surfacedBySectionId;
-(BOOL)hasBackendArticleVersion;
-(void)setHasArticleDisplayRankInGroup:(BOOL)arg1 ;
-(id)topicIdsAtIndex:(unsigned long long)arg1 ;
-(void)addTopicIds:(id)arg1 ;
-(void)setArticleDisplayRankInGroup:(int)arg1 ;
-(void)setIsNativeAd:(BOOL)arg1 ;
-(void)setHasTopStoryType:(BOOL)arg1 ;
-(void)setIsSubscribedToSourceChannel:(BOOL)arg1 ;
-(BOOL)hasSubscriptionOnlyArticle;
-(BOOL)isGroupedArticle;
-(void)setIsNewUserToArticle:(BOOL)arg1 ;
-(BOOL)hasPersonalizationScore;
-(NSString *)referencedArticleId;
-(void)setHasFeedSubscriptionOrigin:(BOOL)arg1 ;
-(void)setHasDidOpenInSafari:(BOOL)arg1 ;
-(void)setModuleEventType:(int)arg1 ;
-(NSMutableArray *)purchaseOffersItems;
-(void)setRole:(int)arg1 ;
-(NSString *)feedPresentationReasonSearchString;
-(int)StringAsPaidSubscriberToFeedType:(id)arg1 ;
-(void)setTopStoryType:(int)arg1 ;
-(BOOL)hasFeedSubscriptionOrigin;
-(void)setHasSubscribedChannelCtr:(BOOL)arg1 ;
-(void)setWebEmbedId:(NSString *)arg1 ;
-(void)setFeedPresentationReason:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isDigitalReplicaAd;
-(void)setHasIsUserSubscribedToParentFeed:(BOOL)arg1 ;
-(BOOL)hasPaidSubscriberToFeedType;
-(int)moduleItemPosition;
-(BOOL)hasBreakingNewsArticlePosition;
-(void)setHasIsSubscribedToSourceChannel:(BOOL)arg1 ;
-(BOOL)hasWebEmbedId;
-(void)setPublisherArticleVersion:(int)arg1 ;
-(NSString *)surfacedByChannelId;
-(int)breakingNewsArticleCount;
-(BOOL)isExplorationArticle;
-(BOOL)hasDiversifiedPersonalizationScore;
-(void)setCharacterCount:(int)arg1 ;
-(BOOL)hasArticleSessionId;
-(int)publisherArticleVersion;
-(BOOL)hasIsPaidSubscriberToSourceChannel;
-(BOOL)hasNativeCampaignData;
-(double)agedPersonalizationScore;
-(int)StringAsFeedSubscriptionOrigin:(id)arg1 ;
-(void)setIssueData:(NTPBIssueData *)arg1 ;
-(NSMutableArray *)surfacedByTagIds;
-(BOOL)hasViewFromNotificationDirectOpen;
-(void)setHasIsCoverArticle:(BOOL)arg1 ;
-(NSString *)sourceBinId;
-(BOOL)hasModuleExposureId;
-(float)maxVerticalScrollPositionEnding;
-(void)setHasCoverArticleFeatureType:(BOOL)arg1 ;
-(void)setCoverArticleFeatureType:(int)arg1 ;
-(unsigned long long)namedEntitiesCount;
-(int)rankInVideoPlaylist;
-(void)setArticleLoaded:(BOOL)arg1 ;
-(void)setHasMaxActiveTimeSpent:(BOOL)arg1 ;
-(void)setArticleType:(int)arg1 ;
-(BOOL)hasReferencedArticleId;
-(NSString *)iadNativeCampaignAd;
-(NTPBIssueViewData *)issueViewData;
-(void)setAlternateHeadline:(NTPBAlternateHeadline *)arg1 ;
-(void)setArticleId:(NSString *)arg1 ;
-(void)setHasFeedPresentationReason:(BOOL)arg1 ;
-(void)setIsBreakingNewsArticle:(BOOL)arg1 ;
-(BOOL)hasIsSharedSubscriptionOnlyArticle;
-(void)setSurfacedByChannelId:(NSString *)arg1 ;
-(BOOL)isBreakingNewsArticle;
-(void)setHasPersonalizationTreatmentId:(BOOL)arg1 ;
-(void)setSurfacedByTagIds:(NSMutableArray *)arg1 ;
-(void)setHasIsNewUserToArticle:(BOOL)arg1 ;
-(void)setHasPublisherArticleVersion:(BOOL)arg1 ;
-(void)setIsAudioEligible:(BOOL)arg1 ;
-(void)setSurfacedByTopicId:(NSString *)arg1 ;
-(id)nextArticleAffordanceTypeAsString:(int)arg1 ;
-(double)userFeedbackScore;
-(id)description;
-(BOOL)hasIsAudioEligible;
-(void)setGlobalScore:(double)arg1 ;
-(int)StringAsModuleEventType:(id)arg1 ;
-(BOOL)hasPreviousArticleHostViewTypeIfSwipe;
-(void)setPreviousArticleHostViewTypeIfSwipe:(int)arg1 ;
-(id)purchaseOffersItemAtIndex:(unsigned long long)arg1 ;
-(void)setHasDidBounce:(BOOL)arg1 ;
-(void)addNamedEntities:(id)arg1 ;
-(NSString *)articleId;
-(void)setHasIsBreakingNewsArticle:(BOOL)arg1 ;
-(BOOL)hasActiveTimeSpent;
-(void)setHasDisplayRank:(BOOL)arg1 ;
-(int)StringAsNextArticleAffordanceType:(id)arg1 ;
-(BOOL)hasIsNewUserToArticle;
-(void)setHasActiveTimeSpent:(BOOL)arg1 ;
-(void)setHasNextArticleAffordanceType:(BOOL)arg1 ;
-(void)setHasPersonalizationScore:(BOOL)arg1 ;
-(BOOL)hasIsExplorationArticle;
-(BOOL)hasFeedPresentationReasonSearchString;
-(BOOL)hasDisplayRank;
-(BOOL)isCoverArticle;
-(int)backendArticleVersion;
-(void)setModuleItemCount:(int)arg1 ;
-(void)clearPurchaseOffersItems;
-(BOOL)hasChannelData;
-(BOOL)hasIsDigitalReplicaAd;
-(BOOL)hasRankInVideoPlaylist;
-(void)setArticleViewPresentationReason:(int)arg1 ;
-(void)setHasMaxVerticalScrollPositionEnding:(BOOL)arg1 ;
-(BOOL)hasModuleItemPosition;
-(void)setAnfComponentId:(NSString *)arg1 ;
-(void)setHasDidExpandDuringView:(BOOL)arg1 ;
-(void)setHasHeroArticleType:(BOOL)arg1 ;
-(NTPBAlternateHeadline *)alternateHeadline;
-(void)setBackendArticleVersion:(int)arg1 ;
-(void)setBreakingNewsArticleCount:(int)arg1 ;
-(void)setIsDigitalReplicaAd:(BOOL)arg1 ;
-(id)surfacedByTagIdsAtIndex:(unsigned long long)arg1 ;
-(BOOL)isAudioEngaged;
-(NSString *)anfComponentId;
-(NTPBIssueExposureData *)issueExposureData;
-(NTPBIssueViewContextData *)issueViewContextData;
-(NSString *)iadNativeAd;
-(void)setModuleLocation:(int)arg1 ;
-(NSString *)iadNativeLine;
-(void)setModuleItemPosition:(int)arg1 ;
-(int)maxActiveTimeSpent;
-(void)setHasIsGroupedArticle:(BOOL)arg1 ;
-(BOOL)hasSurfacedByChannelId;
-(BOOL)hasArticleSuggestionOrigin;
-(NSData *)moduleExposureId;
-(void)setHasPaidNonpaidSubscriptionCtr:(BOOL)arg1 ;
-(int)StringAsFeedPresentationReason:(id)arg1 ;
-(id)namedEntitiesAtIndex:(unsigned long long)arg1 ;
-(int)previousArticleHostViewTypeIfSwipe;
-(void)setHasLoadFailureReason:(BOOL)arg1 ;
-(BOOL)hasPublisherArticleVersionInt64;
-(void)setParentFeedType:(int)arg1 ;
-(void)setBackendArticleVersionInt64:(long long)arg1 ;
-(void)setIsGroupedArticle:(BOOL)arg1 ;
-(int)loadFailureReason;
-(void)setHasBreakingNewsArticlePosition:(BOOL)arg1 ;
-(BOOL)hasHeroArticleType;
-(BOOL)hasIadNativeCampaignAd;
-(int)activeTimeSpent;
-(BOOL)hasIadNativeAd;
-(BOOL)hasIsFreeArticle;
-(void)setIssueViewContextData:(NTPBIssueViewContextData *)arg1 ;
-(int)coverArticleFeatureType;
-(int)groupType;
-(long long)publisherArticleVersionInt64;
-(BOOL)hasIssueData;
-(unsigned long long)hash;
-(BOOL)hasCoverArticleDisplayRank;
-(void)setPreviousWebEmbedId:(NSString *)arg1 ;
-(void)addPurchaseOffersItem:(id)arg1 ;
-(BOOL)hasIadNativeCampaign;
-(void)setHasBackendArticleVersionInt64:(BOOL)arg1 ;
-(void)setPreviousWebEmbedLocation:(int)arg1 ;
-(void)setNativeCampaignData:(NSString *)arg1 ;
-(void)setHasBackendArticleVersion:(BOOL)arg1 ;
-(void)setHasArticleSuggestionOrigin:(BOOL)arg1 ;
-(double)computedGlobalScoreCoefficient;
-(int)breakingNewsArticlePosition;
-(long long)personalizationTreatmentId;
-(BOOL)hasModuleItemCount;
-(BOOL)hasIsCoverArticle;
-(BOOL)hasAlternateHeadline;
-(void)setExposedInLocationId:(NSString *)arg1 ;
-(void)setHasArticleViewPresentationReason:(BOOL)arg1 ;
-(void)setRankInVideoPlaylist:(int)arg1 ;
-(NSString *)webEmbedId;
-(BOOL)hasIsSubscribedToSourceChannel;
-(void)setHasGlobalScore:(BOOL)arg1 ;
-(int)StringAsParentFeedType:(id)arg1 ;
-(void)setHasIsAudioEngaged:(BOOL)arg1 ;
-(BOOL)hasPublisherArticleVersion;
-(BOOL)isUserSubscribedToParentFeed;
-(int)nextArticleAffordanceType;
-(BOOL)hasSectionHeadlineId;
-(BOOL)readFrom:(id)arg1 ;
-(void)setParentFeedId:(NSString *)arg1 ;
-(BOOL)hasCharacterCount;
-(NSData *)articleSessionId;
-(void)setHasCharacterCount:(BOOL)arg1 ;
-(BOOL)didBounce;
-(BOOL)hasPersonalizationTreatmentId;
-(BOOL)hasAgedPersonalizationScore;
-(BOOL)didExpandDuringView;
-(int)paidSubscriberToFeedType;
-(void)addSurfacedByTagIds:(id)arg1 ;
-(void)setLoadFailureReason:(int)arg1 ;
-(void)setMaxVerticalScrollPositionEnding:(float)arg1 ;
-(BOOL)hasIssueViewContextData;
-(BOOL)hasParentFeedId;
-(void)setActiveTimeSpent:(int)arg1 ;
-(void)setHasIsPaidSubscriberToSourceChannel:(BOOL)arg1 ;
-(BOOL)isFreeArticle;
-(id)fractionalCohortMembershipAtIndex:(unsigned long long)arg1 ;
-(void)setHasBadgeExposure:(BOOL)arg1 ;
-(BOOL)hasAutoSubscribeCtr;
-(void)writeTo:(id)arg1 ;
-(int)StringAsPreviousWebEmbedLocation:(id)arg1 ;
-(BOOL)isSubscribedToSourceChannel;
-(NSString *)parentFeedId;
-(void)setIssueViewData:(NTPBIssueViewData *)arg1 ;
-(int)topStoryType;
-(BOOL)hasMaxVerticalScrollPositionEnding;
-(BOOL)hasArticleHostViewType;
-(void)setBreakingNewsArticlePosition:(int)arg1 ;
-(BOOL)hasIssueViewData;
-(void)setHasModuleItemCount:(BOOL)arg1 ;
-(void)setViewFromNotificationDirectOpen:(BOOL)arg1 ;
-(NSMutableArray *)fractionalCohortMemberships;
-(BOOL)hasMaxActiveTimeSpent;
-(NSString *)nativeCampaignData;
-(void)setFractionalCohortMemberships:(NSMutableArray *)arg1 ;
-(void)setIsSharedSubscriptionOnlyArticle:(BOOL)arg1 ;
-(NTPBChannelData *)channelData;
-(BOOL)hasSourceBinId;
-(void)setDidExpandDuringView:(BOOL)arg1 ;
-(void)setSourceBinId:(NSString *)arg1 ;
-(NSString *)iadNativeCampaign;
-(double)agedUserFeedbackScore;
-(void)setIsPaidSubscriberToSourceChannel:(BOOL)arg1 ;
-(BOOL)hasAgedUserFeedbackScore;
-(int)role;
-(void)setPersonalizationTreatmentId:(long long)arg1 ;
-(BOOL)hasArticleDisplayRankInGroup;
-(BOOL)isNewUserToArticle;
-(BOOL)hasPreviousWebEmbedId;
-(void)setHasIsVideoInFeed:(BOOL)arg1 ;
-(void)setIsAudioEngaged:(BOOL)arg1 ;
-(void)setNextArticleAffordanceTypeFeedId:(NSString *)arg1 ;
-(void)setSurfacedBySectionId:(NSString *)arg1 ;
-(NSString *)nextArticleAffordanceTypeFeedId;
-(BOOL)isTopStoryArticle;
-(void)setStoryType:(NSString *)arg1 ;
-(NSString *)exposedGroupSourceChannelId;
-(void)setHasPreviousArticleHostViewTypeIfSwipe:(BOOL)arg1 ;
-(id)articleTypeAsString:(int)arg1 ;
-(void)setFeedPresentationReasonSearchString:(NSString *)arg1 ;
-(void)setHasIsExplorationArticle:(BOOL)arg1 ;
-(void)setHasSubscriptionOnlyArticle:(BOOL)arg1 ;
-(unsigned long long)topicIdsCount;
-(int)articleViewPresentationReason;
-(void)setSectionHeadlineId:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasNextArticleAffordanceTypeFeedId;
-(NSString *)language;
-(void)setHasModuleItemPosition:(BOOL)arg1 ;
-(void)setHasIsSharedSubscriptionOnlyArticle:(BOOL)arg1 ;
-(void)setIssueExposureData:(NTPBIssueExposureData *)arg1 ;
-(unsigned long long)purchaseOffersItemsCount;
-(void)setHasDiversifiedPersonalizationScore:(BOOL)arg1 ;
-(void)setHasIsAudioEligible:(BOOL)arg1 ;
-(BOOL)hasFeatureCtr;
-(BOOL)hasLoadFailureReason;
-(NSString *)previousWebEmbedId;
-(BOOL)hasCoverArticleFeatureType;
-(void)setHasRankInVideoPlaylist:(BOOL)arg1 ;
-(void)setIsFreeArticle:(BOOL)arg1 ;
-(BOOL)hasArticleViewPresentationReason;
-(BOOL)hasIsGroupedArticle;
-(BOOL)hasIsBreakingNewsArticle;
-(int)articleSuggestionOrigin;
-(BOOL)hasModuleEventType;
-(BOOL)hasIsTopStoryArticle;
-(void)setDidOpenInSafari:(BOOL)arg1 ;
-(id)moduleLocationAsString:(int)arg1 ;
-(NSMutableArray *)namedEntities;
-(id)paidSubscriberToFeedTypeAsString:(int)arg1 ;
-(void)setHasIsFreeArticle:(BOOL)arg1 ;
-(BOOL)isVideoInFeed;
-(void)setIsExplorationArticle:(BOOL)arg1 ;
-(void)setIsTopStoryArticle:(BOOL)arg1 ;
-(void)setPaidSubscriberToFeedType:(int)arg1 ;
-(BOOL)hasIsUserSubscribedToParentFeed;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasViewFromNotificationDirectOpen:(BOOL)arg1 ;
-(void)setIadNativeCampaign:(NSString *)arg1 ;
-(id)feedSubscriptionOriginAsString:(int)arg1 ;
-(void)clearSurfacedByTagIds;
-(void)setHasAgedPersonalizationScore:(BOOL)arg1 ;
-(BOOL)badgeExposure;
-(int)StringAsModuleLocation:(id)arg1 ;
-(BOOL)hasSurfacedBySectionId;
-(int)articleDisplayRankInGroup;
-(void)clearNamedEntities;
-(void)setHeroArticleType:(int)arg1 ;
@end

