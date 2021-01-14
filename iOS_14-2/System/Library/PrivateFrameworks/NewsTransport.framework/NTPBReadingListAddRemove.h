/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NTPBChannelData, NSMutableArray, NSData, NTPBIssueData, NTPBIssueExposureData;

@interface NTPBReadingListAddRemove : PBCodable <NSCopying> {

	long long _backendArticleVersionInt64;
	long long _personalizationTreatmentId;
	long long _previousArticlePublisherArticleVersion;
	long long _publisherArticleVersionInt64;
	int _addRemoveReadingListLocation;
	NSString* _articleId;
	int _articleType;
	int _backendArticleVersion;
	NSString* _campaignId;
	NSString* _campaignType;
	NTPBChannelData* _channelData;
	int _characterCount;
	int _contentType;
	NSString* _creativeId;
	int _feedType;
	NSMutableArray* _fractionalCohortMemberships;
	NSString* _groupFeedId;
	int _groupType;
	NSData* _groupViewExposureId;
	NSString* _iadNativeAd;
	NSString* _iadNativeCampaign;
	NSString* _iadNativeCampaignAd;
	NSString* _iadNativeLine;
	NTPBIssueData* _issueData;
	NTPBIssueExposureData* _issueExposureData;
	NSString* _language;
	NSMutableArray* _namedEntities;
	NSString* _nativeCampaignData;
	int _nextArticleAffordanceType;
	NSString* _nextArticleAffordanceTypeFeedId;
	NSString* _notificationId;
	NSString* _previousArticleId;
	NSString* _previousArticleVersion;
	int _publisherArticleVersion;
	NSString* _referencedArticleId;
	NSString* _sectionHeadlineId;
	NSString* _sourceChannelId;
	NSString* _surfacedByChannelId;
	NSString* _surfacedBySectionId;
	NSString* _surfacedByTopicId;
	int _topStoryType;
	NSMutableArray* _topicIds;
	int _userAction;
	BOOL _fromNextArticleAffordanceTap;
	BOOL _isBreakingNewsArticle;
	BOOL _isCoverArticle;
	BOOL _isDigitalReplicaAd;
	BOOL _isFreeArticle;
	BOOL _isGroupedArticle;
	BOOL _isNativeAd;
	BOOL _isNotificationArticle;
	BOOL _isPaidSubscriberToSourceChannel;
	BOOL _isSearchResultArticle;
	BOOL _isTopStoryArticle;
	BOOL _isUserSubscribedToFeed;
	SCD_Struct_NT33 _has;

}

