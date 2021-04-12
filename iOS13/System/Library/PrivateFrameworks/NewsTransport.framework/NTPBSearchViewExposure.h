/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBSearchViewExposure : PBCodable <NSCopying> {

	int _areaPresentationReason;
	NSString* _campaignId;
	NSString* _campaignType;
	NSString* _creativeId;
	SCD_Struct_NT1 _has;

}

@property (assign,nonatomic) BOOL hasAreaPresentationReason; 
@property (assign,nonatomic) int areaPresentationReason;                  //@synthesize areaPresentationReason=_areaPresentationReason - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignId; 
@property (nonatomic,retain) NSString * campaignId;                       //@synthesize campaignId=_campaignId - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignType; 
@property (nonatomic,retain) NSString * campaignType;                     //@synthesize campaignType=_campaignType - In the implementation block
@property (nonatomic,readonly) BOOL hasCreativeId; 
@property (nonatomic,retain) NSString * creativeId;                       //@synthesize creativeId=_creativeId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSString *)campaignId;
-(void)setCampaignId:(NSString *)arg1 ;
-(void)setCampaignType:(NSString *)arg1 ;
-(void)setCreativeId:(NSString *)arg1 ;
-(BOOL)hasCampaignId;
-(BOOL)hasCampaignType;
-(BOOL)hasCreativeId;
-(NSString *)campaignType;
-(NSString *)creativeId;
-(int)areaPresentationReason;
-(void)setAreaPresentationReason:(int)arg1 ;
-(void)setHasAreaPresentationReason:(BOOL)arg1 ;
-(BOOL)hasAreaPresentationReason;
-(id)areaPresentationReasonAsString:(int)arg1 ;
-(int)StringAsAreaPresentationReason:(id)arg1 ;
@end

