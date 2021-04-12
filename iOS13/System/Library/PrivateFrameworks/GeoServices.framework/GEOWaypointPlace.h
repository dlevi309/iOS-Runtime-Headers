/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOLatLng, GEOMapRegion, NSMutableArray;

@interface GEOWaypointPlace : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOLatLng* _center;
	GEOMapRegion* _mapRegion;
	NSMutableArray* _roadAccessPoints;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_center : 1;
		unsigned read_mapRegion : 1;
		unsigned read_roadAccessPoints : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_center : 1;
		unsigned wrote_mapRegion : 1;
		unsigned wrote_roadAccessPoints : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center; 
@property (nonatomic,retain) NSMutableArray * roadAccessPoints; 
@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)roadAccessPointType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(GEOLatLng *)center;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readCenter;
-(void)_readRoadAccessPoints;
-(void)_addNoFlagsRoadAccessPoint:(id)arg1 ;
-(void)_readMapRegion;
-(GEOMapRegion *)mapRegion;
-(unsigned long long)roadAccessPointsCount;
-(void)clearRoadAccessPoints;
-(id)roadAccessPointAtIndex:(unsigned long long)arg1 ;
-(void)addRoadAccessPoint:(id)arg1 ;
-(NSMutableArray *)roadAccessPoints;
-(BOOL)hasCenter;
-(void)setRoadAccessPoints:(NSMutableArray *)arg1 ;
-(BOOL)hasMapRegion;
@end

