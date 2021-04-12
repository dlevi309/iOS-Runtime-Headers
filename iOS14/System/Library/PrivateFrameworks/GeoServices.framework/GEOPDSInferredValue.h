/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDSRawAttribute;

@interface GEOPDSInferredValue : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDSRawAttribute* _attribute;
	int _priceRange;
	int _tradingHours;
	BOOL _negateInferredValue;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasPriceRange; 
@property (assign,nonatomic) int priceRange; 
@property (assign,nonatomic) BOOL hasTradingHours; 
@property (assign,nonatomic) int tradingHours; 
@property (nonatomic,readonly) BOOL hasAttribute; 
@property (nonatomic,retain) GEOPDSRawAttribute * attribute; 
@property (assign,nonatomic) BOOL hasNegateInferredValue; 
@property (assign,nonatomic) BOOL negateInferredValue; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setTradingHours:(int)arg1 ;
-(void)setNegateInferredValue:(BOOL)arg1 ;
-(void)setHasPriceRange:(BOOL)arg1 ;
-(int)tradingHours;
-(id)priceRangeAsString:(int)arg1 ;
-(int)StringAsPriceRange:(id)arg1 ;
-(void)setHasTradingHours:(BOOL)arg1 ;
-(BOOL)hasTradingHours;
-(BOOL)hasAttribute;
-(id)tradingHoursAsString:(int)arg1 ;
-(int)StringAsTradingHours:(id)arg1 ;
-(BOOL)negateInferredValue;
-(BOOL)hasNegateInferredValue;
-(void)setHasNegateInferredValue:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(GEOPDSRawAttribute *)attribute;
-(void)mergeFrom:(id)arg1 ;
-(int)priceRange;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasPriceRange;
-(void)setAttribute:(GEOPDSRawAttribute *)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPriceRange:(int)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

