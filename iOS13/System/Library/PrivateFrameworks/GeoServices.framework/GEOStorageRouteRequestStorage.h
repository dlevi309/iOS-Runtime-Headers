/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_routeHandle : 1;
		unsigned wrote_waypoints : 1;
		unsigned wrote_transportType : 1;
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(int)transportType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTransportType:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readRouteHandle;
-(GEOURLRouteHandle *)routeHandle;
-(void)setRouteHandle:(GEOURLRouteHandle *)arg1 ;
-(BOOL)hasRouteHandle;
-(BOOL)hasTransportType;
-(void)setHasTransportType:(BOOL)arg1 ;
-(id)transportTypeAsString:(int)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(NSMutableArray *)waypoints;
-(void)_readWaypoints;
-(void)_addNoFlagsWaypoints:(id)arg1 ;
-(unsigned long long)waypointsCount;
-(void)clearWaypoints;
-(id)waypointsAtIndex:(unsigned long long)arg1 ;
-(void)addWaypoints:(id)arg1 ;
-(void)setWaypoints:(NSMutableArray *)arg1 ;
@end

