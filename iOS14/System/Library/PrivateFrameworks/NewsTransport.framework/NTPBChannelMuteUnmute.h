/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NTPBChannelMuteUnmute : PBCodable <NSCopying> {

	long long _previousArticlePublisherArticleVersion;
	NSString* _articleId;
	NSData* _articleSessionId;
	NSString* _articleSessionIdDeprecated;
	NSData* _articleViewingSessionId;
	NSString* _articleViewingSessionIdDeprecated;
	NSString* _campaignId;
	NSString* _campaignType;
	NSString* _channelMuteUnmuteFeedId;
	NSString* _creativeId;
	int _feedType;
	NSData* _feedViewExposureId;
	NSString* _feedViewExposureIdDeprecated;
	int _feedViewPresentationReason;
	int _groupType;
	NSData* _groupViewExposureId;
	int _muteUnmuteLocation;
	NSString* _previousArticleId;
	NSString* _previousArticleVersion;
	NSString* _referencedArticleId;
	NSString* _sourceChannelId;
	int _userAction;
	BOOL _isSearchResultArticle;
	BOOL _isUserSubscribedToFeed;
	SCD_Struct_NT6 _has;

}

@property (assign,nonatomic) BOOL hasUserAction; 
@property (assign,nonatomic) int userAction;                                                //@synthesize userAction=_userAction - In the implementation block
@property (assign,nonatomic) BOOL hasMuteUnmuteLocation; 
@property (assign,nonatomic) int muteUnmuteLocation;                                        //@synthesize muteUnmuteLocation=_muteUnmuteLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                                          //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasReferencedArticleId; 
@property (nonatomic,retain) NSString * referencedArticleId;                                //@synthesize referencedArticleId=_referencedArticleId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleSessionIdDeprecated; 
@property (nonatomic,retain) NSString * articleSessionIdDeprecated;                         //@synthesize articleSessionIdDeprecated=_articleSessionIdDeprecated - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleViewingSessionIdDeprecated; 
@property (nonatomic,retain) NSString * articleViewingSessionIdDeprecated;                  //@synthesize articleViewingSessionIdDeprecated=_articleViewingSessionIdDeprecated - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                                    //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (assign,nonatomic) BOOL hasFeedType; 
@property (assign,nonatomic) int feedType;                                                  //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,readonly) BOOL hasChannelMuteUnmuteFeedId; 
@property (nonatomic,retain) NSString * channelMuteUnmuteFeedId;                            //@synthesize channelMuteUnmuteFeedId=_channelMuteUnmuteFeedId - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedViewExposureIdDeprecated; 
@property (nonatomic,retain) NSString * feedViewExposureIdDeprecated;                       //@synthesize feedViewExposureIdDeprecated=_feedViewExposureIdDeprecated - In the implementation block
@property (assign,nonatomic) BOOL hasIsUserSubscribedToFeed; 
@property (assign,nonatomic) BOOL isUserSubscribedToFeed;                                   //@synthesize isUserSubscribedToFeed=_isUserSubscribedToFeed - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleSessionId; 
@property (nonatomic,retain) NSData * articleSessionId;                                     //@synthesize articleSessionId=_articleSessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleViewingSessionId; 
@property (nonatomic,retain) NSData * articleViewingSessionId;                              //@synthesize articleViewingSessionId=_articleViewingSessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedViewExposureId; 
@property (nonatomic,retain) NSData * feedViewExposureId;                                   //@synthesize feedViewExposureId=_feedViewExposureId - In the implementation block
@property (assign,nonatomic) BOOL hasGroupType; 
@property (assign,nonatomic) int groupType;                                                 //@synthesize groupType=_groupType - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignId; 
@property (nonatomic,retain) NSString * campaignId;                                         //@synthesize campaignId=_campaignId - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignType; 
@property (nonatomic,retain) NSString * campaignType;                                       //@synthesize campaignType=_campaignType - In the implementation block
@property (nonatomic,readonly) BOOL hasCreativeId; 
@property (nonatomic,retain) NSString * creativeId;                                         //@synthesize creativeId=_creativeId - In the implementation block
@property (assign,nonatomic) BOOL hasFeedViewPresentationReason; 
@property (assign,nonatomic) int feedViewPresentationReason;                                //@synthesize feedViewPresentationReason=_feedViewPresentationReason - In the implementation block
@property (assign,nonatomic) BOOL hasIsSearchResultArticle; 
@property (assign,nonatomic) BOOL isSearchResultArticle;                                    //@synthesize isSearchResultArticle=_isSearchResultArticle - In the implementation block
@property (nonatomic,readonly) BOOL hasPreviousArticleId; 
@property (nonatomic,retain) NSString * previousArticleId;                                  //@synthesize previousArticleId=_previousArticleId - In the implementation block
@property (nonatomic,readonly) BOOL hasPreviousArticleVersion; 
@property (nonatomic,retain) NSString * previousArticleVersion;                             //@synthesize previousArticleVersion=_previousArticleVersion - In the implementation block
@property (assign,nonatomic) BOOL hasPreviousArticlePublisherArticleVersion; 
@property (assign,nonatomic) long long previousArticlePublisherArticleVersion;              //@synthesize previousArticlePublisherArticleVersion=_previousArticlePublisherArticleVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupViewExposureId; 
@property (nonatomic,retain) NSData * groupViewExposureId;                                  //@synthesize groupViewExposureId=_groupViewExposureId - In the implementation block
-(id)groupTypeAsString:(int)arg1 ;
-(BOOL)hasCampaignId;
-(NSString *)campaignId;
-(BOOL)hasPreviousArticleId;
-(NSData *)groupViewExposureId;
-(BOOL)hasPreviousArticleVersion;
-(BOOL)hasGroupViewExposureId;
-(void)setPreviousArticleVersion:(NSString *)arg1 ;
-(void)setReferencedArticleId:(NSString *)arg1 ;
-(NSString *)previousArticleId;
-(BOOL)hasFeedViewExposureId;
-(void)setGroupViewExposureId:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasSourceChannelId;
-(void)setGroupType:(int)arg1 ;
-(void)setPreviousArticleId:(NSString *)arg1 ;
-(BOOL)hasPreviousArticlePublisherArticleVersion;
-(BOOL)hasArticleViewingSessionId;
-(long long)previousArticlePublisherArticleVersion;
-(void)setCampaignType:(NSString *)arg1 ;
-(void)setPreviousArticlePublisherArticleVersion:(long long)arg1 ;
-(BOOL)hasCampaignType;
-(int)feedType;
-(NSString *)campaignType;
-(void)setArticleViewingSessionId:(NSData *)arg1 ;
-(NSString *)sourceChannelId;
-(NSString *)previousArticleVersion;
-(void)setHasGroupType:(BOOL)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(BOOL)hasCreativeId;
-(BOOL)hasGroupType;
-(void)setCampaignId:(NSString *)arg1 ;
-(int)StringAsGroupType:(id)arg1 ;
-(NSData *)feedViewExposureId;
-(NSString *)creativeId;
-(void)setHasPreviousArticlePublisherArticleVersion:(BOOL)arg1 ;
-(void)setCreativeId:(NSString *)arg1 ;
-(NSData *)articleViewingSessionId;
-(void)setArticleSessionId:(NSData *)arg1 ;
-(void)setFeedViewExposureId:(NSData *)arg1 ;
-(void)setIsUserSubscribedToFeed:(BOOL)arg1 ;
-(BOOL)hasArticleId;
-(id)feedTypeAsString:(int)arg1 ;
-(void)setFeedType:(int)arg1 ;
-(void)setHasIsUserSubscribedToFeed:(BOOL)arg1 ;
-(NSString *)referencedArticleId;
-(BOOL)hasIsUserSubscribedToFeed;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasArticleSessionId;
-(BOOL)hasReferencedArticleId;
-(void)setArticleId:(NSString *)arg1 ;
-(id)description;
-(NSString *)articleId;
-(int)userAction;
-(int)StringAsFeedType:(id)arg1 ;
-(BOOL)hasUserAction;
-(void)setHasFeedType:(BOOL)arg1 ;
-(BOOL)isUserSubscribedToFeed;
-(int)groupType;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(NSData *)articleSessionId;
-(void)setArticleSessionIdDeprecated:(NSString *)arg1 ;
-(void)setArticleViewingSessionIdDeprecated:(NSString *)arg1 ;
-(void)setChannelMuteUnmuteFeedId:(NSString *)arg1 ;
-(void)setFeedViewExposureIdDeprecated:(NSString *)arg1 ;
-(void)setUserAction:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasUserAction:(BOOL)arg1 ;
-(int)muteUnmuteLocation;
-(void)setMuteUnmuteLocation:(int)arg1 ;
-(void)setHasMuteUnmuteLocation:(BOOL)arg1 ;
-(BOOL)hasMuteUnmuteLocation;
-(BOOL)hasArticleSessionIdDeprecated;
-(BOOL)hasArticleViewingSessionIdDeprecated;
-(BOOL)hasChannelMuteUnmuteFeedId;
-(BOOL)hasFeedViewExposureIdDeprecated;
-(int)feedViewPresentationReason;
-(void)setFeedViewPresentationReason:(int)arg1 ;
-(void)setHasFeedViewPresentationReason:(BOOL)arg1 ;
-(BOOL)hasFeedViewPresentationReason;
-(id)feedViewPresentationReasonAsString:(int)arg1 ;
-(int)StringAsFeedViewPresentationReason:(id)arg1 ;
-(void)setIsSearchResultArticle:(BOOL)arg1 ;
-(void)setHasIsSearchResultArticle:(BOOL)arg1 ;
-(BOOL)hasIsSearchResultArticle;
-(NSString *)articleSessionIdDeprecated;
-(NSString *)articleViewingSessionIdDeprecated;
-(NSString *)channelMuteUnmuteFeedId;
-(NSString *)feedViewExposureIdDeprecated;
-(BOOL)isSearchResultArticle;
-(BOOL)hasFeedType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

