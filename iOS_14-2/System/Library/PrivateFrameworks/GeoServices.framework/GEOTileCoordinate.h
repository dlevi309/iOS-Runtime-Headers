/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOTileCoordinate : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _x;
	int _y;
	int _zoom;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasX; 
@property (assign,nonatomic) int x; 
@property (assign,nonatomic) BOOL hasY; 
@property (assign,nonatomic) int y; 
@property (assign,nonatomic) BOOL hasZoom; 
@property (assign,nonatomic) int zoom; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)x;
-(void)setZoom:(int)arg1 ;
-(PBUnknownFields *)unknownFields;
-(int)zoom;
-(BOOL)hasY;
-(void)setHasY:(BOOL)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setX:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setY:(int)arg1 ;
-(int)y;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasZoom:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasZoom;
-(void)setHasX:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasX;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

