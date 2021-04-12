/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/


@protocol OS_dispatch_queue;
#import <WiFiKit/WiFiKit-Structs.h>
@class NSString, NSObject;

@interface WFIPMonitor : NSObject {

	BOOL _isMonitoring;
	NSString* _serviceID;
	NSString* _interfaceName;
	SCDynamicStoreRef _storeRef;
	SCPreferencesRef _prefsRef;
	SCDynamicStoreRef _networkServiceStore;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy) NSString * serviceID;                              //@synthesize serviceID=_serviceID - In the implementation block
@property (nonatomic,copy) NSString * interfaceName;                          //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign) SCDynamicStoreRef storeRef;                                //@synthesize storeRef=_storeRef - In the implementation block
@property (assign) SCPreferencesRef prefsRef;                                 //@synthesize prefsRef=_prefsRef - In the implementation block
@property (assign) SCDynamicStoreRef networkServiceStore;                     //@synthesize networkServiceStore=_networkServiceStore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                     //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)interfaceName;
-(void)setInterfaceName:(NSString *)arg1 ;
-(id)dnsSearchDomains;
-(id)initWithInterfaceName:(id)arg1 ;
-(NSString *)serviceID;
-(id)dnsServerAddresses;
-(void)setServiceID:(NSString *)arg1 ;
-(id)ipv4Addresses;
-(id)ipv6Addresses;
-(BOOL)personalHotspotHasClients;
-(BOOL)hasValidIPAddress;
-(BOOL)renewLease;
-(id)__wifiServiceID;
-(BOOL)monitorNetworkServiceID:(id)arg1 ;
-(long long)ipv4ConfigMethod;
-(id)ipv4Router;
-(BOOL)hasValidIPv4Address;
-(BOOL)hasValidIPv6Address;
-(id)ipv4SubnetMasks;
-(SCPreferencesRef)prefsRef;
-(id)__ipv6SetupConfig;
-(id)__ipv4SetupConfig;
-(id)__ipv4StateConfig;
-(id)__dhcpInfo;
-(id)__ipv6StateConfig;
-(BOOL)isUsingCustomDNSSettings;
-(id)__dnsSetupConfig;
-(id)__dnsStateConfig;
-(id)__proxiesSetupConfig;
-(SCDynamicStoreRef)storeRef;
-(void)_postChangesNotification:(id)arg1 ;
-(long long)ipv6ConfigMethod;
-(id)__ipv4InterfaceStateConfig;
-(id)ipv4DHCPClientID;
-(id)DHCPLeaseExpirationDate;
-(id)ipv6Router;
-(id)ipv6PrefixLengths;
-(id)dnsDomainName;
-(id)httpProxyServer;
-(id)httpProxyPort;
-(BOOL)httpProxyIsAuthenticated;
-(id)httpProxyUsername;
-(BOOL)httpProxyAutoConfigured;
-(id)httpProxyAutoConfigURL;
-(BOOL)isUsingCustomProxySetting;
-(BOOL)globalProxyIsEnabled;
-(void)setStoreRef:(SCDynamicStoreRef)arg1 ;
-(void)setPrefsRef:(SCPreferencesRef)arg1 ;
-(SCDynamicStoreRef)networkServiceStore;
-(void)setNetworkServiceStore:(SCDynamicStoreRef)arg1 ;
@end

