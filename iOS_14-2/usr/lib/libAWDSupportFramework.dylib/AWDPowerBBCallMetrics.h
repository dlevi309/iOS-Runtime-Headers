/*
* Generated on Thursday, January 14, 2021 at 2:29:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDPowerBBCallMetrics : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _bBAndDataPowerMicroWatt;
	unsigned _bBPowerMicroWatt;
	unsigned _bBTotalAndDataDuration;
	unsigned _bBTotalCallDuration;
	unsigned _connectedSleepDuration;
	unsigned _connectedSleepDurationData;
	NSMutableArray* _metrics;
	SCD_Struct_AW16 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSMutableArray * metrics;                         //@synthesize metrics=_metrics - In the implementation block
@property (assign,nonatomic) BOOL hasBBTotalCallDuration; 
@property (assign,nonatomic) unsigned bBTotalCallDuration;                     //@synthesize bBTotalCallDuration=_bBTotalCallDuration - In the implementation block
@property (assign,nonatomic) BOOL hasBBPowerMicroWatt; 
@property (assign,nonatomic) unsigned bBPowerMicroWatt;                        //@synthesize bBPowerMicroWatt=_bBPowerMicroWatt - In the implementation block
@property (assign,nonatomic) BOOL hasBBTotalAndDataDuration; 
@property (assign,nonatomic) unsigned bBTotalAndDataDuration;                  //@synthesize bBTotalAndDataDuration=_bBTotalAndDataDuration - In the implementation block
@property (assign,nonatomic) BOOL hasBBAndDataPowerMicroWatt; 
@property (assign,nonatomic) unsigned bBAndDataPowerMicroWatt;                 //@synthesize bBAndDataPowerMicroWatt=_bBAndDataPowerMicroWatt - In the implementation block
@property (assign,nonatomic) BOOL hasConnectedSleepDuration; 
@property (assign,nonatomic) unsigned connectedSleepDuration;                  //@synthesize connectedSleepDuration=_connectedSleepDuration - In the implementation block
@property (assign,nonatomic) BOOL hasConnectedSleepDurationData; 
@property (assign,nonatomic) unsigned connectedSleepDurationData;              //@synthesize connectedSleepDurationData=_connectedSleepDurationData - In the implementation block
+(Class)metricsType;
-(void)setMetrics:(NSMutableArray *)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)metrics;
-(void)addMetrics:(id)arg1 ;
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
-(void)dealloc;
-(unsigned long long)metricsCount;
-(void)clearMetrics;
-(id)metricsAtIndex:(unsigned long long)arg1 ;
-(void)setBBTotalCallDuration:(unsigned)arg1 ;
-(void)setHasBBTotalCallDuration:(BOOL)arg1 ;
-(BOOL)hasBBTotalCallDuration;
-(void)setBBPowerMicroWatt:(unsigned)arg1 ;
-(void)setHasBBPowerMicroWatt:(BOOL)arg1 ;
-(BOOL)hasBBPowerMicroWatt;
-(void)setBBTotalAndDataDuration:(unsigned)arg1 ;
-(void)setHasBBTotalAndDataDuration:(BOOL)arg1 ;
-(BOOL)hasBBTotalAndDataDuration;
-(void)setBBAndDataPowerMicroWatt:(unsigned)arg1 ;
-(void)setHasBBAndDataPowerMicroWatt:(BOOL)arg1 ;
-(BOOL)hasBBAndDataPowerMicroWatt;
-(void)setConnectedSleepDuration:(unsigned)arg1 ;
-(void)setHasConnectedSleepDuration:(BOOL)arg1 ;
-(BOOL)hasConnectedSleepDuration;
-(void)setConnectedSleepDurationData:(unsigned)arg1 ;
-(void)setHasConnectedSleepDurationData:(BOOL)arg1 ;
-(BOOL)hasConnectedSleepDurationData;
-(unsigned)bBTotalCallDuration;
-(unsigned)bBPowerMicroWatt;
-(unsigned)bBTotalAndDataDuration;
-(unsigned)bBAndDataPowerMicroWatt;
-(unsigned)connectedSleepDuration;
-(unsigned)connectedSleepDurationData;
@end

