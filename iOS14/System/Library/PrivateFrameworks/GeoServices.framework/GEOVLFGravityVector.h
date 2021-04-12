/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOVLFGravityVector : PBCodable <NSCopying> {

	double _x;
	double _y;
	double _z;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasX; 
@property (assign,nonatomic) double x; 
@property (assign,nonatomic) BOOL hasY; 
@property (assign,nonatomic) double y; 
@property (assign,nonatomic) BOOL hasZ; 
@property (assign,nonatomic) double z; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(double)x;
-(double)z;
-(BOOL)hasY;
-(void)setHasY:(BOOL)arg1 ;
-(void)setX:(double)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setY:(double)arg1 ;
-(double)y;
-(id)jsonRepresentation;
-(void)setZ:(double)arg1 ;
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

