/*
* Generated on Thursday, January 14, 2021 at 2:21:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEORoutingSettingsCyclingPrefs : PBCodable <NSCopying> {

	BOOL _autoRecordWorkout;
	BOOL _avoidBusyRoads;
	BOOL _avoidHills;
	BOOL _avoidStairs;
	BOOL _eBike;
	struct {
		unsigned has_autoRecordWorkout : 1;
		unsigned has_avoidBusyRoads : 1;
		unsigned has_avoidHills : 1;
		unsigned has_avoidStairs : 1;
		unsigned has_eBike : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasAvoidStairs; 
@property (assign,nonatomic) BOOL avoidStairs; 
@property (assign,nonatomic) BOOL hasAvoidHills; 
@property (assign,nonatomic) BOOL avoidHills; 
@property (assign,nonatomic) BOOL hasAvoidBusyRoads; 
@property (assign,nonatomic) BOOL avoidBusyRoads; 
@property (assign,nonatomic) BOOL hasEBike; 
@property (assign,nonatomic) BOOL eBike; 
@property (assign,nonatomic) BOOL hasAutoRecordWorkout; 
@property (assign,nonatomic) BOOL autoRecordWorkout; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)hasAvoidBusyRoads;
-(BOOL)eBike;
-(BOOL)hasAvoidStairs;
-(BOOL)hasAvoidHills;
-(id)dictionaryRepresentation;
-(void)setAvoidBusyRoads:(BOOL)arg1 ;
-(BOOL)avoidBusyRoads;
-(BOOL)avoidHills;
-(BOOL)avoidStairs;
-(void)setAvoidHills:(BOOL)arg1 ;
-(void)setHasAvoidStairs:(BOOL)arg1 ;
-(void)setHasAvoidBusyRoads:(BOOL)arg1 ;
-(void)setHasAvoidHills:(BOOL)arg1 ;
-(void)setAvoidStairs:(BOOL)arg1 ;
-(BOOL)hasEBike;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setAutoRecordWorkout:(BOOL)arg1 ;
-(BOOL)autoRecordWorkout;
-(void)setHasAutoRecordWorkout:(BOOL)arg1 ;
-(BOOL)hasAutoRecordWorkout;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasEBike:(BOOL)arg1 ;
-(void)setEBike:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

