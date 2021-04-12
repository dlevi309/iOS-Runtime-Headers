/*
* Generated on Monday, March 1, 2021 at 2:32:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NTPBAdCtaEngagement : PBCodable <NSCopying> {

	long long _videoAdDuration;
	long long _videoAdPlayTime;
	int _adCreativeType;
	int _adCtaEngagemetType;
	int _adEngagementType;
	NSString* _adImpressionId;
	int _adLocation;
	int _adType;
	NSString* _articleId;
	NSData* _articleViewingSessionId;
	NSString* _feedId;
	int _feedType;
	NSData* _feedViewExposureId;
	NSString* _iadAd;
	NSString* _iadCampaign;
	NSString* _iadLine;
	int _newsProductType;
	NSString* _sourceChannelId;
	int _videoAdPlacementPosition;
	int _videoAdType;
	BOOL _videoAdViewComplete;
	SCD_Struct_NT31 _has;

}

@property (assign,nonatomic) BOOL hasAdCtaEngagemetType; 
@property (assign,nonatomic) int adCtaEngagemetType;                         //@synthesize adCtaEngagemetType=_adCtaEngagemetType - In the implementation block
@property (nonatomic,readonly) BOOL hasIadCampaign; 
@property (nonatomic,retain) NSString * iadCampaign;                         //@synthesize iadCampaign=_iadCampaign - In the implementation block
@property (nonatomic,readonly) BOOL hasIadLine; 
@property (nonatomic,retain) NSString * iadLine;                             //@synthesize iadLine=_iadLine - In the implementation block
@property (nonatomic,readonly) BOOL hasIadAd; 
@property (nonatomic,retain) NSString * iadAd;                               //@synthesize iadAd=_iadAd - In the implementation block
@property (assign,nonatomic) BOOL hasAdEngagementType; 
@property (assign,nonatomic) int adEngagementType;                           //@synthesize adEngagementType=_adEngagementType - In the implementation block
@property (assign,nonatomic) BOOL hasAdType; 
@property (assign,nonatomic) int adType;                                     //@synthesize adType=_adType - In the implementation block
@property (assign,nonatomic) BOOL hasAdCreativeType; 
@property (assign,nonatomic) int adCreativeType;                             //@synthesize adCreativeType=_adCreativeType - In the implementation block
@property (assign,nonatomic) BOOL hasAdLocation; 
@property (assign,nonatomic) int adLocation;                                 //@synthesize adLocation=_adLocation - In the implementation block
@property (assign,nonatomic) BOOL hasNewsProductType; 
@property (assign,nonatomic) int newsProductType;                            //@synthesize newsProductType=_newsProductType - In the implementation block
@property (assign,nonatomic) BOOL hasVideoAdType; 
@property (assign,nonatomic) int videoAdType;                                //@synthesize videoAdType=_videoAdType - In the implementation block
@property (assign,nonatomic) BOOL hasFeedType; 
@property (assign,nonatomic) int feedType;                                   //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedId; 
@property (nonatomic,retain) NSString * feedId;                              //@synthesize feedId=_feedId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                           //@synthesize articleId=_articleId - In the implementation block
@property (assign,nonatomic) BOOL hasVideoAdDuration; 
@property (assign,nonatomic) long long videoAdDuration;                      //@synthesize videoAdDuration=_videoAdDuration - In the implementation block
@property (assign,nonatomic) BOOL hasVideoAdPlayTime; 
@property (assign,nonatomic) long long videoAdPlayTime;                      //@synthesize videoAdPlayTime=_videoAdPlayTime - In the implementation block
@property (assign,nonatomic) BOOL hasVideoAdPlacementPosition; 
@property (assign,nonatomic) int videoAdPlacementPosition;                   //@synthesize videoAdPlacementPosition=_videoAdPlacementPosition - In the implementation block
@property (assign,nonatomic) BOOL hasVideoAdViewComplete; 
@property (assign,nonatomic) BOOL videoAdViewComplete;                       //@synthesize videoAdViewComplete=_videoAdViewComplete - In the implementation block
@property (nonatomic,readonly) BOOL hasAdImpressionId; 
@property (nonatomic,retain) NSString * adImpressionId;                      //@synthesize adImpressionId=_adImpressionId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleViewingSessionId; 
@property (nonatomic,retain) NSData * articleViewingSessionId;               //@synthesize articleViewingSessionId=_articleViewingSessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                     //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedViewExposureId; 
@property (nonatomic,retain) NSData * feedViewExposureId;                    //@synthesize feedViewExposureId=_feedViewExposureId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)feedId;
-(void)setFeedId:(NSString *)arg1 ;
-(BOOL)hasFeedId;
-(int)adType;
-(int)feedType;
-(void)setFeedType:(int)arg1 ;
-(void)setArticleId:(NSString *)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(void)setArticleViewingSessionId:(NSData *)arg1 ;
-(BOOL)hasArticleId;
-(BOOL)hasSourceChannelId;
-(BOOL)hasArticleViewingSessionId;
-(NSString *)articleId;
-(NSString *)sourceChannelId;
-(NSData *)articleViewingSessionId;
-(void)setFeedViewExposureId:(NSData *)arg1 ;
-(BOOL)hasFeedViewExposureId;
-(NSData *)feedViewExposureId;
-(void)setHasFeedType:(BOOL)arg1 ;
-(BOOL)hasFeedType;
-(id)feedTypeAsString:(int)arg1 ;
-(int)StringAsFeedType:(id)arg1 ;
-(void)setAdType:(int)arg1 ;
-(void)setHasAdType:(BOOL)arg1 ;
-(BOOL)hasAdType;
-(id)adTypeAsString:(int)arg1 ;
-(int)StringAsAdType:(id)arg1 ;
-(int)adCreativeType;
-(void)setAdCreativeType:(int)arg1 ;
-(void)setHasAdCreativeType:(BOOL)arg1 ;
-(BOOL)hasAdCreativeType;
-(id)adCreativeTypeAsString:(int)arg1 ;
-(int)StringAsAdCreativeType:(id)arg1 ;
-(void)setIadCampaign:(NSString *)arg1 ;
-(void)setIadLine:(NSString *)arg1 ;
-(void)setIadAd:(NSString *)arg1 ;
-(void)setAdImpressionId:(NSString *)arg1 ;
-(int)adCtaEngagemetType;
-(void)setAdCtaEngagemetType:(int)arg1 ;
-(void)setHasAdCtaEngagemetType:(BOOL)arg1 ;
-(BOOL)hasAdCtaEngagemetType;
-(BOOL)hasIadCampaign;
-(BOOL)hasIadLine;
-(BOOL)hasIadAd;
-(int)adEngagementType;
-(void)setAdEngagementType:(int)arg1 ;
-(void)setHasAdEngagementType:(BOOL)arg1 ;
-(BOOL)hasAdEngagementType;
-(id)adEngagementTypeAsString:(int)arg1 ;
-(int)StringAsAdEngagementType:(id)arg1 ;
-(int)adLocation;
-(void)setAdLocation:(int)arg1 ;
-(void)setHasAdLocation:(BOOL)arg1 ;
-(BOOL)hasAdLocation;
-(id)adLocationAsString:(int)arg1 ;
-(int)StringAsAdLocation:(id)arg1 ;
-(int)newsProductType;
-(void)setNewsProductType:(int)arg1 ;
-(void)setHasNewsProductType:(BOOL)arg1 ;
-(BOOL)hasNewsProductType;
-(id)newsProductTypeAsString:(int)arg1 ;
-(int)StringAsNewsProductType:(id)arg1 ;
-(int)videoAdType;
-(void)setVideoAdType:(int)arg1 ;
-(void)setHasVideoAdType:(BOOL)arg1 ;
-(BOOL)hasVideoAdType;
-(id)videoAdTypeAsString:(int)arg1 ;
-(int)StringAsVideoAdType:(id)arg1 ;
-(void)setVideoAdDuration:(long long)arg1 ;
-(void)setHasVideoAdDuration:(BOOL)arg1 ;
-(BOOL)hasVideoAdDuration;
-(void)setVideoAdPlayTime:(long long)arg1 ;
-(void)setHasVideoAdPlayTime:(BOOL)arg1 ;
-(BOOL)hasVideoAdPlayTime;
-(void)setVideoAdPlacementPosition:(int)arg1 ;
-(void)setHasVideoAdPlacementPosition:(BOOL)arg1 ;
-(BOOL)hasVideoAdPlacementPosition;
-(void)setVideoAdViewComplete:(BOOL)arg1 ;
-(void)setHasVideoAdViewComplete:(BOOL)arg1 ;
-(BOOL)hasVideoAdViewComplete;
-(BOOL)hasAdImpressionId;
-(NSString *)iadCampaign;
-(NSString *)iadLine;
-(NSString *)iadAd;
-(long long)videoAdDuration;
-(long long)videoAdPlayTime;
-(int)videoAdPlacementPosition;
-(BOOL)videoAdViewComplete;
-(NSString *)adImpressionId;
@end
