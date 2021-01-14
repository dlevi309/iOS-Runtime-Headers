/*
* Generated on Thursday, January 14, 2021 at 2:29:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDWiFiMetric11axLinkChangeData : PBCodable <NSCopying> {

	SCD_Struct_AW15* _bcnFrmsHistorys;
	SCD_Struct_AW15* _bcnPerHistorys;
	SCD_Struct_AW15* _fwTxFrmsHistorys;
	SCD_Struct_AW15* _fwTxPerHistorys;
	SCD_Struct_AW15* _rssiHistorys;
	SCD_Struct_AW15* _txFrmsHistorys;
	SCD_Struct_AW15* _txPerHistorys;
	unsigned long long _timestamp;
	unsigned _akmSuites;
	unsigned _capabilities;
	unsigned _channel;
	unsigned _channelWidth;
	unsigned _enhancedSecurityType;
	unsigned _flags;
	unsigned _gatewayARPHistory;
	unsigned _heBEParamRecord;
	unsigned _heBKParamRecord;
	NSData* _heBSSLoadIE;
	unsigned _heBssMcsNss;
	NSData* _heCapabilitiesIE;
	unsigned _heMacCapSubfields;
	NSData* _heOperationIE;
	unsigned _heOpsParams;
	unsigned _hePhyCapSubfields;
	unsigned _heRxTxMcsMap;
	unsigned _heStaCnt;
	unsigned _heUtilization;
	unsigned _heVIParamRecord;
	unsigned _heVOParamRecord;
	unsigned _htASel;
	unsigned _htAmpduParams;
	unsigned _htExtended;
	unsigned _htInfo;
	NSData* _htSupportedMcsSet;
	unsigned _htTxBf;
	unsigned _mcastCipher;
	NSData* _muEDCAParametersIE;
	NSData* _oui;
	unsigned _phyMode;
	unsigned _reason;
	unsigned _securityType;
	unsigned _subreason;
	unsigned _ucastCipher;
	unsigned _vhtInfo;
	NSData* _vhtSupportedMcsSet;
	unsigned _wpaProtocol;
	BOOL _isInVol;
	BOOL _isLinkUp;
	SCD_Struct_AW39 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long rssiHistorysCount; 
@property (nonatomic,readonly) int* rssiHistorys; 
@property (assign,nonatomic) BOOL hasIsLinkUp; 
@property (assign,nonatomic) BOOL isLinkUp;                                           //@synthesize isLinkUp=_isLinkUp - In the implementation block
@property (assign,nonatomic) BOOL hasIsInVol; 
@property (assign,nonatomic) BOOL isInVol;                                            //@synthesize isInVol=_isInVol - In the implementation block
@property (assign,nonatomic) BOOL hasReason; 
@property (assign,nonatomic) unsigned reason;                                         //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) BOOL hasSubreason; 
@property (assign,nonatomic) unsigned subreason;                                      //@synthesize subreason=_subreason - In the implementation block
@property (assign,nonatomic) BOOL hasChannel; 
@property (assign,nonatomic) unsigned channel;                                        //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) BOOL hasChannelWidth; 
@property (assign,nonatomic) unsigned channelWidth;                                   //@synthesize channelWidth=_channelWidth - In the implementation block
@property (assign,nonatomic) BOOL hasPhyMode; 
@property (assign,nonatomic) unsigned phyMode;                                        //@synthesize phyMode=_phyMode - In the implementation block
@property (assign,nonatomic) BOOL hasFlags; 
@property (assign,nonatomic) unsigned flags;                                          //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) BOOL hasOui; 
@property (nonatomic,retain) NSData * oui;                                            //@synthesize oui=_oui - In the implementation block
@property (assign,nonatomic) BOOL hasSecurityType; 
@property (assign,nonatomic) unsigned securityType;                                   //@synthesize securityType=_securityType - In the implementation block
@property (assign,nonatomic) BOOL hasWpaProtocol; 
@property (assign,nonatomic) unsigned wpaProtocol;                                    //@synthesize wpaProtocol=_wpaProtocol - In the implementation block
@property (assign,nonatomic) BOOL hasMcastCipher; 
@property (assign,nonatomic) unsigned mcastCipher;                                    //@synthesize mcastCipher=_mcastCipher - In the implementation block
@property (assign,nonatomic) BOOL hasUcastCipher; 
@property (assign,nonatomic) unsigned ucastCipher;                                    //@synthesize ucastCipher=_ucastCipher - In the implementation block
@property (assign,nonatomic) BOOL hasAkmSuites; 
@property (assign,nonatomic) unsigned akmSuites;                                      //@synthesize akmSuites=_akmSuites - In the implementation block
@property (assign,nonatomic) BOOL hasCapabilities; 
@property (assign,nonatomic) unsigned capabilities;                                   //@synthesize capabilities=_capabilities - In the implementation block
@property (assign,nonatomic) BOOL hasEnhancedSecurityType; 
@property (assign,nonatomic) unsigned enhancedSecurityType;                           //@synthesize enhancedSecurityType=_enhancedSecurityType - In the implementation block
@property (assign,nonatomic) BOOL hasHtInfo; 
@property (assign,nonatomic) unsigned htInfo;                                         //@synthesize htInfo=_htInfo - In the implementation block
@property (assign,nonatomic) BOOL hasHtExtended; 
@property (assign,nonatomic) unsigned htExtended;                                     //@synthesize htExtended=_htExtended - In the implementation block
@property (assign,nonatomic) BOOL hasHtTxBf; 
@property (assign,nonatomic) unsigned htTxBf;                                         //@synthesize htTxBf=_htTxBf - In the implementation block
@property (assign,nonatomic) BOOL hasHtASel; 
@property (assign,nonatomic) unsigned htASel;                                         //@synthesize htASel=_htASel - In the implementation block
@property (assign,nonatomic) BOOL hasHtAmpduParams; 
@property (assign,nonatomic) unsigned htAmpduParams;                                  //@synthesize htAmpduParams=_htAmpduParams - In the implementation block
@property (nonatomic,readonly) BOOL hasHtSupportedMcsSet; 
@property (nonatomic,retain) NSData * htSupportedMcsSet;                              //@synthesize htSupportedMcsSet=_htSupportedMcsSet - In the implementation block
@property (assign,nonatomic) BOOL hasVhtInfo; 
@property (assign,nonatomic) unsigned vhtInfo;                                        //@synthesize vhtInfo=_vhtInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasVhtSupportedMcsSet; 
@property (nonatomic,retain) NSData * vhtSupportedMcsSet;                             //@synthesize vhtSupportedMcsSet=_vhtSupportedMcsSet - In the implementation block
@property (nonatomic,readonly) unsigned long long txPerHistorysCount; 
@property (nonatomic,readonly) int* txPerHistorys; 
@property (nonatomic,readonly) unsigned long long txFrmsHistorysCount; 
@property (nonatomic,readonly) int* txFrmsHistorys; 
@property (nonatomic,readonly) unsigned long long fwTxPerHistorysCount; 
@property (nonatomic,readonly) int* fwTxPerHistorys; 
@property (nonatomic,readonly) unsigned long long fwTxFrmsHistorysCount; 
@property (nonatomic,readonly) int* fwTxFrmsHistorys; 
@property (nonatomic,readonly) unsigned long long bcnPerHistorysCount; 
@property (nonatomic,readonly) int* bcnPerHistorys; 
@property (nonatomic,readonly) unsigned long long bcnFrmsHistorysCount; 
@property (nonatomic,readonly) int* bcnFrmsHistorys; 
@property (assign,nonatomic) BOOL hasGatewayARPHistory; 
@property (assign,nonatomic) unsigned gatewayARPHistory;                              //@synthesize gatewayARPHistory=_gatewayARPHistory - In the implementation block
@property (nonatomic,readonly) BOOL hasHeCapabilitiesIE; 
@property (nonatomic,retain) NSData * heCapabilitiesIE;                               //@synthesize heCapabilitiesIE=_heCapabilitiesIE - In the implementation block
@property (nonatomic,readonly) BOOL hasHeOperationIE; 
@property (nonatomic,retain) NSData * heOperationIE;                                  //@synthesize heOperationIE=_heOperationIE - In the implementation block
@property (nonatomic,readonly) BOOL hasHeBSSLoadIE; 
@property (nonatomic,retain) NSData * heBSSLoadIE;                                    //@synthesize heBSSLoadIE=_heBSSLoadIE - In the implementation block
@property (nonatomic,readonly) BOOL hasMuEDCAParametersIE; 
@property (nonatomic,retain) NSData * muEDCAParametersIE;                             //@synthesize muEDCAParametersIE=_muEDCAParametersIE - In the implementation block
@property (assign,nonatomic) BOOL hasHeMacCapSubfields; 
@property (assign,nonatomic) unsigned heMacCapSubfields;                              //@synthesize heMacCapSubfields=_heMacCapSubfields - In the implementation block
@property (assign,nonatomic) BOOL hasHePhyCapSubfields; 
@property (assign,nonatomic) unsigned hePhyCapSubfields;                              //@synthesize hePhyCapSubfields=_hePhyCapSubfields - In the implementation block
@property (assign,nonatomic) BOOL hasHeRxTxMcsMap; 
@property (assign,nonatomic) unsigned heRxTxMcsMap;                                   //@synthesize heRxTxMcsMap=_heRxTxMcsMap - In the implementation block
@property (assign,nonatomic) BOOL hasHeOpsParams; 
@property (assign,nonatomic) unsigned heOpsParams;                                    //@synthesize heOpsParams=_heOpsParams - In the implementation block
@property (assign,nonatomic) BOOL hasHeBssMcsNss; 
@property (assign,nonatomic) unsigned heBssMcsNss;                                    //@synthesize heBssMcsNss=_heBssMcsNss - In the implementation block
@property (assign,nonatomic) BOOL hasHeStaCnt; 
@property (assign,nonatomic) unsigned heStaCnt;                                       //@synthesize heStaCnt=_heStaCnt - In the implementation block
@property (assign,nonatomic) BOOL hasHeUtilization; 
@property (assign,nonatomic) unsigned heUtilization;                                  //@synthesize heUtilization=_heUtilization - In the implementation block
@property (assign,nonatomic) BOOL hasHeBEParamRecord; 
@property (assign,nonatomic) unsigned heBEParamRecord;                                //@synthesize heBEParamRecord=_heBEParamRecord - In the implementation block
@property (assign,nonatomic) BOOL hasHeBKParamRecord; 
@property (assign,nonatomic) unsigned heBKParamRecord;                                //@synthesize heBKParamRecord=_heBKParamRecord - In the implementation block
@property (assign,nonatomic) BOOL hasHeVIParamRecord; 
@property (assign,nonatomic) unsigned heVIParamRecord;                                //@synthesize heVIParamRecord=_heVIParamRecord - In the implementation block
@property (assign,nonatomic) BOOL hasHeVOParamRecord; 
@property (assign,nonatomic) unsigned heVOParamRecord;                                //@synthesize heVOParamRecord=_heVOParamRecord - In the implementation block
-(BOOL)hasHtInfo;
-(void)setChannelWidth:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHtTxBf:(unsigned)arg1 ;
-(NSData *)oui;
-(int*)txPerHistorys;
-(void)clearBcnFrmsHistorys;
-(BOOL)hasReason;
-(BOOL)hasCapabilities;
-(unsigned)htTxBf;
-(unsigned)capabilities;
-(void)setSubreason:(unsigned)arg1 ;
-(void)setCapabilities:(unsigned)arg1 ;
-(BOOL)hasUcastCipher;
-(BOOL)hasAkmSuites;
-(BOOL)hasSecurityType;
-(unsigned)securityType;
-(void)setFwTxPerHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasChannel:(BOOL)arg1 ;
-(void)setHasSecurityType:(BOOL)arg1 ;
-(void)setHasCapabilities:(BOOL)arg1 ;
-(int)rssiHistoryAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)fwTxFrmsHistorysCount;
-(void)clearRssiHistorys;
-(void)setHasGatewayARPHistory:(BOOL)arg1 ;
-(unsigned long long)timestamp;
-(void)setGatewayARPHistory:(unsigned)arg1 ;
-(void)setSecurityType:(unsigned)arg1 ;
-(void)setEnhancedSecurityType:(unsigned)arg1 ;
-(void)setTxFrmsHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setOui:(NSData *)arg1 ;
-(void)setHasHtInfo:(BOOL)arg1 ;
-(unsigned)flags;
-(void)setBcnPerHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)clearFwTxPerHistorys;
-(void)setHasSubreason:(BOOL)arg1 ;
-(void)setChannel:(unsigned)arg1 ;
-(int*)bcnFrmsHistorys;
-(void)addFwTxFrmsHistory:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)txFrmsHistoryAtIndex:(unsigned long long)arg1 ;
-(unsigned)akmSuites;
-(void)setHtSupportedMcsSet:(NSData *)arg1 ;
-(void)setUcastCipher:(unsigned)arg1 ;
-(void)setHtExtended:(unsigned)arg1 ;
-(void)setHtInfo:(unsigned)arg1 ;
-(void)setHasReason:(BOOL)arg1 ;
-(void)setHasHtASel:(BOOL)arg1 ;
-(void)setHasAkmSuites:(BOOL)arg1 ;
-(void)setHasIsLinkUp:(BOOL)arg1 ;
-(BOOL)hasHtExtended;
-(int*)fwTxFrmsHistorys;
-(int*)bcnPerHistorys;
-(unsigned long long)txPerHistorysCount;
-(BOOL)isLinkUp;
-(void)addRssiHistory:(int)arg1 ;
-(void)setHtAmpduParams:(unsigned)arg1 ;
-(unsigned)channel;
-(void)setHasVhtInfo:(BOOL)arg1 ;
-(unsigned)enhancedSecurityType;
-(BOOL)hasGatewayARPHistory;
-(void)setIsLinkUp:(BOOL)arg1 ;
-(BOOL)hasIsInVol;
-(void)setFwTxFrmsHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(NSData *)vhtSupportedMcsSet;
-(void)setVhtInfo:(unsigned)arg1 ;
-(void)setHasWpaProtocol:(BOOL)arg1 ;
-(void)addBcnFrmsHistory:(int)arg1 ;
-(id)description;
-(void)setHasIsInVol:(BOOL)arg1 ;
-(void)setHasEnhancedSecurityType:(BOOL)arg1 ;
-(void)setHasChannelWidth:(BOOL)arg1 ;
-(void)setRssiHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setAkmSuites:(unsigned)arg1 ;
-(void)setTxPerHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(unsigned)mcastCipher;
-(void)addBcnPerHistory:(int)arg1 ;
-(void)setVhtSupportedMcsSet:(NSData *)arg1 ;
-(unsigned)htASel;
-(unsigned)vhtInfo;
-(unsigned)gatewayARPHistory;
-(void)addTxFrmsHistory:(int)arg1 ;
-(int)fwTxFrmsHistoryAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)fwTxPerHistorysCount;
-(BOOL)hasChannelWidth;
-(unsigned long long)bcnPerHistorysCount;
-(void)setHasUcastCipher:(BOOL)arg1 ;
-(unsigned)channelWidth;
-(BOOL)hasOui;
-(unsigned)reason;
-(void)setHasPhyMode:(BOOL)arg1 ;
-(void)setHasHtExtended:(BOOL)arg1 ;
-(unsigned long long)bcnFrmsHistorysCount;
-(int)bcnPerHistoryAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasHtAmpduParams;
-(BOOL)hasHtTxBf;
-(BOOL)hasWpaProtocol;
-(void)setHasHtTxBf:(BOOL)arg1 ;
-(BOOL)hasEnhancedSecurityType;
-(void)clearBcnPerHistorys;
-(BOOL)hasChannel;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(unsigned)htInfo;
-(unsigned long long)hash;
-(void)setHasHtAmpduParams:(BOOL)arg1 ;
-(unsigned)ucastCipher;
-(unsigned)htExtended;
-(BOOL)hasTimestamp;
-(BOOL)hasFlags;
-(BOOL)hasVhtInfo;
-(void)setBcnFrmsHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setWpaProtocol:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned)phyMode;
-(void)clearTxFrmsHistorys;
-(BOOL)hasSubreason;
-(BOOL)isInVol;
-(BOOL)hasPhyMode;
-(void)clearTxPerHistorys;
-(int)fwTxPerHistoryAtIndex:(unsigned long long)arg1 ;
-(void)setMcastCipher:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)bcnFrmsHistoryAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)txFrmsHistorysCount;
-(void)clearFwTxFrmsHistorys;
-(BOOL)hasHtSupportedMcsSet;
-(unsigned)wpaProtocol;
-(unsigned)subreason;
-(void)setReason:(unsigned)arg1 ;
-(int*)txFrmsHistorys;
-(NSData *)htSupportedMcsSet;
-(unsigned long long)rssiHistorysCount;
-(BOOL)hasIsLinkUp;
-(void)addFwTxPerHistory:(int)arg1 ;
-(int*)fwTxPerHistorys;
-(void)setHasMcastCipher:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(int*)rssiHistorys;
-(void)addTxPerHistory:(int)arg1 ;
-(void)setPhyMode:(unsigned)arg1 ;
-(void)setHtASel:(unsigned)arg1 ;
-(void)setIsInVol:(BOOL)arg1 ;
-(unsigned)htAmpduParams;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(BOOL)hasVhtSupportedMcsSet;
-(void)setHasFlags:(BOOL)arg1 ;
-(BOOL)hasMcastCipher;
-(int)txPerHistoryAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasHtASel;
-(void)setHeCapabilitiesIE:(NSData *)arg1 ;
-(void)setHeOperationIE:(NSData *)arg1 ;
-(void)setHeBSSLoadIE:(NSData *)arg1 ;
-(void)setMuEDCAParametersIE:(NSData *)arg1 ;
-(BOOL)hasHeCapabilitiesIE;
-(BOOL)hasHeOperationIE;
-(BOOL)hasHeBSSLoadIE;
-(BOOL)hasMuEDCAParametersIE;
-(void)setHeMacCapSubfields:(unsigned)arg1 ;
-(void)setHasHeMacCapSubfields:(BOOL)arg1 ;
-(BOOL)hasHeMacCapSubfields;
-(void)setHePhyCapSubfields:(unsigned)arg1 ;
-(void)setHasHePhyCapSubfields:(BOOL)arg1 ;
-(BOOL)hasHePhyCapSubfields;
-(void)setHeRxTxMcsMap:(unsigned)arg1 ;
-(void)setHasHeRxTxMcsMap:(BOOL)arg1 ;
-(BOOL)hasHeRxTxMcsMap;
-(void)setHeOpsParams:(unsigned)arg1 ;
-(void)setHasHeOpsParams:(BOOL)arg1 ;
-(BOOL)hasHeOpsParams;
-(void)setHeBssMcsNss:(unsigned)arg1 ;
-(void)setHasHeBssMcsNss:(BOOL)arg1 ;
-(BOOL)hasHeBssMcsNss;
-(void)setHeStaCnt:(unsigned)arg1 ;
-(void)setHasHeStaCnt:(BOOL)arg1 ;
-(BOOL)hasHeStaCnt;
-(void)setHeUtilization:(unsigned)arg1 ;
-(void)setHasHeUtilization:(BOOL)arg1 ;
-(BOOL)hasHeUtilization;
-(void)setHeBEParamRecord:(unsigned)arg1 ;
-(void)setHasHeBEParamRecord:(BOOL)arg1 ;
-(BOOL)hasHeBEParamRecord;
-(void)setHeBKParamRecord:(unsigned)arg1 ;
-(void)setHasHeBKParamRecord:(BOOL)arg1 ;
-(BOOL)hasHeBKParamRecord;
-(void)setHeVIParamRecord:(unsigned)arg1 ;
-(void)setHasHeVIParamRecord:(BOOL)arg1 ;
-(BOOL)hasHeVIParamRecord;
-(void)setHeVOParamRecord:(unsigned)arg1 ;
-(void)setHasHeVOParamRecord:(BOOL)arg1 ;
-(BOOL)hasHeVOParamRecord;
-(NSData *)heCapabilitiesIE;
-(NSData *)heOperationIE;
-(NSData *)heBSSLoadIE;
-(NSData *)muEDCAParametersIE;
-(unsigned)heMacCapSubfields;
-(unsigned)hePhyCapSubfields;
-(unsigned)heRxTxMcsMap;
-(unsigned)heOpsParams;
-(unsigned)heBssMcsNss;
-(unsigned)heStaCnt;
-(unsigned)heUtilization;
-(unsigned)heBEParamRecord;
-(unsigned)heBKParamRecord;
-(unsigned)heVIParamRecord;
-(unsigned)heVOParamRecord;
@end

