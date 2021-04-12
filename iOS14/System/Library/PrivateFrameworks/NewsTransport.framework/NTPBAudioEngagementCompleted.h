/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NTPBChannelData, NTPBIssueData, NTPBIssueViewData;

@interface NTPBAudioEngagementCompleted : PBCodable <NSCopying> {

	long long _timePlayed;
	long long _trackDuration;
	NSString* _articleId;
	NSData* _articleViewingSessionId;
	NTPBChannelData* _channelData;
	NSString* _engagementId;
	NSString* _feedId;
	int _feedType;
	NSString* _groupFeedId;
	int _groupType;
	NSData* _groupViewExposureId;
	NTPBIssueData* _issueData;
	NTPBIssueViewData* _issueViewData;
	NSString* _language;
	float _playbackSpeed;
	NSString* _sourceChannelId;
	int _trackVariant;
	BOOL _adSupportedChannel;
	BOOL _isPaidSubscriberToSourceChannel;
	SCD_Struct_NT6 _has;

}

@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                                 //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                           //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (assign,nonatomic) BOOL hasAdSupportedChannel; 
@property (assign,nonatomic) BOOL adSupportedChannel;                              //@synthesize adSupportedChannel=_adSupportedChannel - In the implementation block
@property (assign,nonatomic) BOOL hasGroupType; 
@property (assign,nonatomic) int groupType;                                        //@synthesize groupType=_groupType - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupFeedId; 
@property (nonatomic,retain) NSString * groupFeedId;                               //@synthesize groupFeedId=_groupFeedId - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupViewExposureId; 
@property (nonatomic,retain) NSData * groupViewExposureId;                         //@synthesize groupViewExposureId=_groupViewExposureId - In the implementation block
@property (assign,nonatomic) BOOL hasFeedType; 
@property (assign,nonatomic) int feedType;                                         //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedId; 
@property (nonatomic,retain) NSString * feedId;                                    //@synthesize feedId=_feedId - In the implementation block
@property (assign,nonatomic) BOOL hasTrackDuration; 
@property (assign,nonatomic) long long trackDuration;                              //@synthesize trackDuration=_trackDuration - In the implementation block
@property (assign,nonatomic) BOOL hasTrackVariant; 
@property (assign,nonatomic) int trackVariant;                                     //@synthesize trackVariant=_trackVariant - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleViewingSessionId; 
@property (nonatomic,retain) NSData * articleViewingSessionId;                     //@synthesize articleViewingSessionId=_articleViewingSessionId - In the implementation block
@property (assign,nonatomic) BOOL hasTimePlayed; 
@property (assign,nonatomic) long long timePlayed;                                 //@synthesize timePlayed=_timePlayed - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueData; 
@property (nonatomic,retain) NTPBIssueData * issueData;                            //@synthesize issueData=_issueData - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueViewData; 
@property (nonatomic,retain) NTPBIssueViewData * issueViewData;                    //@synthesize issueViewData=_issueViewData - In the implementation block
@property (nonatomic,readonly) BOOL hasChannelData; 
@property (nonatomic,retain) NTPBChannelData * channelData;                        //@synthesize channelData=_channelData - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguage; 
@property (nonatomic,retain) NSString * language;                                  //@synthesize language=_language - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackSpeed; 
@property (assign,nonatomic) float playbackSpeed;                                  //@synthesize playbackSpeed=_playbackSpeed - In the implementation block
@property (nonatomic,readonly) BOOL hasEngagementId; 
@property (nonatomic,retain) NSString * engagementId;                              //@synthesize engagementId=_engagementId - In the implementation block
@property (assign,nonatomic) BOOL hasIsPaidSubscriberToSourceChannel; 
@property (assign,nonatomic) BOOL isPaidSubscriberToSourceChannel;                 //@synthesize isPaidSubscriberToSourceChannel=_isPaidSubscriberToSourceChannel - In the implementation block
-(id)groupTypeAsString:(int)arg1 ;
-(void)setChannelData:(NTPBChannelData *)arg1 ;
-(NSData *)groupViewExposureId;
-(NTPBIssueData *)issueData;
-(BOOL)hasGroupViewExposureId;
-(BOOL)isPaidSubscriberToSourceChannel;
-(BOOL)hasGroupFeedId;
-(void)setHasAdSupportedChannel:(BOOL)arg1 ;
-(void)setGroupFeedId:(NSString *)arg1 ;
-(void)setGroupViewExposureId:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasSourceChannelId;
-(void)setGroupType:(int)arg1 ;
-(void)setFeedId:(NSString *)arg1 ;
-(BOOL)hasArticleViewingSessionId;
-(int)feedType;
-(void)setArticleViewingSessionId:(NSData *)arg1 ;
-(NSString *)sourceChannelId;
-(void)setHasGroupType:(BOOL)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(BOOL)hasGroupType;
-(BOOL)hasAdSupportedChannel;
-(int)StringAsGroupType:(id)arg1 ;
-(NSString *)groupFeedId;
-(void)setAdSupportedChannel:(BOOL)arg1 ;
-(NSData *)articleViewingSessionId;
-(BOOL)adSupportedChannel;
-(BOOL)hasLanguage;
-(void)setTimePlayed:(long long)arg1 ;
-(void)setHasTimePlayed:(BOOL)arg1 ;
-(BOOL)hasTimePlayed;
-(BOOL)hasArticleId;
-(long long)timePlayed;
-(id)feedTypeAsString:(int)arg1 ;
-(void)setFeedType:(int)arg1 ;
-(void)setLanguage:(NSString *)arg1 ;
-(long long)trackDuration;
-(float)playbackSpeed;
-(void)setPlaybackSpeed:(float)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasIsPaidSubscriberToSourceChannel;
-(void)setIssueData:(NTPBIssueData *)arg1 ;
-(NTPBIssueViewData *)issueViewData;
-(void)setArticleId:(NSString *)arg1 ;
-(id)description;
-(BOOL)hasFeedId;
-(void)setEngagementId:(NSString *)arg1 ;
-(void)setTrackDuration:(long long)arg1 ;
-(void)setHasTrackDuration:(BOOL)arg1 ;
-(int)trackVariant;
-(NSString *)articleId;
-(BOOL)hasTrackDuration;
-(void)setTrackVariant:(int)arg1 ;
-(void)setHasTrackVariant:(BOOL)arg1 ;
-(BOOL)hasTrackVariant;
-(id)trackVariantAsString:(int)arg1 ;
-(int)StringAsTrackVariant:(id)arg1 ;
-(BOOL)hasEngagementId;
-(NSString *)engagementId;
-(int)StringAsFeedType:(id)arg1 ;
-(BOOL)hasChannelData;
-(void)setHasFeedType:(BOOL)arg1 ;
-(int)groupType;
-(BOOL)hasIssueData;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)feedId;
-(void)setHasIsPaidSubscriberToSourceChannel:(BOOL)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setIssueViewData:(NTPBIssueViewData *)arg1 ;
-(BOOL)hasIssueViewData;
-(NTPBChannelData *)channelData;
-(void)setIsPaidSubscriberToSourceChannel:(BOOL)arg1 ;
-(BOOL)hasFeedType;
-(BOOL)hasPlaybackSpeed;
-(void)setHasPlaybackSpeed:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
-(BOOL)isEqual:(id)arg1 ;
@end

