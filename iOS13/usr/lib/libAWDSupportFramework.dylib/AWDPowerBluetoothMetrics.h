/*
* Generated on Monday, March 1, 2021 at 2:35:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDPowerBluetoothMetrics : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _btConnectedDuration;
	unsigned _btOthersDuration;
	unsigned _btRxDuration;
	unsigned _btSleepDuration;
	unsigned _btTotalPowerMicroWatt;
	unsigned _btTxDuration;
	SCD_Struct_AW17 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasBtConnectedDuration; 
@property (assign,nonatomic) unsigned btConnectedDuration;                //@synthesize btConnectedDuration=_btConnectedDuration - In the implementation block
@property (assign,nonatomic) BOOL hasBtTxDuration; 
@property (assign,nonatomic) unsigned btTxDuration;                       //@synthesize btTxDuration=_btTxDuration - In the implementation block
@property (assign,nonatomic) BOOL hasBtRxDuration; 
@property (assign,nonatomic) unsigned btRxDuration;                       //@synthesize btRxDuration=_btRxDuration - In the implementation block
@property (assign,nonatomic) BOOL hasBtSleepDuration; 
@property (assign,nonatomic) unsigned btSleepDuration;                    //@synthesize btSleepDuration=_btSleepDuration - In the implementation block
@property (assign,nonatomic) BOOL hasBtOthersDuration; 
@property (assign,nonatomic) unsigned btOthersDuration;                   //@synthesize btOthersDuration=_btOthersDuration - In the implementation block
@property (assign,nonatomic) BOOL hasBtTotalPowerMicroWatt; 
@property (assign,nonatomic) unsigned btTotalPowerMicroWatt;              //@synthesize btTotalPowerMicroWatt=_btTotalPowerMicroWatt - In the implementation block
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
-(void)setBtConnectedDuration:(unsigned)arg1 ;
-(void)setBtOthersDuration:(unsigned)arg1 ;
-(void)setBtRxDuration:(unsigned)arg1 ;
-(void)setBtTxDuration:(unsigned)arg1 ;
-(void)setBtSleepDuration:(unsigned)arg1 ;
-(void)setBtTotalPowerMicroWatt:(unsigned)arg1 ;
-(void)setHasBtConnectedDuration:(BOOL)arg1 ;
-(BOOL)hasBtConnectedDuration;
-(void)setHasBtTxDuration:(BOOL)arg1 ;
-(BOOL)hasBtTxDuration;
-(void)setHasBtRxDuration:(BOOL)arg1 ;
-(BOOL)hasBtRxDuration;
-(void)setHasBtSleepDuration:(BOOL)arg1 ;
-(BOOL)hasBtSleepDuration;
-(void)setHasBtOthersDuration:(BOOL)arg1 ;
-(BOOL)hasBtOthersDuration;
-(void)setHasBtTotalPowerMicroWatt:(BOOL)arg1 ;
-(BOOL)hasBtTotalPowerMicroWatt;
-(unsigned)btConnectedDuration;
-(unsigned)btTxDuration;
-(unsigned)btRxDuration;
-(unsigned)btSleepDuration;
-(unsigned)btOthersDuration;
-(unsigned)btTotalPowerMicroWatt;
@end

