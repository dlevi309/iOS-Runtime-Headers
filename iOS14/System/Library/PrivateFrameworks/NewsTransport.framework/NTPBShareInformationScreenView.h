/*
* Generated on Thursday, January 14, 2021 at 2:23:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface NTPBShareInformationScreenView : PBCodable <NSCopying> {

	NSString* _articleId;
	NSData* _articleViewingSessionId;
	NSString* _errorCode;
	NSString* _errorMessage;
	NSString* _iadQtoken;
	int _paidSubscriptionConversionPointType;
	int _parentFeedType;
	int _resultType;
	NSString* _sectionId;
	NSString* _sourceChannelId;
	int _userAction;
	BOOL _arrivedFromAd;
	BOOL _subscriptionOnlyArticlePreview;
	SCD_Struct_NT9 _has;

}

@property (assign,nonatomic) BOOL hasUserAction; 
@property (assign,nonatomic) int userAction;                                           //@synthesize userAction=_userAction - In the implementation block
@property (assign,nonatomic) BOOL hasResultType; 
@property (assign,nonatomic) int resultType;                                           //@synthesize resultType=_resultType - In the implementation block
@property (assign,nonatomic) BOOL hasPaidSubscriptionConversionPointType; 
@property (assign,nonatomic) int paidSubscriptionConversionPointType;                  //@synthesize paidSubscriptionConversionPointType=_paidSubscriptionConversionPointType - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorMessage; 
@property (nonatomic,retain) NSString * errorMessage;                                  //@synthesize errorMessage=_errorMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorCode; 
@property (nonatomic,retain) NSString * errorCode;                                     //@synthesize errorCode=_errorCode - In the implementation block
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
@property (assign,nonatomic) BOOL hasSubscriptionOnlyArticlePreview; 
@property (assign,nonatomic) BOOL subscriptionOnlyArticlePreview;                      //@synthesize subscriptionOnlyArticlePreview=_subscriptionOnlyArticlePreview - In the implementation block
@property (assign,nonatomic) BOOL hasArrivedFromAd; 
@property (assign,nonatomic) BOOL arrivedFromAd;                                       //@synthesize arrivedFromAd=_arrivedFromAd - In the implementation block
@property (nonatomic,readonly) BOOL hasIadQtoken; 
@property (nonatomic,retain) NSString * iadQtoken;                                     //@synthesize iadQtoken=_iadQtoken - In the implementation block
-(BOOL)hasParentFeedType;
-(void)setHasParentFeedType:(BOOL)arg1 ;
-(int)parentFeedType;
-(id)dictionaryRepresentation;
-(BOOL)hasSourceChannelId;
-(void)setResultType:(int)arg1 ;
-(BOOL)hasArticleViewingSessionId;
-(void)setArticleViewingSessionId:(NSData *)arg1 ;
-(NSString *)sourceChannelId;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(NSData *)articleViewingSessionId;
-(id)parentFeedTypeAsString:(int)arg1 ;
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
-(int)resultType;
-(id)paidSubscriptionConversionPointTypeAsString:(int)arg1 ;
-(int)StringAsPaidSubscriptionConversionPointType:(id)arg1 ;
-(NSString *)errorCode;
-(NSString *)errorMessage;
-(void)setHasResultType:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(BOOL)hasErrorMessage;
-(void)setArticleId:(NSString *)arg1 ;
-(void)setSubscriptionOnlyArticlePreview:(BOOL)arg1 ;
-(void)setHasSubscriptionOnlyArticlePreview:(BOOL)arg1 ;
-(BOOL)hasSubscriptionOnlyArticlePreview;
-(void)setArrivedFromAd:(BOOL)arg1 ;
-(void)setHasArrivedFromAd:(BOOL)arg1 ;
-(BOOL)hasArrivedFromAd;
-(BOOL)subscriptionOnlyArticlePreview;
-(NSString *)sectionId;
-(id)description;
-(NSString *)articleId;
-(int)userAction;
-(BOOL)hasSectionId;
-(void)setSectionId:(NSString *)arg1 ;
-(BOOL)hasUserAction;
-(void)setParentFeedType:(int)arg1 ;
-(unsigned long long)hash;
-(int)StringAsParentFeedType:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setErrorCode:(NSString *)arg1 ;
-(void)setUserAction:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasUserAction:(BOOL)arg1 ;
-(BOOL)hasResultType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setErrorMessage:(NSString *)arg1 ;
@end

