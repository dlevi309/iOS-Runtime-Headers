/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
		unsigned wrote_anyField : 1;
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
+(Class)etaResultReferencePointDestinationType;
+(Class)etaResultType;
-(id)dictionaryRepresentation;
-(void)setDebugData:(NSString *)arg1 ;
-(GEOPDDatasetABStatus *)datasetAbStatus;
-(NSString *)debugData;
-(unsigned long long)problemDetailsCount;
-(PBUnknownFields *)unknownFields;
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
-(void)setEtaResultReferencePointDestinations:(NSMutableArray *)arg1 ;
-(void)clearProblemDetails;
-(NSMutableArray *)etaResults;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(unsigned long long)etaResultsCount;
-(id)jsonRepresentation;
-(void)clearSensitiveFields;
-(GEOPlaceSearchResponse *)originPlaceSearchResponse;
-(id)etaResultAtIndex:(unsigned long long)arg1 ;
-(void)setOriginPlaceSearchResponse:(GEOPlaceSearchResponse *)arg1 ;
-(BOOL)hasOriginPlaceSearchResponse;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasStatus;
-(int)StringAsStatus:(id)arg1 ;
-(void)clearEtaResults;
-(id)etaResultReferencePointDestinationAtIndex:(unsigned long long)arg1 ;
-(id)description;
-(BOOL)hasEtaResultReferencePointOrigin;
-(BOOL)hasDebugData;
-(void)addEtaResult:(id)arg1 ;
-(BOOL)hasDebugServerLatencyMs;
-(void)setHasDebugServerLatencyMs:(BOOL)arg1 ;
-(void)clearEtaResultReferencePointDestinations;
-(NSMutableArray *)etaResultReferencePointDestinations;
-(unsigned long long)hash;
-(void)addEtaResultReferencePointDestination:(id)arg1 ;
-(unsigned long long)debugServerLatencyMs;
-(BOOL)readFrom:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)etaResultReferencePointDestinationsCount;
-(GEOETAResult *)etaResultReferencePointOrigin;
-(void)setEtaResults:(NSMutableArray *)arg1 ;
-(GEOETAServiceResponseSummary *)etaServiceSummary;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)status;
-(void)dealloc;
-(void)setEtaResultReferencePointOrigin:(GEOETAResult *)arg1 ;
@end

