/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(double)x;
-(double)y;
-(double)z;
-(void)setX:(double)arg1 ;
-(void)setY:(double)arg1 ;
-(void)setZ:(double)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasYaw:(BOOL)arg1 ;
-(BOOL)hasYaw;
-(void)setHasPitch:(BOOL)arg1 ;
-(BOOL)hasPitch;
-(void)setHasRoll:(BOOL)arg1 ;
-(BOOL)hasRoll;
-(void)setHasX:(BOOL)arg1 ;
-(BOOL)hasX;
-(void)setHasY:(BOOL)arg1 ;
-(BOOL)hasY;
-(void)setHasZ:(BOOL)arg1 ;
-(BOOL)hasZ;
@end

