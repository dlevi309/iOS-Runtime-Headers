/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_GE37 _flags;

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
-(id)dictionaryRepresentation;
-(BOOL)hasTransportType;
-(void)setExpirationDate:(double)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasExpirationDate;
-(id)jsonRepresentation;
-(void)setArrivalDate:(double)arg1 ;
-(void)setHasTransportType:(BOOL)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(void)setTransportType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)transportType;
-(void)setHasExpirationDate:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasDestinationLocation;
-(id)transportTypeAsString:(int)arg1 ;
-(double)arrivalDate;
-(id)description;
-(double)expirationDate;
-(void)setDestinationLocation:(GEOMapItemStorage *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(GEOMapItemStorage *)destinationLocation;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasArrivalDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasArrivalDate:(BOOL)arg1 ;
@end

