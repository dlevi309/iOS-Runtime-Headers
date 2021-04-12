/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/RTMetricManagerMetricIdProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCoreRoutineStateModelConfidence : PBCodable <RTMetricManagerMetricIdProtocol, NSCopying> {

	unsigned long long _timestamp;
	unsigned _confidence;
	unsigned _impossibleTransitions;
	unsigned _nearbyLocations;
	SCD_Struct_AW1 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasImpossibleTransitions; 
@property (assign,nonatomic) unsigned impossibleTransitions;              //@synthesize impossibleTransitions=_impossibleTransitions - In the implementation block
@property (assign,nonatomic) BOOL hasNearbyLocations; 
@property (assign,nonatomic) unsigned nearbyLocations;                    //@synthesize nearbyLocations=_nearbyLocations - In the implementation block
@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) unsigned confidence;                         //@synthesize confidence=_confidence - In the implementation block
-(id)_init;
-(long long)metricId;
-(BOOL)valid:(id*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)confidence;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setConfidence:(unsigned)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(void)setNearbyLocations:(unsigned)arg1 ;
-(void)setImpossibleTransitions:(unsigned)arg1 ;
-(unsigned)nearbyLocations;
-(unsigned)impossibleTransitions;
-(void)setHasImpossibleTransitions:(BOOL)arg1 ;
-(BOOL)hasImpossibleTransitions;
-(void)setHasNearbyLocations:(BOOL)arg1 ;
-(BOOL)hasNearbyLocations;
@end

