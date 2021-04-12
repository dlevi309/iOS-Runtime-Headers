/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSSet, NSData, NSString, NSDictionary, NSDate, NSArray;

@interface CWFNetworkProfile : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _internal;

}

@property (nonatomic,retain) NSMutableDictionary * internal;                                                         //@synthesize internal=_internal - In the implementation block
@property (nonatomic,copy,readonly) NSSet * properties; 
@property (nonatomic,copy) NSData * SSID; 
@property (nonatomic,copy,readonly) NSString * networkName; 
@property (assign,nonatomic) unsigned long long supportedSecurityTypes; 
@property (nonatomic,readonly) unsigned long long strongestSupportedSecurityType; 
@property (assign,nonatomic) long long WEPSubtype; 
@property (assign,nonatomic) long long WAPISubtype; 
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
@property (assign,nonatomic) unsigned long long passwordSharingFlags; 
@property (nonatomic,copy) NSString * payloadUUID; 
@property (nonatomic,readonly) BOOL isProfileBased; 
@property (assign,nonatomic) long long addReason; 
@property (nonatomic,copy) NSDate * addedAt; 
@property (nonatomic,copy) NSDate * lastJoinedBySystemAt; 
@property (nonatomic,copy) NSDate * lastJoinedByUserAt; 
@property (nonatomic,copy,readonly) NSDate * lastJoinedAt; 
@property (nonatomic,copy) NSString * bundleID; 
@property (nonatomic,readonly) BOOL isAppBased; 
@property (assign,getter=isPersonalHotspot,nonatomic) BOOL personalHotspot; 
@property (assign,getter=isSystemMode,nonatomic) BOOL systemMode; 
@property (assign,getter=isSessionBased,nonatomic) BOOL sessionBased; 
@property (assign,nonatomic) long long saveDataMode; 
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)domainName;
-(NSSet *)properties;
-(NSMutableDictionary *)internal;
-(void)setInternal:(NSMutableDictionary *)arg1 ;
-(BOOL)isServiceProviderRoamingEnabled;
-(NSString *)displayedOperatorName;
-(BOOL)isWEP;
-(BOOL)isWPA;
-(void)setDomainName:(NSString *)arg1 ;
-(void)setServiceProviderRoamingEnabled:(BOOL)arg1 ;
-(void)setDisplayedOperatorName:(NSString *)arg1 ;
-(NSData *)SSID;
-(NSString *)networkName;
-(BOOL)isWAPI;
-(void)setPayloadUUID:(NSString *)arg1 ;
-(NSString *)payloadUUID;
-(void)setSSID:(NSData *)arg1 ;
-(BOOL)isCaptive;
-(BOOL)isPersonalHotspot;
-(void)setPersonalHotspot:(BOOL)arg1 ;
-(BOOL)isEAP;
-(BOOL)isPasspoint;
-(NSDictionary *)EAPProfile;
-(id)__requiredProperties;
-(id)__defaultProperties;
-(unsigned long long)supportedSecurityTypes;
-(long long)WEPSubtype;
-(NSDictionary *)captiveProfile;
-(NSDate *)lastJoinedBySystemAt;
-(NSDate *)lastJoinedByUserAt;
-(long long)WAPISubtype;
-(BOOL)bypassCaptive;
-(BOOL)isCaptiveStateDetermined;
-(BOOL)wasCaptive;
-(long long)hiddenState;
-(id)__descriptionForSecurityTypes;
-(BOOL)isAutoJoinDisabled;
-(id)__descriptionForHiddenState;
-(id)__descriptionForCaptiveFlags;
-(BOOL)isEqualToNetworkProfile:(id)arg1 ;
-(id)filteredNetworkProfileWithProperties:(id)arg1 ;
-(void)setSupportedSecurityTypes:(unsigned long long)arg1 ;
-(void)setWEPSubtype:(long long)arg1 ;
-(void)setWAPISubtype:(long long)arg1 ;
-(BOOL)isWPA2;
-(BOOL)isWPA3;
-(BOOL)isPSK;
-(unsigned long long)strongestSupportedSecurityType;
-(void)setAutoJoinDisabled:(BOOL)arg1 ;
-(void)setHiddenState:(long long)arg1 ;
-(void)setCaptiveProfile:(NSDictionary *)arg1 ;
-(unsigned long long)passwordSharingFlags;
-(void)setPasswordSharingFlags:(unsigned long long)arg1 ;
-(BOOL)isProfileBased;
-(long long)addReason;
-(void)setAddReason:(long long)arg1 ;
-(NSDate *)addedAt;
-(void)setAddedAt:(NSDate *)arg1 ;
-(void)setLastJoinedByUserAt:(NSDate *)arg1 ;
-(void)setLastJoinedBySystemAt:(NSDate *)arg1 ;
-(NSDate *)lastJoinedAt;
-(BOOL)isAppBased;
-(BOOL)isSystemMode;
-(void)setSystemMode:(BOOL)arg1 ;
-(BOOL)isSessionBased;
-(void)setSessionBased:(BOOL)arg1 ;
-(long long)saveDataMode;
-(void)setSaveDataMode:(long long)arg1 ;
-(void)setEAPProfile:(NSDictionary *)arg1 ;
-(NSArray *)acceptedEAPTypes;
-(NSArray *)innerAcceptedEAPTypes;
-(BOOL)isTLSCertificateRequired;
-(NSArray *)TLSTrustedServerNames;
-(NSArray *)roamingConsortiumList;
-(void)setRoamingConsortiumList:(NSArray *)arg1 ;
-(NSArray *)NAIRealmNameList;
-(void)setNAIRealmNameList:(NSArray *)arg1 ;
-(NSArray *)cellularNetworkInfo;
-(void)setCellularNetworkInfo:(NSArray *)arg1 ;
@end

