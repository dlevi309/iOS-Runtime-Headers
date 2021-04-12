/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOMapRegion;

@interface GEOPDOfflineArea : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _displayMapRegions;
	GEOMapRegion* _mapRegion;
	GEOMapRegion* _maximumAllowedMapRegion;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_displayMapRegions : 1;
		unsigned read_mapRegion : 1;
		unsigned read_maximumAllowedMapRegion : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_displayMapRegions : 1;
		unsigned wrote_mapRegion : 1;
		unsigned wrote_maximumAllowedMapRegion : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) BOOL hasMaximumAllowedMapRegion; 
@property (nonatomic,retain) GEOMapRegion * maximumAllowedMapRegion; 
@property (nonatomic,retain) NSMutableArray * displayMapRegions; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)displayMapRegionType;
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
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readMapRegion;
-(GEOMapRegion *)mapRegion;
-(BOOL)hasMapRegion;
-(void)_readMaximumAllowedMapRegion;
-(void)_readDisplayMapRegions;
-(void)_addNoFlagsDisplayMapRegion:(id)arg1 ;
-(GEOMapRegion *)maximumAllowedMapRegion;
-(void)setMaximumAllowedMapRegion:(GEOMapRegion *)arg1 ;
-(unsigned long long)displayMapRegionsCount;
-(void)clearDisplayMapRegions;
-(id)displayMapRegionAtIndex:(unsigned long long)arg1 ;
-(void)addDisplayMapRegion:(id)arg1 ;
-(NSMutableArray *)displayMapRegions;
-(BOOL)hasMaximumAllowedMapRegion;
-(void)setDisplayMapRegions:(NSMutableArray *)arg1 ;
@end

