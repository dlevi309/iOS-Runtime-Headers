/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
		unsigned wrote_directionsResponse : 1;
		unsigned wrote_etaResponse : 1;
		unsigned wrote_updatedTimeStamp : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasDirectionsResponse; 
@property (nonatomic,retain) GEODirectionsResponse * directionsResponse; 
@property (nonatomic,readonly) BOOL hasEtaResponse; 
@property (nonatomic,retain) GEOETAResponse * etaResponse; 
@property (assign,nonatomic) BOOL hasUpdatedTimeStamp; 
@property (assign,nonatomic) double updatedTimeStamp; 
+(BOOL)isValid:(id)arg1 ;
-(id)init;
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
-(GEODirectionsResponse *)directionsResponse;
-(void)_readDirectionsResponse;
-(void)_readEtaResponse;
-(GEOETAResponse *)etaResponse;
-(void)setDirectionsResponse:(GEODirectionsResponse *)arg1 ;
-(void)setEtaResponse:(GEOETAResponse *)arg1 ;
-(BOOL)hasDirectionsResponse;
-(BOOL)hasEtaResponse;
-(double)updatedTimeStamp;
-(void)setUpdatedTimeStamp:(double)arg1 ;
-(void)setHasUpdatedTimeStamp:(BOOL)arg1 ;
-(BOOL)hasUpdatedTimeStamp;
@end

