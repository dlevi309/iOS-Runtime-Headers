/*
* Generated on Thursday, January 14, 2021 at 2:23:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBFeedCellHostViewExposure : PBCodable <NSCopying> {

	int _areaPresentationReason;
	NSString* _campaignId;
	NSString* _campaignType;
	NSString* _creativeId;
	int _feedCellHostType;
	NSString* _topicFeedId;
	int _userAction;
	BOOL _pickFavsButtonExposed;
	SCD_Struct_NT2 _has;

}

@property (assign,nonatomic) BOOL hasFeedCellHostType; 
@property (assign,nonatomic) int feedCellHostType;                        //@synthesize feedCellHostType=_feedCellHostType - In the implementation block
@property (assign,nonatomic) BOOL hasAreaPresentationReason; 
@property (assign,nonatomic) int areaPresentationReason;                  //@synthesize areaPresentationReason=_areaPresentationReason - In the implementation block
@property (nonatomic,readonly) BOOL hasTopicFeedId; 
@property (nonatomic,retain) NSString * topicFeedId;                      //@synthesize topicFeedId=_topicFeedId - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignId; 
@property (nonatomic,retain) NSString * campaignId;                       //@synthesize campaignId=_campaignId - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignType; 
@property (nonatomic,retain) NSString * campaignType;                     //@synthesize campaignType=_campaignType - In the implementation block
@property (nonatomic,readonly) BOOL hasCreativeId; 
@property (nonatomic,retain) NSString * creativeId;                       //@synthesize creativeId=_creativeId - In the implementation block
@property (assign,nonatomic) BOOL hasPickFavsButtonExposed; 
@property (assign,nonatomic) BOOL pickFavsButtonExposed;                  //@synthesize pickFavsButtonExposed=_pickFavsButtonExposed - In the implementation block
@property (assign,nonatomic) BOOL hasUserAction; 
@property (assign,nonatomic) int userAction;                              //@synthesize userAction=_userAction - In the implementation block
-(int)feedCellHostType;
-(BOOL)hasCampaignId;
-(NSString *)campaignId;
-(id)dictionaryRepresentation;
-(void)setHasFeedCellHostType:(BOOL)arg1 ;
-(void)setFeedCellHostType:(int)arg1 ;
-(void)setCampaignType:(NSString *)arg1 ;
-(BOOL)hasCampaignType;
-(BOOL)hasFeedCellHostType;
-(NSString *)campaignType;
-(BOOL)hasCreativeId;
-(id)feedCellHostTypeAsString:(int)arg1 ;
-(void)setCampaignId:(NSString *)arg1 ;
-(int)StringAsFeedCellHostType:(id)arg1 ;
-(NSString *)creativeId;
-(void)setCreativeId:(NSString *)arg1 ;
-(void)setAreaPresentationReason:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)areaPresentationReasonAsString:(int)arg1 ;
-(id)description;
-(int)userAction;
-(BOOL)hasUserAction;
-(int)StringAsAreaPresentationReason:(id)arg1 ;
-(unsigned long long)hash;
-(void)setHasAreaPresentationReason:(BOOL)arg1 ;
-(void)setTopicFeedId:(NSString *)arg1 ;
-(BOOL)hasTopicFeedId;
-(void)setPickFavsButtonExposed:(BOOL)arg1 ;
-(void)setHasPickFavsButtonExposed:(BOOL)arg1 ;
-(BOOL)hasPickFavsButtonExposed;
-(NSString *)topicFeedId;
-(BOOL)pickFavsButtonExposed;
-(BOOL)readFrom:(id)arg1 ;
-(void)setUserAction:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasUserAction:(BOOL)arg1 ;
-(BOOL)hasAreaPresentationReason;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)areaPresentationReason;
-(BOOL)isEqual:(id)arg1 ;
@end

