/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(HDCodableRoutineLocation *)currentLocation;
-(id)dictionaryRepresentation;
-(void)setCurrentLocation:(HDCodableRoutineLocation *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)hasCurrentLocation;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTriggerTypes:(unsigned long long)arg1 ;
-(void)setHasTriggerTypes:(BOOL)arg1 ;
-(BOOL)hasTriggerTypes;
-(unsigned long long)triggerTypes;
@end

