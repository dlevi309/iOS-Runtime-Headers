/*
* Generated on Monday, March 1, 2021 at 2:30:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, GEOAutomobileOptions, GEOTransitOptions, GEOWalkingOptions;

@interface GEOPDETAFilter : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE1* _transportTypes;
	GEOAutomobileOptions* _automobileOptions;
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
		unsigned read_transitOptions : 1;
		unsigned read_walkingOptions : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_transportTypes : 1;
		unsigned wrote_automobileOptions : 1;
		unsigned wrote_transitOptions : 1;
		unsigned wrote_walkingOptions : 1;
		unsigned wrote_includeHistoricTravelTime : 1;
		unsigned wrote_includeRouteTrafficDetail : 1;
	}  _flags;

}

@property (nonatomic,readonly) unsigned long long transportTypesCount; 
@property (nonatomic,readonly) int* transportTypes; 
@property (assign,nonatomic) BOOL hasIncludeHistoricTravelTime; 
@property (assign,nonatomic) BOOL includeHistoricTravelTime; 
@property (nonatomic,readonly) BOOL hasAutomobileOptions; 
@property (nonatomic,retain) GEOAutomobileOptions * automobileOptions; 
@property (nonatomic,readonly) BOOL hasTransitOptions; 
@property (nonatomic,retain) GEOTransitOptions * transitOptions; 
@property (nonatomic,readonly) BOOL hasWalkingOptions; 
@property (nonatomic,retain) GEOWalkingOptions * walkingOptions; 
@property (assign,nonatomic) BOOL hasIncludeRouteTrafficDetail; 
@property (assign,nonatomic) BOOL includeRouteTrafficDetail; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)transportTypesCount;
-(void)_readAutomobileOptions;
-(void)_readTransitOptions;
-(void)_readWalkingOptions;
-(GEOAutomobileOptions *)automobileOptions;
-(GEOTransitOptions *)transitOptions;
-(GEOWalkingOptions *)walkingOptions;
-(void)setAutomobileOptions:(GEOAutomobileOptions *)arg1 ;
-(void)setTransitOptions:(GEOTransitOptions *)arg1 ;
-(void)setWalkingOptions:(GEOWalkingOptions *)arg1 ;
-(BOOL)includeHistoricTravelTime;
-(void)setIncludeHistoricTravelTime:(BOOL)arg1 ;
-(void)setHasIncludeHistoricTravelTime:(BOOL)arg1 ;
-(BOOL)hasIncludeHistoricTravelTime;
-(BOOL)hasAutomobileOptions;
-(BOOL)hasTransitOptions;
-(BOOL)hasWalkingOptions;
-(BOOL)includeRouteTrafficDetail;
-(void)setIncludeRouteTrafficDetail:(BOOL)arg1 ;
-(void)setHasIncludeRouteTrafficDetail:(BOOL)arg1 ;
-(BOOL)hasIncludeRouteTrafficDetail;
-(void)_readTransportTypes;
-(void)_addNoFlagsTransportType:(int)arg1 ;
-(void)clearTransportTypes;
-(int)transportTypeAtIndex:(unsigned long long)arg1 ;
-(void)addTransportType:(int)arg1 ;
-(int*)transportTypes;
-(void)setTransportTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)transportTypesAsString:(int)arg1 ;
-(int)StringAsTransportTypes:(id)arg1 ;
@end

