/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOLatLng;

@interface GEORoadAccessPoint : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOLatLng* _location;
	int _cyclingDirection;
	int _drivingDirection;
	unsigned _significance;
	int _transitDirection;
	int _walkingDirection;
	BOOL _isApproximate;
	struct {
		unsigned has_cyclingDirection : 1;
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
@property (assign,nonatomic) BOOL hasCyclingDirection; 
@property (assign,nonatomic) int cyclingDirection; 
@property (assign,nonatomic) BOOL hasDrivingDirection; 
@property (assign,nonatomic) int drivingDirection; 
@property (assign,nonatomic) BOOL hasTransitDirection; 
@property (assign,nonatomic) int transitDirection; 
@property (assign,nonatomic) BOOL hasWalkingDirection; 
@property (assign,nonatomic) int walkingDirection; 
@property (assign,nonatomic) BOOL hasSignificance; 
@property (assign,nonatomic) unsigned significance; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasDrivingDirection;
-(void)setHasSignificance:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(BOOL)hasIsApproximate;
-(id)jsonRepresentation;
-(void)setHasWalkingDirection:(BOOL)arg1 ;
-(int)drivingDirection;
-(GEOLatLng *)location;
-(void)mergeFrom:(id)arg1 ;
-(int)StringAsDrivingDirection:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(int)transitDirection;
-(void)setLocation:(GEOLatLng *)arg1 ;
-(void)setHasCyclingDirection:(BOOL)arg1 ;
-(BOOL)hasWalkingDirection;
-(void)setIsApproximate:(BOOL)arg1 ;
-(id)description;
-(id)transitDirectionAsString:(int)arg1 ;
-(int)walkingDirection;
-(void)setSignificance:(unsigned)arg1 ;
-(BOOL)isApproximate;
-(void)setDrivingDirection:(int)arg1 ;
-(BOOL)hasLocation;
-(int)StringAsTransitDirection:(id)arg1 ;
-(void)setHasTransitDirection:(BOOL)arg1 ;
-(void)setHasIsApproximate:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasSignificance;
-(id)drivingDirectionAsString:(int)arg1 ;
-(id)walkingDirectionAsString:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)StringAsWalkingDirection:(id)arg1 ;
-(int)StringAsCyclingDirection:(id)arg1 ;
-(void)setHasDrivingDirection:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasCyclingDirection;
-(BOOL)hasTransitDirection;
-(unsigned)significance;
-(void)setTransitDirection:(int)arg1 ;
-(void)setWalkingDirection:(int)arg1 ;
-(int)cyclingDirection;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)cyclingDirectionAsString:(int)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCyclingDirection:(int)arg1 ;
@end

