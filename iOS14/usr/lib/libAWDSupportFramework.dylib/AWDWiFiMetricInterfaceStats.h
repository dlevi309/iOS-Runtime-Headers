/*
* Generated on Thursday, January 14, 2021 at 2:29:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricInterfaceStats : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _a2dpAssocMinutes;
	unsigned _cellularDataRxBytes;
	unsigned _cellularDataTxBytes;
	unsigned _hidAssocMinutes;
	unsigned _scoAssocMinutes;
	unsigned _statsCollectionMinutes;
	unsigned _wifiA2dpRxBytes;
	unsigned _wifiA2dpTxBytes;
	unsigned _wifiAssocMinutes;
	unsigned _wifiHidRxBytes;
	unsigned _wifiHidTxBytes;
	unsigned _wifiRxBytes;
	unsigned _wifiScoRxBytes;
	unsigned _wifiScoTxBytes;
	unsigned _wifiTxBytes;
	SCD_Struct_AW9 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasWifiA2dpRxBytes; 
@property (assign,nonatomic) unsigned wifiA2dpRxBytes;                     //@synthesize wifiA2dpRxBytes=_wifiA2dpRxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasWifiScoRxBytes; 
@property (assign,nonatomic) unsigned wifiScoRxBytes;                      //@synthesize wifiScoRxBytes=_wifiScoRxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasWifiRxBytes; 
@property (assign,nonatomic) unsigned wifiRxBytes;                         //@synthesize wifiRxBytes=_wifiRxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasWifiHidRxBytes; 
@property (assign,nonatomic) unsigned wifiHidRxBytes;                      //@synthesize wifiHidRxBytes=_wifiHidRxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasCellularDataRxBytes; 
@property (assign,nonatomic) unsigned cellularDataRxBytes;                 //@synthesize cellularDataRxBytes=_cellularDataRxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasWifiA2dpTxBytes; 
@property (assign,nonatomic) unsigned wifiA2dpTxBytes;                     //@synthesize wifiA2dpTxBytes=_wifiA2dpTxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasWifiScoTxBytes; 
@property (assign,nonatomic) unsigned wifiScoTxBytes;                      //@synthesize wifiScoTxBytes=_wifiScoTxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasWifiTxBytes; 
@property (assign,nonatomic) unsigned wifiTxBytes;                         //@synthesize wifiTxBytes=_wifiTxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasWifiHidTxBytes; 
@property (assign,nonatomic) unsigned wifiHidTxBytes;                      //@synthesize wifiHidTxBytes=_wifiHidTxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasCellularDataTxBytes; 
@property (assign,nonatomic) unsigned cellularDataTxBytes;                 //@synthesize cellularDataTxBytes=_cellularDataTxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasStatsCollectionMinutes; 
@property (assign,nonatomic) unsigned statsCollectionMinutes;              //@synthesize statsCollectionMinutes=_statsCollectionMinutes - In the implementation block
@property (assign,nonatomic) BOOL hasWifiAssocMinutes; 
@property (assign,nonatomic) unsigned wifiAssocMinutes;                    //@synthesize wifiAssocMinutes=_wifiAssocMinutes - In the implementation block
@property (assign,nonatomic) BOOL hasA2dpAssocMinutes; 
@property (assign,nonatomic) unsigned a2dpAssocMinutes;                    //@synthesize a2dpAssocMinutes=_a2dpAssocMinutes - In the implementation block
@property (assign,nonatomic) BOOL hasScoAssocMinutes; 
@property (assign,nonatomic) unsigned scoAssocMinutes;                     //@synthesize scoAssocMinutes=_scoAssocMinutes - In the implementation block
@property (assign,nonatomic) BOOL hasHidAssocMinutes; 
@property (assign,nonatomic) unsigned hidAssocMinutes;                     //@synthesize hidAssocMinutes=_hidAssocMinutes - In the implementation block
-(void)setHasWifiHidRxBytes:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasWifiA2dpTxBytes:(BOOL)arg1 ;
-(void)setWifiScoTxBytes:(unsigned)arg1 ;
-(void)setHasWifiTxBytes:(BOOL)arg1 ;
-(unsigned)wifiHidRxBytes;
-(void)setHasWifiScoRxBytes:(BOOL)arg1 ;
-(void)setWifiHidTxBytes:(unsigned)arg1 ;
-(BOOL)hasScoAssocMinutes;
-(unsigned)wifiScoRxBytes;
-(void)setHasA2dpAssocMinutes:(BOOL)arg1 ;
-(BOOL)hasHidAssocMinutes;
-(void)setHasWifiA2dpRxBytes:(BOOL)arg1 ;
-(void)setCellularDataTxBytes:(unsigned)arg1 ;
-(void)setHasScoAssocMinutes:(BOOL)arg1 ;
-(unsigned long long)timestamp;
-(BOOL)hasStatsCollectionMinutes;
-(unsigned)scoAssocMinutes;
-(void)mergeFrom:(id)arg1 ;
-(void)setWifiAssocMinutes:(unsigned)arg1 ;
-(unsigned)hidAssocMinutes;
-(void)setWifiTxBytes:(unsigned)arg1 ;
-(void)setWifiA2dpTxBytes:(unsigned)arg1 ;
-(void)setHasStatsCollectionMinutes:(BOOL)arg1 ;
-(void)setHasCellularDataTxBytes:(BOOL)arg1 ;
-(unsigned)statsCollectionMinutes;
-(unsigned)a2dpAssocMinutes;
-(unsigned)wifiA2dpRxBytes;
-(unsigned)wifiTxBytes;
-(void)setWifiA2dpRxBytes:(unsigned)arg1 ;
-(BOOL)hasWifiA2dpTxBytes;
-(BOOL)hasWifiHidTxBytes;
-(BOOL)hasWifiScoRxBytes;
-(id)description;
-(void)setHasWifiAssocMinutes:(BOOL)arg1 ;
-(BOOL)hasWifiAssocMinutes;
-(unsigned)wifiA2dpTxBytes;
-(BOOL)hasWifiTxBytes;
-(void)setCellularDataRxBytes:(unsigned)arg1 ;
-(void)setHasWifiScoTxBytes:(BOOL)arg1 ;
-(void)setHasWifiHidTxBytes:(BOOL)arg1 ;
-(unsigned)wifiScoTxBytes;
-(void)setHasHidAssocMinutes:(BOOL)arg1 ;
-(BOOL)hasA2dpAssocMinutes;
-(void)setStatsCollectionMinutes:(unsigned)arg1 ;
-(void)setWifiRxBytes:(unsigned)arg1 ;
-(BOOL)hasWifiRxBytes;
-(void)setHidAssocMinutes:(unsigned)arg1 ;
-(unsigned)cellularDataRxBytes;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setScoAssocMinutes:(unsigned)arg1 ;
-(BOOL)hasWifiA2dpRxBytes;
-(BOOL)hasTimestamp;
-(BOOL)hasCellularDataRxBytes;
-(void)setHasCellularDataRxBytes:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned)wifiHidTxBytes;
-(void)setWifiHidRxBytes:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)wifiRxBytes;
-(unsigned)wifiAssocMinutes;
-(BOOL)hasWifiScoTxBytes;
-(void)setA2dpAssocMinutes:(unsigned)arg1 ;
-(unsigned)cellularDataTxBytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setWifiScoRxBytes:(unsigned)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setHasWifiRxBytes:(BOOL)arg1 ;
-(BOOL)hasCellularDataTxBytes;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasWifiHidRxBytes;
@end

