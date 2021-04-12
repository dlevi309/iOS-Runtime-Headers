/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOPDGroundDataBuild, NSMutableArray, GEOTileCoordinate, GEOPDGeographicCoordinate, GEOPDOrientedPosition, GEOPDRigMetrics, GEOPDOrientedTilePosition;

@interface GEOPDPhotoPosition : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE17* _cameraMetadataIndexs;
	GEOPDGroundDataBuild* _build;
	NSMutableArray* _cameraMetadatas;
	unsigned long long _imageryTimestamp;
	unsigned long long _imdataId;
	GEOTileCoordinate* _parentTile;
	GEOPDGeographicCoordinate* _positionGeo;
	GEOPDOrientedPosition* _position;
	GEOPDRigMetrics* _rigMetrics;
	GEOPDOrientedTilePosition* _tilePosition;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _buildTableIndex;
	int _revision;
	struct {
		unsigned has_imageryTimestamp : 1;
		unsigned has_imdataId : 1;
		unsigned has_buildTableIndex : 1;
		unsigned has_revision : 1;
		unsigned read_cameraMetadataIndexs : 1;
		unsigned read_build : 1;
		unsigned read_cameraMetadatas : 1;
		unsigned read_parentTile : 1;
		unsigned read_positionGeo : 1;
		unsigned read_position : 1;
		unsigned read_rigMetrics : 1;
		unsigned read_tilePosition : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasImdataId; 
@property (assign,nonatomic) unsigned long long imdataId; 
@property (nonatomic,retain) NSMutableArray * cameraMetadatas; 
@property (nonatomic,readonly) BOOL hasPosition; 
@property (nonatomic,retain) GEOPDOrientedPosition * position; 
@property (assign,nonatomic) BOOL hasRevision; 
@property (assign,nonatomic) int revision; 
@property (assign,nonatomic) BOOL hasImageryTimestamp; 
@property (assign,nonatomic) unsigned long long imageryTimestamp; 
@property (nonatomic,readonly) BOOL hasPositionGeo; 
@property (nonatomic,retain) GEOPDGeographicCoordinate * positionGeo; 
@property (assign,nonatomic) BOOL hasBuildTableIndex; 
@property (assign,nonatomic) unsigned buildTableIndex; 
@property (nonatomic,readonly) BOOL hasBuild; 
@property (nonatomic,retain) GEOPDGroundDataBuild * build; 
@property (nonatomic,readonly) unsigned long long cameraMetadataIndexsCount; 
@property (nonatomic,readonly) unsigned* cameraMetadataIndexs; 
@property (nonatomic,readonly) BOOL hasTilePosition; 
@property (nonatomic,retain) GEOPDOrientedTilePosition * tilePosition; 
@property (nonatomic,readonly) BOOL hasParentTile; 
@property (nonatomic,retain) GEOTileCoordinate * parentTile; 
@property (nonatomic,readonly) BOOL hasRigMetrics; 
@property (nonatomic,retain) GEOPDRigMetrics * rigMetrics; 
+(BOOL)isValid:(id)arg1 ;
+(Class)cameraMetadataType;
-(BOOL)hasPosition;
-(id)dictionaryRepresentation;
-(GEOPDRigMetrics *)rigMetrics;
-(GEOPDOrientedPosition *)position;
-(void)setParentTile:(GEOTileCoordinate *)arg1 ;
-(unsigned)buildTableIndex;
-(void)readAll:(BOOL)arg1 ;
-(GEOPDGroundDataBuild *)build;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasParentTile;
-(BOOL)hasBuildTableIndex;
-(void)setBuild:(GEOPDGroundDataBuild *)arg1 ;
-(BOOL)hasImdataId;
-(unsigned long long)cameraMetadatasCount;
-(GEOPDGeographicCoordinate *)positionGeo;
-(void)setPositionGeo:(GEOPDGeographicCoordinate *)arg1 ;
-(void)setTilePosition:(GEOPDOrientedTilePosition *)arg1 ;
-(void)setRigMetrics:(GEOPDRigMetrics *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setRevision:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)cameraMetadataAtIndex:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasImdataId:(BOOL)arg1 ;
-(void)setImdataId:(unsigned long long)arg1 ;
-(void)clearCameraMetadataIndexs;
-(BOOL)hasBuild;
-(id)description;
-(void)setImageryTimestamp:(unsigned long long)arg1 ;
-(void)setBuildTableIndex:(unsigned)arg1 ;
-(void)setCameraMetadatas:(NSMutableArray *)arg1 ;
-(void)setHasImageryTimestamp:(BOOL)arg1 ;
-(unsigned long long)imdataId;
-(void)setHasRevision:(BOOL)arg1 ;
-(NSMutableArray *)cameraMetadatas;
-(void)setCameraMetadataIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setPosition:(GEOPDOrientedPosition *)arg1 ;
-(BOOL)hasRevision;
-(unsigned long long)hash;
-(void)addCameraMetadata:(id)arg1 ;
-(BOOL)hasRigMetrics;
-(BOOL)hasTilePosition;
-(unsigned long long)cameraMetadataIndexsCount;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned*)cameraMetadataIndexs;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOTileCoordinate *)parentTile;
-(GEOPDOrientedTilePosition *)tilePosition;
-(BOOL)hasPositionGeo;
-(void)clearCameraMetadatas;
-(unsigned)cameraMetadataIndexAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)imageryTimestamp;
-(void)addCameraMetadataIndex:(unsigned)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasBuildTableIndex:(BOOL)arg1 ;
-(void)dealloc;
-(BOOL)hasImageryTimestamp;
-(int)revision;
@end

