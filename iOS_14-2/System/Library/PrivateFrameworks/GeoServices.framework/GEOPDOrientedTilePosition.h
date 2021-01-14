/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(unsigned)x;
-(unsigned)roll;
-(BOOL)hasY;
-(void)setHasY:(BOOL)arg1 ;
-(void)setX:(unsigned)arg1 ;
-(void)setAltitude:(int)arg1 ;
-(unsigned)pitch;
-(int)altitude;
-(void)readAll:(BOOL)arg1 ;
-(void)setY:(unsigned)arg1 ;
-(unsigned)yaw;
-(BOOL)hasYaw;
-(BOOL)hasAltitude;
-(void)setHasAltitude:(BOOL)arg1 ;
-(unsigned)y;
-(id)jsonRepresentation;
-(BOOL)hasRoll;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setHasPitch:(BOOL)arg1 ;
-(void)setHasYaw:(BOOL)arg1 ;
-(void)setYaw:(unsigned)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setPitch:(unsigned)arg1 ;
-(BOOL)hasPitch;
-(void)setHasX:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasX;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasRoll:(BOOL)arg1 ;
-(void)setRoll:(unsigned)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

