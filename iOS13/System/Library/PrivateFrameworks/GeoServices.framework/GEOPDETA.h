/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEORouteTrafficDetail;

@interface GEOPDETA : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEORouteTrafficDetail* _routeTrafficDetail;
	unsigned _distance;
	unsigned _historicTravelTime;
	unsigned _time;
	int _transportType;
	struct {
		unsigned has_distance : 1;
		unsigned has_historicTravelTime : 1;
		unsigned has_time : 1;
		unsigned has_transportType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTime; 
@property (assign,nonatomic) unsigned time; 
@property (assign,nonatomic) BOOL hasDistance; 
@property (assign,nonatomic) unsigned distance; 
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType; 
@property (assign,nonatomic) BOOL hasHistoricTravelTime; 
@property (assign,nonatomic) unsigned historicTravelTime; 
@property (nonatomic,readonly) BOOL hasRouteTrafficDetail; 
@property (nonatomic,retain) GEORouteTrafficDetail * routeTrafficDetail; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)time;
-(void)writeTo:(id)arg1 ;
-(void)setTime:(unsigned)arg1 ;
-(int)transportType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setDistance:(unsigned)arg1 ;
-(unsigned)distance;
-(void)setTransportType:(int)arg1 ;
-(void)setHasTime:(BOOL)arg1 ;
-(BOOL)hasTime;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasTransportType;
-(void)setHasTransportType:(BOOL)arg1 ;
-(id)transportTypeAsString:(int)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(void)setHasDistance:(BOOL)arg1 ;
-(BOOL)hasDistance;
-(unsigned)historicTravelTime;
-(void)setHistoricTravelTime:(unsigned)arg1 ;
-(void)setHasHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)hasHistoricTravelTime;
-(GEORouteTrafficDetail *)routeTrafficDetail;
-(void)setRouteTrafficDetail:(GEORouteTrafficDetail *)arg1 ;
-(BOOL)hasRouteTrafficDetail;
@end

