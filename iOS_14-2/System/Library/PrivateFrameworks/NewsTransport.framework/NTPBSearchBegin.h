/*
* Generated on Thursday, January 14, 2021 at 2:23:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBSearchBegin : PBCodable <NSCopying> {

	NSString* _campaignId;
	NSString* _campaignType;
	NSString* _creativeId;
	int _searchLocation;
	SCD_Struct_NT3 _has;

}

@property (assign,nonatomic) BOOL hasSearchLocation; 
@property (assign,nonatomic) int searchLocation;                   //@synthesize searchLocation=_searchLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignId; 
@property (nonatomic,retain) NSString * campaignId;                //@synthesize campaignId=_campaignId - In the implementation block
@property (nonatomic,readonly) BOOL hasCampaignType; 
@property (nonatomic,retain) NSString * campaignType;              //@synthesize campaignType=_campaignType - In the implementation block
@property (nonatomic,readonly) BOOL hasCreativeId; 
@property (nonatomic,retain) NSString * creativeId;                //@synthesize creativeId=_creativeId - In the implementation block
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
-(void)mergeFrom:(id)arg1 ;
-(void)setHasSearchLocation:(BOOL)arg1 ;
-(id)searchLocationAsString:(int)arg1 ;
-(int)StringAsSearchLocation:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(int)searchLocation;
-(void)setSearchLocation:(int)arg1 ;
-(BOOL)hasSearchLocation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

