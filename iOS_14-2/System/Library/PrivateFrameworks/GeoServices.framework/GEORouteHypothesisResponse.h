/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEODirectionsResponse, GEOETAResponse;

@interface GEORouteHypothesisResponse : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEODirectionsResponse* _directionsResponse;
	GEOETAResponse* _etaResponse;
	double _updatedTimeStamp;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned has_updatedTimeStamp : 1;
		unsigned read_directionsResponse : 1;
		unsigned read_etaResponse : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDirectionsResponse; 
@property (nonatomic,retain) GEODirectionsResponse * directionsResponse; 
@property (nonatomic,readonly) BOOL hasEtaResponse; 
@property (nonatomic,retain) GEOETAResponse * etaResponse; 
@property (assign,nonatomic) BOOL hasUpdatedTimeStamp; 
@property (assign,nonatomic) double updatedTimeStamp; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(void)setDirectionsResponse:(GEODirectionsResponse *)arg1 ;
-(id)init;
-(id)jsonRepresentation;
-(GEODirectionsResponse *)directionsResponse;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(double)updatedTimeStamp;
-(BOOL)isEqual:(id)arg1 ;
-(GEOETAResponse *)etaResponse;
-(void)setEtaResponse:(GEOETAResponse *)arg1 ;
-(BOOL)hasDirectionsResponse;
-(BOOL)hasEtaResponse;
-(void)setHasUpdatedTimeStamp:(BOOL)arg1 ;
-(BOOL)hasUpdatedTimeStamp;
-(void)setUpdatedTimeStamp:(double)arg1 ;
@end

