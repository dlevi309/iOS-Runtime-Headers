/*
* Generated on Thursday, January 14, 2021 at 2:29:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricsManagerBTCoexModeChange : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _a2dpConnectionCount;
	unsigned _clamshellClosed;
	unsigned _coexMode;
	unsigned _hidConnectionCount;
	int _rssi;
	unsigned _scoConnectionCount;
	unsigned _wifiInfraChainConfig;
	unsigned _wifiInfraChannel;
	unsigned _wifiInfraPhyMode;
	SCD_Struct_AW14 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;               //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCoexMode; 
@property (assign,nonatomic) unsigned coexMode;                          //@synthesize coexMode=_coexMode - In the implementation block
@property (assign,nonatomic) BOOL hasA2dpConnectionCount; 
@property (assign,nonatomic) unsigned a2dpConnectionCount;               //@synthesize a2dpConnectionCount=_a2dpConnectionCount - In the implementation block
@property (assign,nonatomic) BOOL hasHidConnectionCount; 
@property (assign,nonatomic) unsigned hidConnectionCount;                //@synthesize hidConnectionCount=_hidConnectionCount - In the implementation block
@property (assign,nonatomic) BOOL hasScoConnectionCount; 
@property (assign,nonatomic) unsigned scoConnectionCount;                //@synthesize scoConnectionCount=_scoConnectionCount - In the implementation block
@property (assign,nonatomic) BOOL hasWifiInfraChannel; 
@property (assign,nonatomic) unsigned wifiInfraChannel;                  //@synthesize wifiInfraChannel=_wifiInfraChannel - In the implementation block
@property (assign,nonatomic) BOOL hasWifiInfraChainConfig; 
@property (assign,nonatomic) unsigned wifiInfraChainConfig;              //@synthesize wifiInfraChainConfig=_wifiInfraChainConfig - In the implementation block
@property (assign,nonatomic) BOOL hasWifiInfraPhyMode; 
@property (assign,nonatomic) unsigned wifiInfraPhyMode;                  //@synthesize wifiInfraPhyMode=_wifiInfraPhyMode - In the implementation block
@property (assign,nonatomic) BOOL hasClamshellClosed; 
@property (assign,nonatomic) unsigned clamshellClosed;                   //@synthesize clamshellClosed=_clamshellClosed - In the implementation block
@property (assign,nonatomic) BOOL hasRssi; 
@property (assign,nonatomic) int rssi;                                   //@synthesize rssi=_rssi - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHasWifiInfraPhyMode:(BOOL)arg1 ;
-(void)setRssi:(int)arg1 ;
-(void)setHasRssi:(BOOL)arg1 ;
-(void)setScoConnectionCount:(unsigned)arg1 ;
-(BOOL)hasRssi;
-(unsigned)wifiInfraChainConfig;
-(BOOL)hasClamshellClosed;
-(unsigned long long)timestamp;
-(unsigned)wifiInfraPhyMode;
-(void)setWifiInfraChannel:(unsigned)arg1 ;
-(int)rssi;
-(BOOL)hasHidConnectionCount;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasA2dpConnectionCount;
-(void)setHasA2dpConnectionCount:(BOOL)arg1 ;
-(unsigned)scoConnectionCount;
-(void)setClamshellClosed:(unsigned)arg1 ;
-(void)setHasWifiInfraChannel:(BOOL)arg1 ;
-(id)description;
-(void)setWifiInfraChainConfig:(unsigned)arg1 ;
-(unsigned)coexMode;
-(void)setHidConnectionCount:(unsigned)arg1 ;
-(void)setHasWifiInfraChainConfig:(BOOL)arg1 ;
-(void)setHasClamshellClosed:(BOOL)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasScoConnectionCount;
-(unsigned long long)hash;
-(void)setHasHidConnectionCount:(BOOL)arg1 ;
-(void)setA2dpConnectionCount:(unsigned)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasWifiInfraChainConfig;
-(void)setCoexMode:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned)wifiInfraChannel;
-(void)setWifiInfraPhyMode:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasScoConnectionCount:(BOOL)arg1 ;
-(unsigned)hidConnectionCount;
-(BOOL)hasWifiInfraPhyMode;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)hasWifiInfraChannel;
-(unsigned)a2dpConnectionCount;
-(void)setHasCoexMode:(BOOL)arg1 ;
-(unsigned)clamshellClosed;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasCoexMode;
@end

