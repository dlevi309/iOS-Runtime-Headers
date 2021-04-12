/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOSharedNavETAInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _etaTimestamp;
	double _latitude;
	double _longitude;
	double _remainingDistance;
	double _remainingTime;
	struct {
		unsigned has_etaTimestamp : 1;
		unsigned has_latitude : 1;
		unsigned has_longitude : 1;
		unsigned has_remainingDistance : 1;
		unsigned has_remainingTime : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasRemainingDistance; 
@property (assign,nonatomic) double remainingDistance; 
@property (assign,nonatomic) BOOL hasRemainingTime; 
@property (assign,nonatomic) double remainingTime; 
@property (assign,nonatomic) BOOL hasLatitude; 
@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) BOOL hasLongitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) BOOL hasEtaTimestamp; 
@property (assign,nonatomic) double etaTimestamp; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(double)latitude;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setHasLatitude:(BOOL)arg1 ;
-(BOOL)hasLatitude;
-(BOOL)hasLongitude;
-(double)remainingTime;
-(void)readAll:(BOOL)arg1 ;
-(void)setRemainingTime:(double)arg1 ;
-(void)setHasLongitude:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(double)longitude;
-(void)setLongitude:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(id)description;
-(double)etaTimestamp;
-(void)setRemainingDistance:(double)arg1 ;
-(void)setEtaTimestamp:(double)arg1 ;
-(double)remainingDistance;
-(void)setHasRemainingDistance:(BOOL)arg1 ;
-(BOOL)hasRemainingDistance;
-(void)setHasEtaTimestamp:(BOOL)arg1 ;
-(BOOL)hasEtaTimestamp;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasRemainingTime;
-(void)setHasRemainingTime:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

