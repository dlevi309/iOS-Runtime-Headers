/*
* Generated on Monday, March 1, 2021 at 2:35:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiWcpsStats : PBCodable <NSCopying> {

	unsigned long long _avgCca;
	unsigned long long _avgRssi;
	unsigned long long _avgRxRetry;
	unsigned long long _avgSnr;
	unsigned long long _avgTxAirLatency;
	unsigned long long _avgTxPacketLoss;
	unsigned long long _avgTxRetrans;
	unsigned long long _cntAwdlActive;
	unsigned long long _cntDisBtActLatHi;
	unsigned long long _cntDisBtEv3;
	unsigned long long _cntRedBtActLatLow;
	unsigned long long _cntRedBtInactLatHi;
	unsigned long long _cntVoBadPeriods;
	unsigned long long _cntVoGoodPeriods;
	unsigned long long _durActiveMs;
	unsigned long long _durSleepMs;
	unsigned long long _durTotalMs;
	unsigned long long _durWcpsDisabled;
	unsigned long long _durWcpsEnabled;
	unsigned long long _durWcpsReduced;
	unsigned long long _endCca;
	unsigned long long _endRssi;
	unsigned long long _endRxRetry;
	unsigned long long _endSnr;
	unsigned long long _endTxAirLatency;
	unsigned long long _endTxPacketLoss;
	unsigned long long _endTxRetrans;
	unsigned long long _timestamp;
	SCD_Struct_AW42 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDurTotalMs; 
@property (assign,nonatomic) unsigned long long durTotalMs;                      //@synthesize durTotalMs=_durTotalMs - In the implementation block
@property (assign,nonatomic) BOOL hasDurActiveMs; 
@property (assign,nonatomic) unsigned long long durActiveMs;                     //@synthesize durActiveMs=_durActiveMs - In the implementation block
@property (assign,nonatomic) BOOL hasDurSleepMs; 
@property (assign,nonatomic) unsigned long long durSleepMs;                      //@synthesize durSleepMs=_durSleepMs - In the implementation block
@property (assign,nonatomic) BOOL hasDurWcpsEnabled; 
@property (assign,nonatomic) unsigned long long durWcpsEnabled;                  //@synthesize durWcpsEnabled=_durWcpsEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasDurWcpsReduced; 
@property (assign,nonatomic) unsigned long long durWcpsReduced;                  //@synthesize durWcpsReduced=_durWcpsReduced - In the implementation block
@property (assign,nonatomic) BOOL hasDurWcpsDisabled; 
@property (assign,nonatomic) unsigned long long durWcpsDisabled;                 //@synthesize durWcpsDisabled=_durWcpsDisabled - In the implementation block
@property (assign,nonatomic) BOOL hasCntVoGoodPeriods; 
@property (assign,nonatomic) unsigned long long cntVoGoodPeriods;                //@synthesize cntVoGoodPeriods=_cntVoGoodPeriods - In the implementation block
@property (assign,nonatomic) BOOL hasCntVoBadPeriods; 
@property (assign,nonatomic) unsigned long long cntVoBadPeriods;                 //@synthesize cntVoBadPeriods=_cntVoBadPeriods - In the implementation block
@property (assign,nonatomic) BOOL hasAvgRssi; 
@property (assign,nonatomic) unsigned long long avgRssi;                         //@synthesize avgRssi=_avgRssi - In the implementation block
@property (assign,nonatomic) BOOL hasAvgSnr; 
@property (assign,nonatomic) unsigned long long avgSnr;                          //@synthesize avgSnr=_avgSnr - In the implementation block
@property (assign,nonatomic) BOOL hasAvgCca; 
@property (assign,nonatomic) unsigned long long avgCca;                          //@synthesize avgCca=_avgCca - In the implementation block
@property (assign,nonatomic) BOOL hasAvgTxAirLatency; 
@property (assign,nonatomic) unsigned long long avgTxAirLatency;                 //@synthesize avgTxAirLatency=_avgTxAirLatency - In the implementation block
@property (assign,nonatomic) BOOL hasAvgTxPacketLoss; 
@property (assign,nonatomic) unsigned long long avgTxPacketLoss;                 //@synthesize avgTxPacketLoss=_avgTxPacketLoss - In the implementation block
@property (assign,nonatomic) BOOL hasAvgTxRetrans; 
@property (assign,nonatomic) unsigned long long avgTxRetrans;                    //@synthesize avgTxRetrans=_avgTxRetrans - In the implementation block
@property (assign,nonatomic) BOOL hasAvgRxRetry; 
@property (assign,nonatomic) unsigned long long avgRxRetry;                      //@synthesize avgRxRetry=_avgRxRetry - In the implementation block
@property (assign,nonatomic) BOOL hasEndRssi; 
@property (assign,nonatomic) unsigned long long endRssi;                         //@synthesize endRssi=_endRssi - In the implementation block
@property (assign,nonatomic) BOOL hasEndSnr; 
@property (assign,nonatomic) unsigned long long endSnr;                          //@synthesize endSnr=_endSnr - In the implementation block
@property (assign,nonatomic) BOOL hasEndCca; 
@property (assign,nonatomic) unsigned long long endCca;                          //@synthesize endCca=_endCca - In the implementation block
@property (assign,nonatomic) BOOL hasEndTxAirLatency; 
@property (assign,nonatomic) unsigned long long endTxAirLatency;                 //@synthesize endTxAirLatency=_endTxAirLatency - In the implementation block
@property (assign,nonatomic) BOOL hasEndTxPacketLoss; 
@property (assign,nonatomic) unsigned long long endTxPacketLoss;                 //@synthesize endTxPacketLoss=_endTxPacketLoss - In the implementation block
@property (assign,nonatomic) BOOL hasEndTxRetrans; 
@property (assign,nonatomic) unsigned long long endTxRetrans;                    //@synthesize endTxRetrans=_endTxRetrans - In the implementation block
@property (assign,nonatomic) BOOL hasEndRxRetry; 
@property (assign,nonatomic) unsigned long long endRxRetry;                      //@synthesize endRxRetry=_endRxRetry - In the implementation block
@property (assign,nonatomic) BOOL hasCntRedBtActLatLow; 
@property (assign,nonatomic) unsigned long long cntRedBtActLatLow;               //@synthesize cntRedBtActLatLow=_cntRedBtActLatLow - In the implementation block
@property (assign,nonatomic) BOOL hasCntRedBtInactLatHi; 
@property (assign,nonatomic) unsigned long long cntRedBtInactLatHi;              //@synthesize cntRedBtInactLatHi=_cntRedBtInactLatHi - In the implementation block
@property (assign,nonatomic) BOOL hasCntDisBtActLatHi; 
@property (assign,nonatomic) unsigned long long cntDisBtActLatHi;                //@synthesize cntDisBtActLatHi=_cntDisBtActLatHi - In the implementation block
@property (assign,nonatomic) BOOL hasCntDisBtEv3; 
@property (assign,nonatomic) unsigned long long cntDisBtEv3;                     //@synthesize cntDisBtEv3=_cntDisBtEv3 - In the implementation block
@property (assign,nonatomic) BOOL hasCntAwdlActive; 
@property (assign,nonatomic) unsigned long long cntAwdlActive;                   //@synthesize cntAwdlActive=_cntAwdlActive - In the implementation block
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
-(void)setDurTotalMs:(unsigned long long)arg1 ;
-(void)setHasDurTotalMs:(BOOL)arg1 ;
-(BOOL)hasDurTotalMs;
-(void)setDurActiveMs:(unsigned long long)arg1 ;
-(void)setHasDurActiveMs:(BOOL)arg1 ;
-(BOOL)hasDurActiveMs;
-(void)setDurSleepMs:(unsigned long long)arg1 ;
-(void)setHasDurSleepMs:(BOOL)arg1 ;
-(BOOL)hasDurSleepMs;
-(void)setDurWcpsEnabled:(unsigned long long)arg1 ;
-(void)setHasDurWcpsEnabled:(BOOL)arg1 ;
-(BOOL)hasDurWcpsEnabled;
-(void)setDurWcpsReduced:(unsigned long long)arg1 ;
-(void)setHasDurWcpsReduced:(BOOL)arg1 ;
-(BOOL)hasDurWcpsReduced;
-(void)setDurWcpsDisabled:(unsigned long long)arg1 ;
-(void)setHasDurWcpsDisabled:(BOOL)arg1 ;
-(BOOL)hasDurWcpsDisabled;
-(void)setCntVoGoodPeriods:(unsigned long long)arg1 ;
-(void)setHasCntVoGoodPeriods:(BOOL)arg1 ;
-(BOOL)hasCntVoGoodPeriods;
-(void)setCntVoBadPeriods:(unsigned long long)arg1 ;
-(void)setHasCntVoBadPeriods:(BOOL)arg1 ;
-(BOOL)hasCntVoBadPeriods;
-(void)setAvgRssi:(unsigned long long)arg1 ;
-(void)setHasAvgRssi:(BOOL)arg1 ;
-(BOOL)hasAvgRssi;
-(void)setAvgSnr:(unsigned long long)arg1 ;
-(void)setHasAvgSnr:(BOOL)arg1 ;
-(BOOL)hasAvgSnr;
-(void)setAvgCca:(unsigned long long)arg1 ;
-(void)setHasAvgCca:(BOOL)arg1 ;
-(BOOL)hasAvgCca;
-(void)setAvgTxAirLatency:(unsigned long long)arg1 ;
-(void)setHasAvgTxAirLatency:(BOOL)arg1 ;
-(BOOL)hasAvgTxAirLatency;
-(void)setAvgTxPacketLoss:(unsigned long long)arg1 ;
-(void)setHasAvgTxPacketLoss:(BOOL)arg1 ;
-(BOOL)hasAvgTxPacketLoss;
-(void)setAvgTxRetrans:(unsigned long long)arg1 ;
-(void)setHasAvgTxRetrans:(BOOL)arg1 ;
-(BOOL)hasAvgTxRetrans;
-(void)setAvgRxRetry:(unsigned long long)arg1 ;
-(void)setHasAvgRxRetry:(BOOL)arg1 ;
-(BOOL)hasAvgRxRetry;
-(void)setEndRssi:(unsigned long long)arg1 ;
-(void)setHasEndRssi:(BOOL)arg1 ;
-(BOOL)hasEndRssi;
-(void)setEndSnr:(unsigned long long)arg1 ;
-(void)setHasEndSnr:(BOOL)arg1 ;
-(BOOL)hasEndSnr;
-(void)setEndCca:(unsigned long long)arg1 ;
-(void)setHasEndCca:(BOOL)arg1 ;
-(BOOL)hasEndCca;
-(void)setEndTxAirLatency:(unsigned long long)arg1 ;
-(void)setHasEndTxAirLatency:(BOOL)arg1 ;
-(BOOL)hasEndTxAirLatency;
-(void)setEndTxPacketLoss:(unsigned long long)arg1 ;
-(void)setHasEndTxPacketLoss:(BOOL)arg1 ;
-(BOOL)hasEndTxPacketLoss;
-(void)setEndTxRetrans:(unsigned long long)arg1 ;
-(void)setHasEndTxRetrans:(BOOL)arg1 ;
-(BOOL)hasEndTxRetrans;
-(void)setEndRxRetry:(unsigned long long)arg1 ;
-(void)setHasEndRxRetry:(BOOL)arg1 ;
-(BOOL)hasEndRxRetry;
-(void)setCntRedBtActLatLow:(unsigned long long)arg1 ;
-(void)setHasCntRedBtActLatLow:(BOOL)arg1 ;
-(BOOL)hasCntRedBtActLatLow;
-(void)setCntRedBtInactLatHi:(unsigned long long)arg1 ;
-(void)setHasCntRedBtInactLatHi:(BOOL)arg1 ;
-(BOOL)hasCntRedBtInactLatHi;
-(void)setCntDisBtActLatHi:(unsigned long long)arg1 ;
-(void)setHasCntDisBtActLatHi:(BOOL)arg1 ;
-(BOOL)hasCntDisBtActLatHi;
-(void)setCntDisBtEv3:(unsigned long long)arg1 ;
-(void)setHasCntDisBtEv3:(BOOL)arg1 ;
-(BOOL)hasCntDisBtEv3;
-(void)setCntAwdlActive:(unsigned long long)arg1 ;
-(void)setHasCntAwdlActive:(BOOL)arg1 ;
-(BOOL)hasCntAwdlActive;
-(unsigned long long)durTotalMs;
-(unsigned long long)durActiveMs;
-(unsigned long long)durSleepMs;
-(unsigned long long)durWcpsEnabled;
-(unsigned long long)durWcpsReduced;
-(unsigned long long)durWcpsDisabled;
-(unsigned long long)cntVoGoodPeriods;
-(unsigned long long)cntVoBadPeriods;
-(unsigned long long)avgRssi;
-(unsigned long long)avgSnr;
-(unsigned long long)avgCca;
-(unsigned long long)avgTxAirLatency;
-(unsigned long long)avgTxPacketLoss;
-(unsigned long long)avgTxRetrans;
-(unsigned long long)avgRxRetry;
-(unsigned long long)endRssi;
-(unsigned long long)endSnr;
-(unsigned long long)endCca;
-(unsigned long long)endTxAirLatency;
-(unsigned long long)endTxPacketLoss;
-(unsigned long long)endTxRetrans;
-(unsigned long long)endRxRetry;
-(unsigned long long)cntRedBtActLatLow;
-(unsigned long long)cntRedBtInactLatHi;
-(unsigned long long)cntDisBtActLatHi;
-(unsigned long long)cntDisBtEv3;
-(unsigned long long)cntAwdlActive;
@end

