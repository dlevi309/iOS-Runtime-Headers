/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray, GEOMapRegion;

@interface GEOMapRegionE7 : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _vertexE7s;
	int _eastLngE7;
	int _northLatE7;
	int _southLatE7;
	int _westLngE7;
	struct {
		unsigned has_eastLngE7 : 1;
		unsigned has_northLatE7 : 1;
		unsigned has_southLatE7 : 1;
		unsigned has_westLngE7 : 1;
	}  _flags;

}

@property (nonatomic,readonly) int centerLatE7; 
@property (nonatomic,readonly) int centerLngE7; 
@property (nonatomic,readonly) int spanLatE7; 
@property (nonatomic,readonly) int spanLngE7; 
@property (nonatomic,readonly) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) BOOL hasRectangleVertices; 
@property (assign,nonatomic) BOOL hasSouthLatE7; 
@property (assign,nonatomic) int southLatE7; 
@property (assign,nonatomic) BOOL hasWestLngE7; 
@property (assign,nonatomic) int westLngE7; 
@property (assign,nonatomic) BOOL hasNorthLatE7; 
@property (assign,nonatomic) int northLatE7; 
@property (assign,nonatomic) BOOL hasEastLngE7; 
@property (assign,nonatomic) int eastLngE7; 
@property (nonatomic,retain) NSMutableArray * vertexE7s; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)vertexE7Type;
+(id)_geo_mapRegionForGEOCoordinateRegion:(SCD_Struct_GE36)arg1 ;
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithMapRegion:(id)arg1 ;
-(void)clearVertexE7s;
-(void)setVertexE7s:(NSMutableArray *)arg1 ;
-(GEOMapRegion *)mapRegion;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasRectangleVertices;
-(id)initWithRadialPlace:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(int)westLngE7;
-(BOOL)isValid;
-(int)centerLatE7;
-(int)eastLngE7;
-(int)southLatE7;
-(int)northLatE7;
-(int)centerLngE7;
-(void)setSouthLatE7:(int)arg1 ;
-(void)setWestLngE7:(int)arg1 ;
-(void)setNorthLatE7:(int)arg1 ;
-(void)setEastLngE7:(int)arg1 ;
-(void)addVertexE7:(id)arg1 ;
-(unsigned long long)vertexE7sCount;
-(BOOL)hasNorthLatE7;
-(BOOL)hasSouthLatE7;
-(BOOL)hasEastLngE7;
-(BOOL)hasWestLngE7;
-(id)coordinatesE7;
-(id)vertexE7AtIndex:(unsigned long long)arg1 ;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(id)initWithCoordinateRegion:(SCD_Struct_GE36)arg1 ;
-(void)setHasSouthLatE7:(BOOL)arg1 ;
-(void)setHasWestLngE7:(BOOL)arg1 ;
-(void)setHasNorthLatE7:(BOOL)arg1 ;
-(void)setHasEastLngE7:(BOOL)arg1 ;
-(NSMutableArray *)vertexE7s;
-(int)spanLatE7;
-(int)spanLngE7;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setMapRect:(SCD_Struct_GE36)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithMapRect:(SCD_Struct_GE36)arg1 ;
@end

