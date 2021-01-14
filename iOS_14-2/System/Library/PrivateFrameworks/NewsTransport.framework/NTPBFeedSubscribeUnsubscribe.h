/*
* Generated on Thursday, January 14, 2021 at 2:23:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSMutableArray;

@interface NTPBFeedSubscribeUnsubscribe : PBCodable <NSCopying> {

	long long _previousArticlePublisherArticleVersion;
	NSString* _articleId;
	NSString* _campaignId;
	NSString* _campaignType;
	NSString* _creativeId;
	int _displayRank;
	int _feedCellHostType;
	int _feedCellSection;
	NSString* _feedId;
	int _feedSubscriptionOrigin;
	int _feedType;
	NSData* _feedViewExposureId;
	int _feedViewPresentationReason;
	NSString* _groupFeedId;
	int _groupType;
	NSData* _groupViewExposureId;
	NSString* _previousArticleId;
	NSString* _previousArticleVersion;
	int _recommendationBrickType;
	NSString* _searchString;
	int _subscribeUnsubscribeLocation;
	int _subscribeUnsubscribeSurfaceReason;
	NSMutableArray* _subscribedFeedIds;
	int _userAction;
	BOOL _cameFromGroup;
	BOOL _isPaidSubscriberToFeed;
	SCD_Struct_NT23 _has;

}

@property (assign,nonatomic) BOOL hasUserAction; 
@property (assign,nonatomic) int userAction;                                                //@synthesize userAction=_userAction - In the implementation block
@property (assign,nonatomic) BOOL hasFeedType; 
@property (assign,nonatomic) int feedType;                                                  //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedId; 
@property (nonatomic,retain) NSString * feedId;                                             //@synthesize feedId=_feedId - In the implementation block
@property (assign,nonatomic) BOOL hasSubscribeUnsubscribeLocation; 
@property (assign,nonatomic) int subscribeUnsubscribeLocation;                              //@synthesize subscribeUnsubscribeLocation=_subscribeUnsubscribeLocation - In the implementation block
@property (assign,nonatomic) BOOL hasFeedViewPresentationReason; 
@property (assign,nonatomic) int feedViewPresentationReason;                                //@synthesize feedViewPresentationReason=_feedViewPresentationReason - In the implementation block
@property (assign,nonatomic) BOOL hasFeedCellSection; 
@property (assign,nonatomic) int feedCellSection;                                           //@synthesize feedCellSection=_feedCellSection - In the implementation block
@property (assign,nonatomic) BOOL hasFeedCellHostType; 
@property (assign,nonatomic) int feedCellHostType;                                          //@synthesize feedCellHostType=_feedCellHostType - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedViewExposureId; 
@property (nonatomic,retain) NSData * feedViewExposureId;                                   //@synthesize feedViewExposureId=_feedViewExposureId - In the implementation block
@property (assign,nonatomic) BOOL hasDisplayRank; 
@property (assign,nonatomic) int displayRank;                                               //@synthesize displayRank=_displayRank - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchString; 
@property (nonatomic,retain) NSString * searchString;                                       //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,retain) NSMutableArray * subscribedFeedIds;                            //@synthesize subscribedFeedIds=_subscribedFeedIds - In the implementation block
@property (assign,nonatomic) BOOL hasCameFromGroup; 
@property (assign,nonatomic) BOOL cameFromGroup;                                            //@synthesize cameFromGroup=_cameFromGroup - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupFeedId; 
@property (nonatomic,retain) NSString * groupFeedId;                                        //@synthesize groupFeedId=_groupFeedId - In the implementation block
@property (assign,nonatomic) BOOL hasGroupType; 
@property (assign,nonatomic) int groupType;                                                 //@synthesize groupType=_groupType - In the implementation block
@property (assign,nonatomic) BOOL hasIsPaidSubscriberToFeed; 
@property (assign,nonatomic) BOOL isPaidSubscriberToFeed;                                   //@synthesize isPaidSubscriberToFeed=_isPaidSubscriberToFeed - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignId; 
@property (nonatomic,retain) NSString * campaignId;                                         //@synthesize campaignId=_campaignId - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignType; 
@property (nonatomic,retain) NSString * campaignType;                                       //@synthesize campaignType=_campaignType - In the implementation block
@property (nonatomic,readonly) BOOL hasCreativeId; 
@property (nonatomic,retain) NSString * creativeId;                                         //@synthesize creativeId=_creativeId - In the implementation block
@property (assign,nonatomic) BOOL hasRecommendationBrickType; 
@property (assign,nonatomic) int recommendationBrickType;                                   //@synthesize recommendationBrickType=_recommendationBrickType - In the implementation block
@property (assign,nonatomic) BOOL hasSubscribeUnsubscribeSurfaceReason; 
@property (assign,nonatomic) int subscribeUnsubscribeSurfaceReason;                         //@synthesize subscribeUnsubscribeSurfaceReason=_subscribeUnsubscribeSurfaceReason - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                                          //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasPreviousArticleId; 
@property (nonatomic,retain) NSString * previousArticleId;                                  //@synthesize previousArticleId=_previousArticleId - In the implementation block
@property (nonatomic,readonly) BOOL hasPreviousArticleVersion; 
@property (nonatomic,retain) NSString * previousArticleVersion;                             //@synthesize previousArticleVersion=_previousArticleVersion - In the implementation block
@property (assign,nonatomic) BOOL hasFeedSubscriptionOrigin; 
@property (assign,nonatomic) int feedSubscriptionOrigin;                                    //@synthesize feedSubscriptionOrigin=_feedSubscriptionOrigin - In the implementation block
@property (assign,nonatomic) BOOL hasPreviousArticlePublisherArticleVersion; 
@property (assign,nonatomic) long long previousArticlePublisherArticleVersion;              //@synthesize previousArticlePublisherArticleVersion=_previousArticlePublisherArticleVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupViewExposureId; 
@property (nonatomic,retain) NSData * groupViewExposureId;                                  //@synthesize groupViewExposureId=_groupViewExposureId - In the implementation block
+(Class)subscribedFeedIdsType;
-(id)groupTypeAsString:(int)arg1 ;
-(int)feedCellHostType;
-(BOOL)hasCampaignId;
-(NSString *)campaignId;
-(BOOL)hasPreviousArticleId;
-(int)displayRank;
-(NSData *)groupViewExposureId;
-(BOOL)hasIsPaidSubscriberToFeed;
-(BOOL)hasPreviousArticleVersion;
-(int)feedSubscriptionOrigin;
-(BOOL)hasGroupViewExposureId;
-(void)setPreviousArticleVersion:(NSString *)arg1 ;
-(BOOL)hasGroupFeedId;
-(NSString *)previousArticleId;
-(void)setGroupFeedId:(NSString *)arg1 ;
-(BOOL)hasFeedViewExposureId;
-(void)setGroupViewExposureId:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasIsPaidSubscriberToFeed:(BOOL)arg1 ;
-(void)setHasFeedCellHostType:(BOOL)arg1 ;
-(void)setGroupType:(int)arg1 ;
-(void)setFeedCellHostType:(int)arg1 ;
-(BOOL)isPaidSubscriberToFeed;
-(void)setPreviousArticleId:(NSString *)arg1 ;
-(BOOL)hasPreviousArticlePublisherArticleVersion;
-(void)setFeedId:(NSString *)arg1 ;
-(void)setSubscribedFeedIds:(NSMutableArray *)arg1 ;
-(long long)previousArticlePublisherArticleVersion;
-(void)setCampaignType:(NSString *)arg1 ;
-(void)setPreviousArticlePublisherArticleVersion:(long long)arg1 ;
-(BOOL)hasCampaignType;
-(int)feedType;
-(BOOL)hasFeedCellHostType;
-(NSString *)campaignType;
-(void)setIsPaidSubscriberToFeed:(BOOL)arg1 ;
-(void)setFeedSubscriptionOrigin:(int)arg1 ;
-(BOOL)cameFromGroup;
-(NSString *)previousArticleVersion;
-(void)setHasGroupType:(BOOL)arg1 ;
-(BOOL)hasCreativeId;
-(id)feedCellHostTypeAsString:(int)arg1 ;
-(BOOL)hasGroupType;
-(void)setCampaignId:(NSString *)arg1 ;
-(int)StringAsGroupType:(id)arg1 ;
-(int)StringAsFeedCellHostType:(id)arg1 ;
-(NSString *)groupFeedId;
-(NSData *)feedViewExposureId;
-(NSString *)creativeId;
-(void)setHasPreviousArticlePublisherArticleVersion:(BOOL)arg1 ;
-(void)setCreativeId:(NSString *)arg1 ;
-(void)setFeedViewExposureId:(NSData *)arg1 ;
-(void)setDisplayRank:(int)arg1 ;
-(BOOL)hasArticleId;
-(id)feedTypeAsString:(int)arg1 ;
-(void)setFeedType:(int)arg1 ;
-(void)setHasCameFromGroup:(BOOL)arg1 ;
-(unsigned long long)subscribedFeedIdsCount;
-(void)setHasFeedSubscriptionOrigin:(BOOL)arg1 ;
-(BOOL)hasFeedSubscriptionOrigin;
-(void)mergeFrom:(id)arg1 ;
-(int)StringAsFeedCellSection:(id)arg1 ;
-(int)recommendationBrickType;
-(int)subscribeUnsubscribeLocation;
-(void)setSubscribeUnsubscribeLocation:(int)arg1 ;
-(void)setHasSubscribeUnsubscribeLocation:(BOOL)arg1 ;
-(BOOL)hasSubscribeUnsubscribeLocation;
-(void)setRecommendationBrickType:(int)arg1 ;
-(void)setHasRecommendationBrickType:(BOOL)arg1 ;
-(BOOL)hasRecommendationBrickType;
-(id)recommendationBrickTypeAsString:(int)arg1 ;
-(int)StringAsRecommendationBrickType:(id)arg1 ;
-(int)StringAsFeedSubscriptionOrigin:(id)arg1 ;
-(int)subscribeUnsubscribeSurfaceReason;
-(void)setSubscribeUnsubscribeSurfaceReason:(int)arg1 ;
-(void)setHasSubscribeUnsubscribeSurfaceReason:(BOOL)arg1 ;
-(BOOL)hasSubscribeUnsubscribeSurfaceReason;
-(void)setArticleId:(NSString *)arg1 ;
-(BOOL)hasFeedCellSection;
-(id)description;
-(id)feedCellSectionAsString:(int)arg1 ;
-(BOOL)hasFeedId;
-(void)clearSubscribedFeedIds;
-(NSString *)articleId;
-(void)setHasDisplayRank:(BOOL)arg1 ;
-(int)userAction;
-(BOOL)hasDisplayRank;
-(int)StringAsFeedType:(id)arg1 ;
-(BOOL)hasUserAction;
-(void)setCameFromGroup:(BOOL)arg1 ;
-(void)setHasFeedType:(BOOL)arg1 ;
-(int)groupType;
-(unsigned long long)hash;
-(void)addSubscribedFeedIds:(id)arg1 ;
-(BOOL)hasSearchString;
-(id)subscribedFeedIdsAtIndex:(unsigned long long)arg1 ;
-(int)feedCellSection;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)feedId;
-(void)setUserAction:(int)arg1 ;
-(void)setSearchString:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasUserAction:(BOOL)arg1 ;
-(NSMutableArray *)subscribedFeedIds;
-(int)feedViewPresentationReason;
-(void)setFeedViewPresentationReason:(int)arg1 ;
-(void)setHasFeedViewPresentationReason:(BOOL)arg1 ;
-(BOOL)hasFeedViewPresentationReason;
-(id)feedViewPresentationReasonAsString:(int)arg1 ;
-(int)StringAsFeedViewPresentationReason:(id)arg1 ;
-(BOOL)hasFeedType;
-(void)setFeedCellSection:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)searchString;
-(BOOL)hasCameFromGroup;
-(void)setHasFeedCellSection:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)feedSubscriptionOriginAsString:(int)arg1 ;
@end