@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                                          //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasReferencedArticleId; 
@property (nonatomic,retain) NSString * referencedArticleId;                                //@synthesize referencedArticleId=_referencedArticleId - In the implementation block
@property (assign,nonatomic) BOOL hasAddRemoveReadingListLocation; 
@property (assign,nonatomic) int addRemoveReadingListLocation;                              //@synthesize addRemoveReadingListLocation=_addRemoveReadingListLocation - In the implementation block
@property (assign,nonatomic) BOOL hasIsUserSubscribedToFeed; 
@property (assign,nonatomic) BOOL isUserSubscribedToFeed;                                   //@synthesize isUserSubscribedToFeed=_isUserSubscribedToFeed - In the implementation block
@property (assign,nonatomic) BOOL hasArticleType; 
@property (assign,nonatomic) int articleType;                                               //@synthesize articleType=_articleType - In the implementation block
@property (assign,nonatomic) BOOL hasCharacterCount; 
@property (assign,nonatomic) int characterCount;                                            //@synthesize characterCount=_characterCount - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language;                                           //@synthesize language=_language - In the implementation block
@property (nonatomic,retain) NSMutableArray * namedEntities;                                //@synthesize namedEntities=_namedEntities - In the implementation block
@property (assign,nonatomic) BOOL hasPublisherArticleVersion; 
@property (assign,nonatomic) int publisherArticleVersion;                                   //@synthesize publisherArticleVersion=_publisherArticleVersion - In the implementation block
@property (assign,nonatomic) BOOL hasBackendArticleVersion; 
@property (assign,nonatomic) int backendArticleVersion;                                     //@synthesize backendArticleVersion=_backendArticleVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasSectionHeadlineId; 
@property (nonatomic,retain) NSString * sectionHeadlineId;                                  //@synthesize sectionHeadlineId=_sectionHeadlineId - In the implementation block
@property (assign,nonatomic) BOOL hasUserAction; 
@property (assign,nonatomic) int userAction;                                                //@synthesize userAction=_userAction - In the implementation block
@property (nonatomic,readonly) BOOL hasSurfacedByChannelId; 
@property (nonatomic,retain) NSString * surfacedByChannelId;                                //@synthesize surfacedByChannelId=_surfacedByChannelId - In the implementation block
@property (nonatomic,readonly) BOOL hasSurfacedBySectionId; 
@property (nonatomic,retain) NSString * surfacedBySectionId;                                //@synthesize surfacedBySectionId=_surfacedBySectionId - In the implementation block
@property (nonatomic,readonly) BOOL hasSurfacedByTopicId; 
@property (nonatomic,retain) NSString * surfacedByTopicId;                                  //@synthesize surfacedByTopicId=_surfacedByTopicId - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                                    //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (assign,nonatomic) BOOL hasIsDigitalReplicaAd; 
@property (assign,nonatomic) BOOL isDigitalReplicaAd;                                       //@synthesize isDigitalReplicaAd=_isDigitalReplicaAd - In the implementation block
@property (assign,nonatomic) BOOL hasFeedType; 
@property (assign,nonatomic) int feedType;                                                  //@synthesize feedType=_feedType - In the implementation block
@property (assign,nonatomic) BOOL hasPersonalizationTreatmentId; 
@property (assign,nonatomic) long long personalizationTreatmentId;                          //@synthesize personalizationTreatmentId=_personalizationTreatmentId - In the implementation block
@property (assign,nonatomic) BOOL hasIsFreeArticle; 
@property (assign,nonatomic) BOOL isFreeArticle;                                            //@synthesize isFreeArticle=_isFreeArticle - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignId; 
@property (nonatomic,retain) NSString * campaignId;                                         //@synthesize campaignId=_campaignId - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignType; 
@property (nonatomic,retain) NSString * campaignType;                                       //@synthesize campaignType=_campaignType - In the implementation block
@property (nonatomic,readonly) BOOL hasCreativeId; 
@property (nonatomic,retain) NSString * creativeId;                                         //@synthesize creativeId=_creativeId - In the implementation block
@property (assign,nonatomic) BOOL hasIsNotificationArticle; 
@property (assign,nonatomic) BOOL isNotificationArticle;                                    //@synthesize isNotificationArticle=_isNotificationArticle - In the implementation block
@property (nonatomic,readonly) BOOL hasNotificationId; 
@property (nonatomic,retain) NSString * notificationId;                                     //@synthesize notificationId=_notificationId - In the implementation block
@property (assign,nonatomic) BOOL hasIsPaidSubscriberToSourceChannel; 
@property (assign,nonatomic) BOOL isPaidSubscriberToSourceChannel;                          //@synthesize isPaidSubscriberToSourceChannel=_isPaidSubscriberToSourceChannel - In the implementation block
@property (assign,nonatomic) BOOL hasIsCoverArticle; 
@property (assign,nonatomic) BOOL isCoverArticle;                                           //@synthesize isCoverArticle=_isCoverArticle - In the implementation block
@property (assign,nonatomic) BOOL hasFromNextArticleAffordanceTap; 
@property (assign,nonatomic) BOOL fromNextArticleAffordanceTap;                             //@synthesize fromNextArticleAffordanceTap=_fromNextArticleAffordanceTap - In the implementation block
@property (assign,nonatomic) BOOL hasNextArticleAffordanceType; 
@property (assign,nonatomic) int nextArticleAffordanceType;                                 //@synthesize nextArticleAffordanceType=_nextArticleAffordanceType - In the implementation block
@property (nonatomic,readonly) BOOL hasNextArticleAffordanceTypeFeedId; 
@property (nonatomic,retain) NSString * nextArticleAffordanceTypeFeedId;                    //@synthesize nextArticleAffordanceTypeFeedId=_nextArticleAffordanceTypeFeedId - In the implementation block
@property (assign,nonatomic) BOOL hasIsGroupedArticle; 
@property (assign,nonatomic) BOOL isGroupedArticle;                                         //@synthesize isGroupedArticle=_isGroupedArticle - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupFeedId; 
@property (nonatomic,retain) NSString * groupFeedId;                                        //@synthesize groupFeedId=_groupFeedId - In the implementation block
@property (assign,nonatomic) BOOL hasGroupType; 
@property (assign,nonatomic) int groupType;                                                 //@synthesize groupType=_groupType - In the implementation block
@property (assign,nonatomic) BOOL hasIsBreakingNewsArticle; 
@property (assign,nonatomic) BOOL isBreakingNewsArticle;                                    //@synthesize isBreakingNewsArticle=_isBreakingNewsArticle - In the implementation block
@property (assign,nonatomic) BOOL hasTopStoryType; 
@property (assign,nonatomic) int topStoryType;                                              //@synthesize topStoryType=_topStoryType - In the implementation block
@property (assign,nonatomic) BOOL hasIsTopStoryArticle; 
@property (assign,nonatomic) BOOL isTopStoryArticle;                                        //@synthesize isTopStoryArticle=_isTopStoryArticle - In the implementation block
@property (assign,nonatomic) BOOL hasIsSearchResultArticle; 
@property (assign,nonatomic) BOOL isSearchResultArticle;                                    //@synthesize isSearchResultArticle=_isSearchResultArticle - In the implementation block
@property (assign,nonatomic) BOOL hasIsNativeAd; 
@property (assign,nonatomic) BOOL isNativeAd;                                               //@synthesize isNativeAd=_isNativeAd - In the implementation block
@property (nonatomic,readonly) BOOL hasNativeCampaignData; 
@property (nonatomic,retain) NSString * nativeCampaignData;                                 //@synthesize nativeCampaignData=_nativeCampaignData - In the implementation block
@property (nonatomic,readonly) BOOL hasPreviousArticleId; 
@property (nonatomic,retain) NSString * previousArticleId;                                  //@synthesize previousArticleId=_previousArticleId - In the implementation block
@property (nonatomic,readonly) BOOL hasPreviousArticleVersion; 
@property (nonatomic,retain) NSString * previousArticleVersion;                             //@synthesize previousArticleVersion=_previousArticleVersion - In the implementation block
@property (nonatomic,retain) NSMutableArray * fractionalCohortMemberships;                  //@synthesize fractionalCohortMemberships=_fractionalCohortMemberships - In the implementation block
@property (assign,nonatomic) BOOL hasPublisherArticleVersionInt64; 
@property (assign,nonatomic) long long publisherArticleVersionInt64;                        //@synthesize publisherArticleVersionInt64=_publisherArticleVersionInt64 - In the implementation block
@property (assign,nonatomic) BOOL hasBackendArticleVersionInt64; 
@property (assign,nonatomic) long long backendArticleVersionInt64;                          //@synthesize backendArticleVersionInt64=_backendArticleVersionInt64 - In the implementation block
@property (nonatomic,readonly) BOOL hasIadNativeCampaign; 
@property (nonatomic,retain) NSString * iadNativeCampaign;                                  //@synthesize iadNativeCampaign=_iadNativeCampaign - In the implementation block
@property (nonatomic,readonly) BOOL hasIadNativeLine; 
@property (nonatomic,retain) NSString * iadNativeLine;                                      //@synthesize iadNativeLine=_iadNativeLine - In the implementation block
@property (nonatomic,readonly) BOOL hasIadNativeAd; 
@property (nonatomic,retain) NSString * iadNativeAd;                                        //@synthesize iadNativeAd=_iadNativeAd - In the implementation block
@property (assign,nonatomic) BOOL hasPreviousArticlePublisherArticleVersion; 
@property (assign,nonatomic) long long previousArticlePublisherArticleVersion;              //@synthesize previousArticlePublisherArticleVersion=_previousArticlePublisherArticleVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasIadNativeCampaignAd; 
@property (nonatomic,retain) NSString * iadNativeCampaignAd;                                //@synthesize iadNativeCampaignAd=_iadNativeCampaignAd - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupViewExposureId; 
@property (nonatomic,retain) NSData * groupViewExposureId;                                  //@synthesize groupViewExposureId=_groupViewExposureId - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueData; 
@property (nonatomic,retain) NTPBIssueData * issueData;                                     //@synthesize issueData=_issueData - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueExposureData; 
@property (nonatomic,retain) NTPBIssueExposureData * issueExposureData;                     //@synthesize issueExposureData=_issueExposureData - In the implementation block
@property (assign,nonatomic) BOOL hasContentType; 
@property (assign,nonatomic) int contentType;                                               //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,readonly) BOOL hasChannelData; 
@property (nonatomic,retain) NTPBChannelData * channelData;                                 //@synthesize channelData=_channelData - In the implementation block
@property (nonatomic,retain) NSMutableArray * topicIds;                                     //@synthesize topicIds=_topicIds - In the implementation block
+(Class)topicIdsType;
+(Class)namedEntitiesType;
+(Class)fractionalCohortMembershipType;
-(BOOL)hasIadNativeLine;
-(BOOL)hasIsNativeAd;
-(id)groupTypeAsString:(int)arg1 ;
-(void)setChannelData:(NTPBChannelData *)arg1 ;
-(unsigned long long)fractionalCohortMembershipsCount;
-(void)setIadNativeLine:(NSString *)arg1 ;
-(BOOL)hasCampaignId;
-(NSString *)campaignId;
-(int)characterCount;
-(void)clearTopicIds;
-(void)setTopicIds:(NSMutableArray *)arg1 ;
-(NSString *)surfacedByTopicId;
-(BOOL)hasPreviousArticleId;
-(NSData *)groupViewExposureId;
-(BOOL)isNativeAd;
-(NSString *)notificationId;
-(int)StringAsTopStoryType:(id)arg1 ;
-(BOOL)hasArticleType;
-(void)setPublisherArticleVersionInt64:(long long)arg1 ;
-(BOOL)hasIssueExposureData;
-(NTPBIssueData *)issueData;
-(BOOL)hasNextArticleAffordanceType;
-(BOOL)hasPreviousArticleVersion;
-(int)StringAsArticleType:(id)arg1 ;
-(long long)backendArticleVersionInt64;
-(BOOL)hasSurfacedByTopicId;
-(void)clearFractionalCohortMemberships;
-(void)setIadNativeCampaignAd:(NSString *)arg1 ;
-(BOOL)hasGroupViewExposureId;
-(void)setPreviousArticleVersion:(NSString *)arg1 ;
-(id)topStoryTypeAsString:(int)arg1 ;
-(void)setNamedEntities:(NSMutableArray *)arg1 ;
-(BOOL)isPaidSubscriberToSourceChannel;
-(void)setHasIsTopStoryArticle:(BOOL)arg1 ;
-(void)setReferencedArticleId:(NSString *)arg1 ;
-(BOOL)hasGroupFeedId;
-(NSMutableArray *)topicIds;
-(NSString *)previousArticleId;
-(void)setGroupFeedId:(NSString *)arg1 ;
-(void)setGroupViewExposureId:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasSourceChannelId;
-(void)setGroupType:(int)arg1 ;
-(void)setPreviousArticleId:(NSString *)arg1 ;
-(BOOL)hasPreviousArticlePublisherArticleVersion;
-(BOOL)hasNotificationId;
-(long long)previousArticlePublisherArticleVersion;
-(void)setCampaignType:(NSString *)arg1 ;
-(void)setPreviousArticlePublisherArticleVersion:(long long)arg1 ;
-(BOOL)hasCampaignType;
-(int)feedType;
-(NSString *)campaignType;
-(NSString *)sourceChannelId;
-(NSString *)previousArticleVersion;
-(void)setHasGroupType:(BOOL)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(BOOL)hasCreativeId;
-(BOOL)hasGroupType;
-(void)setCampaignId:(NSString *)arg1 ;
-(int)StringAsGroupType:(id)arg1 ;
-(NSString *)groupFeedId;
-(void)addFractionalCohortMembership:(id)arg1 ;
-(NSString *)creativeId;
-(void)setNotificationId:(NSString *)arg1 ;
-(void)setHasPreviousArticlePublisherArticleVersion:(BOOL)arg1 ;
-(void)setIsCoverArticle:(BOOL)arg1 ;
-(void)setCreativeId:(NSString *)arg1 ;
-(void)setHasIsDigitalReplicaAd:(BOOL)arg1 ;
-(void)setNextArticleAffordanceType:(int)arg1 ;
-(BOOL)hasTopStoryType;
-(BOOL)hasLanguage;
-(int)articleType;
-(void)setHasArticleType:(BOOL)arg1 ;
-(NSString *)sectionHeadlineId;
-(void)setHasPublisherArticleVersionInt64:(BOOL)arg1 ;
-(void)setFromNextArticleAffordanceTap:(BOOL)arg1 ;
-(void)setHasFromNextArticleAffordanceTap:(BOOL)arg1 ;
-(BOOL)hasFromNextArticleAffordanceTap;
-(id)contentTypeAsString:(int)arg1 ;
-(int)StringAsContentType:(id)arg1 ;
-(void)setIsUserSubscribedToFeed:(BOOL)arg1 ;
-(void)setHasIsNativeAd:(BOOL)arg1 ;
-(BOOL)hasArticleId;
-(BOOL)hasBackendArticleVersionInt64;
-(id)feedTypeAsString:(int)arg1 ;
-(void)setFeedType:(int)arg1 ;
-(void)setHasIsUserSubscribedToFeed:(BOOL)arg1 ;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setIadNativeAd:(NSString *)arg1 ;
-(NSString *)surfacedBySectionId;
-(BOOL)hasBackendArticleVersion;
-(int)addRemoveReadingListLocation;
-(void)setAddRemoveReadingListLocation:(int)arg1 ;
-(void)setHasAddRemoveReadingListLocation:(BOOL)arg1 ;
-(BOOL)hasAddRemoveReadingListLocation;
-(id)topicIdsAtIndex:(unsigned long long)arg1 ;
-(void)addTopicIds:(id)arg1 ;
-(void)setIsNativeAd:(BOOL)arg1 ;
-(void)setHasTopStoryType:(BOOL)arg1 ;
-(int)contentType;
-(BOOL)isGroupedArticle;
-(NSString *)referencedArticleId;
-(BOOL)fromNextArticleAffordanceTap;
-(void)setTopStoryType:(int)arg1 ;
-(BOOL)hasIsUserSubscribedToFeed;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isDigitalReplicaAd;
-(void)setPublisherArticleVersion:(int)arg1 ;
-(NSString *)surfacedByChannelId;
-(void)setCharacterCount:(int)arg1 ;
-(int)publisherArticleVersion;
-(BOOL)hasIsPaidSubscriberToSourceChannel;
-(BOOL)hasNativeCampaignData;
-(void)setIssueData:(NTPBIssueData *)arg1 ;
-(void)setHasIsCoverArticle:(BOOL)arg1 ;
-(unsigned long long)namedEntitiesCount;
-(void)setArticleType:(int)arg1 ;
-(BOOL)hasReferencedArticleId;
-(NSString *)iadNativeCampaignAd;
-(void)setArticleId:(NSString *)arg1 ;
-(void)setIsBreakingNewsArticle:(BOOL)arg1 ;
-(void)setSurfacedByChannelId:(NSString *)arg1 ;
-(BOOL)isBreakingNewsArticle;
-(void)setHasPersonalizationTreatmentId:(BOOL)arg1 ;
-(void)setHasPublisherArticleVersion:(BOOL)arg1 ;
-(void)setSurfacedByTopicId:(NSString *)arg1 ;
-(id)nextArticleAffordanceTypeAsString:(int)arg1 ;
-(id)description;
-(void)addNamedEntities:(id)arg1 ;
-(NSString *)articleId;
-(void)setHasIsBreakingNewsArticle:(BOOL)arg1 ;
-(int)StringAsNextArticleAffordanceType:(id)arg1 ;
-(int)userAction;
-(void)setHasNextArticleAffordanceType:(BOOL)arg1 ;
-(BOOL)isCoverArticle;
-(int)backendArticleVersion;
-(int)StringAsFeedType:(id)arg1 ;
-(BOOL)hasChannelData;
-(BOOL)hasIsDigitalReplicaAd;
-(BOOL)hasUserAction;
-(void)setBackendArticleVersion:(int)arg1 ;
-(void)setIsDigitalReplicaAd:(BOOL)arg1 ;
-(void)setHasFeedType:(BOOL)arg1 ;
-(NTPBIssueExposureData *)issueExposureData;
-(NSString *)iadNativeAd;
-(NSString *)iadNativeLine;
-(void)setHasIsGroupedArticle:(BOOL)arg1 ;
-(BOOL)hasSurfacedByChannelId;
-(id)namedEntitiesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasPublisherArticleVersionInt64;
-(void)setBackendArticleVersionInt64:(long long)arg1 ;
-(void)setIsGroupedArticle:(BOOL)arg1 ;
-(BOOL)hasIadNativeCampaignAd;
-(BOOL)isUserSubscribedToFeed;
-(BOOL)hasIadNativeAd;
-(BOOL)hasIsFreeArticle;
-(int)groupType;
-(long long)publisherArticleVersionInt64;
-(BOOL)hasIssueData;
-(unsigned long long)hash;
-(BOOL)hasIadNativeCampaign;
-(void)setHasBackendArticleVersionInt64:(BOOL)arg1 ;
-(void)setNativeCampaignData:(NSString *)arg1 ;
-(void)setHasBackendArticleVersion:(BOOL)arg1 ;
-(long long)personalizationTreatmentId;
-(BOOL)hasIsCoverArticle;
-(void)setIsNotificationArticle:(BOOL)arg1 ;
-(void)setHasIsNotificationArticle:(BOOL)arg1 ;
-(BOOL)hasIsNotificationArticle;
-(BOOL)isNotificationArticle;
-(BOOL)hasPublisherArticleVersion;
-(int)nextArticleAffordanceType;
-(BOOL)hasSectionHeadlineId;
-(void)setContentType:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasCharacterCount;
-(void)setHasCharacterCount:(BOOL)arg1 ;
-(BOOL)hasPersonalizationTreatmentId;
-(void)setHasIsPaidSubscriberToSourceChannel:(BOOL)arg1 ;
-(BOOL)isFreeArticle;
-(id)fractionalCohortMembershipAtIndex:(unsigned long long)arg1 ;
-(void)setUserAction:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)topStoryType;
-(void)setHasUserAction:(BOOL)arg1 ;
-(NSMutableArray *)fractionalCohortMemberships;
-(NSString *)nativeCampaignData;
-(void)setFractionalCohortMemberships:(NSMutableArray *)arg1 ;
-(NTPBChannelData *)channelData;
-(NSString *)iadNativeCampaign;
-(void)setIsPaidSubscriberToSourceChannel:(BOOL)arg1 ;
-(void)setPersonalizationTreatmentId:(long long)arg1 ;
-(void)setIsSearchResultArticle:(BOOL)arg1 ;
-(void)setHasIsSearchResultArticle:(BOOL)arg1 ;
-(BOOL)hasIsSearchResultArticle;
-(BOOL)isSearchResultArticle;
-(void)setNextArticleAffordanceTypeFeedId:(NSString *)arg1 ;
-(void)setSurfacedBySectionId:(NSString *)arg1 ;
-(NSString *)nextArticleAffordanceTypeFeedId;
-(BOOL)isTopStoryArticle;
-(BOOL)hasFeedType;
-(id)articleTypeAsString:(int)arg1 ;
-(unsigned long long)topicIdsCount;
-(void)setSectionHeadlineId:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasNextArticleAffordanceTypeFeedId;
-(NSString *)language;
-(void)setIssueExposureData:(NTPBIssueExposureData *)arg1 ;
-(void)setHasContentType:(BOOL)arg1 ;
-(BOOL)hasContentType;
-(void)setIsFreeArticle:(BOOL)arg1 ;
-(BOOL)hasIsGroupedArticle;
-(BOOL)hasIsBreakingNewsArticle;
-(BOOL)hasIsTopStoryArticle;
-(NSMutableArray *)namedEntities;
-(void)setHasIsFreeArticle:(BOOL)arg1 ;
-(void)setIsTopStoryArticle:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIadNativeCampaign:(NSString *)arg1 ;
-(BOOL)hasSurfacedBySectionId;
-(void)clearNamedEntities;
@end
