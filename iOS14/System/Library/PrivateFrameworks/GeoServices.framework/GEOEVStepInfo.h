/*
* Generated on Thursday, January 14, 2021 at 2:20:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOEVStepInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _remainingBatteryPercentage;
	unsigned _remainingTravelRange;
	struct {
		unsigned has_remainingBatteryPercentage : 1;
		unsigned has_remainingTravelRange : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasRemainingBatteryPercentage; 
@property (assign,nonatomic) double remainingBatteryPercentage; 
@property (assign,nonatomic) BOOL hasRemainingTravelRange; 
@property (assign,nonatomic) unsigned remainingTravelRange; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(id)dictionaryRepresentation;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(void)setRemainingBatteryPercentage:(double)arg1 ;
-(double)remainingBatteryPercentage;
-(void)setHasRemainingBatteryPercentage:(BOOL)arg1 ;
-(BOOL)hasRemainingBatteryPercentage;
-(void)setRemainingTravelRange:(unsigned)arg1 ;
-(unsigned)remainingTravelRange;
-(void)setHasRemainingTravelRange:(BOOL)arg1 ;
-(BOOL)hasRemainingTravelRange;
-(void)mergeFrom:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

