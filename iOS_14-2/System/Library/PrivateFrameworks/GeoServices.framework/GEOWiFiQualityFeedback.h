/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOWiFiQualityFeedback : PBCodable <NSCopying> {

	unsigned _maxValue;
	int _type;
	unsigned _value;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) unsigned value; 
@property (assign,nonatomic) BOOL hasMaxValue; 
@property (assign,nonatomic) unsigned maxValue; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setMaxValue:(unsigned)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasValue;
-(id)jsonRepresentation;
-(BOOL)hasType;
-(void)mergeFrom:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setValue:(unsigned)arg1 ;
-(id)description;
-(void)setHasValue:(BOOL)arg1 ;
-(int)type;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)maxValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(unsigned)value;
-(void)setHasMaxValue:(BOOL)arg1 ;
-(BOOL)hasMaxValue;
-(BOOL)isEqual:(id)arg1 ;
@end

