/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NTPBIssueData, NSMutableArray;

@interface NTPBPaidSubscriptionResult : PBCodable <NSCopying> {

	int _amsPurchaseErrorCode;
	NSString* _articleId;
	NSData* _articleViewingSessionId;
	NSString* _campaignId;
	NSString* _campaignType;
	NSString* _creativeId;
	NSString* _groupFeedId;
	int _groupType;
	NSString* _iadQtoken;
	NTPBIssueData* _issueData;
	int _paidSubscriptionConversionPointType;
	NSString* _parentFeedId;
	int _parentFeedType;
	NSString* _purchaseId;
	int _purchaseType;
	int _resultType;
	NSString* _sectionId;
	NSString* _sourceChannelId;
	int _storekitError;
	NSData* _subscriptionPurchaseSessionId;
	NSString* _surfacedByChannelId;
	NSString* _surfacedByTopicId;
	NSMutableArray* _topicIds;
	BOOL _arrivedFromAd;
	BOOL _sawSubscriptionSheet;
	BOOL _subscriptionOnlyArticlePreview;
	SCD_Struct_NT7 _has;

}

@property (assign,nonatomic) BOOL hasResultType; 
@property (assign,nonatomic) int resultType;                                           //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                               //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (nonatomic,readonly) BOOL hasSectionId; 
@property (nonatomic,retain) NSString * sectionId;                                     //@synthesize sectionId=_sectionId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                                     //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleViewingSessionId; 
@property (nonatomic,retain) NSData * articleViewingSessionId;                         //@synthesize articleViewingSessionId=_articleViewingSessionId - In the implementation block
@property (assign,nonatomic) BOOL hasPaidSubscriptionConversionPointType; 
@property (assign,nonatomic) int paidSubscriptionConversionPointType;                  //@synthesize paidSubscriptionConversionPointType=_paidSubscriptionConversionPointType - In the implementation block
@property (assign,nonatomic) BOOL hasParentFeedType; 
@property (assign,nonatomic) int parentFeedType;                                       //@synthesize parentFeedType=_parentFeedType - In the implementation block
@property (assign,nonatomic) BOOL hasSubscriptionOnlyArticlePreview; 
@property (assign,nonatomic) BOOL subscriptionOnlyArticlePreview;                      //@synthesize subscriptionOnlyArticlePreview=_subscriptionOnlyArticlePreview - In the implementation block
@property (assign,nonatomic) BOOL hasArrivedFromAd; 
@property (assign,nonatomic) BOOL arrivedFromAd;                                       //@synthesize arrivedFromAd=_arrivedFromAd - In the implementation block
@property (nonatomic,readonly) BOOL hasIadQtoken; 
@property (nonatomic,retain) NSString * iadQtoken;                                     //@synthesize iadQtoken=_iadQtoken - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignId; 
@property (nonatomic,retain) NSString * campaignId;                                    //@synthesize campaignId=_campaignId - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignType; 
@property (nonatomic,retain) NSString * campaignType;                                  //@synthesize campaignType=_campaignType - In the implementation block
@property (nonatomic,readonly) BOOL hasCreativeId; 
@property (nonatomic,retain) NSString * creativeId;                                    //@synthesize creativeId=_creativeId - In the implementation block
@property (nonatomic,readonly) BOOL hasSubscriptionPurchaseSessionId; 
@property (nonatomic,retain) NSData * subscriptionPurchaseSessionId;                   //@synthesize subscriptionPurchaseSessionId=_subscriptionPurchaseSessionId - In the implementation block
@property (assign,nonatomic) BOOL hasSawSubscriptionSheet; 
@property (assign,nonatomic) BOOL sawSubscriptionSheet;                                //@synthesize sawSubscriptionSheet=_sawSubscriptionSheet - In the implementation block
@property (assign,nonatomic) BOOL hasGroupType; 
@property (assign,nonatomic) int groupType;                                            //@synthesize groupType=_groupType - In the implementation block
@property (nonatomic,readonly) BOOL hasPurchaseId; 
@property (nonatomic,retain) NSString * purchaseId;                                    //@synthesize purchaseId=_purchaseId - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupFeedId; 
@property (nonatomic,retain) NSString * groupFeedId;                                   //@synthesize groupFeedId=_groupFeedId - In the implementation block
@property (nonatomic,readonly) BOOL hasParentFeedId; 
@property (nonatomic,retain) NSString * parentFeedId;                                  //@synthesize parentFeedId=_parentFeedId - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueData; 
@property (nonatomic,retain) NTPBIssueData * issueData;                                //@synthesize issueData=_issueData - In the implementation block
@property (assign,nonatomic) BOOL hasStorekitError; 
@property (assign,nonatomic) int storekitError;                                        //@synthesize storekitError=_storekitError - In the implementation block
@property (assign,nonatomic) BOOL hasAmsPurchaseErrorCode; 
@property (assign,nonatomic) int amsPurchaseErrorCode;                                 //@synthesize amsPurchaseErrorCode=_amsPurchaseErrorCode - In the implementation block
@property (nonatomic,retain) NSMutableArray * topicIds;                                //@synthesize topicIds=_topicIds - In the implementation block
@property (nonatomic,readonly) BOOL hasSurfacedByTopicId; 
@property (nonatomic,retain) NSString * surfacedByTopicId;                             //@synthesize surfacedByTopicId=_surfacedByTopicId - In the implementation block
@property (nonatomic,readonly) BOOL hasSurfacedByChannelId; 
@property (nonatomic,retain) NSString * surfacedByChannelId;                           //@synthesize surfacedByChannelId=_surfacedByChannelId - In the implementation block
@property (assign,nonatomic) BOOL hasPurchaseType; 
@property (assign,nonatomic) int purchaseType;                                         //@synthesize purchaseType=_purchaseType - In the implementation block
+(Class)topicIdsType;
-(id)groupTypeAsString:(int)arg1 ;
-(BOOL)hasParentFeedType;
-(BOOL)hasCampaignId;
-(NSString *)campaignId;
-(void)clearTopicIds;
-(void)setTopicIds:(NSMutableArray *)arg1 ;
-(NSString *)surfacedByTopicId;
-(void)setHasParentFeedType:(BOOL)arg1 ;
-(int)parentFeedType;
-(NTPBIssueData *)issueData;
-(BOOL)hasSurfacedByTopicId;
-(BOOL)hasGroupFeedId;
-(NSMutableArray *)topicIds;
-(void)setGroupFeedId:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasSourceChannelId;
-(void)setGroupType:(int)arg1 ;
-(void)setResultType:(int)arg1 ;
-(BOOL)hasArticleViewingSessionId;
-(void)setCampaignType:(NSString *)arg1 ;
-(BOOL)hasCampaignType;
-(NSString *)campaignType;
-(void)setArticleViewingSessionId:(NSData *)arg1 ;
-(NSString *)sourceChannelId;
-(void)setHasGroupType:(BOOL)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(BOOL)hasCreativeId;
-(BOOL)hasGroupType;
-(void)setCampaignId:(NSString *)arg1 ;
-(int)StringAsGroupType:(id)arg1 ;
-(NSString *)groupFeedId;
-(NSString *)creativeId;
-(void)setCreativeId:(NSString *)arg1 ;
-(NSData *)articleViewingSessionId;
-(id)parentFeedTypeAsString:(int)arg1 ;
-(BOOL)hasIadQtoken;
-(BOOL)hasArticleId;
-(NSString *)iadQtoken;
-(id)topicIdsAtIndex:(unsigned long long)arg1 ;
-(void)addTopicIds:(id)arg1 ;
-(void)setIadQtoken:(NSString *)arg1 ;
-(BOOL)arrivedFromAd;
-(void)mergeFrom:(id)arg1 ;
-(int)paidSubscriptionConversionPointType;
-(void)setPaidSubscriptionConversionPointType:(int)arg1 ;
-(void)setHasPaidSubscriptionConversionPointType:(BOOL)arg1 ;
-(BOOL)hasPaidSubscriptionConversionPointType;
-(int)resultType;
-(id)paidSubscriptionConversionPointTypeAsString:(int)arg1 ;
-(int)StringAsPaidSubscriptionConversionPointType:(id)arg1 ;
-(NSString *)surfacedByChannelId;
-(void)setHasResultType:(BOOL)arg1 ;
-(void)setIssueData:(NTPBIssueData *)arg1 ;
-(void)setSawSubscriptionSheet:(BOOL)arg1 ;
-(void)setHasSawSubscriptionSheet:(BOOL)arg1 ;
-(BOOL)hasSawSubscriptionSheet;
-(int)storekitError;
-(void)setArticleId:(NSString *)arg1 ;
-(void)setSurfacedByChannelId:(NSString *)arg1 ;
-(BOOL)hasPurchaseId;
-(void)setStorekitError:(int)arg1 ;
-(void)setHasStorekitError:(BOOL)arg1 ;
-(BOOL)hasStorekitError;
-(id)storekitErrorAsString:(int)arg1 ;
-(int)StringAsStorekitError:(id)arg1 ;
-(void)setAmsPurchaseErrorCode:(int)arg1 ;
-(void)setHasAmsPurchaseErrorCode:(BOOL)arg1 ;
-(BOOL)hasAmsPurchaseErrorCode;
-(BOOL)sawSubscriptionSheet;
-(int)amsPurchaseErrorCode;
-(void)setSubscriptionOnlyArticlePreview:(BOOL)arg1 ;
-(void)setHasSubscriptionOnlyArticlePreview:(BOOL)arg1 ;
-(BOOL)hasSubscriptionOnlyArticlePreview;
-(void)setArrivedFromAd:(BOOL)arg1 ;
-(void)setHasArrivedFromAd:(BOOL)arg1 ;
-(void)setSurfacedByTopicId:(NSString *)arg1 ;
-(BOOL)hasArrivedFromAd;
-(BOOL)subscriptionOnlyArticlePreview;
-(void)setSubscriptionPurchaseSessionId:(NSData *)arg1 ;
-(BOOL)hasSubscriptionPurchaseSessionId;
-(NSData *)subscriptionPurchaseSessionId;
-(NSString *)sectionId;
-(id)description;
-(NSString *)articleId;
-(int)purchaseType;
-(BOOL)hasSectionId;
-(void)setSectionId:(NSString *)arg1 ;
-(BOOL)hasSurfacedByChannelId;
-(void)setPurchaseType:(int)arg1 ;
-(void)setParentFeedType:(int)arg1 ;
-(void)setPurchaseId:(NSString *)arg1 ;
-(int)groupType;
-(BOOL)hasIssueData;
-(unsigned long long)hash;
-(void)setHasPurchaseType:(BOOL)arg1 ;
-(BOOL)hasPurchaseType;
-(id)purchaseTypeAsString:(int)arg1 ;
-(int)StringAsPurchaseType:(id)arg1 ;
-(int)StringAsParentFeedType:(id)arg1 ;
-(NSString *)purchaseId;
-(BOOL)readFrom:(id)arg1 ;
-(void)setParentFeedId:(NSString *)arg1 ;
-(BOOL)hasParentFeedId;
-(void)writeTo:(id)arg1 ;
-(NSString *)parentFeedId;
-(BOOL)hasResultType;
-(unsigned long long)topicIdsCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

