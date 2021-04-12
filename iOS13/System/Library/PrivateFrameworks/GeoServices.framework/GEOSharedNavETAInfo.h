/*
* Generated on Monday, March 1, 2021 at 2:30:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(double)latitude;
-(double)longitude;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(void)setHasLatitude:(BOOL)arg1 ;
-(BOOL)hasLatitude;
-(void)setHasLongitude:(BOOL)arg1 ;
-(BOOL)hasLongitude;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(double)remainingDistance;
-(void)setRemainingDistance:(double)arg1 ;
-(void)setHasRemainingDistance:(BOOL)arg1 ;
-(BOOL)hasRemainingDistance;
-(double)remainingTime;
-(void)setRemainingTime:(double)arg1 ;
-(void)setHasRemainingTime:(BOOL)arg1 ;
-(BOOL)hasRemainingTime;
-(double)etaTimestamp;
-(void)setEtaTimestamp:(double)arg1 ;
-(void)setHasEtaTimestamp:(BOOL)arg1 ;
-(BOOL)hasEtaTimestamp;
@end

