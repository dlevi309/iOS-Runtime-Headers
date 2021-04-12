/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDAWDHealthKitExperimentalCondition;

@interface HDAWDHealthKitExperimentalConditionEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	HDAWDHealthKitExperimentalCondition* _experimentalCondition;
	SCD_Struct_HD7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                             //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasExperimentalCondition; 
@property (nonatomic,retain) HDAWDHealthKitExperimentalCondition * experimentalCondition;              //@synthesize experimentalCondition=_experimentalCondition - In the implementation block
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setExperimentalCondition:(HDAWDHealthKitExperimentalCondition *)arg1 ;
-(BOOL)hasExperimentalCondition;
-(HDAWDHealthKitExperimentalCondition *)experimentalCondition;
@end

