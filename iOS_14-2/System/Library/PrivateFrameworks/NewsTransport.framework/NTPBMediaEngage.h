/*
* Generated on Thursday, January 14, 2021 at 2:23:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NTPBAlternateHeadline, NSString, NSData, NSMutableArray, NTPBIssueData, NTPBIssueExposureData, NTPBIssueViewData, NTPBWidgetEngagement;

@interface NTPBMediaEngage : PBCodable <NSCopying> {

	long long _backendArticleVersionInt64;
	long long _mediaDuration;
	long long _mediaPausePosition;
	long long _mediaResumePosition;
	long long _mediaResumeTimePlayed;
	long long _mediaTimePlayed;
	long long _personalizationTreatmentId;
	long long _previousArticlePublisherArticleVersion;
	long long _publisherArticleVersionInt64;
	NTPBAlternateHeadline* _alternateHeadline;
	NSString* _articleId;
	NSData* _articleSessionId;
	int _articleType;
	NSData* _articleViewingSessionId;
	int _backendArticleVersion;
	int _feedCellSection;
	NSString* _feedId;
	int _feedType;
	NSData* _feedViewExposureId;
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
	NTPBIssueViewData* _issueViewData;
	int _loadFailureReason;
	NSString* _mediaId;
	int _mediaPauseLocation;
	int _mediaPauseMethod;
	int _mediaPlayLocation;
	int _mediaPlayMethod;
	int _mediaResumeMethod;
	int _mediaType;
	NSString* _metadata;
	int _muteButtonState;
	NSMutableArray* _namedEntities;
	NSString* _nativeCampaignData;
	float _osVolumeLevel;
	NSString* _previousArticleId;
	NSString* _previousArticleVersion;
	int _publisherArticleVersion;
	int _rankInVideoPlaylist;
	NSString* _referencedArticleId;
	NSString* _sectionHeadlineId;
	NSString* _sourceChannelId;
	NSString* _surfacedByChannelId;
	NSString* _surfacedBySectionId;
	NSString* _surfacedByTopicId;
	int _topStoryType;
	NSMutableArray* _topicIds;
	int _userAction;
	int _videoType;
	NTPBWidgetEngagement* _widgetEngagement;
	BOOL _adSupportedChannel;
	BOOL _isBreakingNewsArticle;
	BOOL _isDigitalReplicaAd;
	BOOL _isNativeAd;
	BOOL _isTopStoryArticle;
	BOOL _isUserSubscribedToFeed;
	BOOL _isVideoInFeed;
	SCD_Struct_NT14 _has;

}

@property (assign,nonatomic) BOOL hasMediaType; 
@property (assign,nonatomic) int mediaType;                                                 //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) BOOL hasMediaId; 
@property (nonatomic,retain) NSString * mediaId;                                            //@synthesize mediaId=_mediaId - In the implementation block
@property (assign,nonatomic) BOOL hasMediaTimePlayed; 
@property (assign,nonatomic) long long mediaTimePlayed;                                     //@synthesize mediaTimePlayed=_mediaTimePlayed - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                                          //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasReferencedArticleId; 
@property (nonatomic,retain) NSString * referencedArticleId;                                //@synthesize referencedArticleId=_referencedArticleId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleSessionId; 
@property (nonatomic,retain) NSData * articleSessionId;                                     //@synthesize articleSessionId=_articleSessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleViewingSessionId; 
@property (nonatomic,retain) NSData * articleViewingSessionId;                              //@synthesize articleViewingSessionId=_articleViewingSessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                                    //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (assign,nonatomic) BOOL hasMediaPlayMethod; 
@property (assign,nonatomic) int mediaPlayMethod;                                           //@synthesize mediaPlayMethod=_mediaPlayMethod - In the implementation block
@property (assign,nonatomic) BOOL hasMediaPauseMethod; 
@property (assign,nonatomic) int mediaPauseMethod;                                          //@synthesize mediaPauseMethod=_mediaPauseMethod - In the implementation block
@property (assign,nonatomic) BOOL hasMediaPausePosition; 
@property (assign,nonatomic) long long mediaPausePosition;                                  //@synthesize mediaPausePosition=_mediaPausePosition - In the implementation block
@property (assign,nonatomic) BOOL hasMediaResumeTimePlayed; 
@property (assign,nonatomic) long long mediaResumeTimePlayed;                               //@synthesize mediaResumeTimePlayed=_mediaResumeTimePlayed - In the implementation block
@property (assign,nonatomic) BOOL hasMediaResumeMethod; 
@property (assign,nonatomic) int mediaResumeMethod;                                         //@synthesize mediaResumeMethod=_mediaResumeMethod - In the implementation block
@property (assign,nonatomic) BOOL hasMediaResumePosition; 
@property (assign,nonatomic) long long mediaResumePosition;                                 //@synthesize mediaResumePosition=_mediaResumePosition - In the implementation block
@property (assign,nonatomic) BOOL hasMediaPlayLocation; 
@property (assign,nonatomic) int mediaPlayLocation;                                         //@synthesize mediaPlayLocation=_mediaPlayLocation - In the implementation block
@property (assign,nonatomic) BOOL hasFeedType; 
@property (assign,nonatomic) int feedType;                                                  //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedId; 
@property (nonatomic,retain) NSString * feedId;                                             //@synthesize feedId=_feedId - In the implementation block
@property (assign,nonatomic) BOOL hasFeedCellSection; 
@property (assign,nonatomic) int feedCellSection;                                           //@synthesize feedCellSection=_feedCellSection - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedViewExposureId; 
@property (nonatomic,retain) NSData * feedViewExposureId;                                   //@synthesize feedViewExposureId=_feedViewExposureId - In the implementation block
@property (assign,nonatomic) BOOL hasIsUserSubscribedToFeed; 
@property (assign,nonatomic) BOOL isUserSubscribedToFeed;                                   //@synthesize isUserSubscribedToFeed=_isUserSubscribedToFeed - In the implementation block
@property (assign,nonatomic) BOOL hasArticleType; 
@property (assign,nonatomic) int articleType;                                               //@synthesize articleType=_articleType - In the implementation block
@property (nonatomic,retain) NSMutableArray * namedEntities;                                //@synthesize namedEntities=_namedEntities - In the implementation block
@property (assign,nonatomic) BOOL hasPublisherArticleVersion; 
@property (assign,nonatomic) int publisherArticleVersion;                                   //@synthesize publisherArticleVersion=_publisherArticleVersion - In the implementation block
@property (assign,nonatomic) BOOL hasBackendArticleVersion; 
@property (assign,nonatomic) int backendArticleVersion;                                     //@synthesize backendArticleVersion=_backendArticleVersion - In the implementation block
@property (assign,nonatomic) BOOL hasAdSupportedChannel; 
@property (assign,nonatomic) BOOL adSupportedChannel;                                       //@synthesize adSupportedChannel=_adSupportedChannel - In the implementation block
@property (nonatomic,readonly) BOOL hasSurfacedByChannelId; 
@property (nonatomic,retain) NSString * surfacedByChannelId;                                //@synthesize surfacedByChannelId=_surfacedByChannelId - In the implementation block
@property (nonatomic,readonly) BOOL hasSurfacedBySectionId; 
@property (nonatomic,retain) NSString * surfacedBySectionId;                                //@synthesize surfacedBySectionId=_surfacedBySectionId - In the implementation block
@property (nonatomic,readonly) BOOL hasSurfacedByTopicId; 
@property (nonatomic,retain) NSString * surfacedByTopicId;                                  //@synthesize surfacedByTopicId=_surfacedByTopicId - In the implementation block
@property (nonatomic,readonly) BOOL hasSectionHeadlineId; 
@property (nonatomic,retain) NSString * sectionHeadlineId;                                  //@synthesize sectionHeadlineId=_sectionHeadlineId - In the implementation block
@property (assign,nonatomic) BOOL hasIsDigitalReplicaAd; 
@property (assign,nonatomic) BOOL isDigitalReplicaAd;                                       //@synthesize isDigitalReplicaAd=_isDigitalReplicaAd - In the implementation block
@property (assign,nonatomic) BOOL hasUserAction; 
@property (assign,nonatomic) int userAction;                                                //@synthesize userAction=_userAction - In the implementation block
@property (assign,nonatomic) BOOL hasIsVideoInFeed; 
@property (assign,nonatomic) BOOL isVideoInFeed;                                            //@synthesize isVideoInFeed=_isVideoInFeed - In the implementation block
@property (assign,nonatomic) BOOL hasPersonalizationTreatmentId; 
@property (assign,nonatomic) long long personalizationTreatmentId;                          //@synthesize personalizationTreatmentId=_personalizationTreatmentId - In the implementation block
@property (assign,nonatomic) BOOL hasMediaPauseLocation; 
@property (assign,nonatomic) int mediaPauseLocation;                                        //@synthesize mediaPauseLocation=_mediaPauseLocation - In the implementation block
@property (assign,nonatomic) BOOL hasMediaDuration; 
@property (assign,nonatomic) long long mediaDuration;                                       //@synthesize mediaDuration=_mediaDuration - In the implementation block
@property (assign,nonatomic) BOOL hasIsBreakingNewsArticle; 
@property (assign,nonatomic) BOOL isBreakingNewsArticle;                                    //@synthesize isBreakingNewsArticle=_isBreakingNewsArticle - In the implementation block
@property (assign,nonatomic) BOOL hasLoadFailureReason; 
@property (assign,nonatomic) int loadFailureReason;                                         //@synthesize loadFailureReason=_loadFailureReason - In the implementation block
@property (assign,nonatomic) BOOL hasTopStoryType; 
@property (assign,nonatomic) int topStoryType;                                              //@synthesize topStoryType=_topStoryType - In the implementation block
@property (assign,nonatomic) BOOL hasIsTopStoryArticle; 
@property (assign,nonatomic) BOOL isTopStoryArticle;                                        //@synthesize isTopStoryArticle=_isTopStoryArticle - In the implementation block
@property (assign,nonatomic) BOOL hasIsNativeAd; 
@property (assign,nonatomic) BOOL isNativeAd;                                               //@synthesize isNativeAd=_isNativeAd - In the implementation block
@property (nonatomic,readonly) BOOL hasNativeCampaignData; 
@property (nonatomic,retain) NSString * nativeCampaignData;                                 //@synthesize nativeCampaignData=_nativeCampaignData - In the implementation block
@property (nonatomic,readonly) BOOL hasMetadata; 
@property (nonatomic,retain) NSString * metadata;                                           //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) BOOL hasPreviousArticleId; 
@property (nonatomic,retain) NSString * previousArticleId;                                  //@synthesize previousArticleId=_previousArticleId - In the implementation block
@property (nonatomic,readonly) BOOL hasPreviousArticleVersion; 
@property (nonatomic,retain) NSString * previousArticleVersion;                             //@synthesize previousArticleVersion=_previousArticleVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasWidgetEngagement; 
@property (nonatomic,retain) NTPBWidgetEngagement * widgetEngagement;                       //@synthesize widgetEngagement=_widgetEngagement - In the implementation block
@property (assign,nonatomic) BOOL hasGroupType; 
@property (assign,nonatomic) int groupType;                                                 //@synthesize groupType=_groupType - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupFeedId; 
@property (nonatomic,retain) NSString * groupFeedId;                                        //@synthesize groupFeedId=_groupFeedId - In the implementation block
@property (nonatomic,retain) NSMutableArray * fractionalCohortMemberships;                  //@synthesize fractionalCohortMemberships=_fractionalCohortMemberships - In the implementation block
@property (assign,nonatomic) BOOL hasVideoType; 
@property (assign,nonatomic) int videoType;                                                 //@synthesize videoType=_videoType - In the implementation block
@property (assign,nonatomic) BOOL hasPublisherArticleVersionInt64; 
@property (assign,nonatomic) long long publisherArticleVersionInt64;                        //@synthesize publisherArticleVersionInt64=_publisherArticleVersionInt64 - In the implementation block
@property (assign,nonatomic) BOOL hasBackendArticleVersionInt64; 
@property (assign,nonatomic) long long backendArticleVersionInt64;                          //@synthesize backendArticleVersionInt64=_backendArticleVersionInt64 - In the implementation block
@property (assign,nonatomic) BOOL hasMuteButtonState; 
@property (assign,nonatomic) int muteButtonState;                                           //@synthesize muteButtonState=_muteButtonState - In the implementation block
@property (assign,nonatomic) BOOL hasOsVolumeLevel; 
@property (assign,nonatomic) float osVolumeLevel;                                           //@synthesize osVolumeLevel=_osVolumeLevel - In the implementation block
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
@property (nonatomic,retain) NSMutableArray * topicIds;                                     //@synthesize topicIds=_topicIds - In the implementation block
+(Class)topicIdsType;
+(Class)namedEntitiesType;
+(Class)fractionalCohortMembershipType;
-(BOOL)hasIadNativeLine;
-(BOOL)hasIsNativeAd;
-(id)groupTypeAsString:(int)arg1 ;
-(unsigned long long)fractionalCohortMembershipsCount;
-(void)setIadNativeLine:(NSString *)arg1 ;
-(void)clearTopicIds;
-(void)setIsVideoInFeed:(BOOL)arg1 ;
-(void)setTopicIds:(NSMutableArray *)arg1 ;
-(void)setWidgetEngagement:(NTPBWidgetEngagement *)arg1 ;
-(NSString *)surfacedByTopicId;
-(BOOL)hasPreviousArticleId;
-(NSData *)groupViewExposureId;
-(BOOL)isNativeAd;
-(int)StringAsTopStoryType:(id)arg1 ;
-(BOOL)hasArticleType;
-(void)setPublisherArticleVersionInt64:(long long)arg1 ;
-(BOOL)hasIssueExposureData;
-(NTPBIssueData *)issueData;
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
-(void)setHasIsTopStoryArticle:(BOOL)arg1 ;
-(void)setReferencedArticleId:(NSString *)arg1 ;
-(BOOL)hasGroupFeedId;
-(NSMutableArray *)topicIds;
-(NSString *)previousArticleId;
-(void)setHasAdSupportedChannel:(BOOL)arg1 ;
-(void)setGroupFeedId:(NSString *)arg1 ;
-(BOOL)hasFeedViewExposureId;
-(void)setGroupViewExposureId:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasWidgetEngagement;
-(BOOL)hasSourceChannelId;
-(void)setGroupType:(int)arg1 ;
-(void)setPreviousArticleId:(NSString *)arg1 ;
-(BOOL)hasPreviousArticlePublisherArticleVersion;
-(void)setFeedId:(NSString *)arg1 ;
-(BOOL)hasArticleViewingSessionId;
-(long long)previousArticlePublisherArticleVersion;
-(void)setPreviousArticlePublisherArticleVersion:(long long)arg1 ;
-(int)feedType;
-(void)setArticleViewingSessionId:(NSData *)arg1 ;
-(NSString *)sourceChannelId;
-(NSString *)previousArticleVersion;
-(void)setHasGroupType:(BOOL)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(BOOL)hasGroupType;
-(BOOL)hasAdSupportedChannel;
-(int)StringAsGroupType:(id)arg1 ;
-(NTPBWidgetEngagement *)widgetEngagement;
-(NSString *)groupFeedId;
-(void)addFractionalCohortMembership:(id)arg1 ;
-(NSData *)feedViewExposureId;
-(void)setHasPreviousArticlePublisherArticleVersion:(BOOL)arg1 ;
-(BOOL)hasIsVideoInFeed;
-(void)setAdSupportedChannel:(BOOL)arg1 ;
-(NSData *)articleViewingSessionId;
-(BOOL)adSupportedChannel;
-(void)setMediaId:(NSString *)arg1 ;
-(void)setHasIsDigitalReplicaAd:(BOOL)arg1 ;
-(void)setMediaType:(int)arg1 ;
-(BOOL)hasTopStoryType;
-(void)setArticleSessionId:(NSData *)arg1 ;
-(int)articleType;
-(void)setFeedViewExposureId:(NSData *)arg1 ;
-(void)setHasArticleType:(BOOL)arg1 ;
-(int)mediaType;
-(NSString *)sectionHeadlineId;
-(void)setHasPublisherArticleVersionInt64:(BOOL)arg1 ;
-(void)setIsUserSubscribedToFeed:(BOOL)arg1 ;
-(BOOL)hasMediaId;
-(void)setHasIsNativeAd:(BOOL)arg1 ;
-(BOOL)hasArticleId;
-(BOOL)hasBackendArticleVersionInt64;
-(id)feedTypeAsString:(int)arg1 ;
-(void)setFeedType:(int)arg1 ;
-(void)setHasIsUserSubscribedToFeed:(BOOL)arg1 ;
-(void)setHasMediaType:(BOOL)arg1 ;
-(void)setIadNativeAd:(NSString *)arg1 ;
-(NSString *)surfacedBySectionId;
-(BOOL)hasBackendArticleVersion;
-(id)topicIdsAtIndex:(unsigned long long)arg1 ;
-(void)addTopicIds:(id)arg1 ;
-(void)setIsNativeAd:(BOOL)arg1 ;
-(void)setHasTopStoryType:(BOOL)arg1 ;
-(NSString *)referencedArticleId;
-(BOOL)hasMediaType;
-(void)setTopStoryType:(int)arg1 ;
-(BOOL)hasIsUserSubscribedToFeed;
-(BOOL)hasMetadata;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isDigitalReplicaAd;
-(int)videoType;
-(int)StringAsFeedCellSection:(id)arg1 ;
-(void)setPublisherArticleVersion:(int)arg1 ;
-(NSString *)surfacedByChannelId;
-(long long)mediaDuration;
-(BOOL)hasArticleSessionId;
-(int)publisherArticleVersion;
-(void)setMetadata:(NSString *)arg1 ;
-(BOOL)hasNativeCampaignData;
-(void)setVideoType:(int)arg1 ;
-(void)setHasVideoType:(BOOL)arg1 ;
-(BOOL)hasVideoType;
-(void)setIssueData:(NTPBIssueData *)arg1 ;
-(id)videoTypeAsString:(int)arg1 ;
-(int)StringAsVideoType:(id)arg1 ;
-(unsigned long long)namedEntitiesCount;
-(int)rankInVideoPlaylist;
-(void)setArticleType:(int)arg1 ;
-(BOOL)hasReferencedArticleId;
-(NSString *)iadNativeCampaignAd;
-(NTPBIssueViewData *)issueViewData;
-(void)setAlternateHeadline:(NTPBAlternateHeadline *)arg1 ;
-(void)setArticleId:(NSString *)arg1 ;
-(void)setIsBreakingNewsArticle:(BOOL)arg1 ;
-(void)setSurfacedByChannelId:(NSString *)arg1 ;
-(BOOL)isBreakingNewsArticle;
-(void)setHasPersonalizationTreatmentId:(BOOL)arg1 ;
-(BOOL)hasFeedCellSection;
-(void)setHasPublisherArticleVersion:(BOOL)arg1 ;
-(void)setSurfacedByTopicId:(NSString *)arg1 ;
-(id)description;
-(id)feedCellSectionAsString:(int)arg1 ;
-(BOOL)hasFeedId;
-(void)addNamedEntities:(id)arg1 ;
-(NSString *)articleId;
-(int)mediaPlayLocation;
-(void)setMediaPlayLocation:(int)arg1 ;
-(void)setHasMediaPlayLocation:(BOOL)arg1 ;
-(BOOL)hasMediaPlayLocation;
-(void)setMediaDuration:(long long)arg1 ;
-(void)setHasMediaDuration:(BOOL)arg1 ;
-(BOOL)hasMediaDuration;
-(void)setMediaTimePlayed:(long long)arg1 ;
-(void)setHasMediaTimePlayed:(BOOL)arg1 ;
-(void)setHasIsBreakingNewsArticle:(BOOL)arg1 ;
-(BOOL)hasMediaTimePlayed;
-(long long)mediaTimePlayed;
-(int)userAction;
-(NSString *)mediaId;
-(int)backendArticleVersion;
-(int)StringAsFeedType:(id)arg1 ;
-(BOOL)hasIsDigitalReplicaAd;
-(BOOL)hasRankInVideoPlaylist;
-(BOOL)hasUserAction;
-(NTPBAlternateHeadline *)alternateHeadline;
-(void)setBackendArticleVersion:(int)arg1 ;
-(void)setIsDigitalReplicaAd:(BOOL)arg1 ;
-(void)setHasFeedType:(BOOL)arg1 ;
-(NTPBIssueExposureData *)issueExposureData;
-(NSString *)iadNativeAd;
-(NSString *)iadNativeLine;
-(BOOL)hasSurfacedByChannelId;
-(id)namedEntitiesAtIndex:(unsigned long long)arg1 ;
-(void)setHasLoadFailureReason:(BOOL)arg1 ;
-(BOOL)hasPublisherArticleVersionInt64;
-(int)mediaPlayMethod;
-(void)setMediaPlayMethod:(int)arg1 ;
-(void)setHasMediaPlayMethod:(BOOL)arg1 ;
-(BOOL)hasMediaPlayMethod;
-(int)mediaPauseMethod;
-(int)mediaResumeMethod;
-(void)setBackendArticleVersionInt64:(long long)arg1 ;
-(void)setMediaPauseMethod:(int)arg1 ;
-(void)setHasMediaPauseMethod:(BOOL)arg1 ;
-(BOOL)hasMediaPauseMethod;
-(void)setMediaPausePosition:(long long)arg1 ;
-(void)setHasMediaPausePosition:(BOOL)arg1 ;
-(BOOL)hasMediaPausePosition;
-(void)setMediaResumeTimePlayed:(long long)arg1 ;
-(void)setHasMediaResumeTimePlayed:(BOOL)arg1 ;
-(BOOL)hasMediaResumeTimePlayed;
-(void)setMediaResumeMethod:(int)arg1 ;
-(void)setHasMediaResumeMethod:(BOOL)arg1 ;
-(BOOL)hasMediaResumeMethod;
-(void)setMediaResumePosition:(long long)arg1 ;
-(void)setHasMediaResumePosition:(BOOL)arg1 ;
-(int)loadFailureReason;
-(BOOL)hasIadNativeCampaignAd;
-(BOOL)hasMediaResumePosition;
-(int)mediaPauseLocation;
-(void)setMediaPauseLocation:(int)arg1 ;
-(void)setHasMediaPauseLocation:(BOOL)arg1 ;
-(BOOL)hasMediaPauseLocation;
-(int)muteButtonState;
-(void)setMuteButtonState:(int)arg1 ;
-(void)setHasMuteButtonState:(BOOL)arg1 ;
-(BOOL)hasMuteButtonState;
-(void)setOsVolumeLevel:(float)arg1 ;
-(void)setHasOsVolumeLevel:(BOOL)arg1 ;
-(BOOL)hasOsVolumeLevel;
-(long long)mediaPausePosition;
-(long long)mediaResumeTimePlayed;
-(long long)mediaResumePosition;
-(float)osVolumeLevel;
-(BOOL)isUserSubscribedToFeed;
-(BOOL)hasIadNativeAd;
-(int)groupType;
-(long long)publisherArticleVersionInt64;
-(BOOL)hasIssueData;
-(unsigned long long)hash;
-(BOOL)hasIadNativeCampaign;
-(void)setHasBackendArticleVersionInt64:(BOOL)arg1 ;
-(void)setNativeCampaignData:(NSString *)arg1 ;
-(void)setHasBackendArticleVersion:(BOOL)arg1 ;
-(long long)personalizationTreatmentId;
-(BOOL)hasAlternateHeadline;
-(void)setRankInVideoPlaylist:(int)arg1 ;
-(BOOL)hasPublisherArticleVersion;
-(int)feedCellSection;
-(BOOL)hasSectionHeadlineId;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)articleSessionId;
-(BOOL)hasPersonalizationTreatmentId;
-(NSString *)feedId;
-(void)setLoadFailureReason:(int)arg1 ;
-(id)fractionalCohortMembershipAtIndex:(unsigned long long)arg1 ;
-(void)setUserAction:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setIssueViewData:(NTPBIssueViewData *)arg1 ;
-(int)topStoryType;
-(void)setHasUserAction:(BOOL)arg1 ;
-(BOOL)hasIssueViewData;
-(NSMutableArray *)fractionalCohortMemberships;
-(NSString *)nativeCampaignData;
-(void)setFractionalCohortMemberships:(NSMutableArray *)arg1 ;
-(NSString *)iadNativeCampaign;
-(void)setPersonalizationTreatmentId:(long long)arg1 ;
-(void)setHasIsVideoInFeed:(BOOL)arg1 ;
-(void)setSurfacedBySectionId:(NSString *)arg1 ;
-(NSString *)metadata;
-(BOOL)isTopStoryArticle;
-(BOOL)hasFeedType;
-(id)articleTypeAsString:(int)arg1 ;
-(unsigned long long)topicIdsCount;
-(void)setFeedCellSection:(int)arg1 ;
-(void)setSectionHeadlineId:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIssueExposureData:(NTPBIssueExposureData *)arg1 ;
-(BOOL)hasLoadFailureReason;
-(void)setHasFeedCellSection:(BOOL)arg1 ;
-(void)setHasRankInVideoPlaylist:(BOOL)arg1 ;
-(BOOL)hasIsBreakingNewsArticle;
-(BOOL)hasIsTopStoryArticle;
-(NSMutableArray *)namedEntities;
-(BOOL)isVideoInFeed;
-(void)setIsTopStoryArticle:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIadNativeCampaign:(NSString *)arg1 ;
-(id)mediaTypeAsString:(int)arg1 ;
-(int)StringAsMediaType:(id)arg1 ;
-(BOOL)hasSurfacedBySectionId;
-(void)clearNamedEntities;
@end

