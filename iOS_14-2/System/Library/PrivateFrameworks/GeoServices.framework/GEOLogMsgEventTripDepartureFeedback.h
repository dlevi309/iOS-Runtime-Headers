/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgEventTripDepartureFeedback : PBCodable <NSCopying> {

	double _distanceFromOrigin;
	double _timeFromOrigin;
	int _transportMode;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasTransportMode; 
@property (assign,nonatomic) int transportMode; 
@property (assign,nonatomic) BOOL hasDistanceFromOrigin; 
@property (assign,nonatomic) double distanceFromOrigin; 
@property (assign,nonatomic) BOOL hasTimeFromOrigin; 
@property (assign,nonatomic) double timeFromOrigin; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(int)transportMode;
-(void)setHasTransportMode:(BOOL)arg1 ;
-(BOOL)hasTransportMode;
-(double)timeFromOrigin;
-(id)transportModeAsString:(int)arg1 ;
-(int)StringAsTransportMode:(id)arg1 ;
-(double)distanceFromOrigin;
-(void)setHasDistanceFromOrigin:(BOOL)arg1 ;
-(BOOL)hasDistanceFromOrigin;
-(void)setHasTimeFromOrigin:(BOOL)arg1 ;
-(BOOL)hasTimeFromOrigin;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setTransportMode:(int)arg1 ;
-(void)setTimeFromOrigin:(double)arg1 ;
-(unsigned long long)hash;
-(void)setDistanceFromOrigin:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

