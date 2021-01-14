/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	int _licensePlateRestrictionImpact;
	unsigned _time;
	int _transportType;
	struct {
		unsigned has_distance : 1;
		unsigned has_historicTravelTime : 1;
		unsigned has_licensePlateRestrictionImpact : 1;
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
@property (assign,nonatomic) BOOL hasLicensePlateRestrictionImpact; 
@property (assign,nonatomic) int licensePlateRestrictionImpact; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasTransportType;
-(PBUnknownFields *)unknownFields;
-(unsigned)time;
-(void)setDistance:(unsigned)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setTime:(unsigned)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(unsigned)distance;
-(void)setHasTransportType:(BOOL)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(unsigned)historicTravelTime;
-(void)setTransportType:(int)arg1 ;
-(GEORouteTrafficDetail *)routeTrafficDetail;
-(void)setRouteTrafficDetail:(GEORouteTrafficDetail *)arg1 ;
-(BOOL)hasRouteTrafficDetail;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDistance;
-(BOOL)hasTime;
-(int)transportType;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasDistance:(BOOL)arg1 ;
-(void)setLicensePlateRestrictionImpact:(int)arg1 ;
-(int)licensePlateRestrictionImpact;
-(void)setHasLicensePlateRestrictionImpact:(BOOL)arg1 ;
-(BOOL)hasLicensePlateRestrictionImpact;
-(id)licensePlateRestrictionImpactAsString:(int)arg1 ;
-(int)StringAsLicensePlateRestrictionImpact:(id)arg1 ;
-(id)transportTypeAsString:(int)arg1 ;
-(id)description;
-(void)setHistoricTravelTime:(unsigned)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasHistoricTravelTime;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasHistoricTravelTime:(BOOL)arg1 ;
-(void)setHasTime:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

