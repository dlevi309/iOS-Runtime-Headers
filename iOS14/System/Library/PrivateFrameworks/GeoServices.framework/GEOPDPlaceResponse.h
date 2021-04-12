/*
* Generated on Thursday, January 14, 2021 at 2:20:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSMutableArray* _mapsResults;
	NSMutableArray* _legacyPlaceResults;
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
		unsigned read_mapsResults : 1;
		unsigned read_legacyPlaceResults : 1;
		unsigned read_spokenLanguages : 1;
		unsigned wrote_anyField : 1;
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
@property (nonatomic,retain) NSMutableArray * legacyPlaceResults; 
@property (nonatomic,retain) NSMutableArray * displayLanguages; 
@property (nonatomic,readonly) BOOL hasDisplayRegion; 
@property (nonatomic,retain) NSString * displayRegion; 
@property (nonatomic,retain) NSMutableArray * spokenLanguages; 
@property (nonatomic,readonly) BOOL hasDebugApiKey; 
@property (nonatomic,retain) NSString * debugApiKey; 
@property (nonatomic,readonly) BOOL hasDatasetAbStatus; 
@property (nonatomic,retain) GEOPDDatasetABStatus * datasetAbStatus; 
@property (nonatomic,retain) NSMutableArray * mapsResults; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)displayLanguageType;
+(Class)legacyPlaceResultType;
+(Class)spokenLanguageType;
+(BOOL)isValid:(id)arg1 ;
+(Class)mapsResultType;
-(BOOL)hasRequestType;
-(id)displayLanguageAtIndex:(unsigned long long)arg1 ;
-(void)setDisplayRegion:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)displayLanguages;
-(BOOL)hasDisplayRegion;
-(void)setDisplayLanguages:(NSMutableArray *)arg1 ;
-(GEOPDDatasetABStatus *)datasetAbStatus;
-(BOOL)hasDebugApiKey;
-(void)setSpokenLanguages:(NSMutableArray *)arg1 ;
-(void)addDisplayLanguage:(id)arg1 ;
-(NSMutableArray *)legacyPlaceResults;
-(void)setDebugLatencyMs:(unsigned long long)arg1 ;
-(unsigned long long)spokenLanguagesCount;
-(PBUnknownFields *)unknownFields;
-(void)clearSpokenLanguages;
-(void)clearDisplayLanguages;
-(unsigned long long)displayLanguagesCount;
-(NSString *)debugApiKey;
-(unsigned long long)debugLatencyMs;
-(NSMutableArray *)spokenLanguages;
-(void)addSpokenLanguage:(id)arg1 ;
-(id)spokenLanguageAtIndex:(unsigned long long)arg1 ;
-(NSString *)displayRegion;
-(void)setClientMetrics:(GEOClientMetrics *)arg1 ;
-(GEOClientMetrics *)clientMetrics;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setDatasetAbStatus:(GEOPDDatasetABStatus *)arg1 ;
-(BOOL)hasDatasetAbStatus;
-(void)setRequestType:(int)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasClientMetrics;
-(void)setHasRequestType:(BOOL)arg1 ;
-(void)setMapsResults:(NSMutableArray *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)init;
-(id)requestTypeAsString:(int)arg1 ;
-(int)requestType;
-(id)jsonRepresentation;
-(int)StringAsRequestType:(id)arg1 ;
-(void)setGlobalResult:(GEOPDPlaceGlobalResult *)arg1 ;
-(void)clearSensitiveFields;
-(id)mapsResultAtIndex:(unsigned long long)arg1 ;
-(void)setLegacyPlaceResults:(NSMutableArray *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)resultsWithResultType:(int)arg1 ;
-(void)clearLegacyPlaceResults;
-(id)initWithData:(id)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasStatus;
-(int)StringAsStatus:(id)arg1 ;
-(unsigned long long)legacyPlaceResultsCount;
-(id)description;
-(id)initWithPlace:(id)arg1 forRequestType:(int)arg2 ;
-(void)addLegacyPlaceResult:(id)arg1 ;
-(void)setHasDebugLatencyMs:(BOOL)arg1 ;
-(void)clearMapsResults;
-(unsigned long long)hash;
-(BOOL)hasGlobalResult;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)mapsResults;
-(void)setStatus:(int)arg1 ;
-(id)_disambiguationLabels;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDebugApiKey:(NSString *)arg1 ;
-(void)addMapsResult:(id)arg1 ;
-(GEOPDPlaceGlobalResult *)globalResult;
-(unsigned long long)mapsResultsCount;
-(id)legacyPlaceResultAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasDebugLatencyMs;
-(unsigned long long)resultsCountWithResultType:(int)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)status;
@end

