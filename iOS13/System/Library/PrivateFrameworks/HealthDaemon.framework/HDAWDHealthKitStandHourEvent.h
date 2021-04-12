/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDAWDHealthKitStandHourEvent : PBCodable <NSCopying> {

	long long _standHourTimestamp;
	unsigned long long _timestamp;
	BOOL _didStand;
	SCD_Struct_HD3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasStandHourTimestamp; 
@property (assign,nonatomic) long long standHourTimestamp;              //@synthesize standHourTimestamp=_standHourTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDidStand; 
@property (assign,nonatomic) BOOL didStand;                             //@synthesize didStand=_didStand - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setStandHourTimestamp:(long long)arg1 ;
-(void)setHasStandHourTimestamp:(BOOL)arg1 ;
-(BOOL)hasStandHourTimestamp;
-(void)setDidStand:(BOOL)arg1 ;
-(void)setHasDidStand:(BOOL)arg1 ;
-(BOOL)hasDidStand;
-(long long)standHourTimestamp;
-(BOOL)didStand;
@end

