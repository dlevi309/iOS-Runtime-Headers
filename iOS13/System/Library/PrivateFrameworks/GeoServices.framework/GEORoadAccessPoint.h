/*
* Generated on Monday, March 1, 2021 at 2:30:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOLatLng;

@interface GEORoadAccessPoint : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOLatLng* _location;
	int _drivingDirection;
	unsigned _significance;
	int _transitDirection;
	int _walkingDirection;
	BOOL _isApproximate;
	struct {
		unsigned has_drivingDirection : 1;
		unsigned has_significance : 1;
		unsigned has_transitDirection : 1;
		unsigned has_walkingDirection : 1;
		unsigned has_isApproximate : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLatLng * location; 
@property (assign,nonatomic) BOOL hasIsApproximate; 
@property (assign,nonatomic) BOOL isApproximate; 
@property (assign,nonatomic) BOOL hasWalkingDirection; 
@property (assign,nonatomic) int walkingDirection; 
@property (assign,nonatomic) BOOL hasDrivingDirection; 
@property (assign,nonatomic) int drivingDirection; 
@property (assign,nonatomic) BOOL hasTransitDirection; 
@property (assign,nonatomic) int transitDirection; 
@property (assign,nonatomic) BOOL hasSignificance; 
@property (assign,nonatomic) unsigned significance; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(GEOLatLng *)location;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLocation:(GEOLatLng *)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasLocation;
-(int)drivingDirection;
-(void)setDrivingDirection:(int)arg1 ;
-(void)setWalkingDirection:(int)arg1 ;
-(unsigned)significance;
-(void)setSignificance:(unsigned)arg1 ;
-(void)setHasSignificance:(BOOL)arg1 ;
-(BOOL)hasSignificance;
-(BOOL)isApproximate;
-(void)setIsApproximate:(BOOL)arg1 ;
-(void)setHasIsApproximate:(BOOL)arg1 ;
-(BOOL)hasIsApproximate;
-(int)walkingDirection;
-(void)setHasWalkingDirection:(BOOL)arg1 ;
-(BOOL)hasWalkingDirection;
-(id)walkingDirectionAsString:(int)arg1 ;
-(int)StringAsWalkingDirection:(id)arg1 ;
-(void)setHasDrivingDirection:(BOOL)arg1 ;
-(BOOL)hasDrivingDirection;
-(id)drivingDirectionAsString:(int)arg1 ;
-(int)StringAsDrivingDirection:(id)arg1 ;
-(int)transitDirection;
-(void)setTransitDirection:(int)arg1 ;
-(void)setHasTransitDirection:(BOOL)arg1 ;
-(BOOL)hasTransitDirection;
-(id)transitDirectionAsString:(int)arg1 ;
-(int)StringAsTransitDirection:(id)arg1 ;
@end

