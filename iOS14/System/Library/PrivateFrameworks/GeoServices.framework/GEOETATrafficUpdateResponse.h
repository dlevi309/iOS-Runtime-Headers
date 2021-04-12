/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_GEOEnrouteNoticesProvider.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOClientMetrics, GEOPDDatasetABStatus, NSString, GEOETAServiceResponseSummary, NSData, GEOETATrafficUpdateWaypointRoute;

@interface GEOETATrafficUpdateResponse : PBCodable <_GEOEnrouteNoticesProvider, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOProblemDetail* _problemDetails;
	unsigned long long _problemDetailsCount;
	unsigned long long _problemDetailsSpace;
	NSMutableArray* _arrivalParameters;
	NSMutableArray* _cameras;
	GEOClientMetrics* _clientMetrics;
	GEOPDDatasetABStatus* _datasetAbStatus;
	NSString* _debugData;
	unsigned long long _debugServerLatencyMs;
	GEOETAServiceResponseSummary* _etaServiceSummary;
	NSData* _responseId;
	NSMutableArray* _routes;
	NSData* _sessionState;
	NSMutableArray* _trafficSignals;
	GEOETATrafficUpdateWaypointRoute* _waypointRoute;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _status;
	struct {
		unsigned has_debugServerLatencyMs : 1;
		unsigned has_status : 1;
		unsigned read_unknownFields : 1;
		unsigned read_problemDetails : 1;
		unsigned read_arrivalParameters : 1;
		unsigned read_cameras : 1;
		unsigned read_clientMetrics : 1;
		unsigned read_datasetAbStatus : 1;
		unsigned read_debugData : 1;
		unsigned read_etaServiceSummary : 1;
		unsigned read_responseId : 1;
		unsigned read_routes : 1;
		unsigned read_sessionState : 1;
		unsigned read_trafficSignals : 1;
		unsigned read_waypointRoute : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasEtaServiceSummary; 
@property (nonatomic,retain) GEOETAServiceResponseSummary * etaServiceSummary; 
@property (assign,nonatomic) BOOL hasDebugServerLatencyMs; 
@property (assign,nonatomic) unsigned long long debugServerLatencyMs; 
@property (nonatomic,readonly) BOOL hasClientMetrics; 
@property (nonatomic,retain) GEOClientMetrics * clientMetrics; 
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status; 
@property (nonatomic,retain) NSMutableArray * routes; 
@property (nonatomic,readonly) BOOL hasWaypointRoute; 
@property (nonatomic,retain) GEOETATrafficUpdateWaypointRoute * waypointRoute; 
@property (nonatomic,readonly) BOOL hasSessionState; 
@property (nonatomic,retain) NSData * sessionState; 
@property (nonatomic,readonly) BOOL hasDatasetAbStatus; 
@property (nonatomic,retain) GEOPDDatasetABStatus * datasetAbStatus; 
@property (nonatomic,retain) NSMutableArray * cameras; 
@property (nonatomic,readonly) BOOL hasResponseId; 
@property (nonatomic,retain) NSData * responseId; 
@property (nonatomic,readonly) BOOL hasDebugData; 
@property (nonatomic,retain) NSString * debugData; 
@property (nonatomic,retain) NSMutableArray * trafficSignals; 
@property (nonatomic,retain) NSMutableArray * arrivalParameters; 
@property (nonatomic,readonly) unsigned long long problemDetailsCount; 
@property (nonatomic,readonly) GEOProblemDetail* problemDetails; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)routeType;
+(Class)cameraType;
+(BOOL)isValid:(id)arg1 ;
+(Class)trafficSignalType;
+(Class)arrivalParametersType;
-(id)dictionaryRepresentation;
-(void)setDebugData:(NSString *)arg1 ;
-(GEOPDDatasetABStatus *)datasetAbStatus;
-(NSString *)debugData;
-(unsigned long long)problemDetailsCount;
-(PBUnknownFields *)unknownFields;
-(NSMutableArray *)routes;
-(void)addProblemDetail:(GEOProblemDetail)arg1 ;
-(void)setProblemDetails:(GEOProblemDetail*)arg1 count:(unsigned long long)arg2 ;
-(void)setClientMetrics:(GEOClientMetrics *)arg1 ;
-(GEOProblemDetail)problemDetailAtIndex:(unsigned long long)arg1 ;
-(GEOClientMetrics *)clientMetrics;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setDatasetAbStatus:(GEOPDDatasetABStatus *)arg1 ;
-(BOOL)hasDatasetAbStatus;
-(void)setEtaServiceSummary:(GEOETAServiceResponseSummary *)arg1 ;
-(BOOL)hasEtaServiceSummary;
-(GEOProblemDetail*)problemDetails;
-(void)setDebugServerLatencyMs:(unsigned long long)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasClientMetrics;
-(void)clearProblemDetails;
-(NSData *)sessionState;
-(void)readAll:(BOOL)arg1 ;
-(void)setSessionState:(NSData *)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)addTrafficSignal:(id)arg1 ;
-(NSMutableArray *)arrivalParameters;
-(BOOL)hasSessionState;
-(GEOETATrafficUpdateWaypointRoute *)waypointRoute;
-(id)_geoTrafficSignals;
-(void)setRoutes:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSMutableArray *)cameras;
-(id)initWithData:(id)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)clearTrafficSignals;
-(BOOL)hasStatus;
-(int)StringAsStatus:(id)arg1 ;
-(id)routeAtIndex:(unsigned long long)arg1 ;
-(NSData *)responseId;
-(void)setResponseId:(NSData *)arg1 ;
-(BOOL)hasResponseId;
-(NSString *)description;
-(BOOL)hasDebugData;
-(BOOL)hasDebugServerLatencyMs;
-(void)setHasDebugServerLatencyMs:(BOOL)arg1 ;
-(void)setTrafficSignals:(NSMutableArray *)arg1 ;
-(void)setArrivalParameters:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)routesCount;
-(unsigned long long)debugServerLatencyMs;
-(void)clearRoutes;
-(id)arrivalParametersAtIndex:(unsigned long long)arg1 ;
-(void)setWaypointRoute:(GEOETATrafficUpdateWaypointRoute *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(id)trafficSignalAtIndex:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)clearArrivalParameters;
-(NSMutableArray *)trafficSignals;
-(void)addCamera:(id)arg1 ;
-(void)addArrivalParameters:(id)arg1 ;
-(unsigned long long)arrivalParametersCount;
-(void)addRoute:(id)arg1 ;
-(unsigned long long)camerasCount;
-(void)setCameras:(NSMutableArray *)arg1 ;
-(GEOETAServiceResponseSummary *)etaServiceSummary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)cameraAtIndex:(unsigned long long)arg1 ;
-(void)clearCameras;
-(unsigned long long)trafficSignalsCount;
-(id)_geoTrafficCameras;
-(BOOL)hasWaypointRoute;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)status;
-(void)dealloc;
@end

