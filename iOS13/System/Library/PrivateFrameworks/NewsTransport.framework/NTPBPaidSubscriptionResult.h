/*
* Generated on Monday, March 1, 2021 at 2:32:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NTPBIssueData;

@interface NTPBPaidSubscriptionResult : PBCodable <NSCopying> {

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
	int _resultType;
	NSString* _sectionId;
	NSString* _sourceChannelId;
	int _storekitError;
	NSData* _subscriptionPurchaseSessionId;
	BOOL _arrivedFromAd;
	BOOL _sawSubscriptionSheet;
	BOOL _subscriptionOnlyArticlePreview;
	SCD_Struct_NT6 _has;

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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)resultType;
-(void)writeTo:(id)arg1 ;
-(void)setResultType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasResultType:(BOOL)arg1 ;
-(BOOL)hasResultType;
-(NSString *)sectionId;
-(void)setSectionId:(NSString *)arg1 ;
-(BOOL)hasSectionId;
-(int)groupType;
-(void)setGroupType:(int)arg1 ;
-(NSString *)campaignId;
-(NSString *)purchaseId;
-(void)setPurchaseId:(NSString *)arg1 ;
-(void)setArticleId:(NSString *)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(void)setArticleViewingSessionId:(NSData *)arg1 ;
-(BOOL)hasArticleId;
-(BOOL)hasSourceChannelId;
-(BOOL)hasArticleViewingSessionId;
-(NSString *)articleId;
-(NSString *)sourceChannelId;
-(NSData *)articleViewingSessionId;
-(void)setHasGroupType:(BOOL)arg1 ;
-(BOOL)hasGroupType;
-(id)groupTypeAsString:(int)arg1 ;
-(int)StringAsGroupType:(id)arg1 ;
-(void)setIssueData:(NTPBIssueData *)arg1 ;
-(void)setParentFeedId:(NSString *)arg1 ;
-(BOOL)hasIssueData;
-(int)parentFeedType;
-(void)setParentFeedType:(int)arg1 ;
-(void)setHasParentFeedType:(BOOL)arg1 ;
-(BOOL)hasParentFeedType;
-(id)parentFeedTypeAsString:(int)arg1 ;
-(int)StringAsParentFeedType:(id)arg1 ;
-(BOOL)hasParentFeedId;
-(NTPBIssueData *)issueData;
-(NSString *)parentFeedId;
-(void)setCampaignId:(NSString *)arg1 ;
-(void)setCampaignType:(NSString *)arg1 ;
-(void)setCreativeId:(NSString *)arg1 ;
-(BOOL)hasCampaignId;
-(BOOL)hasCampaignType;
-(BOOL)hasCreativeId;
-(NSString *)campaignType;
-(NSString *)creativeId;
-(int)paidSubscriptionConversionPointType;
-(void)setPaidSubscriptionConversionPointType:(int)arg1 ;
-(void)setHasPaidSubscriptionConversionPointType:(BOOL)arg1 ;
-(BOOL)hasPaidSubscriptionConversionPointType;
-(id)paidSubscriptionConversionPointTypeAsString:(int)arg1 ;
-(int)StringAsPaidSubscriptionConversionPointType:(id)arg1 ;
-(void)setGroupFeedId:(NSString *)arg1 ;
-(BOOL)hasGroupFeedId;
-(NSString *)groupFeedId;
-(void)setIadQtoken:(NSString *)arg1 ;
-(void)setSubscriptionOnlyArticlePreview:(BOOL)arg1 ;
-(void)setHasSubscriptionOnlyArticlePreview:(BOOL)arg1 ;
-(BOOL)hasSubscriptionOnlyArticlePreview;
-(void)setArrivedFromAd:(BOOL)arg1 ;
-(void)setHasArrivedFromAd:(BOOL)arg1 ;
-(BOOL)hasArrivedFromAd;
-(BOOL)hasIadQtoken;
-(BOOL)subscriptionOnlyArticlePreview;
-(BOOL)arrivedFromAd;
-(NSString *)iadQtoken;
-(void)setSubscriptionPurchaseSessionId:(NSData *)arg1 ;
-(BOOL)hasSubscriptionPurchaseSessionId;
-(NSData *)subscriptionPurchaseSessionId;
-(BOOL)hasPurchaseId;
-(void)setSawSubscriptionSheet:(BOOL)arg1 ;
-(void)setHasSawSubscriptionSheet:(BOOL)arg1 ;
-(BOOL)hasSawSubscriptionSheet;
-(int)storekitError;
-(void)setStorekitError:(int)arg1 ;
-(void)setHasStorekitError:(BOOL)arg1 ;
-(BOOL)hasStorekitError;
-(id)storekitErrorAsString:(int)arg1 ;
-(int)StringAsStorekitError:(id)arg1 ;
-(BOOL)sawSubscriptionSheet;
@end

