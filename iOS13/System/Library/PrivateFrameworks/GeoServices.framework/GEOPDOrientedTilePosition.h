/*
* Generated on Monday, March 1, 2021 at 2:30:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOPDOrientedTilePosition : PBCodable <NSCopying> {

	int _altitude;
	unsigned _pitch;
	unsigned _roll;
	unsigned _x;
	unsigned _yaw;
	unsigned _y;
	struct {
		unsigned has_altitude : 1;
		unsigned has_pitch : 1;
		unsigned has_roll : 1;
		unsigned has_x : 1;
		unsigned has_yaw : 1;
		unsigned has_y : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasX; 
@property (assign,nonatomic) unsigned x; 
@property (assign,nonatomic) BOOL hasY; 
@property (assign,nonatomic) unsigned y; 
@property (assign,nonatomic) BOOL hasAltitude; 
@property (assign,nonatomic) int altitude; 
@property (assign,nonatomic) BOOL hasYaw; 
@property (assign,nonatomic) unsigned yaw; 
@property (assign,nonatomic) BOOL hasPitch; 
@property (assign,nonatomic) unsigned pitch; 
@property (assign,nonatomic) BOOL hasRoll; 
@property (assign,nonatomic) unsigned roll; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(unsigned)pitch;
-(unsigned)yaw;
-(unsigned)roll;
-(void)setPitch:(unsigned)arg1 ;
-(void)setYaw:(unsigned)arg1 ;
-(void)setRoll:(unsigned)arg1 ;
-(int)altitude;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)x;
-(unsigned)y;
-(void)setAltitude:(int)arg1 ;
-(void)setX:(unsigned)arg1 ;
-(void)setY:(unsigned)arg1 ;
-(void)setHasAltitude:(BOOL)arg1 ;
-(BOOL)hasAltitude;
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
@end

