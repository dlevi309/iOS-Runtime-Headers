/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NTPBFeedViewExposure : PBCodable <NSCopying> {

	long long _previousArticlePublisherArticleVersion;
	int _areaPresentationReason;
	NSString* _campaignId;
	NSString* _campaignType;
	int _countOfTotalGroupExposures;
	int _countOfTotalGroupsExposed;
	NSString* _creativeId;
	int _feedCellHostType;
	int _feedCellSection;
	NSString* _feedId;
	int _feedType;
	NSData* _feedViewExposureId;
	int _groupType;
	NSData* _groupViewExposureId;
	int _presentationReason;
	NSString* _presentationReasonSearchString;
	NSString* _previousArticleId;
	NSString* _previousArticleVersion;
	int _rankInToc;
	NSString* _referringSourceApplication;
	NSString* _referringUrl;
	int _sessionEndReason;
	NSString* _sourceChannelId;
	NSString* _userActivityType;
	NSString* _viewFrameInScreen;
	BOOL _adSupportedChannel;
	BOOL _cameFromGroup;
	BOOL _isNewUserToFeed;
	BOOL _isPaidSubscriberToFeed;
	BOOL _isSubscribedToGroupFeed;
	BOOL _isUserSubscribedToFeed;
	SCD_Struct_NT30 _has;

}

