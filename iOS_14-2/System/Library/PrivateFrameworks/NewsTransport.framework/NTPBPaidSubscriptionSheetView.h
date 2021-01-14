/*
* Generated on Thursday, January 14, 2021 at 2:23:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NTPBPaidSubscriptionSheetView : PBCodable <NSCopying> {

	NSString* _articleId;
	NSData* _articleViewingSessionId;
	NSString* _campaignId;
	NSString* _campaignType;
	NSString* _creativeId;
	int _groupType;
	NSString* _iadQtoken;
	int _paidSubscriptionConversionPointExposureLocation;
	int _paidSubscriptionConversionPointType;
	int _paidSubscriptionSheetViewPresentationReason;
	int _parentFeedType;
	NSString* _sectionId;
	NSString* _sourceChannelId;
	NSData* _subscriptionPurchaseSessionId;
	int _userAction;
	BOOL _arrivedFromAd;
	BOOL _subscriptionOnlyArticlePreview;
	SCD_Struct_NT6 _has;

}

@property (assign,nonatomic) BOOL hasUserAction; 
@property (assign,nonatomic) int userAction;                                                       //@synthesize userAction=_userAction - In the implementation block
@property (assign,nonatomic) BOOL hasPaidSubscriptionSheetViewPresentationReason; 
@property (assign,nonatomic) int paidSubscriptionSheetViewPresentationReason;                      //@synthesize paidSubscriptionSheetViewPresentationReason=_paidSubscriptionSheetViewPresentationReason - In the implementation block
@property (assign,nonatomic) BOOL hasPaidSubscriptionConversionPointExposureLocation; 
@property (assign,nonatomic) int paidSubscriptionConversionPointExposureLocation;                  //@synthesize paidSubscriptionConversionPointExposureLocation=_paidSubscriptionConversionPointExposureLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                                           //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (nonatomic,readonly) BOOL hasSectionId; 
@property (nonatomic,retain) NSString * sectionId;                                                 //@synthesize sectionId=_sectionId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                                                 //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleViewingSessionId; 
@property (nonatomic,retain) NSData * articleViewingSessionId;                                     //@synthesize articleViewingSessionId=_articleViewingSessionId - In the implementation block
@property (assign,nonatomic) BOOL hasParentFeedType; 
@property (assign,nonatomic) int parentFeedType;                                                   //@synthesize parentFeedType=_parentFeedType - In the implementation block
@property (assign,nonatomic) BOOL hasSubscriptionOnlyArticlePreview; 
@property (assign,nonatomic) BOOL subscriptionOnlyArticlePreview;                                  //@synthesize subscriptionOnlyArticlePreview=_subscriptionOnlyArticlePreview - In the implementation block
@property (assign,nonatomic) BOOL hasArrivedFromAd; 
@property (assign,nonatomic) BOOL arrivedFromAd;                                                   //@synthesize arrivedFromAd=_arrivedFromAd - In the implementation block
@property (nonatomic,readonly) BOOL hasIadQtoken; 
@property (nonatomic,retain) NSString * iadQtoken;                                                 //@synthesize iadQtoken=_iadQtoken - In the implementation block
@property (assign,nonatomic) BOOL hasPaidSubscriptionConversionPointType; 
@property (assign,nonatomic) int paidSubscriptionConversionPointType;                              //@synthesize paidSubscriptionConversionPointType=_paidSubscriptionConversionPointType - In the implementation block
@property (nonatomic,readonly) BOOL hasSubscriptionPurchaseSessionId; 
@property (nonatomic,retain) NSData * subscriptionPurchaseSessionId;                               //@synthesize subscriptionPurchaseSessionId=_subscriptionPurchaseSessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignId; 
@property (nonatomic,retain) NSString * campaignId;                                                //@synthesize campaignId=_campaignId - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignType; 
@property (nonatomic,retain) NSString * campaignType;                                              //@synthesize campaignType=_campaignType - In the implementation block
@property (nonatomic,readonly) BOOL hasCreativeId; 
@property (nonatomic,retain) NSString * creativeId;                                                //@synthesize creativeId=_creativeId - In the implementation block
@property (assign,nonatomic) BOOL hasGroupType; 
@property (assign,nonatomic) int groupType;                                                        //@synthesize groupType=_groupType - In the implementation block
-(id)groupTypeAsString:(int)arg1 ;
-(BOOL)hasParentFeedType;
-(BOOL)hasCampaignId;
-(NSString *)campaignId;
-(void)setHasParentFeedType:(BOOL)arg1 ;
-(int)parentFeedType;
-(id)dictionaryRepresentation;
-(BOOL)hasSourceChannelId;
-(void)setGroupType:(int)arg1 ;
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
-(NSString *)creativeId;
-(void)setCreativeId:(NSString *)arg1 ;
-(NSData *)articleViewingSessionId;
-(id)parentFeedTypeAsString:(int)arg1 ;
-(BOOL)hasIadQtoken;
-(int)paidSubscriptionSheetViewPresentationReason;
-(void)setPaidSubscriptionSheetViewPresentationReason:(int)arg1 ;
-(BOOL)hasArticleId;
-(NSString *)iadQtoken;
-(void)setHasPaidSubscriptionSheetViewPresentationReason:(BOOL)arg1 ;
-(BOOL)hasPaidSubscriptionSheetViewPresentationReason;
-(void)setIadQtoken:(NSString *)arg1 ;
-(BOOL)arrivedFromAd;
-(void)mergeFrom:(id)arg1 ;
-(int)paidSubscriptionConversionPointType;
-(void)setPaidSubscriptionConversionPointType:(int)arg1 ;
-(void)setHasPaidSubscriptionConversionPointType:(BOOL)arg1 ;
-(BOOL)hasPaidSubscriptionConversionPointType;
-(id)paidSubscriptionConversionPointTypeAsString:(int)arg1 ;
-(int)StringAsPaidSubscriptionConversionPointType:(id)arg1 ;
-(void)setArticleId:(NSString *)arg1 ;
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
-(void)setParentFeedType:(int)arg1 ;
-(int)groupType;
-(unsigned long long)hash;
-(int)StringAsParentFeedType:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setUserAction:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasUserAction:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

