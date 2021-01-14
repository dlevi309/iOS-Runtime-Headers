/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOAttribute : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _key;
	unsigned _value;
	struct {
		unsigned has_key : 1;
		unsigned has_value : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasKey; 
@property (assign,nonatomic) int key; 
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) unsigned value; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasKey;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasValue;
-(id)jsonRepresentation;
-(id)keyAsString:(int)arg1 ;
-(int)StringAsKey:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setValue:(unsigned)arg1 ;
-(id)description;
-(void)setHasValue:(BOOL)arg1 ;
-(int)key;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasKey:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(int)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(unsigned)value;
-(BOOL)isEqual:(id)arg1 ;
@end

