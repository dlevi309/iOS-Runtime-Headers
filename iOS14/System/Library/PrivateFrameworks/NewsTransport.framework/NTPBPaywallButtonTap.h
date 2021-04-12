/*
* Generated on Thursday, January 14, 2021 at 2:23:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NTPBIssueData;

@interface NTPBPaywallButtonTap : PBCodable <NSCopying> {

	NSString* _articleId;
	NSData* _articleViewingSessionId;
	int _groupType;
	NTPBIssueData* _issueData;
	int _paidSubscriptionConversionPointType;
	int _parentFeedType;
	NSString* _purchaseId;
	int _purchaseType;
	NSString* _sectionId;
	NSString* _sourceChannelId;
	int _subscriptionButtonTargetType;
	SCD_Struct_NT11 _has;

}

@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;                               //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
@property (nonatomic,readonly) BOOL hasSectionId; 
@property (nonatomic,retain) NSString * sectionId;                                     //@synthesize sectionId=_sectionId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleId; 
@property (nonatomic,retain) NSString * articleId;                                     //@synthesize articleId=_articleId - In the implementation block
@property (nonatomic,readonly) BOOL hasArticleViewingSessionId; 
@property (nonatomic,retain) NSData * articleViewingSessionId;                         //@synthesize articleViewingSessionId=_articleViewingSessionId - In the implementation block
@property (assign,nonatomic) BOOL hasParentFeedType; 
@property (assign,nonatomic) int parentFeedType;                                       //@synthesize parentFeedType=_parentFeedType - In the implementation block
@property (assign,nonatomic) BOOL hasGroupType; 
@property (assign,nonatomic) int groupType;                                            //@synthesize groupType=_groupType - In the implementation block
@property (assign,nonatomic) BOOL hasPaidSubscriptionConversionPointType; 
@property (assign,nonatomic) int paidSubscriptionConversionPointType;                  //@synthesize paidSubscriptionConversionPointType=_paidSubscriptionConversionPointType - In the implementation block
@property (nonatomic,readonly) BOOL hasPurchaseId; 
@property (nonatomic,retain) NSString * purchaseId;                                    //@synthesize purchaseId=_purchaseId - In the implementation block
@property (assign,nonatomic) BOOL hasSubscriptionButtonTargetType; 
@property (assign,nonatomic) int subscriptionButtonTargetType;                         //@synthesize subscriptionButtonTargetType=_subscriptionButtonTargetType - In the implementation block
@property (nonatomic,readonly) BOOL hasIssueData; 
@property (nonatomic,retain) NTPBIssueData * issueData;                                //@synthesize issueData=_issueData - In the implementation block
@property (assign,nonatomic) BOOL hasPurchaseType; 
@property (assign,nonatomic) int purchaseType;                                         //@synthesize purchaseType=_purchaseType - In the implementation block
-(id)groupTypeAsString:(int)arg1 ;
-(BOOL)hasParentFeedType;
-(void)setHasParentFeedType:(BOOL)arg1 ;
-(int)parentFeedType;
-(NTPBIssueData *)issueData;
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
-(NSData *)articleViewingSessionId;
-(id)parentFeedTypeAsString:(int)arg1 ;
-(BOOL)hasArticleId;
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
-(NSString *)sectionId;
-(id)description;
-(NSString *)articleId;
-(int)purchaseType;
-(BOOL)hasSectionId;
-(void)setSectionId:(NSString *)arg1 ;
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
-(int)subscriptionButtonTargetType;
-(void)setSubscriptionButtonTargetType:(int)arg1 ;
-(void)setHasSubscriptionButtonTargetType:(BOOL)arg1 ;
-(BOOL)hasSubscriptionButtonTargetType;
-(id)subscriptionButtonTargetTypeAsString:(int)arg1 ;
-(int)StringAsSubscriptionButtonTargetType:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

