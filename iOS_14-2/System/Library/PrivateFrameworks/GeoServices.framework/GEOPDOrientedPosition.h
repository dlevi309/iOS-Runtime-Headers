/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPDOrientedPosition : PBCodable <NSCopying> {

	double _pitch;
	double _roll;
	double _x;
	double _yaw;
	double _y;
	double _z;
	struct {
		unsigned has_pitch : 1;
		unsigned has_roll : 1;
		unsigned has_x : 1;
		unsigned has_yaw : 1;
		unsigned has_y : 1;
		unsigned has_z : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasX; 
@property (assign,nonatomic) double x; 
@property (assign,nonatomic) BOOL hasY; 
@property (assign,nonatomic) double y; 
@property (assign,nonatomic) BOOL hasZ; 
@property (assign,nonatomic) double z; 
@property (assign,nonatomic) BOOL hasYaw; 
@property (assign,nonatomic) double yaw; 
@property (assign,nonatomic) BOOL hasPitch; 
@property (assign,nonatomic) double pitch; 
@property (assign,nonatomic) BOOL hasRoll; 
@property (assign,nonatomic) double roll; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(double)x;
-(double)roll;
-(double)z;
-(BOOL)hasY;
-(void)setHasY:(BOOL)arg1 ;
-(void)setX:(double)arg1 ;
-(double)pitch;
-(void)readAll:(BOOL)arg1 ;
-(void)setY:(double)arg1 ;
-(double)yaw;
-(BOOL)hasYaw;
-(double)y;
-(id)jsonRepresentation;
-(void)setZ:(double)arg1 ;
-(BOOL)hasRoll;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasZ:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasZ;
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
-(void)setHasX:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasX;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasRoll:(BOOL)arg1 ;
-(void)setRoll:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

