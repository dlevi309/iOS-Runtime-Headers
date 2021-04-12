/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE33 _flags;

}

@property (assign,nonatomic) BOOL hasKey; 
@property (assign,nonatomic) int key; 
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) unsigned value; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)key;
-(unsigned)value;
-(void)setValue:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(void)setKey:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasKey;
-(BOOL)hasValue;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setHasKey:(BOOL)arg1 ;
-(id)keyAsString:(int)arg1 ;
-(int)StringAsKey:(id)arg1 ;
-(void)setHasValue:(BOOL)arg1 ;
@end

