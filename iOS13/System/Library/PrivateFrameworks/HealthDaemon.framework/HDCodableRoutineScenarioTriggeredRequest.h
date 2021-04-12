/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableRoutineLocation;

@interface HDCodableRoutineScenarioTriggeredRequest : PBRequest <NSCopying> {

	unsigned long long _triggerTypes;
	HDCodableRoutineLocation* _currentLocation;
	SCD_Struct_HD7 _has;

}

@property (assign,nonatomic) BOOL hasTriggerTypes; 
@property (assign,nonatomic) unsigned long long triggerTypes;                         //@synthesize triggerTypes=_triggerTypes - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrentLocation; 
@property (nonatomic,retain) HDCodableRoutineLocation * currentLocation;              //@synthesize currentLocation=_currentLocation - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(HDCodableRoutineLocation *)currentLocation;
-(void)setCurrentLocation:(HDCodableRoutineLocation *)arg1 ;
-(BOOL)hasCurrentLocation;
-(unsigned long long)triggerTypes;
-(void)setTriggerTypes:(unsigned long long)arg1 ;
-(void)setHasTriggerTypes:(BOOL)arg1 ;
-(BOOL)hasTriggerTypes;
@end

