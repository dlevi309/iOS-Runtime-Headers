/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOSlippyTile : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _x;
	unsigned _y;
	unsigned _z;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasX; 
@property (assign,nonatomic) unsigned x; 
@property (assign,nonatomic) BOOL hasY; 
@property (assign,nonatomic) unsigned y; 
@property (assign,nonatomic) BOOL hasZ; 
@property (assign,nonatomic) unsigned z; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)x;
-(PBUnknownFields *)unknownFields;
-(unsigned)z;
-(BOOL)hasY;
-(void)setHasY:(BOOL)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setX:(unsigned)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setY:(unsigned)arg1 ;
-(unsigned)y;
-(id)jsonRepresentation;
-(void)setZ:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasZ:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasZ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasX:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasX;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

