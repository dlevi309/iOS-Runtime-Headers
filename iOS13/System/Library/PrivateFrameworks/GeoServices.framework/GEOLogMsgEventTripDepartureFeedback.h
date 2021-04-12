/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgEventTripDepartureFeedback : PBCodable <NSCopying> {

	double _distanceFromOrigin;
	double _timeFromOrigin;
	int _transportMode;
	SCD_Struct_GE85 _flags;

}

@property (assign,nonatomic) BOOL hasTransportMode; 
@property (assign,nonatomic) int transportMode; 
@property (assign,nonatomic) BOOL hasDistanceFromOrigin; 
@property (assign,nonatomic) double distanceFromOrigin; 
@property (assign,nonatomic) BOOL hasTimeFromOrigin; 
@property (assign,nonatomic) double timeFromOrigin; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(int)transportMode;
-(void)setTransportMode:(int)arg1 ;
-(void)setHasTransportMode:(BOOL)arg1 ;
-(BOOL)hasTransportMode;
-(id)transportModeAsString:(int)arg1 ;
-(int)StringAsTransportMode:(id)arg1 ;
-(double)distanceFromOrigin;
-(void)setDistanceFromOrigin:(double)arg1 ;
-(void)setHasDistanceFromOrigin:(BOOL)arg1 ;
-(BOOL)hasDistanceFromOrigin;
-(double)timeFromOrigin;
-(void)setTimeFromOrigin:(double)arg1 ;
-(void)setHasTimeFromOrigin:(BOOL)arg1 ;
-(BOOL)hasTimeFromOrigin;
@end

