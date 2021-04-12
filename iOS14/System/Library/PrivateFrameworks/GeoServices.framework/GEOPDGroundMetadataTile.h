/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
		unsigned wrote_anyField : 1;
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
+(Class)photoPositionType;
+(Class)storefrontType;
+(Class)buildTableType;
+(Class)cameraMetadataTableType;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(GEOTileCoordinate *)coord;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(BOOL)hasCoord;
-(void)addPhotoPosition:(id)arg1 ;
-(void)addStorefront:(id)arg1 ;
-(void)addBuildTable:(id)arg1 ;
-(NSMutableArray *)storefronts;
-(void)addCameraMetadataTable:(id)arg1 ;
-(void)setTileBuildId:(unsigned)arg1 ;
-(unsigned long long)photoPositionsCount;
-(void)clearPhotoPositions;
-(id)photoPositionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)storefrontsCount;
-(void)clearStorefronts;
-(id)storefrontAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)buildTables;
-(unsigned long long)buildTablesCount;
-(void)clearBuildTables;
-(id)buildTableAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)cameraMetadataTablesCount;
-(void)clearCameraMetadataTables;
-(id)cameraMetadataTableAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)photoPositions;
-(void)setPhotoPositions:(NSMutableArray *)arg1 ;
-(void)setStorefronts:(NSMutableArray *)arg1 ;
-(void)setBuildTables:(NSMutableArray *)arg1 ;
-(NSMutableArray *)cameraMetadataTables;
-(void)setCameraMetadataTables:(NSMutableArray *)arg1 ;
-(unsigned)tileBuildId;
-(BOOL)hasTileBuildId;
-(void)setHasTileBuildId:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(void)setCoord:(GEOTileCoordinate *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

