/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, HDCodableRoutineLocation;

@interface HDCodableRoutinePredictedLocation : PBCodable <NSCopying> {

	double _confidence;
	double _nextEntryTime;
	NSData* _geoData;
	HDCodableRoutineLocation* _locationOfInterest;
	int _modeOfTransportation;
	int _sourceType;
	SCD_Struct_HD11 _has;

}

@property (nonatomic,readonly) BOOL hasLocationOfInterest; 
@property (nonatomic,retain) HDCodableRoutineLocation * locationOfInterest;              //@synthesize locationOfInterest=_locationOfInterest - In the implementation block
@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) double confidence;                                          //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) BOOL hasNextEntryTime; 
@property (assign,nonatomic) double nextEntryTime;                                       //@synthesize nextEntryTime=_nextEntryTime - In the implementation block
@property (assign,nonatomic) BOOL hasModeOfTransportation; 
@property (assign,nonatomic) int modeOfTransportation;                                   //@synthesize modeOfTransportation=_modeOfTransportation - In the implementation block
@property (assign,nonatomic) BOOL hasSourceType; 
@property (assign,nonatomic) int sourceType;                                             //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,readonly) BOOL hasGeoData; 
@property (nonatomic,retain) NSData * geoData;                                           //@synthesize geoData=_geoData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(double)confidence;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setConfidence:(double)arg1 ;
-(int)sourceType;
-(void)setSourceType:(int)arg1 ;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(HDCodableRoutineLocation *)locationOfInterest;
-(void)setLocationOfInterest:(HDCodableRoutineLocation *)arg1 ;
-(id)sourceTypeAsString:(int)arg1 ;
-(int)StringAsSourceType:(id)arg1 ;
-(BOOL)hasSourceType;
-(void)setHasSourceType:(BOOL)arg1 ;
-(double)nextEntryTime;
-(int)modeOfTransportation;
-(void)setModeOfTransportation:(int)arg1 ;
-(void)setGeoData:(NSData *)arg1 ;
-(BOOL)hasGeoData;
-(NSData *)geoData;
-(BOOL)hasLocationOfInterest;
-(void)setNextEntryTime:(double)arg1 ;
-(void)setHasNextEntryTime:(BOOL)arg1 ;
-(BOOL)hasNextEntryTime;
-(void)setHasModeOfTransportation:(BOOL)arg1 ;
-(BOOL)hasModeOfTransportation;
-(id)modeOfTransportationAsString:(int)arg1 ;
-(int)StringAsModeOfTransportation:(id)arg1 ;
@end

