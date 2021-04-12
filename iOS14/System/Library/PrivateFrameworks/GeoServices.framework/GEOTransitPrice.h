/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOTransitPrice : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _currencyCode;
	int _amountInCents;
	unsigned _subunit;
	struct {
		unsigned has_amountInCents : 1;
		unsigned has_subunit : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasAmountInCents; 
@property (assign,nonatomic) int amountInCents; 
@property (nonatomic,readonly) BOOL hasCurrencyCode; 
@property (nonatomic,retain) NSString * currencyCode; 
@property (assign,nonatomic) BOOL hasSubunit; 
@property (assign,nonatomic) unsigned subunit; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)currencyCode;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(unsigned)subunit;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAmountInCents:(int)arg1 ;
-(void)setSubunit:(unsigned)arg1 ;
-(int)amountInCents;
-(void)setHasAmountInCents:(BOOL)arg1 ;
-(BOOL)hasAmountInCents;
-(BOOL)hasCurrencyCode;
-(void)setHasSubunit:(BOOL)arg1 ;
-(BOOL)hasSubunit;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

