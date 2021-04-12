/*
* Generated on Thursday, January 14, 2021 at 2:23:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_NT3 _has;

}

@property (assign,nonatomic) BOOL hasAreaPresentationReason; 
@property (assign,nonatomic) int areaPresentationReason;                  //@synthesize areaPresentationReason=_areaPresentationReason - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignId; 
@property (nonatomic,retain) NSString * campaignId;                       //@synthesize campaignId=_campaignId - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignType; 
@property (nonatomic,retain) NSString * campaignType;                     //@synthesize campaignType=_campaignType - In the implementation block
@property (nonatomic,readonly) BOOL hasCreativeId; 
@property (nonatomic,retain) NSString * creativeId;                       //@synthesize creativeId=_creativeId - In the implementation block
-(BOOL)hasCampaignId;
-(NSString *)campaignId;
-(id)dictionaryRepresentation;
-(void)setCampaignType:(NSString *)arg1 ;
-(BOOL)hasCampaignType;
-(NSString *)campaignType;
-(BOOL)hasCreativeId;
-(void)setCampaignId:(NSString *)arg1 ;
-(NSString *)creativeId;
-(void)setCreativeId:(NSString *)arg1 ;
-(void)setAreaPresentationReason:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)areaPresentationReasonAsString:(int)arg1 ;
-(id)description;
-(int)StringAsAreaPresentationReason:(id)arg1 ;
-(unsigned long long)hash;
-(void)setHasAreaPresentationReason:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasAreaPresentationReason;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)areaPresentationReason;
-(BOOL)isEqual:(id)arg1 ;
@end

