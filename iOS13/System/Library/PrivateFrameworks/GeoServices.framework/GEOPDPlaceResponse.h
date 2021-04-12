/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOClientMetrics, GEOPDDatasetABStatus, NSString, NSMutableArray, GEOPDPlaceGlobalResult;

@interface GEOPDPlaceResponse : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOClientMetrics* _clientMetrics;
	GEOPDDatasetABStatus* _datasetAbStatus;
	NSString* _debugApiKey;
	unsigned long long _debugLatencyMs;
	NSMutableArray* _displayLanguages;
	NSString* _displayRegion;
	GEOPDPlaceGlobalResult* _globalResult;
	NSMutableArray* _placeResults;
	NSMutableArray* _spokenLanguages;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _requestType;
	int _status;
	struct {
		unsigned has_debugLatencyMs : 1;
		unsigned has_requestType : 1;
		unsigned has_status : 1;
		unsigned read_unknownFields : 1;
		unsigned read_clientMetrics : 1;
		unsigned read_datasetAbStatus : 1;
		unsigned read_debugApiKey : 1;
		unsigned read_displayLanguages : 1;
		unsigned read_displayRegion : 1;
		unsigned read_globalResult : 1;
		unsigned read_placeResults : 1;
		unsigned read_spokenLanguages : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_clientMetrics : 1;
		unsigned wrote_datasetAbStatus : 1;
		unsigned wrote_debugApiKey : 1;
		unsigned wrote_debugLatencyMs : 1;
		unsigned wrote_displayLanguages : 1;
		unsigned wrote_displayRegion : 1;
		unsigned wrote_globalResult : 1;
		unsigned wrote_placeResults : 1;
		unsigned wrote_spokenLanguages : 1;
		unsigned wrote_requestType : 1;
		unsigned wrote_status : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasDebugLatencyMs; 
@property (assign,nonatomic) unsigned long long debugLatencyMs; 
@property (nonatomic,readonly) BOOL hasClientMetrics; 
@property (nonatomic,retain) GEOClientMetrics * clientMetrics; 
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) BOOL hasRequestType; 
@property (assign,nonatomic) int requestType; 
@property (nonatomic,readonly) BOOL hasGlobalResult; 
@property (nonatomic,retain) GEOPDPlaceGlobalResult * globalResult; 
@property (nonatomic,retain) NSMutableArray * placeResults; 
@property (nonatomic,retain) NSMutableArray * displayLanguages; 
@property (nonatomic,readonly) BOOL hasDisplayRegion; 
@property (nonatomic,retain) NSString * displayRegion; 
@property (nonatomic,retain) NSMutableArray * spokenLanguages; 
@property (nonatomic,readonly) BOOL hasDebugApiKey; 
@property (nonatomic,retain) NSString * debugApiKey; 
@property (nonatomic,readonly) BOOL hasDatasetAbStatus; 
@property (nonatomic,retain) GEOPDDatasetABStatus * datasetAbStatus; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)displayLanguageType;
+(Class)spokenLanguageType;
+(Class)placeResultType;
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
-(int)requestType;
-(int)StringAsStatus:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSMutableArray *)displayLanguages;
-(void)setRequestType:(int)arg1 ;
-(void)setHasRequestType:(BOOL)arg1 ;
-(BOOL)hasRequestType;
-(id)requestTypeAsString:(int)arg1 ;
-(int)StringAsRequestType:(id)arg1 ;
-(void)clearSensitiveFields;
-(id)_disambiguationLabels;
-(void)_readDatasetAbStatus;
-(GEOPDDatasetABStatus *)datasetAbStatus;
-(GEOClientMetrics *)clientMetrics;
-(void)setDatasetAbStatus:(GEOPDDatasetABStatus *)arg1 ;
-(void)setClientMetrics:(GEOClientMetrics *)arg1 ;
-(void)_readClientMetrics;
-(BOOL)hasDatasetAbStatus;
-(unsigned long long)debugLatencyMs;
-(void)setDebugLatencyMs:(unsigned long long)arg1 ;
-(void)setHasDebugLatencyMs:(BOOL)arg1 ;
-(BOOL)hasDebugLatencyMs;
-(BOOL)hasClientMetrics;
-(void)_readDisplayLanguages;
-(void)_addNoFlagsDisplayLanguage:(id)arg1 ;
-(void)_readSpokenLanguages;
-(void)_addNoFlagsSpokenLanguage:(id)arg1 ;
-(void)_readDisplayRegion;
-(NSMutableArray *)spokenLanguages;
-(NSString *)displayRegion;
-(unsigned long long)displayLanguagesCount;
-(void)clearDisplayLanguages;
-(id)displayLanguageAtIndex:(unsigned long long)arg1 ;
-(void)addDisplayLanguage:(id)arg1 ;
-(unsigned long long)spokenLanguagesCount;
-(void)clearSpokenLanguages;
-(id)spokenLanguageAtIndex:(unsigned long long)arg1 ;
-(void)addSpokenLanguage:(id)arg1 ;
-(void)setDisplayRegion:(NSString *)arg1 ;
-(void)setDisplayLanguages:(NSMutableArray *)arg1 ;
-(void)setSpokenLanguages:(NSMutableArray *)arg1 ;
-(BOOL)hasDisplayRegion;
-(void)_readPlaceResults;
-(void)_addNoFlagsPlaceResult:(id)arg1 ;
-(NSMutableArray *)placeResults;
-(unsigned long long)placeResultsCount;
-(void)clearPlaceResults;
-(id)placeResultAtIndex:(unsigned long long)arg1 ;
-(void)addPlaceResult:(id)arg1 ;
-(void)setPlaceResults:(NSMutableArray *)arg1 ;
-(BOOL)hasGlobalResult;
-(GEOPDPlaceGlobalResult *)globalResult;
-(void)_readDebugApiKey;
-(NSString *)debugApiKey;
-(void)setDebugApiKey:(NSString *)arg1 ;
-(BOOL)hasDebugApiKey;
-(id)initWithPlace:(id)arg1 forRequestType:(int)arg2 ;
-(void)_readGlobalResult;
-(void)setGlobalResult:(GEOPDPlaceGlobalResult *)arg1 ;
@end

