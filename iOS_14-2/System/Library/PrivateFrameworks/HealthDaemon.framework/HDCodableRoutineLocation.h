/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)confidence;
-(id)dictionaryRepresentation;
-(double)latitude;
-(void)setHasLatitude:(BOOL)arg1 ;
-(NSString *)uuid;
-(BOOL)hasLatitude;
-(BOOL)hasLongitude;
-(void)setHasLongitude:(BOOL)arg1 ;
-(void)setHasUncertainty:(BOOL)arg1 ;
-(double)longitude;
-(BOOL)hasUuid;
-(void)setLongitude:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(id)description;
-(BOOL)hasUncertainty;
-(void)setConfidence:(double)arg1 ;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(NSData *)geoData;
-(unsigned long long)hash;
-(NSMutableArray *)visits;
-(void)setVisits:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setUncertainty:(double)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(double)uncertainty;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)addVisits:(id)arg1 ;
-(void)setGeoData:(NSData *)arg1 ;
-(unsigned long long)visitsCount;
-(void)clearVisits;
-(id)visitsAtIndex:(unsigned long long)arg1 ;
-(int)locationOfInterestType;
-(void)setLocationOfInterestType:(int)arg1 ;
-(void)setHasLocationOfInterestType:(BOOL)arg1 ;
-(BOOL)hasLocationOfInterestType;
-(id)locationOfInterestTypeAsString:(int)arg1 ;
-(int)StringAsLocationOfInterestType:(id)arg1 ;
-(BOOL)hasGeoData;
@end

