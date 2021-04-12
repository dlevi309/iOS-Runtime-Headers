/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	SCD_Struct_GE85 _flags;

}

@property (assign,nonatomic) BOOL hasX; 
@property (assign,nonatomic) int x; 
@property (assign,nonatomic) BOOL hasY; 
@property (assign,nonatomic) int y; 
@property (assign,nonatomic) BOOL hasZoom; 
@property (assign,nonatomic) int zoom; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)x;
-(int)y;
-(void)setZoom:(int)arg1 ;
-(int)zoom;
-(void)setX:(int)arg1 ;
-(void)setY:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setHasZoom:(BOOL)arg1 ;
-(BOOL)hasZoom;
-(void)setHasX:(BOOL)arg1 ;
-(BOOL)hasX;
-(void)setHasY:(BOOL)arg1 ;
-(BOOL)hasY;
@end

