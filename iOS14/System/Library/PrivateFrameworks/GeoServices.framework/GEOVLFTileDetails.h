/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOVLFUsageTileID;

@interface GEOVLFTileDetails : PBCodable <NSCopying> {

	GEOVLFUsageTileID* _tileId;
	unsigned _tileSizeBytes;
	SCD_Struct_GE127 _flags;

}

@property (nonatomic,readonly) BOOL hasTileId; 
@property (nonatomic,retain) GEOVLFUsageTileID * tileId; 
@property (assign,nonatomic) BOOL hasTileSizeBytes; 
@property (assign,nonatomic) unsigned tileSizeBytes; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(GEOVLFUsageTileID *)tileId;
-(void)mergeFrom:(id)arg1 ;
-(void)setTileId:(GEOVLFUsageTileID *)arg1 ;
-(BOOL)hasTileId;
-(id)initWithDictionary:(id)arg1 ;
-(void)setTileSizeBytes:(unsigned)arg1 ;
-(unsigned)tileSizeBytes;
-(void)setHasTileSizeBytes:(BOOL)arg1 ;
-(BOOL)hasTileSizeBytes;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

