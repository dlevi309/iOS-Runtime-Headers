/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEProfilePayloadHandlerDelegate.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSString, NEVPN, NEAOVPN, NEVPNApp, NEContentFilter, NEProfileIngestionPayloadInfo, NEPathController, NEDNSProxy, NEDNSSettingsBundle, NEAppPush;

@interface NEConfiguration : NSObject <NEProfilePayloadHandlerDelegate, NEConfigurationValidating, NSSecureCoding, NSCopying> {

	long long _grade;
	NSUUID* _identifier;
	NSString* _application;
	NSString* _name;
	NSString* _applicationName;
	NSString* _applicationIdentifier;
	NSString* _externalIdentifier;
	NEVPN* _VPN;
	NEAOVPN* _alwaysOnVPN;
	NEVPNApp* _appVPN;
	NEContentFilter* _contentFilter;
	NEProfileIngestionPayloadInfo* _payloadInfo;
	NEPathController* _pathController;
	NEDNSProxy* _dnsProxy;
	NEDNSSettingsBundle* _dnsSettings;
	NEAppPush* _appPush;
	long long _appPermissionType;

}

@property (readonly) NSString * pluginType; 
@property (assign,nonatomic) long long appPermissionType;                  //@synthesize appPermissionType=_appPermissionType - In the implementation block
@property (readonly) long long grade;                                      //@synthesize grade=_grade - In the implementation block
@property (readonly) NSUUID * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSString * application;                                   //@synthesize application=_application - In the implementation block
@property (copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (copy) NSString * applicationName;                               //@synthesize applicationName=_applicationName - In the implementation block
@property (copy) NSString * applicationIdentifier;                         //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (copy) NSString * externalIdentifier;                            //@synthesize externalIdentifier=_externalIdentifier - In the implementation block
@property (copy) NEVPN * VPN;                                              //@synthesize VPN=_VPN - In the implementation block
@property (copy) NEAOVPN * alwaysOnVPN;                                    //@synthesize alwaysOnVPN=_alwaysOnVPN - In the implementation block
@property (copy) NEVPNApp * appVPN;                                        //@synthesize appVPN=_appVPN - In the implementation block
@property (copy) NEContentFilter * contentFilter;                          //@synthesize contentFilter=_contentFilter - In the implementation block
@property (copy) NEProfileIngestionPayloadInfo * payloadInfo;              //@synthesize payloadInfo=_payloadInfo - In the implementation block
@property (copy) NEPathController * pathController;                        //@synthesize pathController=_pathController - In the implementation block
@property (copy) NEDNSProxy * dnsProxy;                                    //@synthesize dnsProxy=_dnsProxy - In the implementation block
@property (copy) NEDNSSettingsBundle * dnsSettings;                        //@synthesize dnsSettings=_dnsSettings - In the implementation block
@property (copy) NEAppPush * appPush;                                      //@synthesize appPush=_appPush - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)setConfiguration:(CFDictionaryRef)arg1 forProtocol:(CFStringRef)arg2 inService:(SCNetworkServiceRef)arg3 ;
+(CFDictionaryRef)copyConfigurationForProtocol:(CFStringRef)arg1 inService:(SCNetworkServiceRef)arg2 ;
+(BOOL)SCServiceWithIdentifier:(id)arg1 existsInPreferences:(SCPreferencesRef)arg2 ;
+(BOOL)removeSCServiceWithIdentifier:(id)arg1 fromPreferences:(SCPreferencesRef)arg2 ;
+(void)addError:(id)arg1 toList:(id)arg2 ;
+(id)configurationWithProfilePayload:(id)arg1 ;
+(id)configurationWithProfilePayload:(id)arg1 grade:(long long)arg2 ;
-(void)syncWithSystemKeychain;
-(void)setExternalIdentifier:(NSString *)arg1 ;
-(void)setApplication:(NSString *)arg1 ;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(BOOL)setContactsDomains:(id)arg1 accountIdentifiers:(id)arg2 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(long long)grade;
-(BOOL)setSMBDomains:(id)arg1 ;
-(BOOL)configureIKE:(id)arg1 vpnType:(id)arg2 payloadBase:(id)arg3 vpn:(id)arg4 ;
-(BOOL)setMailDomains:(id)arg1 ;
-(BOOL)setConfigurationSharedSecret:(id)arg1 ;
-(NSString *)pluginType;
-(BOOL)setPayloadInfoIdentityProxy:(id)arg1 ;
-(BOOL)configureL2TPWithPPPOptions:(id)arg1 ;
-(NSString *)applicationName;
-(void)setContentFilter:(NEContentFilter *)arg1 ;
-(BOOL)setAppLayerVPNUUID:(id)arg1 andSafariDomains:(id)arg2 ;
-(BOOL)configurePPPWithVPNOptions:(id)arg1 payloadBase:(id)arg2 ;
-(id)getPendingCertificateUUIDsContentFilter:(id)arg1 ;
-(BOOL)ingestDisconnectOptions:(id)arg1 ;
-(BOOL)setConfigurationVPNPassword:(id)arg1 ;
-(BOOL)configurePluginWithPayload:(id)arg1 pluginType:(id)arg2 payloadType:(id)arg3 ;
-(BOOL)setContactsDomains:(id)arg1 ;
-(id)getPendingCertificateUUIDsVPN:(id)arg1 ;
-(BOOL)setRestrictDomains:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NEPathController *)pathController;
-(id)initWithVPNPayload:(id)arg1 configurationName:(id)arg2 grade:(long long)arg3 ;
-(void)clearUserKeychain;
-(BOOL)setPayloadInfoIdentity:(id)arg1 ;
-(id)initWithName:(id)arg1 grade:(long long)arg2 ;
-(void)setAppPermissionType:(long long)arg1 ;
-(BOOL)ingestPPPData:(id)arg1 vnpType:(id)arg2 ;
-(NSString *)externalIdentifier;
-(BOOL)setProfileInfo:(id)arg1 ;
-(id)initWithAppLayerVPNPayload:(id)arg1 configurationName:(id)arg2 grade:(long long)arg3 ;
-(id)initWithContentFilterPayload:(id)arg1 configurationName:(id)arg2 grade:(long long)arg3 ;
-(NEAOVPN *)alwaysOnVPN;
-(id)initWithDNSProxyPayload:(id)arg1 configurationName:(id)arg2 grade:(long long)arg3 ;
-(BOOL)setCalendarDomains:(id)arg1 ;
-(void)setVPN:(NEVPN *)arg1 ;
-(BOOL)setCertificatesAppVPN:(id)arg1 ;
-(BOOL)validateStrings:(id)arg1 ;
-(NSString *)applicationIdentifier;
-(void)copyPasswordsFromSystemKeychain;
-(NSString *)name;
-(id)initWithConfiguration:(id)arg1 ;
-(id)getPendingCertificateUUIDs:(id)arg1 ;
-(BOOL)configureVpnOnDemand:(id)arg1 vpnType:(id)arg2 ;
-(BOOL)needToUpdateKeychain;
-(BOOL)setCertificatesVPN:(id)arg1 ;
-(id)generateSignature;
-(NEContentFilter *)contentFilter;
-(id)description;
-(BOOL)ingestProxyOptions:(id)arg1 ;
-(void)updateWithConfiguration:(id)arg1 ;
-(BOOL)setPayloadInfoIdentityPIN:(id)arg1 ;
-(id)getPendingCertificateUUIDsInternal:(id)arg1 ;
-(BOOL)applyChangesToSCServiceInPreferences:(SCPreferencesRef)arg1 ;
-(NEVPN *)VPN;
-(id)getPendingCertificateUUIDsAOVpn:(id)arg1 ;
-(id)getPendingCertificateUUIDsAppVPN:(id)arg1 ;
-(NEProfileIngestionPayloadInfo *)payloadInfo;
-(BOOL)setCalendarDomains:(id)arg1 accountIdentifiers:(id)arg2 ;
-(id)mergeArray:(id)arg1 withArray:(id)arg2 ;
-(void)syncWithKeychainInDomain:(long long)arg1 ;
-(id)getConfigurationProtocol;
-(void)clearKeychainInDomain:(long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)setMailDomains:(id)arg1 accountIdentifiers:(id)arg2 ;
-(BOOL)ingestIPSecDict:(id)arg1 vpnType:(id)arg2 vpn:(id)arg3 ;
-(void)setAppVPN:(NEVPNApp *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)setCertificatesAOVpn:(id)arg1 ;
-(void)setAppPush:(NEAppPush *)arg1 ;
-(id)getConfigurationIdentifier;
-(BOOL)configureVpnOnDemandRules:(id)arg1 ;
-(id)initWithAlwaysOnVPNPayload:(id)arg1 configurationName:(id)arg2 grade:(long long)arg3 ;
-(BOOL)setCertificates:(id)arg1 ;
-(NSString *)application;
-(void)setName:(NSString *)arg1 ;
-(BOOL)ingestPPPDict:(id)arg1 ;
-(void)clearSystemKeychain;
-(id)initFromSCService:(SCNetworkServiceRef)arg1 ;
-(NSUUID *)identifier;
-(id)descriptionWithOptions:(unsigned long long)arg1 ;
-(BOOL)setPayloadInfoIdentityIPSecSharedSecret:(id)arg1 ;
-(BOOL)setAppLayerVPNRuleSettings:(id)arg1 withAppIdentifier:(id)arg2 ;
-(BOOL)setPayloadInfoIdentityUserNameAndPassword:(id)arg1 ;
-(id)getPendingCertificateInfo:(id)arg1 ;
-(void)setApplicationName:(NSString *)arg1 ;
-(BOOL)setCertificateContentFilter:(id)arg1 ;
-(BOOL)setExcludedDomains:(id)arg1 ;
-(BOOL)isSupportedBySC;
-(id)initWithDNSSettingsPayload:(id)arg1 configurationName:(id)arg2 grade:(long long)arg3 ;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)updateFromSCService:(SCNetworkServiceRef)arg1 ;
-(id)initWithPathControllerPayload:(id)arg1 configurationName:(id)arg2 grade:(long long)arg3 ;
-(id)getCertificates;
-(void)setAlwaysOnVPN:(NEAOVPN *)arg1 ;
-(id)configureAOVPNTunnelFromTunnelDict:(id)arg1 tunnelDict:(id)arg2 payloadBase:(id)arg3 interfaceType:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)syncWithUserKeychain;
-(void)setPathController:(NEPathController *)arg1 ;
-(BOOL)setAssociatedDomains:(id)arg1 ;
-(NEVPNApp *)appVPN;
-(long long)appPermissionType;
-(NEDNSProxy *)dnsProxy;
-(BOOL)configurePPPCommon:(id)arg1 ;
-(void)setDnsProxy:(NEDNSProxy *)arg1 ;
-(NEDNSSettingsBundle *)dnsSettings;
-(BOOL)setPayloadInfoCommon:(id)arg1 payloadOrganization:(id)arg2 ;
-(void)setDnsSettings:(NEDNSSettingsBundle *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NEAppPush *)appPush;
-(BOOL)ingestDNSOptions:(id)arg1 ;
-(void)setPayloadInfo:(NEProfileIngestionPayloadInfo *)arg1 ;
@end

