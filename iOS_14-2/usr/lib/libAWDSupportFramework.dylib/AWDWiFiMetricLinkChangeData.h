/*
* Generated on Thursday, January 14, 2021 at 2:29:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface AWDWiFiMetricLinkChangeData : PBCodable <NSCopying> {

	SCD_Struct_AW15* _bcnFrmsHistorys;
	SCD_Struct_AW15* _bcnPerHistorys;
	SCD_Struct_AW15* _fwTxFrmsHistorys;
	SCD_Struct_AW15* _fwTxPerHistorys;
	SCD_Struct_AW15* _rssiHistorys;
	SCD_Struct_AW15* _txFrmsHistorys;
	SCD_Struct_AW15* _txPerHistorys;
	double _associationDuration;
	unsigned long long _timestamp;
	unsigned _akmSuites;
	unsigned _capabilities;
	unsigned _channel;
	unsigned _channelSwitchDuringHostSleep;
	unsigned _channelSwitchDuringHostWake;
	unsigned _channelWidth;
	NSString* _countryCode;
	unsigned _enhancedSecurityType;
	unsigned _flags;
	unsigned _gatewayARPHistory;
	unsigned _htASel;
	unsigned _htAmpduParams;
	unsigned _htExtended;
	unsigned _htInfo;
	NSData* _htSupportedMcsSet;
	unsigned _htTxBf;
	NSString* _locale;
	NSString* _localeSource;
	unsigned _mcastCipher;
	NSData* _oui;
	unsigned _phyMode;
	NSString* _privateMacType;
	unsigned _reason;
	unsigned _rxCSAFrames;
	unsigned _securityType;
	unsigned _subreason;
	unsigned _ucastCipher;
	unsigned _vhtInfo;
	NSData* _vhtSupportedMcsSet;
	unsigned _wpaProtocol;
	NSString* _wpsConfigMethods;
	NSString* _wpsDeviceNameData;
	NSString* _wpsDeviceNameElement;
	NSString* _wpsManufacturerElement;
	NSString* _wpsModelName;
	NSString* _wpsModelNumber;
	NSString* _wpsPrimaryDeviceTypeCategory;
	NSString* _wpsPrimaryDeviceTypeSubCategory;
	NSString* _wpsResponseType;
	BOOL _isInVol;
	BOOL _isLinkUp;
	SCD_Struct_AW32 _has;

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
@property (nonatomic,readonly) BOOL hasLocale; 
@property (nonatomic,retain) NSString * locale;                                       //@synthesize locale=_locale - In the implementation block
@property (assign,nonatomic) BOOL hasAssociationDuration; 
@property (assign,nonatomic) double associationDuration;                              //@synthesize associationDuration=_associationDuration - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsResponseType; 
@property (nonatomic,retain) NSString * wpsResponseType;                              //@synthesize wpsResponseType=_wpsResponseType - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsManufacturerElement; 
@property (nonatomic,retain) NSString * wpsManufacturerElement;                       //@synthesize wpsManufacturerElement=_wpsManufacturerElement - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsModelName; 
@property (nonatomic,retain) NSString * wpsModelName;                                 //@synthesize wpsModelName=_wpsModelName - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsModelNumber; 
@property (nonatomic,retain) NSString * wpsModelNumber;                               //@synthesize wpsModelNumber=_wpsModelNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                                  //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsPrimaryDeviceTypeCategory; 
@property (nonatomic,retain) NSString * wpsPrimaryDeviceTypeCategory;                 //@synthesize wpsPrimaryDeviceTypeCategory=_wpsPrimaryDeviceTypeCategory - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsPrimaryDeviceTypeSubCategory; 
@property (nonatomic,retain) NSString * wpsPrimaryDeviceTypeSubCategory;              //@synthesize wpsPrimaryDeviceTypeSubCategory=_wpsPrimaryDeviceTypeSubCategory - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsDeviceNameElement; 
@property (nonatomic,retain) NSString * wpsDeviceNameElement;                         //@synthesize wpsDeviceNameElement=_wpsDeviceNameElement - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsDeviceNameData; 
@property (nonatomic,retain) NSString * wpsDeviceNameData;                            //@synthesize wpsDeviceNameData=_wpsDeviceNameData - In the implementation block
@property (nonatomic,readonly) BOOL hasWpsConfigMethods; 
@property (nonatomic,retain) NSString * wpsConfigMethods;                             //@synthesize wpsConfigMethods=_wpsConfigMethods - In the implementation block
@property (nonatomic,readonly) BOOL hasLocaleSource; 
@property (nonatomic,retain) NSString * localeSource;                                 //@synthesize localeSource=_localeSource - In the implementation block
@property (assign,nonatomic) BOOL hasRxCSAFrames; 
@property (assign,nonatomic) unsigned rxCSAFrames;                                    //@synthesize rxCSAFrames=_rxCSAFrames - In the implementation block
@property (assign,nonatomic) BOOL hasChannelSwitchDuringHostSleep; 
@property (assign,nonatomic) unsigned channelSwitchDuringHostSleep;                   //@synthesize channelSwitchDuringHostSleep=_channelSwitchDuringHostSleep - In the implementation block
@property (assign,nonatomic) BOOL hasChannelSwitchDuringHostWake; 
@property (assign,nonatomic) unsigned channelSwitchDuringHostWake;                    //@synthesize channelSwitchDuringHostWake=_channelSwitchDuringHostWake - In the implementation block
@property (nonatomic,readonly) BOOL hasPrivateMacType; 
@property (nonatomic,retain) NSString * privateMacType;                               //@synthesize privateMacType=_privateMacType - In the implementation block
-(void)setCountryCode:(NSString *)arg1 ;
-(BOOL)hasHtInfo;
-(void)setChannelWidth:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHtTxBf:(unsigned)arg1 ;
-(NSData *)oui;
-(BOOL)hasAssociationDuration;
-(int*)txPerHistorys;
-(unsigned)rxCSAFrames;
-(void)setChannelSwitchDuringHostSleep:(unsigned)arg1 ;
-(unsigned)channelSwitchDuringHostSleep;
-(void)clearBcnFrmsHistorys;
-(BOOL)hasReason;
-(BOOL)hasWpsDeviceNameData;
-(NSString *)privateMacType;
-(NSString *)wpsResponseType;
-(void)setHasChannelSwitchDuringHostSleep:(BOOL)arg1 ;
-(BOOL)hasCapabilities;
-(NSString *)locale;
-(NSString *)countryCode;
-(unsigned)htTxBf;
-(unsigned)capabilities;
-(void)setLocaleSource:(NSString *)arg1 ;
-(void)setSubreason:(unsigned)arg1 ;
-(BOOL)hasLocale;
-(void)setCapabilities:(unsigned)arg1 ;
-(BOOL)hasUcastCipher;
-(BOOL)hasPrivateMacType;
-(BOOL)hasAkmSuites;
-(BOOL)hasSecurityType;
-(void)setWpsDeviceNameData:(NSString *)arg1 ;
-(void)setLocale:(NSString *)arg1 ;
-(void)setAssociationDuration:(double)arg1 ;
-(unsigned)securityType;
-(void)setFwTxPerHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasChannel:(BOOL)arg1 ;
-(BOOL)hasCountryCode;
-(NSString *)wpsPrimaryDeviceTypeSubCategory;
-(BOOL)hasWpsManufacturerElement;
-(void)setHasSecurityType:(BOOL)arg1 ;
-(void)setHasCapabilities:(BOOL)arg1 ;
-(BOOL)hasWpsModelNumber;
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
-(void)setPrivateMacType:(NSString *)arg1 ;
-(void)setHasHtInfo:(BOOL)arg1 ;
-(unsigned)flags;
-(BOOL)hasWpsDeviceNameElement;
-(void)setBcnPerHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)clearFwTxPerHistorys;
-(void)setHasSubreason:(BOOL)arg1 ;
-(void)setChannel:(unsigned)arg1 ;
-(int*)bcnFrmsHistorys;
-(void)addFwTxFrmsHistory:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)txFrmsHistoryAtIndex:(unsigned long long)arg1 ;
-(NSString *)wpsConfigMethods;
-(unsigned)akmSuites;
-(void)setHtSupportedMcsSet:(NSData *)arg1 ;
-(void)setUcastCipher:(unsigned)arg1 ;
-(void)setHtExtended:(unsigned)arg1 ;
-(void)setHtInfo:(unsigned)arg1 ;
-(void)setHasReason:(BOOL)arg1 ;
-(void)setHasHtASel:(BOOL)arg1 ;
-(void)setHasAkmSuites:(BOOL)arg1 ;
-(BOOL)hasChannelSwitchDuringHostSleep;
-(void)setHasIsLinkUp:(BOOL)arg1 ;
-(NSString *)wpsModelName;
-(BOOL)hasHtExtended;
-(void)setWpsDeviceNameElement:(NSString *)arg1 ;
-(int*)fwTxFrmsHistorys;
-(int*)bcnPerHistorys;
-(unsigned long long)txPerHistorysCount;
-(BOOL)isLinkUp;
-(void)addRssiHistory:(int)arg1 ;
-(void)setHtAmpduParams:(unsigned)arg1 ;
-(unsigned)channel;
-(void)setChannelSwitchDuringHostWake:(unsigned)arg1 ;
-(void)setHasVhtInfo:(BOOL)arg1 ;
-(unsigned)enhancedSecurityType;
-(BOOL)hasGatewayARPHistory;
-(void)setIsLinkUp:(BOOL)arg1 ;
-(NSString *)localeSource;
-(BOOL)hasIsInVol;
-(void)setFwTxFrmsHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(NSData *)vhtSupportedMcsSet;
-(unsigned)channelSwitchDuringHostWake;
-(void)setVhtInfo:(unsigned)arg1 ;
-(void)setHasWpaProtocol:(BOOL)arg1 ;
-(void)addBcnFrmsHistory:(int)arg1 ;
-(id)description;
-(void)setHasIsInVol:(BOOL)arg1 ;
-(void)setHasEnhancedSecurityType:(BOOL)arg1 ;
-(void)setHasChannelWidth:(BOOL)arg1 ;
-(void)setRssiHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setAkmSuites:(unsigned)arg1 ;
-(BOOL)hasChannelSwitchDuringHostWake;
-(void)setTxPerHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(unsigned)mcastCipher;
-(void)addBcnPerHistory:(int)arg1 ;
-(void)setVhtSupportedMcsSet:(NSData *)arg1 ;
-(double)associationDuration;
-(void)setHasRxCSAFrames:(BOOL)arg1 ;
-(unsigned)htASel;
-(unsigned)vhtInfo;
-(unsigned)gatewayARPHistory;
-(void)addTxFrmsHistory:(int)arg1 ;
-(int)fwTxFrmsHistoryAtIndex:(unsigned long long)arg1 ;
-(void)setWpsConfigMethods:(NSString *)arg1 ;
-(unsigned long long)fwTxPerHistorysCount;
-(BOOL)hasChannelWidth;
-(BOOL)hasRxCSAFrames;
-(unsigned long long)bcnPerHistorysCount;
-(void)setHasUcastCipher:(BOOL)arg1 ;
-(unsigned)channelWidth;
-(void)setWpsResponseType:(NSString *)arg1 ;
-(BOOL)hasOui;
-(unsigned)reason;
-(void)setHasPhyMode:(BOOL)arg1 ;
-(NSString *)wpsDeviceNameData;
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
-(void)setHasAssociationDuration:(BOOL)arg1 ;
-(void)setWpsModelName:(NSString *)arg1 ;
-(unsigned)htInfo;
-(unsigned long long)hash;
-(void)setHasHtAmpduParams:(BOOL)arg1 ;
-(unsigned)ucastCipher;
-(BOOL)hasWpsPrimaryDeviceTypeCategory;
-(unsigned)htExtended;
-(void)setWpsPrimaryDeviceTypeSubCategory:(NSString *)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasFlags;
-(NSString *)wpsDeviceNameElement;
-(BOOL)hasVhtInfo;
-(void)setBcnFrmsHistorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)setWpaProtocol:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasLocaleSource;
-(void)setRxCSAFrames:(unsigned)arg1 ;
-(unsigned)phyMode;
-(void)clearTxFrmsHistorys;
-(BOOL)hasWpsResponseType;
-(BOOL)hasSubreason;
-(BOOL)isInVol;
-(BOOL)hasPhyMode;
-(void)clearTxPerHistorys;
-(int)fwTxPerHistoryAtIndex:(unsigned long long)arg1 ;
-(void)setMcastCipher:(unsigned)arg1 ;
-(NSString *)wpsModelNumber;
-(void)copyTo:(id)arg1 ;
-(NSString *)wpsManufacturerElement;
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
-(BOOL)hasWpsConfigMethods;
-(unsigned long long)rssiHistorysCount;
-(BOOL)hasWpsModelName;
-(BOOL)hasIsLinkUp;
-(void)setWpsManufacturerElement:(NSString *)arg1 ;
-(void)addFwTxPerHistory:(int)arg1 ;
-(int*)fwTxPerHistorys;
-(void)setHasMcastCipher:(BOOL)arg1 ;
-(void)setWpsModelNumber:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(int*)rssiHistorys;
-(void)addTxPerHistory:(int)arg1 ;
-(void)setPhyMode:(unsigned)arg1 ;
-(void)setHtASel:(unsigned)arg1 ;
-(BOOL)hasWpsPrimaryDeviceTypeSubCategory;
-(NSString *)wpsPrimaryDeviceTypeCategory;
-(void)setHasChannelSwitchDuringHostWake:(BOOL)arg1 ;
-(void)setIsInVol:(BOOL)arg1 ;
-(unsigned)htAmpduParams;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(BOOL)hasVhtSupportedMcsSet;
-(void)setWpsPrimaryDeviceTypeCategory:(NSString *)arg1 ;
-(void)setHasFlags:(BOOL)arg1 ;
-(BOOL)hasMcastCipher;
-(int)txPerHistoryAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasHtASel;
@end

