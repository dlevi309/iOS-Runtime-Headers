/*
* Generated on Thursday, January 14, 2021 at 2:21:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOAutomobileOptions, GEOClientCapabilities, GEOCyclingOptions, GEOTransitOptions, GEOWalkingOptions;

@interface GEOPDETAFilter : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE90* _transportTypes;
	GEOAutomobileOptions* _automobileOptions;
	GEOClientCapabilities* _clientCapabilities;
	GEOCyclingOptions* _cyclingOptions;
	GEOTransitOptions* _transitOptions;
	GEOWalkingOptions* _walkingOptions;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _includeHistoricTravelTime;
	BOOL _includeRouteTrafficDetail;
	struct {
		unsigned has_includeHistoricTravelTime : 1;
		unsigned has_includeRouteTrafficDetail : 1;
		unsigned read_unknownFields : 1;
		unsigned read_transportTypes : 1;
		unsigned read_automobileOptions : 1;
		unsigned read_clientCapabilities : 1;
		unsigned read_cyclingOptions : 1;
		unsigned read_transitOptions : 1;
		unsigned read_walkingOptions : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long transportTypesCount; 
@property (nonatomic,readonly) int* transportTypes; 
@property (assign,nonatomic) BOOL hasIncludeHistoricTravelTime; 
@property (assign,nonatomic) BOOL includeHistoricTravelTime; 
@property (nonatomic,readonly) BOOL hasAutomobileOptions; 
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions; 
@property (nonatomic,readonly) BOOL hasCyclingOptions; 
@property (nonatomic,retain) GEOCyclingOptions * cyclingOptions; 
@property (nonatomic,readonly) BOOL hasTransitOptions; 
@property (nonatomic,retain) GEOTransitOptions * transitOptions; 
@property (nonatomic,readonly) BOOL hasWalkingOptions; 
@property (nonatomic,retain) GEOWalkingOptions * walkingOptions; 
@property (assign,nonatomic) BOOL hasIncludeRouteTrafficDetail; 
@property (assign,nonatomic) BOOL includeRouteTrafficDetail; 
@property (nonatomic,readonly) BOOL hasClientCapabilities; 
@property (nonatomic,retain) GEOClientCapabilities * clientCapabilities; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)_etaFilterWithTransportTypes:(int*)arg1 transportTypesCount:(unsigned long long)arg2 automobileOptions:(id)arg3 transitOptions:(id)arg4 walkingOptions:(id)arg5 cyclingOptions:(id)arg6 ;
+(BOOL)isValid:(id)arg1 ;
+(id)etaFilterForTraits:(id)arg1 ;
+(id)etaFilterForRouteAttributes:(id)arg1 ;
-(void)setIncludeHistoricTravelTime:(BOOL)arg1 ;
-(GEOTransitOptions *)transitOptions;
-(void)setClientCapabilities:(GEOClientCapabilities *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)includeHistoricTravelTime;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOClientCapabilities *)clientCapabilities;
-(BOOL)hasIncludeHistoricTravelTime;
-(void)setHasIncludeHistoricTravelTime:(BOOL)arg1 ;
-(unsigned long long)transportTypesCount;
-(void)readAll:(BOOL)arg1 ;
-(GEOAutomobileOptions *)automobileOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(void)setWalkingOptions:(GEOWalkingOptions *)arg1 ;
-(BOOL)hasCyclingOptions;
-(void)setHasIncludeRouteTrafficDetail:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addTransportType:(int)arg1 ;
-(void)clearTransportTypes;
-(int)transportTypeAtIndex:(unsigned long long)arg1 ;
-(id)transportTypesAsString:(int)arg1 ;
-(int)StringAsTransportTypes:(id)arg1 ;
-(BOOL)hasWalkingOptions;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasIncludeRouteTrafficDetail;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(id)description;
-(BOOL)hasTransitOptions;
-(BOOL)hasClientCapabilities;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)includeRouteTrafficDetail;
-(GEOCyclingOptions *)cyclingOptions;
-(void)copyTo:(id)arg1 ;
-(void)setCyclingOptions:(GEOCyclingOptions *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasAutomobileOptions;
-(void)setIncludeRouteTrafficDetail:(BOOL)arg1 ;
-(int*)transportTypes;
-(void)setTransportTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(GEOWalkingOptions *)walkingOptions;
@end

