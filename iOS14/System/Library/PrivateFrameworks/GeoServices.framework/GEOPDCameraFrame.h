/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPDCameraFrame : PBCodable <NSCopying> {

	double _altitude;
	double _latitude;
	double _longitude;
	double _pitch;
	double _roll;
	double _yaw;
	struct {
		unsigned has_altitude : 1;
		unsigned has_latitude : 1;
		unsigned has_longitude : 1;
		unsigned has_pitch : 1;
		unsigned has_roll : 1;
		unsigned has_yaw : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasLatitude; 
@property (assign,nonatomic) double latitude; 
@property (assign,nonatomic) BOOL hasLongitude; 
@property (assign,nonatomic) double longitude; 
@property (assign,nonatomic) BOOL hasAltitude; 
@property (assign,nonatomic) double altitude; 
@property (assign,nonatomic) BOOL hasYaw; 
@property (assign,nonatomic) double yaw; 
@property (assign,nonatomic) BOOL hasPitch; 
@property (assign,nonatomic) double pitch; 
@property (assign,nonatomic) BOOL hasRoll; 
@property (assign,nonatomic) double roll; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(double)latitude;
-(double)roll;
-(void)setAltitude:(double)arg1 ;
-(double)pitch;
-(void)setHasLatitude:(BOOL)arg1 ;
-(BOOL)hasLatitude;
-(BOOL)hasLongitude;
-(double)altitude;
-(void)readAll:(BOOL)arg1 ;
-(double)yaw;
-(BOOL)hasYaw;
-(void)setHasLongitude:(BOOL)arg1 ;
-(BOOL)hasAltitude;
-(void)setHasAltitude:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(double)longitude;
-(BOOL)hasRoll;
-(void)setLongitude:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(id)description;
-(void)setHasPitch:(BOOL)arg1 ;
-(void)setHasYaw:(BOOL)arg1 ;
-(void)setYaw:(double)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setPitch:(double)arg1 ;
-(BOOL)hasPitch;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasRoll:(BOOL)arg1 ;
-(void)setRoll:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

