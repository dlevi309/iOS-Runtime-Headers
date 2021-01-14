/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSSet, NSData, NSString, CWFChannel, NSArray;

@interface CWFScanResult : NSObject <NSCopying, NSSecureCoding> {

	BOOL _hasWPAIE;
	BOOL _hasRSNIE;
	NSDictionary* _internal;

}

@property (nonatomic,copy) NSDictionary * internal;                                            //@synthesize internal=_internal - In the implementation block
@property (nonatomic,copy,readonly) NSSet * properties; 
@property (nonatomic,copy,readonly) NSDictionary * scanRecord; 
@property (nonatomic,readonly) unsigned long long cacheAge; 
@property (nonatomic,copy,readonly) NSData * informationElementData; 
@property (nonatomic,copy,readonly) NSData * SSID; 
@property (nonatomic,copy,readonly) NSString * networkName; 
@property (nonatomic,copy,readonly) NSString * BSSID; 
@property (nonatomic,copy,readonly) CWFChannel * channel; 
@property (nonatomic,readonly) long long RSSI; 
@property (nonatomic,readonly) long long noise; 
@property (nonatomic,readonly) long long beaconInterval; 
@property (nonatomic,copy,readonly) NSString * countryCode; 
@property (nonatomic,readonly) long long airPortBaseStationModel; 
@property (nonatomic,readonly) BOOL isUnconfiguredAirPortBaseStation; 
@property (nonatomic,readonly) BOOL isPasspoint; 
@property (nonatomic,readonly) BOOL isPersonalHotspot; 
@property (nonatomic,readonly) BOOL isAppleSWAP; 
@property (nonatomic,readonly) BOOL isIBSS; 
@property (nonatomic,readonly) unsigned long long supportedSecurityTypes; 
@property (nonatomic,readonly) unsigned long long strongestSupportedSecurityType; 
@property (nonatomic,readonly) unsigned long long weakestSupportedSecurityType; 
@property (nonatomic,readonly) BOOL isOpen; 
@property (nonatomic,readonly) BOOL isWEP; 
@property (nonatomic,readonly) BOOL isWAPI; 
@property (nonatomic,readonly) BOOL isWPA; 
@property (nonatomic,readonly) BOOL isWPA2; 
@property (nonatomic,readonly) BOOL isWPA3; 
@property (nonatomic,readonly) BOOL isEAP; 
@property (nonatomic,readonly) BOOL isPSK; 
@property (nonatomic,readonly) long long WAPISubtype; 
@property (nonatomic,readonly) int supportedPHYModes; 
@property (nonatomic,readonly) int fastestSupportedPHYMode; 
@property (nonatomic,readonly) int slowestSupportedPHYMode; 
@property (nonatomic,copy) NSDictionary * OSSpecificAttributes; 
@property (nonatomic,readonly) BOOL hasWPAIE;                                                  //@synthesize hasWPAIE=_hasWPAIE - In the implementation block
@property (nonatomic,readonly) unsigned long long WPAMulticastCipher; 
@property (nonatomic,readonly) NSArray * WPAUnicastCiphers; 
@property (nonatomic,readonly) NSArray * WPAAuthSelectors; 
@property (nonatomic,readonly) BOOL hasRSNIE;                                                  //@synthesize hasRSNIE=_hasRSNIE - In the implementation block
@property (nonatomic,readonly) unsigned long long RSNMulticastCipher; 
@property (nonatomic,readonly) unsigned long long RSNBroadcastCipher; 
@property (nonatomic,readonly) NSArray * RSNUnicastCiphers; 
@property (nonatomic,readonly) NSArray * RSNAuthSelectors; 
@property (nonatomic,readonly) int RSNCapabilities; 
@property (nonatomic,readonly) BOOL isMFPCapable; 
@property (nonatomic,readonly) BOOL isMFPRequired; 
@property (nonatomic,readonly) int accessNetworkType; 
@property (nonatomic,readonly) BOOL isInternetAccessible; 
@property (nonatomic,readonly) BOOL isAdditionalStepRequiredForAccess; 
@property (nonatomic,readonly) BOOL isEmergencyServicesReachable; 
@property (nonatomic,readonly) BOOL isUnauthenticatedEmergencyServiceAccessible; 
@property (nonatomic,readonly) long long venueGroup; 
@property (nonatomic,readonly) long long venueType; 
@property (nonatomic,copy,readonly) NSString * HESSID; 
@property (nonatomic,readonly) BOOL isUnconfiguredDevice; 
@property (nonatomic,readonly) BOOL providesInternetAccess; 
@property (nonatomic,readonly) BOOL supportsWPS; 
@property (nonatomic,readonly) BOOL supportsiAPOverWiFi; 
@property (nonatomic,readonly) BOOL supports2GHzNetworks; 
@property (nonatomic,readonly) BOOL supports5GHzNetworks; 
@property (nonatomic,readonly) BOOL supportsCarPlay; 
@property (nonatomic,readonly) BOOL supportsHomeKit; 
@property (nonatomic,readonly) BOOL supportsHomeKit2; 
@property (nonatomic,readonly) BOOL supportsAirPlay; 
@property (nonatomic,readonly) BOOL supportsAirPlay2; 
@property (nonatomic,readonly) BOOL supportsAirPrint; 
@property (nonatomic,readonly) BOOL supportsMFi; 
@property (nonatomic,readonly) BOOL supportsMFiHardwareAuth; 
@property (nonatomic,readonly) BOOL supportsMFiSoftwareTokenAuth; 
@property (nonatomic,readonly) BOOL supportsMFiSoftwareCertAuth; 
@property (nonatomic,readonly) BOOL supportsSecureWAC; 
@property (nonatomic,readonly) BOOL supportsWoW; 
@property (nonatomic,copy,readonly) NSString * friendlyName; 
@property (nonatomic,copy,readonly) NSString * manufacturerName; 
@property (nonatomic,copy,readonly) NSString * modelName; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,copy,readonly) NSString * primaryMAC; 
@property (nonatomic,copy,readonly) NSString * bluetoothMAC; 
@property (nonatomic,copy,readonly) NSString * deviceID; 
@property (nonatomic,copy,readonly) NSDictionary * ANQPResponse; 
@property (nonatomic,copy,readonly) NSArray * cellularNetworkInfo; 
@property (nonatomic,copy,readonly) NSArray * NAIRealmNameList; 
@property (nonatomic,copy,readonly) NSArray * roamingConsortiumList; 
@property (nonatomic,copy,readonly) NSArray * operatorFriendlyNameList; 
@property (nonatomic,copy,readonly) NSArray * domainNameList; 
+(BOOL)supportsSecureCoding;
-(void)setInternal:(NSDictionary *)arg1 ;
-(NSData *)SSID;
-(BOOL)isWPA3;
-(NSString *)networkName;
-(BOOL)isWAPI;
-(BOOL)isWEP;
-(long long)beaconInterval;
-(BOOL)isEmergencyServicesReachable;
-(NSString *)deviceID;
-(id)__internalDictionaryFromScanRecord:(id)arg1 includeProperties:(id)arg2 ;
-(NSSet *)properties;
-(NSString *)countryCode;
-(BOOL)isPasspoint;
-(BOOL)isIBSS;
-(NSArray *)cellularNetworkInfo;
-(BOOL)isUnconfiguredDevice;
-(long long)venueGroup;
-(int)slowestSupportedPHYMode;
-(BOOL)supportsiAPOverWiFi;
-(BOOL)isOpen;
-(NSArray *)RSNUnicastCiphers;
-(NSString *)manufacturerName;
-(unsigned long long)weakestSupportedSecurityType;
-(BOOL)supports5GHzNetworks;
-(NSDictionary *)scanRecord;
-(long long)airPortBaseStationModel;
-(BOOL)supportsAirPrint;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)internal;
-(id)__descriptionForRSNIE;
-(BOOL)isMFPRequired;
-(id)__descriptionForAirPortBaseStationModel:(long long)arg1 ;
-(BOOL)isEqualToScanResult:(id)arg1 ;
-(long long)noise;
-(NSString *)modelName;
-(BOOL)supportsMFi;
-(long long)RSSI;
-(NSArray *)RSNAuthSelectors;
-(id)__descriptionForPHYMode:(int)arg1 ;
-(NSData *)informationElementData;
-(CWFChannel *)channel;
-(NSArray *)operatorFriendlyNameList;
-(BOOL)supportsMFiSoftwareCertAuth;
-(BOOL)supportsWoW;
-(BOOL)isPersonalHotspot;
-(unsigned long long)supportedSecurityTypes;
-(BOOL)isWPA2;
-(BOOL)supportsMFiHardwareAuth;
-(id)__descriptionForRSNCipher:(int)arg1 ;
-(id)description;
-(BOOL)isUnconfiguredAirPortBaseStation;
-(NSArray *)domainNameList;
-(BOOL)supportsSecureWAC;
-(BOOL)isMFPCapable;
-(NSString *)primaryMAC;
-(id)__defaultProperties;
-(unsigned long long)cacheAge;
-(id)filteredScanResultWithProperties:(id)arg1 ;
-(unsigned long long)WPAMulticastCipher;
-(BOOL)supportsAirPlay;
-(int)supportedPHYModes;
-(id)__descriptionForWPACipher:(int)arg1 ;
-(BOOL)isPSK;
-(id)__descriptionForRSNAuthSel:(int)arg1 ;
-(NSArray *)WPAAuthSelectors;
-(id)__requiredProperties;
-(unsigned long long)RSNMulticastCipher;
-(NSArray *)WPAUnicastCiphers;
-(id)initWithScanRecord:(id)arg1 includeProperties:(id)arg2 ;
-(BOOL)isWPA;
-(BOOL)providesInternetAccess;
-(unsigned long long)hash;
-(NSArray *)roamingConsortiumList;
-(NSArray *)NAIRealmNameList;
-(BOOL)hasWPAIE;
-(int)RSNCapabilities;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)supportsAirPlay2;
-(BOOL)isAppleSWAP;
-(BOOL)hasRSNIE;
-(long long)venueType;
-(BOOL)isAdditionalStepRequiredForAccess;
-(BOOL)supports2GHzNetworks;
-(NSDictionary *)OSSpecificAttributes;
-(BOOL)supportsCarPlay;
-(NSString *)BSSID;
-(BOOL)isEAP;
-(id)__descriptionForWPAIE;
-(int)accessNetworkType;
-(BOOL)supportsHomeKit;
-(int)fastestSupportedPHYMode;
-(BOOL)supportsWPS;
-(unsigned long long)strongestSupportedSecurityType;
-(BOOL)supportsMFiSoftwareTokenAuth;
-(NSString *)bluetoothMAC;
-(long long)WAPISubtype;
-(NSString *)friendlyName;
-(BOOL)isInternetAccessible;
-(unsigned long long)RSNBroadcastCipher;
-(BOOL)supportsHomeKit2;
-(NSString *)HESSID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(BOOL)isUnauthenticatedEmergencyServiceAccessible;
-(id)__descriptionForWPAAuthSel:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