@property (assign,nonatomic) BOOL hasFeedType; 
@property (assign,nonatomic) int feedType;                                                  //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedId; 
@property (nonatomic,retain) NSString * feedId;                                             //@synthesize feedId=_feedId - In the implementation block
@property (assign,nonatomic) BOOL hasIsUserSubscribedToFeed; 
@property (assign,nonatomic) BOOL isUserSubscribedToFeed;                                   //@synthesize isUserSubscribedToFeed=_isUserSubscribedToFeed - In the implementation block
@property (assign,nonatomic) BOOL hasPresentationReason; 
@property (assign,nonatomic) int presentationReason;                                        //@synthesize presentationReason=_presentationReason - In the implementation block
@property (nonatomic,readonly) BOOL hasPresentationReasonSearchString; 
@property (nonatomic,retain) NSString * presentationReasonSearchString;                     //@synthesize presentationReasonSearchString=_presentationReasonSearchString - In the implementation block
@property (nonatomic,readonly) BOOL hasViewFrameInScreen; 
@property (nonatomic,retain) NSString * viewFrameInScreen;                                  //@synthesize viewFrameInScreen=_viewFrameInScreen - In the implementation block
@property (assign,nonatomic) BOOL hasFeedCellSection; 
@property (assign,nonatomic) int feedCellSection;                                           //@synthesize feedCellSection=_feedCellSection - In the implementation block
@property (assign,nonatomic) BOOL hasFeedCellHostType; 
@property (assign,nonatomic) int feedCellHostType;                                          //@synthesize feedCellHostType=_feedCellHostType - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedViewExposureId; 
@property (nonatomic,retain) NSData * feedViewExposureId;                                   //@synthesize feedViewExposureId=_feedViewExposureId - In the implementation block
@property (assign,nonatomic) BOOL hasIsNewUserToFeed; 
@property (assign,nonatomic) BOOL isNewUserToFeed;                                          //@synthesize isNewUserToFeed=_isNewUserToFeed - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                                    //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (nonatomic,readonly) BOOL hasReferringSourceApplication; 
@property (nonatomic,retain) NSString * referringSourceApplication;                         //@synthesize referringSourceApplication=_referringSourceApplication - In the implementation block
@property (nonatomic,readonly) BOOL hasReferringUrl; 
@property (nonatomic,retain) NSString * referringUrl;                                       //@synthesize referringUrl=_referringUrl - In the implementation block
@property (nonatomic,readonly) BOOL hasUserActivityType; 
@property (nonatomic,retain) NSString * userActivityType;                                   //@synthesize userActivityType=_userActivityType - In the implementation block
@property (assign,nonatomic) BOOL hasCameFromGroup; 
@property (assign,nonatomic) BOOL cameFromGroup;                                            //@synthesize cameFromGroup=_cameFromGroup - In the implementation block
@property (assign,nonatomic) BOOL hasGroupType; 
@property (assign,nonatomic) int groupType;                                                 //@synthesize groupType=_groupType - In the implementation block
@property (assign,nonatomic) BOOL hasIsSubscribedToGroupFeed; 
@property (assign,nonatomic) BOOL isSubscribedToGroupFeed;                                  //@synthesize isSubscribedToGroupFeed=_isSubscribedToGroupFeed - In the implementation block
@property (assign,nonatomic) BOOL hasCountOfTotalGroupExposures; 
@property (assign,nonatomic) int countOfTotalGroupExposures;                                //@synthesize countOfTotalGroupExposures=_countOfTotalGroupExposures - In the implementation block
@property (assign,nonatomic) BOOL hasCountOfTotalGroupsExposed; 
@property (assign,nonatomic) int countOfTotalGroupsExposed;                                 //@synthesize countOfTotalGroupsExposed=_countOfTotalGroupsExposed - In the implementation block
@property (assign,nonatomic) BOOL hasIsPaidSubscriberToFeed; 
@property (assign,nonatomic) BOOL isPaidSubscriberToFeed;                                   //@synthesize isPaidSubscriberToFeed=_isPaidSubscriberToFeed - In the implementation block
@property (assign,nonatomic) BOOL hasAdSupportedChannel; 
@property (assign,nonatomic) BOOL adSupportedChannel;                                       //@synthesize adSupportedChannel=_adSupportedChannel - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignId; 
@property (nonatomic,retain) NSString * campaignId;                                         //@synthesize campaignId=_campaignId - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignType; 
@property (nonatomic,retain) NSString * campaignType;                                       //@synthesize campaignType=_campaignType - In the implementation block
@property (nonatomic,readonly) BOOL hasCreativeId; 
@property (nonatomic,retain) NSString * creativeId;                                         //@synthesize creativeId=_creativeId - In the implementation block
@property (assign,nonatomic) BOOL hasAreaPresentationReason; 
@property (assign,nonatomic) int areaPresentationReason;                                    //@synthesize areaPresentationReason=_areaPresentationReason - In the implementation block
@property (nonatomic,readonly) BOOL hasPreviousArticleId; 
@property (nonatomic,retain) NSString * previousArticleId;                                  //@synthesize previousArticleId=_previousArticleId - In the implementation block
@property (nonatomic,readonly) BOOL hasPreviousArticleVersion; 
@property (nonatomic,retain) NSString * previousArticleVersion;                             //@synthesize previousArticleVersion=_previousArticleVersion - In the implementation block
@property (assign,nonatomic) BOOL hasPreviousArticlePublisherArticleVersion; 
@property (assign,nonatomic) long long previousArticlePublisherArticleVersion;              //@synthesize previousArticlePublisherArticleVersion=_previousArticlePublisherArticleVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupViewExposureId; 
@property (nonatomic,retain) NSData * groupViewExposureId;                                  //@synthesize groupViewExposureId=_groupViewExposureId - In the implementation block
@property (assign,nonatomic) BOOL hasRankInToc; 
@property (assign,nonatomic) int rankInToc;                                                 //@synthesize rankInToc=_rankInToc - In the implementation block
@property (assign,nonatomic) BOOL hasSessionEndReason; 
@property (assign,nonatomic) int sessionEndReason;                                          //@synthesize sessionEndReason=_sessionEndReason - In the implementation block
-(int)presentationReason;
-(id)groupTypeAsString:(int)arg1 ;
-(NSString *)viewFrameInScreen;
-(int)feedCellHostType;
-(BOOL)hasCampaignId;
-(NSString *)campaignId;
-(BOOL)hasPreviousArticleId;
-(NSData *)groupViewExposureId;
-(BOOL)hasIsPaidSubscriberToFeed;
-(NSString *)userActivityType;
-(BOOL)hasPreviousArticleVersion;
-(BOOL)hasGroupViewExposureId;
-(void)setPreviousArticleVersion:(NSString *)arg1 ;
-(NSString *)referringSourceApplication;
-(NSString *)previousArticleId;
-(void)setHasAdSupportedChannel:(BOOL)arg1 ;
-(BOOL)hasFeedViewExposureId;
-(void)setGroupViewExposureId:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasIsPaidSubscriberToFeed:(BOOL)arg1 ;
-(BOOL)hasSourceChannelId;
-(BOOL)hasReferringSourceApplication;
-(void)setHasFeedCellHostType:(BOOL)arg1 ;
-(void)setGroupType:(int)arg1 ;
-(void)setReferringSourceApplication:(NSString *)arg1 ;
-(void)setFeedCellHostType:(int)arg1 ;
-(int)rankInToc;
-(BOOL)isPaidSubscriberToFeed;
-(void)setPreviousArticleId:(NSString *)arg1 ;
-(BOOL)hasPreviousArticlePublisherArticleVersion;
-(void)setFeedId:(NSString *)arg1 ;
-(NSString *)referringUrl;
-(BOOL)hasReferringUrl;
-(long long)previousArticlePublisherArticleVersion;
-(void)setCampaignType:(NSString *)arg1 ;
-(BOOL)hasViewFrameInScreen;
-(void)setPreviousArticlePublisherArticleVersion:(long long)arg1 ;
-(BOOL)hasCampaignType;
-(int)feedType;
-(BOOL)hasFeedCellHostType;
-(NSString *)campaignType;
-(BOOL)isSubscribedToGroupFeed;
-(void)setIsPaidSubscriberToFeed:(BOOL)arg1 ;
-(int)sessionEndReason;
-(BOOL)hasCountOfTotalGroupExposures;
-(BOOL)cameFromGroup;
-(NSString *)sourceChannelId;
-(void)setHasIsSubscribedToGroupFeed:(BOOL)arg1 ;
-(NSString *)previousArticleVersion;
-(void)setHasGroupType:(BOOL)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(BOOL)hasCreativeId;
-(void)setIsSubscribedToGroupFeed:(BOOL)arg1 ;
-(void)setReferringUrl:(NSString *)arg1 ;
-(void)setViewFrameInScreen:(NSString *)arg1 ;
-(BOOL)hasIsSubscribedToGroupFeed;
-(id)feedCellHostTypeAsString:(int)arg1 ;
-(BOOL)hasGroupType;
-(void)setCampaignId:(NSString *)arg1 ;
-(BOOL)hasAdSupportedChannel;
-(int)StringAsGroupType:(id)arg1 ;
-(int)StringAsFeedCellHostType:(id)arg1 ;
-(BOOL)hasUserActivityType;
-(void)setUserActivityType:(NSString *)arg1 ;
-(NSData *)feedViewExposureId;
-(NSString *)creativeId;
-(void)setHasPreviousArticlePublisherArticleVersion:(BOOL)arg1 ;
-(void)setCreativeId:(NSString *)arg1 ;
-(void)setAdSupportedChannel:(BOOL)arg1 ;
-(BOOL)adSupportedChannel;
-(void)setFeedViewExposureId:(NSData *)arg1 ;
-(BOOL)hasRankInToc;
-(void)setIsUserSubscribedToFeed:(BOOL)arg1 ;
-(id)feedTypeAsString:(int)arg1 ;
-(void)setFeedType:(int)arg1 ;
-(void)setHasCameFromGroup:(BOOL)arg1 ;
-(void)setHasIsUserSubscribedToFeed:(BOOL)arg1 ;
-(void)setHasCountOfTotalGroupsExposed:(BOOL)arg1 ;
-(void)setPresentationReason:(int)arg1 ;
-(void)setAreaPresentationReason:(int)arg1 ;
-(void)setHasIsNewUserToFeed:(BOOL)arg1 ;
-(BOOL)hasIsUserSubscribedToFeed;
-(void)mergeFrom:(id)arg1 ;
-(int)StringAsFeedCellSection:(id)arg1 ;
-(id)presentationReasonAsString:(int)arg1 ;
-(void)setPresentationReasonSearchString:(NSString *)arg1 ;
-(id)sessionEndReasonAsString:(int)arg1 ;
-(BOOL)hasSessionEndReason;
-(id)areaPresentationReasonAsString:(int)arg1 ;
-(BOOL)isNewUserToFeed;
-(void)setCountOfTotalGroupsExposed:(int)arg1 ;
-(BOOL)hasFeedCellSection;
-(id)description;
-(id)feedCellSectionAsString:(int)arg1 ;
-(BOOL)hasFeedId;
-(int)countOfTotalGroupExposures;
-(void)setRankInToc:(int)arg1 ;
-(int)StringAsFeedType:(id)arg1 ;
-(NSString *)presentationReasonSearchString;
-(void)setHasSessionEndReason:(BOOL)arg1 ;
-(int)countOfTotalGroupsExposed;
-(void)setCameFromGroup:(BOOL)arg1 ;
-(int)StringAsAreaPresentationReason:(id)arg1 ;
-(void)setHasFeedType:(BOOL)arg1 ;
-(BOOL)hasPresentationReasonSearchString;
-(BOOL)isUserSubscribedToFeed;
-(int)groupType;
-(unsigned long long)hash;
-(BOOL)hasPresentationReason;
-(void)setCountOfTotalGroupExposures:(int)arg1 ;
-(void)setHasAreaPresentationReason:(BOOL)arg1 ;
-(BOOL)hasCountOfTotalGroupsExposed;
-(void)setHasCountOfTotalGroupExposures:(BOOL)arg1 ;
-(int)feedCellSection;
-(BOOL)readFrom:(id)arg1 ;
-(int)StringAsPresentationReason:(id)arg1 ;
-(NSString *)feedId;
-(BOOL)hasIsNewUserToFeed;
-(int)StringAsSessionEndReason:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasAreaPresentationReason;
-(void)setHasPresentationReason:(BOOL)arg1 ;
-(BOOL)hasFeedType;
-(void)setFeedCellSection:(int)arg1 ;
-(void)setIsNewUserToFeed:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)areaPresentationReason;
-(BOOL)hasCameFromGroup;
-(void)setHasFeedCellSection:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasRankInToc:(BOOL)arg1 ;
-(void)setSessionEndReason:(int)arg1 ;
@end

