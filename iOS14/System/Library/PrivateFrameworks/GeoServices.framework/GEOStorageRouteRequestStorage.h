/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOURLRouteHandle, NSMutableArray;

@interface GEOStorageRouteRequestStorage : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOURLRouteHandle* _routeHandle;
	NSMutableArray* _waypoints;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _transportType;
	struct {
		unsigned has_transportType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_routeHandle : 1;
		unsigned read_waypoints : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * waypoints; 
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType; 
@property (nonatomic,readonly) BOOL hasRouteHandle; 
@property (nonatomic,retain) GEOURLRouteHandle * routeHandle; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)waypointsType;
-(id)dictionaryRepresentation;
-(BOOL)hasTransportType;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)setHasTransportType:(BOOL)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(NSMutableArray *)waypoints;
-(void)setTransportType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(int)transportType;
-(id)initWithDictionary:(id)arg1 ;
-(id)transportTypeAsString:(int)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)addWaypoints:(id)arg1 ;
-(unsigned long long)waypointsCount;
-(void)clearWaypoints;
-(id)waypointsAtIndex:(unsigned long long)arg1 ;
-(void)setWaypoints:(NSMutableArray *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setRouteHandle:(GEOURLRouteHandle *)arg1 ;
-(BOOL)hasRouteHandle;
-(GEOURLRouteHandle *)routeHandle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

