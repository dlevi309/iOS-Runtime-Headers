/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSSet, NSData, NSString, CWFChannel, NSArray;

@interface CWFScanResult : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isMFPRequired;
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
@property (nonatomic,readonly) BOOL isMFPCapable; 
@property (nonatomic,readonly) BOOL isMFPRequired;                                             //@synthesize isMFPRequired=_isMFPRequired - In the implementation block
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)countryCode;
-(NSString *)displayName;
-(NSSet *)properties;
-(NSString *)deviceID;
-(NSDictionary *)internal;
-(void)setInternal:(NSDictionary *)arg1 ;
-(CWFChannel *)channel;
-(NSString *)friendlyName;
-(NSString *)HESSID;
-(BOOL)isWEP;
-(BOOL)isWPA;
-(NSString *)modelName;
-(NSData *)SSID;
-(NSString *)manufacturerName;
-(NSString *)networkName;
-(BOOL)isWAPI;
-(NSString *)BSSID;
-(long long)RSSI;
-(BOOL)supportsCarPlay;
-(BOOL)supportsAirPlay;
-(BOOL)supportsAirPlay2;
-(BOOL)isPersonalHotspot;
-(BOOL)isEAP;
-(BOOL)isPasspoint;
-(long long)noise;
-(id)__requiredProperties;
-(id)__defaultProperties;
-(unsigned long long)supportedSecurityTypes;
-(long long)WAPISubtype;
-(BOOL)isWPA2;
-(BOOL)isWPA3;
-(BOOL)isPSK;
-(unsigned long long)strongestSupportedSecurityType;
-(NSArray *)roamingConsortiumList;
-(NSArray *)NAIRealmNameList;
-(NSArray *)cellularNetworkInfo;
-(NSDictionary *)scanRecord;
-(BOOL)isMFPCapable;
-(BOOL)isMFPRequired;
-(NSArray *)domainNameList;
-(int)supportedPHYModes;
-(long long)beaconInterval;
-(BOOL)isAppleSWAP;
-(BOOL)isIBSS;
-(NSData *)informationElementData;
-(BOOL)isUnconfiguredAirPortBaseStation;
-(long long)airPortBaseStationModel;
-(int)accessNetworkType;
-(BOOL)isInternetAccessible;
-(BOOL)isAdditionalStepRequiredForAccess;
-(BOOL)isEmergencyServicesReachable;
-(BOOL)isUnauthenticatedEmergencyServiceAccessible;
-(long long)venueGroup;
-(long long)venueType;
-(BOOL)isUnconfiguredDevice;
-(BOOL)providesInternetAccess;
-(BOOL)supportsWPS;
-(BOOL)supportsiAPOverWiFi;
-(BOOL)supports2GHzNetworks;
-(BOOL)supports5GHzNetworks;
-(BOOL)supportsHomeKit;
-(BOOL)supportsHomeKit2;
-(BOOL)supportsAirPrint;
-(BOOL)supportsMFi;
-(BOOL)supportsMFiHardwareAuth;
-(BOOL)supportsSecureWAC;
-(BOOL)supportsWoW;
-(NSString *)primaryMAC;
-(NSString *)bluetoothMAC;
-(NSArray *)operatorFriendlyNameList;
-(id)__internalDictionaryFromScanRecord:(id)arg1 includeProperties:(id)arg2 ;
-(id)__descriptionForWPACipher:(int)arg1 ;
-(id)__descriptionForWPAAuthSel:(int)arg1 ;
-(id)__descriptionForRSNCipher:(int)arg1 ;
-(id)__descriptionForRSNAuthSel:(int)arg1 ;
-(id)__descriptionForPHYMode:(int)arg1 ;
-(id)__descriptionForRSNIE:(id)arg1 ;
-(id)__descriptionForWPAIE:(id)arg1 ;
-(id)__descriptionForAirPortBaseStationModel:(long long)arg1 ;
-(BOOL)isEqualToScanResult:(id)arg1 ;
-(id)initWithScanRecord:(id)arg1 includeProperties:(id)arg2 ;
-(id)filteredScanResultWithProperties:(id)arg1 ;
-(int)fastestSupportedPHYMode;
-(unsigned long long)cacheAge;
-(BOOL)supportsMFiSoftwareTokenAuth;
-(BOOL)supportsMFiSoftwareCertAuth;
@end

