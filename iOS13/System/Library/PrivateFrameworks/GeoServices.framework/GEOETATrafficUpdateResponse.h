/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSMutableArray, GEOClientMetrics, GEOPDDatasetABStatus, NSString, GEOETAServiceResponseSummary, NSData;

@interface GEOETATrafficUpdateResponse : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
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
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _status;
	struct {
		unsigned has_debugServerLatencyMs : 1;
		unsigned has_status : 1;
		unsigned read_unknownFields : 1;
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
		unsigned wrote_unknownFields : 1;
		unsigned wrote_arrivalParameters : 1;
		unsigned wrote_cameras : 1;
		unsigned wrote_clientMetrics : 1;
		unsigned wrote_datasetAbStatus : 1;
		unsigned wrote_debugData : 1;
		unsigned wrote_debugServerLatencyMs : 1;
		unsigned wrote_etaServiceSummary : 1;
		unsigned wrote_responseId : 1;
		unsigned wrote_routes : 1;
		unsigned wrote_sessionState : 1;
		unsigned wrote_trafficSignals : 1;
		unsigned wrote_status : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasEtaServiceSummary; 
@property (nonatomic,retain) GEOETAServiceResponseSummary * etaServiceSummary; 
@property (assign,nonatomic) BOOL hasDebugServerLatencyMs; 
@property (assign,nonatomic) unsigned long long debugServerLatencyMs; 
@property (nonatomic,readonly) BOOL hasClientMetrics; 
@property (nonatomic,retain) GEOClientMetrics * clientMetrics; 
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status; 
@property (nonatomic,retain) NSMutableArray * routes; 
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
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)cameraType;
+(BOOL)isValid:(id)arg1 ;
+(Class)routeType;
+(Class)arrivalParametersType;
+(Class)trafficSignalType;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(NSData *)sessionState;
-(void)setSessionState:(NSData *)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)_readSessionState;
-(BOOL)hasSessionState;
-(void)_readRoutes;
-(void)_addNoFlagsRoute:(id)arg1 ;
-(void)_readDatasetAbStatus;
-(void)_readDebugData;
-(void)_readArrivalParameters;
-(void)_addNoFlagsArrivalParameters:(id)arg1 ;
-(void)_readTrafficSignals;
-(void)_addNoFlagsTrafficSignal:(id)arg1 ;
-(GEOPDDatasetABStatus *)datasetAbStatus;
-(NSString *)debugData;
-(GEOETAServiceResponseSummary *)etaServiceSummary;
-(GEOClientMetrics *)clientMetrics;
-(unsigned long long)routesCount;
-(void)clearRoutes;
-(id)routeAtIndex:(unsigned long long)arg1 ;
-(void)addRoute:(id)arg1 ;
-(void)setDatasetAbStatus:(GEOPDDatasetABStatus *)arg1 ;
-(void)setDebugData:(NSString *)arg1 ;
-(unsigned long long)arrivalParametersCount;
-(void)clearArrivalParameters;
-(id)arrivalParametersAtIndex:(unsigned long long)arg1 ;
-(void)addArrivalParameters:(id)arg1 ;
-(unsigned long long)trafficSignalsCount;
-(void)clearTrafficSignals;
-(id)trafficSignalAtIndex:(unsigned long long)arg1 ;
-(void)addTrafficSignal:(id)arg1 ;
-(void)setEtaServiceSummary:(GEOETAServiceResponseSummary *)arg1 ;
-(void)setClientMetrics:(GEOClientMetrics *)arg1 ;
-(NSMutableArray *)routes;
-(NSMutableArray *)arrivalParameters;
-(NSMutableArray *)trafficSignals;
-(void)_readEtaServiceSummary;
-(void)_readClientMetrics;
-(void)setRoutes:(NSMutableArray *)arg1 ;
-(BOOL)hasDatasetAbStatus;
-(BOOL)hasDebugData;
-(void)setArrivalParameters:(NSMutableArray *)arg1 ;
-(void)setTrafficSignals:(NSMutableArray *)arg1 ;
-(BOOL)hasEtaServiceSummary;
-(BOOL)hasClientMetrics;
-(NSMutableArray *)cameras;
-(unsigned long long)debugServerLatencyMs;
-(void)setDebugServerLatencyMs:(unsigned long long)arg1 ;
-(void)setHasDebugServerLatencyMs:(BOOL)arg1 ;
-(BOOL)hasDebugServerLatencyMs;
-(void)_readResponseId;
-(NSData *)responseId;
-(void)setResponseId:(NSData *)arg1 ;
-(BOOL)hasResponseId;
-(void)_readCameras;
-(void)_addNoFlagsCamera:(id)arg1 ;
-(unsigned long long)camerasCount;
-(void)clearCameras;
-(id)cameraAtIndex:(unsigned long long)arg1 ;
-(void)addCamera:(id)arg1 ;
-(void)setCameras:(NSMutableArray *)arg1 ;
@end

