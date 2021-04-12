/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOMapItemStorage;

@interface GEORouteHypothesisRequest : PBCodable <NSCopying> {

	double _arrivalDate;
	GEOMapItemStorage* _destinationLocation;
	double _expirationDate;
	int _transportType;
	struct {
		unsigned has_arrivalDate : 1;
		unsigned has_expirationDate : 1;
		unsigned has_transportType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasArrivalDate; 
@property (assign,nonatomic) double arrivalDate; 
@property (nonatomic,readonly) BOOL hasDestinationLocation; 
@property (nonatomic,retain) GEOMapItemStorage * destinationLocation; 
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType; 
@property (assign,nonatomic) BOOL hasExpirationDate; 
@property (assign,nonatomic) double expirationDate; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(double)expirationDate;
-(void)setExpirationDate:(double)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)transportType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(double)arrivalDate;
-(BOOL)hasArrivalDate;
-(BOOL)hasExpirationDate;
-(void)setTransportType:(int)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasTransportType;
-(void)setHasTransportType:(BOOL)arg1 ;
-(id)transportTypeAsString:(int)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(GEOMapItemStorage *)destinationLocation;
-(void)setDestinationLocation:(GEOMapItemStorage *)arg1 ;
-(void)setArrivalDate:(double)arg1 ;
-(void)setHasArrivalDate:(BOOL)arg1 ;
-(BOOL)hasDestinationLocation;
-(void)setHasExpirationDate:(BOOL)arg1 ;
@end

