/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSMutableArray;

@interface HDCodableRoutineLocation : PBCodable <NSCopying> {

	double _confidence;
	double _latitude;
	double _longitude;
	double _uncertainty;
	NSData* _geoData;
	int _locationOfInterestType;
	NSString* _uuid;
	NSMutableArray* _visits;
	SCD_Struct_HD9 _has;

}

@property (assign,nonatomic) BOOL hasLatitude; 
@property (assign,nonatomic) double latitude;                             //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) BOOL hasLongitude; 
@property (assign,nonatomic) double longitude;                            //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) BOOL hasUncertainty; 
@property (assign,nonatomic) double uncertainty;                          //@synthesize uncertainty=_uncertainty - In the implementation block
@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) double confidence;                           //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSString * uuid;                             //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) BOOL hasLocationOfInterestType; 
@property (assign,nonatomic) int locationOfInterestType;                  //@synthesize locationOfInterestType=_locationOfInterestType - In the implementation block
@property (nonatomic,readonly) BOOL hasGeoData; 
@property (nonatomic,retain) NSData * geoData;                            //@synthesize geoData=_geoData - In the implementation block
@property (nonatomic,retain) NSMutableArray * visits;                     //@synthesize visits=_visits - In the implementation block
+(Class)visitsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)uuid;
-(double)confidence;
-(void)setUuid:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(double)latitude;
-(double)longitude;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setConfidence:(double)arg1 ;
-(NSMutableArray *)visits;
-(void)setLongitude:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(double)uncertainty;
-(void)setHasLatitude:(BOOL)arg1 ;
-(BOOL)hasLatitude;
-(void)setHasLongitude:(BOOL)arg1 ;
-(BOOL)hasLongitude;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(BOOL)hasUuid;
-(void)setVisits:(NSMutableArray *)arg1 ;
-(void)addVisits:(id)arg1 ;
-(void)setUncertainty:(double)arg1 ;
-(unsigned long long)visitsCount;
-(void)setGeoData:(NSData *)arg1 ;
-(void)clearVisits;
-(id)visitsAtIndex:(unsigned long long)arg1 ;
-(void)setHasUncertainty:(BOOL)arg1 ;
-(BOOL)hasUncertainty;
-(int)locationOfInterestType;
-(void)setLocationOfInterestType:(int)arg1 ;
-(void)setHasLocationOfInterestType:(BOOL)arg1 ;
-(BOOL)hasLocationOfInterestType;
-(id)locationOfInterestTypeAsString:(int)arg1 ;
-(int)StringAsLocationOfInterestType:(id)arg1 ;
-(BOOL)hasGeoData;
-(NSData *)geoData;
@end

