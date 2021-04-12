/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOCameraFrame : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
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
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(double)pitch;
-(double)yaw;
-(double)roll;
-(void)setPitch:(double)arg1 ;
-(void)setYaw:(double)arg1 ;
-(void)setRoll:(double)arg1 ;
-(double)latitude;
-(double)longitude;
-(double)altitude;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(void)setAltitude:(double)arg1 ;
-(void)setHasLatitude:(BOOL)arg1 ;
-(BOOL)hasLatitude;
-(void)setHasLongitude:(BOOL)arg1 ;
-(BOOL)hasLongitude;
-(void)setHasAltitude:(BOOL)arg1 ;
-(BOOL)hasAltitude;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setHasYaw:(BOOL)arg1 ;
-(BOOL)hasYaw;
-(void)setHasPitch:(BOOL)arg1 ;
-(BOOL)hasPitch;
-(void)setHasRoll:(BOOL)arg1 ;
-(BOOL)hasRoll;
@end

