/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, GEOTileCoordinate;

@interface GEOPDGroundMetadataTile : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _buildTables;
	NSMutableArray* _cameraMetadataTables;
	GEOTileCoordinate* _coord;
	NSMutableArray* _photoPositions;
	NSMutableArray* _storefronts;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _tileBuildId;
	struct {
		unsigned has_tileBuildId : 1;
		unsigned read_buildTables : 1;
		unsigned read_cameraMetadataTables : 1;
		unsigned read_coord : 1;
		unsigned read_photoPositions : 1;
		unsigned read_storefronts : 1;
		unsigned wrote_buildTables : 1;
		unsigned wrote_cameraMetadataTables : 1;
		unsigned wrote_coord : 1;
		unsigned wrote_photoPositions : 1;
		unsigned wrote_storefronts : 1;
		unsigned wrote_tileBuildId : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * photoPositions; 
@property (nonatomic,retain) NSMutableArray * storefronts; 
@property (nonatomic,retain) NSMutableArray * buildTables; 
@property (nonatomic,retain) NSMutableArray * cameraMetadataTables; 
@property (nonatomic,readonly) BOOL hasCoord; 
@property (nonatomic,retain) GEOTileCoordinate * coord; 
@property (assign,nonatomic) BOOL hasTileBuildId; 
@property (assign,nonatomic) unsigned tileBuildId; 
+(BOOL)isValid:(id)arg1 ;
+(Class)photoPositionType;
+(Class)storefrontType;
+(Class)buildTableType;
+(Class)cameraMetadataTableType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(GEOTileCoordinate *)coord;
-(BOOL)hasCoord;
-(unsigned long long)buildTablesCount;
-(unsigned long long)photoPositionsCount;
-(unsigned long long)storefrontsCount;
-(id)buildTableAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)cameraMetadataTablesCount;
-(NSMutableArray *)cameraMetadataTables;
-(NSMutableArray *)photoPositions;
-(NSMutableArray *)storefronts;
-(void)_readPhotoPositions;
-(void)_addNoFlagsPhotoPosition:(id)arg1 ;
-(void)_readStorefronts;
-(void)_addNoFlagsStorefront:(id)arg1 ;
-(void)_readBuildTables;
-(void)_addNoFlagsBuildTable:(id)arg1 ;
-(void)_readCameraMetadataTables;
-(void)_addNoFlagsCameraMetadataTable:(id)arg1 ;
-(void)_readCoord;
-(void)clearPhotoPositions;
-(id)photoPositionAtIndex:(unsigned long long)arg1 ;
-(void)addPhotoPosition:(id)arg1 ;
-(void)clearStorefronts;
-(id)storefrontAtIndex:(unsigned long long)arg1 ;
-(void)addStorefront:(id)arg1 ;
-(void)clearBuildTables;
-(void)addBuildTable:(id)arg1 ;
-(void)clearCameraMetadataTables;
-(id)cameraMetadataTableAtIndex:(unsigned long long)arg1 ;
-(void)addCameraMetadataTable:(id)arg1 ;
-(void)setCoord:(GEOTileCoordinate *)arg1 ;
-(void)setPhotoPositions:(NSMutableArray *)arg1 ;
-(void)setStorefronts:(NSMutableArray *)arg1 ;
-(NSMutableArray *)buildTables;
-(void)setBuildTables:(NSMutableArray *)arg1 ;
-(void)setCameraMetadataTables:(NSMutableArray *)arg1 ;
-(unsigned)tileBuildId;
-(void)setTileBuildId:(unsigned)arg1 ;
-(void)setHasTileBuildId:(BOOL)arg1 ;
-(BOOL)hasTileBuildId;
@end

