/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOPDGroundDataBuild, NSMutableArray, GEOTileCoordinate, GEOPDGeographicCoordinate, GEOPDOrientedPosition, GEOPDRigMetrics, GEOPDOrientedTilePosition;

@interface GEOPDPhotoPosition : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE19* _cameraMetadataIndexs;
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
		unsigned wrote_cameraMetadataIndexs : 1;
		unsigned wrote_build : 1;
		unsigned wrote_cameraMetadatas : 1;
		unsigned wrote_imageryTimestamp : 1;
		unsigned wrote_imdataId : 1;
		unsigned wrote_parentTile : 1;
		unsigned wrote_positionGeo : 1;
		unsigned wrote_position : 1;
		unsigned wrote_rigMetrics : 1;
		unsigned wrote_tilePosition : 1;
		unsigned wrote_buildTableIndex : 1;
		unsigned wrote_revision : 1;
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
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOPDOrientedPosition *)position;
-(void)writeTo:(id)arg1 ;
-(void)setRevision:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)revision;
-(void)setPosition:(GEOPDOrientedPosition *)arg1 ;
-(GEOPDGroundDataBuild *)build;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasPosition;
-(BOOL)hasImdataId;
-(unsigned long long)imdataId;
-(BOOL)hasTilePosition;
-(BOOL)hasParentTile;
-(BOOL)hasBuild;
-(BOOL)hasImageryTimestamp;
-(GEOPDOrientedTilePosition *)tilePosition;
-(GEOTileCoordinate *)parentTile;
-(unsigned long long)imageryTimestamp;
-(unsigned long long)cameraMetadatasCount;
-(NSMutableArray *)cameraMetadatas;
-(void)_readPosition;
-(void)setImdataId:(unsigned long long)arg1 ;
-(void)setHasImdataId:(BOOL)arg1 ;
-(void)_readCameraMetadatas;
-(void)_addNoFlagsCameraMetadata:(id)arg1 ;
-(void)_readPositionGeo;
-(void)_readBuild;
-(void)_readCameraMetadataIndexs;
-(void)_addNoFlagsCameraMetadataIndex:(unsigned)arg1 ;
-(void)_readTilePosition;
-(void)_readParentTile;
-(void)_readRigMetrics;
-(GEOPDGeographicCoordinate *)positionGeo;
-(GEOPDRigMetrics *)rigMetrics;
-(void)clearCameraMetadatas;
-(id)cameraMetadataAtIndex:(unsigned long long)arg1 ;
-(void)addCameraMetadata:(id)arg1 ;
-(void)setPositionGeo:(GEOPDGeographicCoordinate *)arg1 ;
-(void)setBuild:(GEOPDGroundDataBuild *)arg1 ;
-(unsigned long long)cameraMetadataIndexsCount;
-(void)clearCameraMetadataIndexs;
-(unsigned)cameraMetadataIndexAtIndex:(unsigned long long)arg1 ;
-(void)addCameraMetadataIndex:(unsigned)arg1 ;
-(void)setTilePosition:(GEOPDOrientedTilePosition *)arg1 ;
-(void)setParentTile:(GEOTileCoordinate *)arg1 ;
-(void)setRigMetrics:(GEOPDRigMetrics *)arg1 ;
-(void)setCameraMetadatas:(NSMutableArray *)arg1 ;
-(void)setHasRevision:(BOOL)arg1 ;
-(BOOL)hasRevision;
-(void)setImageryTimestamp:(unsigned long long)arg1 ;
-(void)setHasImageryTimestamp:(BOOL)arg1 ;
-(BOOL)hasPositionGeo;
-(unsigned)buildTableIndex;
-(void)setBuildTableIndex:(unsigned)arg1 ;
-(void)setHasBuildTableIndex:(BOOL)arg1 ;
-(BOOL)hasBuildTableIndex;
-(unsigned*)cameraMetadataIndexs;
-(void)setCameraMetadataIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasRigMetrics;
@end

