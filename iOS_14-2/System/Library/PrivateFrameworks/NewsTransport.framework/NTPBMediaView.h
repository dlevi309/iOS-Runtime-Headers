/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSMutableArray, NTPBIssueData, NTPBIssueExposureData, NTPBIssueViewData, NTPBWidgetEngagement;

@interface NTPBMediaView : PBCodable <NSCopying> {

	long long _backendArticleVersionInt64;
	long long _personalizationTreatmentId;
	long long _previousArticlePublisherArticleVersion;
	long long _publisherArticleVersionInt64;
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
	NSString* _galleryId;
	int _galleryImageCount;
	NSMutableArray* _galleryImageIds;
	int _galleryType;
	NSData* _galleryViewingSessionId;
	NSString* _iadNativeAd;
	NSString* _iadNativeCampaign;
	NSString* _iadNativeCampaignAd;
	NSString* _iadNativeLine;
	NTPBIssueData* _issueData;
	NTPBIssueExposureData* _issueExposureData;
	NTPBIssueViewData* _issueViewData;
	NSString* _mediaId;
	int _mediaType;
	NSString* _metadata;
	NSMutableArray* _namedEntities;
	NSString* _previousArticleId;
	NSString* _previousArticleVersion;
	int _publisherArticleVersion;
	NSString* _referencedArticleId;
	NSString* _sectionHeadlineId;
	NSString* _sourceChannelId;
	NSString* _surfacedByChannelId;
	NSString* _surfacedBySectionId;
	NSString* _surfacedByTopicId;
	NTPBWidgetEngagement* _widgetEngagement;
	BOOL _adSupportedChannel;
	BOOL _isDigitalReplicaAd;
	BOOL _isNativeAd;
	BOOL _isUserSubscribedToFeed;
	SCD_Struct_NT8 _has;

}

