/*
* Generated on Thursday, January 14, 2021 at 2:20:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_GEOEnrouteNoticesProvider.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOWaypointRouteFeatures, GEOOutOfMapsAlertsInfo, GEOTrafficBannerText, GEORestrictionZoneInfo, GEORoutePlanningInfo, GEOTraversalTimes, NSString;

@interface GEOWaypointRoute : PBCodable <_GEOEnrouteNoticesProvider, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSMutableArray* _arrivalParameters;
	GEOWaypointRouteFeatures* _feature;
	NSMutableArray* _incidentsOnRouteLegs;
	NSMutableArray* _names;
	GEOOutOfMapsAlertsInfo* _outOfMapsAlertsInfo;
	GEOTrafficBannerText* _rerouteBannerText;
	GEORestrictionZoneInfo* _restrictionZoneInfo;
	NSMutableArray* _routeLegs;
	GEORoutePlanningInfo* _routePlanningInfo;
	NSMutableArray* _trafficCameras;
	NSMutableArray* _trafficSignals;
	GEOTraversalTimes* _traversalTimes;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _distanceMeters;
	int _drivingSide;
	unsigned _identifier;
	int _transportType;
	int _type;
	struct {
		unsigned has_distanceMeters : 1;
		unsigned has_drivingSide : 1;
		unsigned has_identifier : 1;
		unsigned has_transportType : 1;
		unsigned has_type : 1;
		unsigned read_unknownFields : 1;
		unsigned read_arrivalParameters : 1;
		unsigned read_feature : 1;
		unsigned read_incidentsOnRouteLegs : 1;
		unsigned read_names : 1;
		unsigned read_outOfMapsAlertsInfo : 1;
		unsigned read_rerouteBannerText : 1;
		unsigned read_restrictionZoneInfo : 1;
		unsigned read_routeLegs : 1;
		unsigned read_routePlanningInfo : 1;
		unsigned read_trafficCameras : 1;
		unsigned read_trafficSignals : 1;
		unsigned read_traversalTimes : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasIdentifier; 
@property (assign,nonatomic) unsigned identifier; 
@property (nonatomic,retain) NSMutableArray * routeLegs; 
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType; 
@property (assign,nonatomic) BOOL hasDrivingSide; 
@property (assign,nonatomic) int drivingSide; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,retain) NSMutableArray * names; 
@property (assign,nonatomic) BOOL hasDistanceMeters; 
@property (assign,nonatomic) unsigned distanceMeters; 
@property (nonatomic,readonly) BOOL hasTraversalTimes; 
@property (nonatomic,retain) GEOTraversalTimes * traversalTimes; 
@property (nonatomic,readonly) BOOL hasFeature; 
@property (nonatomic,retain) GEOWaypointRouteFeatures * feature; 
@property (nonatomic,readonly) BOOL hasRoutePlanningInfo; 
@property (nonatomic,retain) GEORoutePlanningInfo * routePlanningInfo; 
@property (nonatomic,retain) NSMutableArray * arrivalParameters; 
@property (nonatomic,retain) NSMutableArray * trafficSignals; 
@property (nonatomic,retain) NSMutableArray * trafficCameras; 
@property (nonatomic,retain) NSMutableArray * incidentsOnRouteLegs; 
@property (nonatomic,readonly) BOOL hasRestrictionZoneInfo; 
@property (nonatomic,retain) GEORestrictionZoneInfo * restrictionZoneInfo; 
@property (nonatomic,readonly) BOOL hasOutOfMapsAlertsInfo; 
@property (nonatomic,retain) GEOOutOfMapsAlertsInfo * outOfMapsAlertsInfo; 
@property (nonatomic,readonly) BOOL hasRerouteBannerText; 
@property (nonatomic,retain) GEOTrafficBannerText * rerouteBannerText; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)nameType;
+(Class)routeLegType;
+(Class)trafficCameraType;
+(BOOL)isValid:(id)arg1 ;
+(Class)incidentsOnRouteLegsType;
+(Class)trafficSignalType;
+(Class)arrivalParametersType;
-(id)dictionaryRepresentation;
-(BOOL)hasTransportType;
-(PBUnknownFields *)unknownFields;
-(GEOWaypointRouteFeatures *)feature;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(id)init;
-(int)StringAsType:(id)arg1 ;
-(id)jsonRepresentation;
-(BOOL)hasIdentifier;
-(void)addTrafficSignal:(id)arg1 ;
-(void)setHasTransportType:(BOOL)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(unsigned long long)namesCount;
-(NSMutableArray *)arrivalParameters;
-(GEORoutePlanningInfo *)routePlanningInfo;
-(GEOTraversalTimes *)traversalTimes;
-(unsigned)distanceMeters;
-(NSMutableArray *)routeLegs;
-(void)setTransportType:(int)arg1 ;
-(BOOL)hasType;
-(id)_geoTrafficSignals;
-(BOOL)hasRestrictionZoneInfo;
-(void)mergeFrom:(id)arg1 ;
-(GEOTrafficBannerText *)rerouteBannerText;
-(void)setType:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(int)transportType;
-(void)addRouteLeg:(id)arg1 ;
-(unsigned long long)routeLegsCount;
-(void)clearRouteLegs;
-(id)routeLegAtIndex:(unsigned long long)arg1 ;
-(void)setRouteLegs:(NSMutableArray *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(GEORestrictionZoneInfo *)restrictionZoneInfo;
-(void)clearTrafficSignals;
-(id)transportTypeAsString:(int)arg1 ;
-(void)setHasIdentifier:(BOOL)arg1 ;
-(void)addName:(id)arg1 ;
-(NSString *)description;
-(NSMutableArray *)names;
-(id)trafficCameraAtIndex:(unsigned long long)arg1 ;
-(void)setTrafficSignals:(NSMutableArray *)arg1 ;
-(void)setArrivalParameters:(NSMutableArray *)arg1 ;
-(int)type;
-(unsigned long long)trafficCamerasCount;
-(void)addTrafficCamera:(id)arg1 ;
-(GEOOutOfMapsAlertsInfo *)outOfMapsAlertsInfo;
-(void)setTraversalTimes:(GEOTraversalTimes *)arg1 ;
-(unsigned long long)hash;
-(void)setRoutePlanningInfo:(GEORoutePlanningInfo *)arg1 ;
-(void)addIncidentsOnRouteLegs:(id)arg1 ;
-(void)setRestrictionZoneInfo:(GEORestrictionZoneInfo *)arg1 ;
-(void)setOutOfMapsAlertsInfo:(GEOOutOfMapsAlertsInfo *)arg1 ;
-(void)setRerouteBannerText:(GEOTrafficBannerText *)arg1 ;
-(unsigned long long)incidentsOnRouteLegsCount;
-(BOOL)hasTraversalTimes;
-(void)clearIncidentsOnRouteLegs;
-(id)incidentsOnRouteLegsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasRoutePlanningInfo;
-(NSMutableArray *)incidentsOnRouteLegs;
-(void)setIncidentsOnRouteLegs:(NSMutableArray *)arg1 ;
-(BOOL)hasOutOfMapsAlertsInfo;
-(BOOL)hasRerouteBannerText;
-(void)clearTrafficCameras;
-(BOOL)hasDrivingSide;
-(int)drivingSide;
-(id)arrivalParametersAtIndex:(unsigned long long)arg1 ;
-(void)setDrivingSide:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setHasDrivingSide:(BOOL)arg1 ;
-(id)drivingSideAsString:(int)arg1 ;
-(int)StringAsDrivingSide:(id)arg1 ;
-(void)setNames:(NSMutableArray *)arg1 ;
-(id)trafficSignalAtIndex:(unsigned long long)arg1 ;
-(void)setIdentifier:(unsigned)arg1 ;
-(void)clearNames;
-(unsigned)identifier;
-(void)setDistanceMeters:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasDistanceMeters;
-(void)setHasDistanceMeters:(BOOL)arg1 ;
-(void)clearArrivalParameters;
-(NSMutableArray *)trafficSignals;
-(void)addArrivalParameters:(id)arg1 ;
-(unsigned long long)arrivalParametersCount;
-(id)nameAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)trafficCameras;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)trafficSignalsCount;
-(id)_geoTrafficCameras;
-(void)setTrafficCameras:(NSMutableArray *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setFeature:(GEOWaypointRouteFeatures *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasFeature;
@end

