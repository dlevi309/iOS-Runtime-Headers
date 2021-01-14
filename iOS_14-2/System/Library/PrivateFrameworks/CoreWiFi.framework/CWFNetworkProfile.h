/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSString, NSSet, NSData, NSDictionary, NSDate, NSArray;

@interface CWFNetworkProfile : NSObject <NSCopying, NSSecureCoding> {

	BOOL _useCachedIdentifier;
	BOOL _useCachedNetworkName;
	NSMutableDictionary* _internal;
	NSString* _cachedIdentifier;
	NSString* _cachedNetworkName;

}

@property (nonatomic,retain) NSMutableDictionary * internal;                                                         //@synthesize internal=_internal - In the implementation block
@property (assign,nonatomic) BOOL useCachedIdentifier;                                                               //@synthesize useCachedIdentifier=_useCachedIdentifier - In the implementation block
@property (nonatomic,retain) NSString * cachedIdentifier;                                                            //@synthesize cachedIdentifier=_cachedIdentifier - In the implementation block
@property (assign,nonatomic) BOOL useCachedNetworkName;                                                              //@synthesize useCachedNetworkName=_useCachedNetworkName - In the implementation block
@property (nonatomic,retain) NSString * cachedNetworkName;                                                           //@synthesize cachedNetworkName=_cachedNetworkName - In the implementation block
@property (nonatomic,copy,readonly) NSSet * properties; 
@property (nonatomic,copy) NSData * SSID; 
@property (nonatomic,copy,readonly) NSString * networkName; 
@property (assign,nonatomic) unsigned long long supportedSecurityTypes; 
@property (nonatomic,readonly) unsigned long long strongestSupportedSecurityType; 
@property (nonatomic,readonly) unsigned long long weakestSupportedSecurityType; 
@property (assign,nonatomic) long long WEPSubtype; 
@property (assign,nonatomic) long long WAPISubtype; 
@property (nonatomic,readonly) BOOL isOpen; 
@property (nonatomic,readonly) BOOL isWEP; 
@property (nonatomic,readonly) BOOL isWAPI; 
@property (nonatomic,readonly) BOOL isWPA; 
@property (nonatomic,readonly) BOOL isWPA2; 
@property (nonatomic,readonly) BOOL isWPA3; 
@property (nonatomic,readonly) BOOL isEAP; 
@property (nonatomic,readonly) BOOL isPSK; 
@property (assign,getter=isAutoJoinDisabled,nonatomic) BOOL autoJoinDisabled; 
@property (assign,nonatomic) long long hiddenState; 
@property (nonatomic,copy) NSDictionary * captiveProfile; 
@property (nonatomic,readonly) BOOL isCaptiveStateDetermined; 
@property (nonatomic,readonly) BOOL isCaptive; 
@property (nonatomic,readonly) BOOL wasCaptive; 
@property (nonatomic,readonly) BOOL bypassCaptive; 
@property (nonatomic,readonly) BOOL isPasswordSharingSupported; 
@property (assign,getter=isPasswordSharingDisabled,nonatomic) BOOL passwordSharingDisabled; 
@property (nonatomic,copy) NSString * payloadUUID; 
@property (nonatomic,readonly) BOOL isProfileBased; 
@property (assign,nonatomic) long long addReason; 
@property (nonatomic,copy) NSDate * addedAt; 
@property (nonatomic,copy) NSDate * updatedAt; 
@property (nonatomic,copy) NSDate * lastJoinedBySystemAt; 
@property (nonatomic,copy) NSDate * lastJoinedByUserAt; 
@property (nonatomic,copy,readonly) NSDate * lastJoinedAt; 
@property (nonatomic,copy) NSString * bundleID; 
@property (nonatomic,readonly) BOOL isAppBased; 
@property (assign,getter=isPersonalHotspot,nonatomic) BOOL personalHotspot; 
@property (assign,getter=isSystemMode,nonatomic) BOOL systemMode; 
@property (assign,getter=isSessionBased,nonatomic) BOOL sessionBased; 
@property (assign,nonatomic) long long lowDataMode; 
@property (nonatomic,copy) NSDictionary * OSSpecificAttributes; 
@property (nonatomic,copy) NSDictionary * EAPProfile; 
@property (nonatomic,copy,readonly) NSArray * acceptedEAPTypes; 
@property (nonatomic,copy,readonly) NSArray * innerAcceptedEAPTypes; 
@property (nonatomic,readonly) BOOL isTLSCertificateRequired; 
@property (nonatomic,copy,readonly) NSArray * TLSTrustedServerNames; 
@property (nonatomic,readonly) BOOL isPasspoint; 
@property (nonatomic,copy) NSString * domainName; 
@property (nonatomic,copy) NSString * displayedOperatorName; 
@property (nonatomic,copy) NSArray * roamingConsortiumList; 
@property (nonatomic,copy) NSArray * NAIRealmNameList; 
@property (nonatomic,copy) NSArray * cellularNetworkInfo; 
@property (assign,getter=isServiceProviderRoamingEnabled,nonatomic) BOOL serviceProviderRoamingEnabled; 
+(BOOL)supportsSecureCoding;
-(void)setInternal:(NSMutableDictionary *)arg1 ;
-(NSData *)SSID;
-(void)setSSID:(NSData *)arg1 ;
-(BOOL)isWPA3;
-(NSString *)networkName;
-(BOOL)isWAPI;
-(BOOL)isWEP;
-(void)setCellularNetworkInfo:(NSArray *)arg1 ;
-(void)setPersonalHotspot:(BOOL)arg1 ;
-(void)setEAPProfile:(NSDictionary *)arg1 ;
-(BOOL)isCaptive;
-(NSDictionary *)EAPProfile;
-(NSString *)domainName;
-(void)setCachedNetworkName:(NSString *)arg1 ;
-(NSSet *)properties;
-(void)setServiceProviderRoamingEnabled:(BOOL)arg1 ;
-(NSString *)cachedIdentifier;
-(BOOL)isPasspoint;
-(void)setDisplayedOperatorName:(NSString *)arg1 ;
-(void)setDomainName:(NSString *)arg1 ;
-(NSArray *)cellularNetworkInfo;
-(BOOL)isCaptiveStateDetermined;
-(id)init;
-(BOOL)isAutoJoinDisabled;
-(void)setBundleID:(NSString *)arg1 ;
-(NSArray *)innerAcceptedEAPTypes;
-(BOOL)isOpen;
-(void)setUpdatedAt:(NSDate *)arg1 ;
-(BOOL)isPasswordSharingDisabled;
-(BOOL)wasCaptive;
-(void)setUseCachedIdentifier:(BOOL)arg1 ;
-(void)setSupportedSecurityTypes:(unsigned long long)arg1 ;
-(unsigned long long)weakestSupportedSecurityType;
-(BOOL)bypassCaptive;
-(void)encodeWithCoder:(id)arg1 ;
-(NSMutableDictionary *)internal;
-(void)setCachedIdentifier:(NSString *)arg1 ;
-(NSDictionary *)captiveProfile;
-(NSDate *)lastJoinedBySystemAt;
-(NSString *)displayedOperatorName;
-(id)__descriptionForCaptiveFlags;
-(BOOL)isEqualToNetworkProfile:(id)arg1 ;
-(id)__keyForProperty:(long long)arg1 ;
-(NSArray *)TLSTrustedServerNames;
-(NSDate *)lastJoinedByUserAt;
-(long long)WEPSubtype;
-(id)initWithExternalForm:(id)arg1 ;
-(NSString *)payloadUUID;
-(BOOL)isPersonalHotspot;
-(unsigned long long)supportedSecurityTypes;
-(BOOL)isWPA2;
-(BOOL)isServiceProviderRoamingEnabled;
-(id)__descriptionForHiddenState;
-(NSString *)cachedNetworkName;
-(id)description;
-(id)externalForm;
-(void)setAddReason:(long long)arg1 ;
-(BOOL)isSystemMode;
-(id)__defaultProperties;
-(void)setUseCachedNetworkName:(BOOL)arg1 ;
-(NSDate *)addedAt;
-(void)setLastJoinedBySystemAt:(NSDate *)arg1 ;
-(void)setPayloadUUID:(NSString *)arg1 ;
-(long long)lowDataMode;
-(BOOL)isPSK;
-(void)setLastJoinedByUserAt:(NSDate *)arg1 ;
-(BOOL)useCachedIdentifier;
-(NSArray *)acceptedEAPTypes;
-(id)__requiredProperties;
-(void)setLowDataMode:(long long)arg1 ;
-(NSString *)bundleID;
-(BOOL)isProfileBased;
-(void)setWAPISubtype:(long long)arg1 ;
-(BOOL)isWPA;
-(void)setSessionBased:(BOOL)arg1 ;
-(id)filteredNetworkProfileWithProperties:(id)arg1 ;
-(unsigned long long)hash;
-(NSArray *)roamingConsortiumList;
-(NSArray *)NAIRealmNameList;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isAppBased;
-(NSDate *)lastJoinedAt;
-(long long)__propertyForKey:(id)arg1 ;
-(void)setRoamingConsortiumList:(NSArray *)arg1 ;
-(void)setAddedAt:(NSDate *)arg1 ;
-(BOOL)isTLSCertificateRequired;
-(NSDictionary *)OSSpecificAttributes;
-(void)setSystemMode:(BOOL)arg1 ;
-(id)__descriptionForSecurityTypes;
-(BOOL)isSessionBased;
-(void)setNAIRealmNameList:(NSArray *)arg1 ;
-(BOOL)isEAP;
-(void)setAutoJoinDisabled:(BOOL)arg1 ;
-(unsigned long long)strongestSupportedSecurityType;
-(id)identifier;
-(long long)WAPISubtype;
-(NSDate *)updatedAt;
-(void)setWEPSubtype:(long long)arg1 ;
-(BOOL)useCachedNetworkName;
-(long long)hiddenState;
-(BOOL)isPasswordSharingSupported;
-(void)setOSSpecificAttributes:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)addReason;
-(void)setCaptiveProfile:(NSDictionary *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHiddenState:(long long)arg1 ;
-(void)setPasswordSharingDisabled:(BOOL)arg1 ;
@end