@property (assign,nonatomic) BOOL hasMediaType; 
@property (assign,nonatomic) int mediaType;                                                 //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) BOOL hasMediaId; 
@property (nonatomic,retain) NSString * mediaId;                                            //@synthesize mediaId=_mediaId - In the implementation block
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
@property (assign,nonatomic) BOOL hasGalleryImageCount; 
@property (assign,nonatomic) int galleryImageCount;                                         //@synthesize galleryImageCount=_galleryImageCount - In the implementation block
@property (assign,nonatomic) BOOL hasGalleryType; 
@property (assign,nonatomic) int galleryType;                                               //@synthesize galleryType=_galleryType - In the implementation block
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
@property (assign,nonatomic) BOOL hasPersonalizationTreatmentId; 
@property (assign,nonatomic) long long personalizationTreatmentId;                          //@synthesize personalizationTreatmentId=_personalizationTreatmentId - In the implementation block
@property (nonatomic,retain) NSMutableArray * galleryImageIds;                              //@synthesize galleryImageIds=_galleryImageIds - In the implementation block
@property (nonatomic,readonly) BOOL hasMetadata; 
@property (nonatomic,retain) NSString * metadata;                                           //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) BOOL hasPreviousArticleId; 
@property (nonatomic,retain) NSString * previousArticleId;                                  //@synthesize previousArticleId=_previousArticleId - In the implementation block
@property (nonatomic,readonly) BOOL hasPreviousArticleVersion; 
@property (nonatomic,retain) NSString * previousArticleVersion;                             //@synthesize previousArticleVersion=_previousArticleVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasWidgetEngagement; 
@property (nonatomic,retain) NTPBWidgetEngagement * widgetEngagement;                       //@synthesize widgetEngagement=_widgetEngagement - In the implementation block
@property (nonatomic,retain) NSMutableArray * fractionalCohortMemberships;                  //@synthesize fractionalCohortMemberships=_fractionalCohortMemberships - In the implementation block
@property (assign,nonatomic) BOOL hasIsNativeAd; 
@property (assign,nonatomic) BOOL isNativeAd;                                               //@synthesize isNativeAd=_isNativeAd - In the implementation block
@property (assign,nonatomic) BOOL hasPublisherArticleVersionInt64; 
@property (assign,nonatomic) long long publisherArticleVersionInt64;                        //@synthesize publisherArticleVersionInt64=_publisherArticleVersionInt64 - In the implementation block
@property (assign,nonatomic) BOOL hasBackendArticleVersionInt64; 
@property (assign,nonatomic) long long backendArticleVersionInt64;                          //@synthesize backendArticleVersionInt64=_backendArticleVersionInt64 - In the implementation block
@property (assign,nonatomic) BOOL hasPreviousArticlePublisherArticleVersion; 
@property (assign,nonatomic) long long previousArticlePublisherArticleVersion;              //@synthesize previousArticlePublisherArticleVersion=_previousArticlePublisherArticleVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasGalleryId; 
@property (nonatomic,retain) NSString * galleryId;                                          //@synthesize galleryId=_galleryId - In the implementation block
@property (nonatomic,readonly) BOOL hasGalleryViewingSessionId; 
@property (nonatomic,retain) NSData * galleryViewingSessionId;                              //@synthesize galleryViewingSessionId=_galleryViewingSessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasIadNativeCampaign; 
@property (nonatomic,retain) NSString * iadNativeCampaign;                                  //@synthesize iadNativeCampaign=_iadNativeCampaign - In the implementation block
@property (nonatomic,readonly) BOOL hasIadNativeLine; 
@property (nonatomic,retain) NSString * iadNativeLine;                                      //@synthesize iadNativeLine=_iadNativeLine - In the implementation block
@property (nonatomic,readonly) BOOL hasIadNativeAd; 
@property (nonatomic,retain) NSString * iadNativeAd;                                        //@synthesize iadNativeAd=_iadNativeAd - In the implementation block
@property (nonatomic,readonly) BOOL hasIadNativeCampaignAd; 
@property (nonatomic,retain) NSString * iadNativeCampaignAd;                                //@synthesize iadNativeCampaignAd=_iadNativeCampaignAd - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueData; 
@property (nonatomic,retain) NTPBIssueData * issueData;                                     //@synthesize issueData=_issueData - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueExposureData; 
@property (nonatomic,retain) NTPBIssueExposureData * issueExposureData;                     //@synthesize issueExposureData=_issueExposureData - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueViewData; 
@property (nonatomic,retain) NTPBIssueViewData * issueViewData;                             //@synthesize issueViewData=_issueViewData - In the implementation block
+(Class)galleryImageIdsType;
+(Class)namedEntitiesType;
+(Class)fractionalCohortMembershipType;
-(BOOL)hasIadNativeLine;
-(BOOL)hasIsNativeAd;
-(unsigned long long)fractionalCohortMembershipsCount;
-(void)setIadNativeLine:(NSString *)arg1 ;
-(void)setWidgetEngagement:(NTPBWidgetEngagement *)arg1 ;
-(NSString *)surfacedByTopicId;
-(BOOL)hasPreviousArticleId;
-(BOOL)isNativeAd;
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
-(void)setPreviousArticleVersion:(NSString *)arg1 ;
-(void)setNamedEntities:(NSMutableArray *)arg1 ;
-(void)setReferencedArticleId:(NSString *)arg1 ;
-(NSString *)previousArticleId;
-(void)setHasAdSupportedChannel:(BOOL)arg1 ;
-(BOOL)hasFeedViewExposureId;
-(id)dictionaryRepresentation;
-(BOOL)hasWidgetEngagement;
-(BOOL)hasSourceChannelId;
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
-(void)setSourceChannelId:(NSString *)arg1 ;
-(BOOL)hasAdSupportedChannel;
-(NTPBWidgetEngagement *)widgetEngagement;
-(void)addFractionalCohortMembership:(id)arg1 ;
-(NSData *)feedViewExposureId;
-(void)setHasPreviousArticlePublisherArticleVersion:(BOOL)arg1 ;
-(void)setAdSupportedChannel:(BOOL)arg1 ;
-(NSData *)articleViewingSessionId;
-(BOOL)adSupportedChannel;
-(void)setMediaId:(NSString *)arg1 ;
-(void)setGalleryId:(NSString *)arg1 ;
-(void)setHasIsDigitalReplicaAd:(BOOL)arg1 ;
-(void)setMediaType:(int)arg1 ;
-(void)setArticleSessionId:(NSData *)arg1 ;
-(int)articleType;
-(void)setFeedViewExposureId:(NSData *)arg1 ;
-(void)addGalleryImageIds:(id)arg1 ;
-(void)setHasArticleType:(BOOL)arg1 ;
-(int)mediaType;
-(NSString *)sectionHeadlineId;
-(void)setHasPublisherArticleVersionInt64:(BOOL)arg1 ;
-(void)setIsUserSubscribedToFeed:(BOOL)arg1 ;
-(void)setGalleryViewingSessionId:(NSData *)arg1 ;
-(BOOL)hasMediaId;
-(void)setGalleryImageCount:(int)arg1 ;
-(void)setHasGalleryImageCount:(BOOL)arg1 ;
-(BOOL)hasGalleryImageCount;
-(int)galleryType;
-(void)setGalleryType:(int)arg1 ;
-(void)setHasGalleryType:(BOOL)arg1 ;
-(BOOL)hasGalleryType;
-(id)galleryTypeAsString:(int)arg1 ;
-(int)StringAsGalleryType:(id)arg1 ;
-(void)clearGalleryImageIds;
-(unsigned long long)galleryImageIdsCount;
-(id)galleryImageIdsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasGalleryId;
-(BOOL)hasGalleryViewingSessionId;
-(void)setHasIsNativeAd:(BOOL)arg1 ;
-(BOOL)hasArticleId;
-(BOOL)hasBackendArticleVersionInt64;
-(id)feedTypeAsString:(int)arg1 ;
-(void)setFeedType:(int)arg1 ;
-(void)setHasIsUserSubscribedToFeed:(BOOL)arg1 ;
-(int)galleryImageCount;
-(NSMutableArray *)galleryImageIds;
-(void)setGalleryImageIds:(NSMutableArray *)arg1 ;
-(NSData *)galleryViewingSessionId;
-(void)setHasMediaType:(BOOL)arg1 ;
-(void)setIadNativeAd:(NSString *)arg1 ;
-(NSString *)surfacedBySectionId;
-(BOOL)hasBackendArticleVersion;
-(void)setIsNativeAd:(BOOL)arg1 ;
-(NSString *)referencedArticleId;
-(BOOL)hasMediaType;
-(BOOL)hasIsUserSubscribedToFeed;
-(BOOL)hasMetadata;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isDigitalReplicaAd;
-(int)StringAsFeedCellSection:(id)arg1 ;
-(void)setPublisherArticleVersion:(int)arg1 ;
-(NSString *)surfacedByChannelId;
-(BOOL)hasArticleSessionId;
-(int)publisherArticleVersion;
-(void)setMetadata:(NSString *)arg1 ;
-(void)setIssueData:(NTPBIssueData *)arg1 ;
-(unsigned long long)namedEntitiesCount;
-(void)setArticleType:(int)arg1 ;
-(BOOL)hasReferencedArticleId;
-(NSString *)iadNativeCampaignAd;
-(NTPBIssueViewData *)issueViewData;
-(void)setArticleId:(NSString *)arg1 ;
-(void)setSurfacedByChannelId:(NSString *)arg1 ;
-(void)setHasPersonalizationTreatmentId:(BOOL)arg1 ;
-(BOOL)hasFeedCellSection;
-(void)setHasPublisherArticleVersion:(BOOL)arg1 ;
-(void)setSurfacedByTopicId:(NSString *)arg1 ;
-(id)description;
-(id)feedCellSectionAsString:(int)arg1 ;
-(BOOL)hasFeedId;
-(void)addNamedEntities:(id)arg1 ;
-(NSString *)articleId;
-(NSString *)mediaId;
-(int)backendArticleVersion;
-(int)StringAsFeedType:(id)arg1 ;
-(BOOL)hasIsDigitalReplicaAd;
-(void)setBackendArticleVersion:(int)arg1 ;
-(void)setIsDigitalReplicaAd:(BOOL)arg1 ;
-(void)setHasFeedType:(BOOL)arg1 ;
-(NTPBIssueExposureData *)issueExposureData;
-(NSString *)iadNativeAd;
-(NSString *)iadNativeLine;
-(BOOL)hasSurfacedByChannelId;
-(id)namedEntitiesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasPublisherArticleVersionInt64;
-(void)setBackendArticleVersionInt64:(long long)arg1 ;
-(BOOL)hasIadNativeCampaignAd;
-(BOOL)isUserSubscribedToFeed;
-(BOOL)hasIadNativeAd;
-(long long)publisherArticleVersionInt64;
-(BOOL)hasIssueData;
-(unsigned long long)hash;
-(BOOL)hasIadNativeCampaign;
-(void)setHasBackendArticleVersionInt64:(BOOL)arg1 ;
-(void)setHasBackendArticleVersion:(BOOL)arg1 ;
-(long long)personalizationTreatmentId;
-(BOOL)hasPublisherArticleVersion;
-(int)feedCellSection;
-(BOOL)hasSectionHeadlineId;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)articleSessionId;
-(BOOL)hasPersonalizationTreatmentId;
-(NSString *)feedId;
-(id)fractionalCohortMembershipAtIndex:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setIssueViewData:(NTPBIssueViewData *)arg1 ;
-(BOOL)hasIssueViewData;
-(NSMutableArray *)fractionalCohortMemberships;
-(void)setFractionalCohortMemberships:(NSMutableArray *)arg1 ;
-(NSString *)iadNativeCampaign;
-(void)setPersonalizationTreatmentId:(long long)arg1 ;
-(NSString *)galleryId;
-(void)setSurfacedBySectionId:(NSString *)arg1 ;
-(NSString *)metadata;
-(BOOL)hasFeedType;
-(id)articleTypeAsString:(int)arg1 ;
-(void)setFeedCellSection:(int)arg1 ;
-(void)setSectionHeadlineId:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIssueExposureData:(NTPBIssueExposureData *)arg1 ;
-(void)setHasFeedCellSection:(BOOL)arg1 ;
-(NSMutableArray *)namedEntities;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIadNativeCampaign:(NSString *)arg1 ;
-(id)mediaTypeAsString:(int)arg1 ;
-(int)StringAsMediaType:(id)arg1 ;
-(BOOL)hasSurfacedBySectionId;
-(void)clearNamedEntities;
@end

