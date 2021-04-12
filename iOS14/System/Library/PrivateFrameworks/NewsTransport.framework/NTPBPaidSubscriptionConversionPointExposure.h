/*
* Generated on Thursday, January 14, 2021 at 2:23:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NTPBIssueData;

@interface NTPBPaidSubscriptionConversionPointExposure : PBCodable <NSCopying> {

	NSString* _articleId;
	NSData* _articleViewingSessionId;
	NSData* _feedViewExposureId;
	NSString* _groupFeedId;
	int _groupType;
	NSString* _iadQtoken;
	NTPBIssueData* _issueData;
	int _paidSubscriptionConversionPointExposureLocation;
	int _paidSubscriptionConversionPointExposurePresentationReason;
	int _paidSubscriptionConversionPointType;
	NSString* _parentFeedId;
	int _parentFeedType;
	NSString* _purchaseId;
	int _purchaseType;
	NSString* _sectionId;
	NSString* _sourceChannelId;
	NSData* _subscriptionPurchaseSessionId;
	int _userAction;
	BOOL _arrivedFromAd;
	BOOL _subscriptionOnlyArticlePreview;
	SCD_Struct_NT4 _has;

}

@property (assign,nonatomic) BOOL hasPaidSubscriptionConversionPointType; 
@property (assign,nonatomic) int paidSubscriptionConversionPointType;                                        //@synthesize paidSubscriptionConversionPointType=_paidSubscriptionConversionPointType - In the implementation block
@property (assign,nonatomic) BOOL hasUserAction; 
@property (assign,nonatomic) int userAction;                                                                 //@synthesize userAction=_userAction - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                                                     //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (assign,nonatomic) BOOL hasPaidSubscriptionConversionPointExposureLocation; 
@property (assign,nonatomic) int paidSubscriptionConversionPointExposureLocation;                            //@synthesize paidSubscriptionConversionPointExposureLocation=_paidSubscriptionConversionPointExposureLocation - In the implementation block
@property (assign,nonatomic) BOOL hasPaidSubscriptionConversionPointExposurePresentationReason; 
@property (assign,nonatomic) int paidSubscriptionConversionPointExposurePresentationReason;                  //@synthesize paidSubscriptionConversionPointExposurePresentationReason=_paidSubscriptionConversionPointExposurePresentationReason - In the implementation block
@property (nonatomic,readonly) BOOL hasSectionId; 
@property (nonatomic,retain) NSString * sectionId;                                                           //@synthesize sectionId=_sectionId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                                                           //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleViewingSessionId; 
@property (nonatomic,retain) NSData * articleViewingSessionId;                                               //@synthesize articleViewingSessionId=_articleViewingSessionId - In the implementation block
@property (assign,nonatomic) BOOL hasParentFeedType; 
@property (assign,nonatomic) int parentFeedType;                                                             //@synthesize parentFeedType=_parentFeedType - In the implementation block
@property (assign,nonatomic) BOOL hasSubscriptionOnlyArticlePreview; 
@property (assign,nonatomic) BOOL subscriptionOnlyArticlePreview;                                            //@synthesize subscriptionOnlyArticlePreview=_subscriptionOnlyArticlePreview - In the implementation block
@property (assign,nonatomic) BOOL hasArrivedFromAd; 
@property (assign,nonatomic) BOOL arrivedFromAd;                                                             //@synthesize arrivedFromAd=_arrivedFromAd - In the implementation block
@property (nonatomic,readonly) BOOL hasIadQtoken; 
@property (nonatomic,retain) NSString * iadQtoken;                                                           //@synthesize iadQtoken=_iadQtoken - In the implementation block
@property (nonatomic,readonly) BOOL hasSubscriptionPurchaseSessionId; 
@property (nonatomic,retain) NSData * subscriptionPurchaseSessionId;                                         //@synthesize subscriptionPurchaseSessionId=_subscriptionPurchaseSessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedViewExposureId; 
@property (nonatomic,retain) NSData * feedViewExposureId;                                                    //@synthesize feedViewExposureId=_feedViewExposureId - In the implementation block
@property (assign,nonatomic) BOOL hasGroupType; 
@property (assign,nonatomic) int groupType;                                                                  //@synthesize groupType=_groupType - In the implementation block
@property (nonatomic,readonly) BOOL hasPurchaseId; 
@property (nonatomic,retain) NSString * purchaseId;                                                          //@synthesize purchaseId=_purchaseId - In the implementation block
@property (nonatomic,readonly) BOOL hasGroupFeedId; 
@property (nonatomic,retain) NSString * groupFeedId;                                                         //@synthesize groupFeedId=_groupFeedId - In the implementation block
@property (nonatomic,readonly) BOOL hasParentFeedId; 
@property (nonatomic,retain) NSString * parentFeedId;                                                        //@synthesize parentFeedId=_parentFeedId - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueData; 
@property (nonatomic,retain) NTPBIssueData * issueData;                                                      //@synthesize issueData=_issueData - In the implementation block
@property (assign,nonatomic) BOOL hasPurchaseType; 
@property (assign,nonatomic) int purchaseType;                                                               //@synthesize purchaseType=_purchaseType - In the implementation block
-(id)groupTypeAsString:(int)arg1 ;
-(BOOL)hasParentFeedType;
-(void)setHasParentFeedType:(BOOL)arg1 ;
-(int)parentFeedType;
-(NTPBIssueData *)issueData;
-(BOOL)hasGroupFeedId;
-(void)setGroupFeedId:(NSString *)arg1 ;
-(BOOL)hasFeedViewExposureId;
-(id)dictionaryRepresentation;
-(BOOL)hasSourceChannelId;
-(void)setGroupType:(int)arg1 ;
-(BOOL)hasArticleViewingSessionId;
-(void)setArticleViewingSessionId:(NSData *)arg1 ;
-(NSString *)sourceChannelId;
-(void)setHasGroupType:(BOOL)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(BOOL)hasGroupType;
-(int)StringAsGroupType:(id)arg1 ;
-(NSString *)groupFeedId;
-(NSData *)feedViewExposureId;
-(NSData *)articleViewingSessionId;
-(id)parentFeedTypeAsString:(int)arg1 ;
-(void)setFeedViewExposureId:(NSData *)arg1 ;
-(BOOL)hasIadQtoken;
-(BOOL)hasArticleId;
-(NSString *)iadQtoken;
-(void)setIadQtoken:(NSString *)arg1 ;
-(BOOL)arrivedFromAd;
-(void)mergeFrom:(id)arg1 ;
-(int)paidSubscriptionConversionPointType;
-(void)setPaidSubscriptionConversionPointType:(int)arg1 ;
-(void)setHasPaidSubscriptionConversionPointType:(BOOL)arg1 ;
-(BOOL)hasPaidSubscriptionConversionPointType;
-(id)paidSubscriptionConversionPointTypeAsString:(int)arg1 ;
-(int)StringAsPaidSubscriptionConversionPointType:(id)arg1 ;
-(void)setIssueData:(NTPBIssueData *)arg1 ;
-(void)setArticleId:(NSString *)arg1 ;
-(BOOL)hasPurchaseId;
-(void)setSubscriptionOnlyArticlePreview:(BOOL)arg1 ;
-(void)setHasSubscriptionOnlyArticlePreview:(BOOL)arg1 ;
-(BOOL)hasSubscriptionOnlyArticlePreview;
-(void)setArrivedFromAd:(BOOL)arg1 ;
-(void)setHasArrivedFromAd:(BOOL)arg1 ;
-(BOOL)hasArrivedFromAd;
-(BOOL)subscriptionOnlyArticlePreview;
-(void)setSubscriptionPurchaseSessionId:(NSData *)arg1 ;
-(BOOL)hasSubscriptionPurchaseSessionId;
-(NSData *)subscriptionPurchaseSessionId;
-(NSString *)sectionId;
-(id)description;
-(NSString *)articleId;
-(int)purchaseType;
-(int)userAction;
-(BOOL)hasSectionId;
-(void)setSectionId:(NSString *)arg1 ;
-(BOOL)hasUserAction;
-(int)paidSubscriptionConversionPointExposureLocation;
-(void)setPaidSubscriptionConversionPointExposureLocation:(int)arg1 ;
-(void)setHasPaidSubscriptionConversionPointExposureLocation:(BOOL)arg1 ;
-(BOOL)hasPaidSubscriptionConversionPointExposureLocation;
-(id)paidSubscriptionConversionPointExposureLocationAsString:(int)arg1 ;
-(int)StringAsPaidSubscriptionConversionPointExposureLocation:(id)arg1 ;
-(int)paidSubscriptionConversionPointExposurePresentationReason;
-(void)setPaidSubscriptionConversionPointExposurePresentationReason:(int)arg1 ;
-(void)setHasPaidSubscriptionConversionPointExposurePresentationReason:(BOOL)arg1 ;
-(BOOL)hasPaidSubscriptionConversionPointExposurePresentationReason;
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
-(void)setUserAction:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)parentFeedId;
-(void)setHasUserAction:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

