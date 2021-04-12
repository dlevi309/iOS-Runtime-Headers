/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOClientMetrics, GEOPDDatasetABStatus, NSString, NSMutableArray, GEOETAResult, GEOETAServiceResponseSummary, GEOPlaceSearchResponse;

@interface GEOETAResponse : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOProblemDetail* _problemDetails;
	unsigned long long _problemDetailsCount;
	unsigned long long _problemDetailsSpace;
	GEOClientMetrics* _clientMetrics;
	GEOPDDatasetABStatus* _datasetAbStatus;
	NSString* _debugData;
	unsigned long long _debugServerLatencyMs;
	NSMutableArray* _etaResultReferencePointDestinations;
	GEOETAResult* _etaResultReferencePointOrigin;
	NSMutableArray* _etaResults;
	GEOETAServiceResponseSummary* _etaServiceSummary;
	GEOPlaceSearchResponse* _originPlaceSearchResponse;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _status;
	struct {
		unsigned has_debugServerLatencyMs : 1;
		unsigned has_status : 1;
		unsigned read_unknownFields : 1;
		unsigned read_problemDetails : 1;
		unsigned read_clientMetrics : 1;
		unsigned read_datasetAbStatus : 1;
		unsigned read_debugData : 1;
		unsigned read_etaResultReferencePointDestinations : 1;
		unsigned read_etaResultReferencePointOrigin : 1;
		unsigned read_etaResults : 1;
		unsigned read_etaServiceSummary : 1;
		unsigned read_originPlaceSearchResponse : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_problemDetails : 1;
		unsigned wrote_clientMetrics : 1;
		unsigned wrote_datasetAbStatus : 1;
		unsigned wrote_debugData : 1;
		unsigned wrote_debugServerLatencyMs : 1;
		unsigned wrote_etaResultReferencePointDestinations : 1;
		unsigned wrote_etaResultReferencePointOrigin : 1;
		unsigned wrote_etaResults : 1;
		unsigned wrote_etaServiceSummary : 1;
		unsigned wrote_originPlaceSearchResponse : 1;
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
@property (nonatomic,retain) NSMutableArray * etaResults; 
@property (nonatomic,readonly) BOOL hasOriginPlaceSearchResponse; 
@property (nonatomic,retain) GEOPlaceSearchResponse * originPlaceSearchResponse; 
@property (nonatomic,readonly) unsigned long long problemDetailsCount; 
@property (nonatomic,readonly) GEOProblemDetail* problemDetails; 
@property (nonatomic,readonly) BOOL hasEtaResultReferencePointOrigin; 
@property (nonatomic,retain) GEOETAResult * etaResultReferencePointOrigin; 
@property (nonatomic,retain) NSMutableArray * etaResultReferencePointDestinations; 
@property (nonatomic,readonly) BOOL hasDatasetAbStatus; 
@property (nonatomic,retain) GEOPDDatasetABStatus * datasetAbStatus; 
@property (nonatomic,readonly) BOOL hasDebugData; 
@property (nonatomic,retain) NSString * debugData; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)etaResultType;
+(Class)etaResultReferencePointDestinationType;
-(id)init;
-(void)dealloc;
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
-(int)StringAsStatus:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)clearSensitiveFields;
-(GEOProblemDetail*)problemDetails;
-(unsigned long long)problemDetailsCount;
-(void)clearProblemDetails;
-(void)_readProblemDetails;
-(void)_addNoFlagsProblemDetail:(GEOProblemDetail)arg1 ;
-(void)_readDatasetAbStatus;
-(void)_readDebugData;
-(GEOPDDatasetABStatus *)datasetAbStatus;
-(NSString *)debugData;
-(GEOETAServiceResponseSummary *)etaServiceSummary;
-(GEOClientMetrics *)clientMetrics;
-(GEOProblemDetail)problemDetailAtIndex:(unsigned long long)arg1 ;
-(void)addProblemDetail:(GEOProblemDetail)arg1 ;
-(void)setDatasetAbStatus:(GEOPDDatasetABStatus *)arg1 ;
-(void)setDebugData:(NSString *)arg1 ;
-(void)setEtaServiceSummary:(GEOETAServiceResponseSummary *)arg1 ;
-(void)setClientMetrics:(GEOClientMetrics *)arg1 ;
-(void)_readEtaServiceSummary;
-(void)_readClientMetrics;
-(void)setProblemDetails:(GEOProblemDetail*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasDatasetAbStatus;
-(BOOL)hasDebugData;
-(BOOL)hasEtaServiceSummary;
-(BOOL)hasClientMetrics;
-(void)_readEtaResults;
-(void)_addNoFlagsEtaResult:(id)arg1 ;
-(void)_readOriginPlaceSearchResponse;
-(void)_readEtaResultReferencePointOrigin;
-(void)_readEtaResultReferencePointDestinations;
-(void)_addNoFlagsEtaResultReferencePointDestination:(id)arg1 ;
-(GEOPlaceSearchResponse *)originPlaceSearchResponse;
-(GEOETAResult *)etaResultReferencePointOrigin;
-(NSMutableArray *)etaResults;
-(NSMutableArray *)etaResultReferencePointDestinations;
-(BOOL)hasOriginPlaceSearchResponse;
-(void)setOriginPlaceSearchResponse:(GEOPlaceSearchResponse *)arg1 ;
-(BOOL)hasEtaResultReferencePointOrigin;
-(void)setEtaResultReferencePointOrigin:(GEOETAResult *)arg1 ;
-(unsigned long long)etaResultsCount;
-(void)clearEtaResults;
-(id)etaResultAtIndex:(unsigned long long)arg1 ;
-(void)addEtaResult:(id)arg1 ;
-(unsigned long long)etaResultReferencePointDestinationsCount;
-(void)clearEtaResultReferencePointDestinations;
-(id)etaResultReferencePointDestinationAtIndex:(unsigned long long)arg1 ;
-(void)addEtaResultReferencePointDestination:(id)arg1 ;
-(void)setEtaResults:(NSMutableArray *)arg1 ;
-(void)setEtaResultReferencePointDestinations:(NSMutableArray *)arg1 ;
-(unsigned long long)debugServerLatencyMs;
-(void)setDebugServerLatencyMs:(unsigned long long)arg1 ;
-(void)setHasDebugServerLatencyMs:(BOOL)arg1 ;
-(BOOL)hasDebugServerLatencyMs;
@end

