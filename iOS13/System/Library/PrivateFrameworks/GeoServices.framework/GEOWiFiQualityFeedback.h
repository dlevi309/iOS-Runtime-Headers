/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOWiFiQualityFeedback : PBCodable <NSCopying> {

	unsigned _maxValue;
	int _type;
	unsigned _value;
	SCD_Struct_GE85 _flags;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) unsigned value; 
@property (assign,nonatomic) BOOL hasMaxValue; 
@property (assign,nonatomic) unsigned maxValue; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(unsigned)value;
-(void)setValue:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(BOOL)hasValue;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasValue:(BOOL)arg1 ;
-(unsigned)maxValue;
-(void)setMaxValue:(unsigned)arg1 ;
-(void)setHasMaxValue:(BOOL)arg1 ;
-(BOOL)hasMaxValue;
@end

