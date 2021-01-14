/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTrafficBoundingBox : PBCodable <NSCopying> {

	double _east;
	double _north;
	double _south;
	double _west;
	struct {
		unsigned has_east : 1;
		unsigned has_north : 1;
		unsigned has_south : 1;
		unsigned has_west : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasSouth; 
@property (assign,nonatomic) double south; 
@property (assign,nonatomic) BOOL hasWest; 
@property (assign,nonatomic) double west; 
@property (assign,nonatomic) BOOL hasNorth; 
@property (assign,nonatomic) double north; 
@property (assign,nonatomic) BOOL hasEast; 
@property (assign,nonatomic) double east; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(double)west;
-(double)south;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasWest;
-(BOOL)hasEast;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)setWest:(double)arg1 ;
-(BOOL)hasSouth;
-(BOOL)hasNorth;
-(double)north;
-(void)setNorth:(double)arg1 ;
-(void)setEast:(double)arg1 ;
-(unsigned long long)hash;
-(double)east;
-(void)setSouth:(double)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasSouth:(BOOL)arg1 ;
-(void)setHasWest:(BOOL)arg1 ;
-(void)setHasNorth:(BOOL)arg1 ;
-(void)setHasEast:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

