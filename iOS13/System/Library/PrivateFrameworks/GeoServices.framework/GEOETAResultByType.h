/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_expectedTimeOfDeparture : 1;
		unsigned wrote_routeTrafficDetail : 1;
		unsigned wrote_shortTrafficSummary : 1;
		unsigned wrote_summaryForPredictedDestinations : 1;
		unsigned wrote_distance : 1;
		unsigned wrote_historicTravelTime : 1;
		unsigned wrote_staticTravelTime : 1;
		unsigned wrote_status : 1;
		unsigned wrote_transportType : 1;
		unsigned wrote_travelTimeBestEstimate : 1;
		unsigned wrote_travelTimeAggressiveEstimate : 1;
		unsigned wrote_travelTimeConservativeEstimate : 1;
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
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)summaryForPredictedDestinationType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(void)writeTo:(id)arg1 ;
-(int)transportType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(void)setDistance:(unsigned)arg1 ;
-(unsigned)distance;
-(void)setTransportType:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
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
-(unsigned)travelTimeAggressiveEstimate;
-(void)setTravelTimeAggressiveEstimate:(unsigned)arg1 ;
-(void)setHasTravelTimeAggressiveEstimate:(BOOL)arg1 ;
-(BOOL)hasTravelTimeAggressiveEstimate;
-(unsigned)travelTimeConservativeEstimate;
-(void)setTravelTimeConservativeEstimate:(unsigned)arg1 ;
-(void)setHasTravelTimeConservativeEstimate:(BOOL)arg1 ;
-(BOOL)hasTravelTimeConservativeEstimate;
-(unsigned)staticTravelTime;
-(void)setStaticTravelTime:(unsigned)arg1 ;
-(void)setHasStaticTravelTime:(BOOL)arg1 ;
-(BOOL)hasStaticTravelTime;
-(void)_readSummaryForPredictedDestinations;
-(void)_addNoFlagsSummaryForPredictedDestination:(id)arg1 ;
-(void)_readRouteTrafficDetail;
-(void)_readShortTrafficSummary;
-(GEORouteTrafficDetail *)routeTrafficDetail;
-(GEOShortTrafficSummary *)shortTrafficSummary;
-(unsigned long long)summaryForPredictedDestinationsCount;
-(void)clearSummaryForPredictedDestinations;
-(id)summaryForPredictedDestinationAtIndex:(unsigned long long)arg1 ;
-(void)addSummaryForPredictedDestination:(id)arg1 ;
-(void)setRouteTrafficDetail:(GEORouteTrafficDetail *)arg1 ;
-(void)setShortTrafficSummary:(GEOShortTrafficSummary *)arg1 ;
-(NSMutableArray *)summaryForPredictedDestinations;
-(unsigned)travelTimeBestEstimate;
-(void)setTravelTimeBestEstimate:(unsigned)arg1 ;
-(void)setHasTravelTimeBestEstimate:(BOOL)arg1 ;
-(BOOL)hasTravelTimeBestEstimate;
-(double)expectedTimeOfDeparture;
-(void)setExpectedTimeOfDeparture:(double)arg1 ;
-(void)setHasExpectedTimeOfDeparture:(BOOL)arg1 ;
-(BOOL)hasExpectedTimeOfDeparture;
-(void)setSummaryForPredictedDestinations:(NSMutableArray *)arg1 ;
-(BOOL)hasRouteTrafficDetail;
-(BOOL)hasShortTrafficSummary;
@end

