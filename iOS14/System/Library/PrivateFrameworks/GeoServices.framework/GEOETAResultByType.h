/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEORouteTrafficDetail, GEOShortTrafficSummary, NSMutableArray;

@interface GEOETAResultByType : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	double _expectedTimeOfDeparture;
	GEORouteTrafficDetail* _routeTrafficDetail;
	GEOShortTrafficSummary* _shortTrafficSummary;
	NSMutableArray* _summaryForPredictedDestinations;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _distance;
	unsigned _historicTravelTime;
	int _licensePlateRestrictionImpact;
	unsigned _staticTravelTime;
	int _status;
	int _transportType;
	unsigned _travelTimeBestEstimate;
	unsigned _travelTimeAggressiveEstimate;
	unsigned _travelTimeConservativeEstimate;
	struct {
		unsigned has_expectedTimeOfDeparture : 1;
		unsigned has_distance : 1;
		unsigned has_historicTravelTime : 1;
		unsigned has_licensePlateRestrictionImpact : 1;
		unsigned has_staticTravelTime : 1;
		unsigned has_status : 1;
		unsigned has_transportType : 1;
		unsigned has_travelTimeBestEstimate : 1;
		unsigned has_travelTimeAggressiveEstimate : 1;
		unsigned has_travelTimeConservativeEstimate : 1;
		unsigned read_unknownFields : 1;
		unsigned read_routeTrafficDetail : 1;
		unsigned read_shortTrafficSummary : 1;
		unsigned read_summaryForPredictedDestinations : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType; 
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) BOOL hasTravelTimeBestEstimate; 
@property (assign,nonatomic) unsigned travelTimeBestEstimate; 
@property (assign,nonatomic) BOOL hasHistoricTravelTime; 
@property (assign,nonatomic) unsigned historicTravelTime; 
@property (assign,nonatomic) BOOL hasDistance; 
@property (assign,nonatomic) unsigned distance; 
@property (assign,nonatomic) BOOL hasExpectedTimeOfDeparture; 
@property (assign,nonatomic) double expectedTimeOfDeparture; 
@property (assign,nonatomic) BOOL hasTravelTimeConservativeEstimate; 
@property (assign,nonatomic) unsigned travelTimeConservativeEstimate; 
@property (assign,nonatomic) BOOL hasTravelTimeAggressiveEstimate; 
@property (assign,nonatomic) unsigned travelTimeAggressiveEstimate; 
@property (assign,nonatomic) BOOL hasStaticTravelTime; 
@property (assign,nonatomic) unsigned staticTravelTime; 
@property (nonatomic,retain) NSMutableArray * summaryForPredictedDestinations; 
@property (nonatomic,readonly) BOOL hasRouteTrafficDetail; 
@property (nonatomic,retain) GEORouteTrafficDetail * routeTrafficDetail; 
@property (nonatomic,readonly) BOOL hasShortTrafficSummary; 
@property (nonatomic,retain) GEOShortTrafficSummary * shortTrafficSummary; 
@property (assign,nonatomic) BOOL hasLicensePlateRestrictionImpact; 
@property (assign,nonatomic) int licensePlateRestrictionImpact; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)summaryForPredictedDestinationType;
-(id)dictionaryRepresentation;
-(BOOL)hasTransportType;
-(PBUnknownFields *)unknownFields;
-(void)setDistance:(unsigned)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(unsigned)distance;
-(void)setHasTransportType:(BOOL)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(unsigned)staticTravelTime;
-(unsigned)historicTravelTime;
-(void)setTransportType:(int)arg1 ;
-(GEORouteTrafficDetail *)routeTrafficDetail;
-(void)setRouteTrafficDetail:(GEORouteTrafficDetail *)arg1 ;
-(BOOL)hasRouteTrafficDetail;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDistance;
-(id)initWithData:(id)arg1 ;
-(int)transportType;
-(id)statusAsString:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHasDistance:(BOOL)arg1 ;
-(void)setLicensePlateRestrictionImpact:(int)arg1 ;
-(int)licensePlateRestrictionImpact;
-(void)setHasLicensePlateRestrictionImpact:(BOOL)arg1 ;
-(BOOL)hasLicensePlateRestrictionImpact;
-(id)licensePlateRestrictionImpactAsString:(int)arg1 ;
-(BOOL)hasStatus;
-(int)StringAsLicensePlateRestrictionImpact:(id)arg1 ;
-(id)transportTypeAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(void)setStaticTravelTime:(unsigned)arg1 ;
-(unsigned)travelTimeBestEstimate;
-(NSMutableArray *)summaryForPredictedDestinations;
-(id)description;
-(void)setHasStaticTravelTime:(BOOL)arg1 ;
-(BOOL)hasStaticTravelTime;
-(void)setHistoricTravelTime:(unsigned)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasHistoricTravelTime;
-(BOOL)readFrom:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOShortTrafficSummary *)shortTrafficSummary;
-(void)setTravelTimeBestEstimate:(unsigned)arg1 ;
-(void)setExpectedTimeOfDeparture:(double)arg1 ;
-(void)addSummaryForPredictedDestination:(id)arg1 ;
-(void)setShortTrafficSummary:(GEOShortTrafficSummary *)arg1 ;
-(void)setHasTravelTimeBestEstimate:(BOOL)arg1 ;
-(unsigned long long)summaryForPredictedDestinationsCount;
-(void)clearSummaryForPredictedDestinations;
-(id)summaryForPredictedDestinationAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasTravelTimeBestEstimate;
-(double)expectedTimeOfDeparture;
-(void)setHasExpectedTimeOfDeparture:(BOOL)arg1 ;
-(BOOL)hasExpectedTimeOfDeparture;
-(void)setSummaryForPredictedDestinations:(NSMutableArray *)arg1 ;
-(BOOL)hasShortTrafficSummary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasHistoricTravelTime:(BOOL)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)status;
-(void)setTravelTimeAggressiveEstimate:(unsigned)arg1 ;
-(void)setTravelTimeConservativeEstimate:(unsigned)arg1 ;
-(unsigned)travelTimeAggressiveEstimate;
-(void)setHasTravelTimeAggressiveEstimate:(BOOL)arg1 ;
-(BOOL)hasTravelTimeAggressiveEstimate;
-(unsigned)travelTimeConservativeEstimate;
-(void)setHasTravelTimeConservativeEstimate:(BOOL)arg1 ;
-(BOOL)hasTravelTimeConservativeEstimate;
@end

