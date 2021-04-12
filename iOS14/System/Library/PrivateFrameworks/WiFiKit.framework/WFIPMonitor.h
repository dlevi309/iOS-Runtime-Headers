/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/


@protocol OS_dispatch_queue;
#import <WiFiKit/WiFiKit-Structs.h>
@class _WFIPMonitorObserver, NSString, NSObject;

@interface WFIPMonitor : NSObject {

	BOOL _isMonitoring;
	_WFIPMonitorObserver* _dynamicStoreInfo;
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
-(id)initWithInterfaceName:(id)arg1 ;
-(void)setStoreRef:(SCDynamicStoreRef)arg1 ;
-(id)DHCPLeaseExpirationDate;
-(id)ipv6Addresses;
-(id)init;
-(SCPreferencesRef)prefsRef;
-(BOOL)hasValidIPAddress;
-(id)dnsDomainName;
-(BOOL)isUsingCustomProxySetting;
-(BOOL)httpProxyIsAuthenticated;
-(id)ipv4Addresses;
-(id)__proxiesSetupConfig;
-(NSString *)serviceID;
-(BOOL)isUsingCustomDNSSettings;
-(NSString *)bundleIdentifier;
-(id)__dnsStateConfig;
-(void)setServiceID:(NSString *)arg1 ;
-(BOOL)globalProxyIsEnabled;
-(id)__ipv4InterfaceStateConfig;
-(NSString *)interfaceName;
-(id)__ipv6StateConfig;
-(id)ipv4SubnetMasks;
-(id)dnsServerAddresses;
-(BOOL)monitorNetworkServiceID:(id)arg1 ;
-(id)httpProxyPort;
-(long long)ipv4ConfigMethod;
-(BOOL)personalHotspotHasClients;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(BOOL)hasValidIPv4Address;
-(BOOL)renewLease;
-(id)httpProxyUsername;
-(id)__ipv6SetupConfig;
-(BOOL)httpProxyAutoConfigured;
-(id)httpProxyAutoConfigURL;
-(SCDynamicStoreRef)storeRef;
-(id)ipv4Router;
-(void)_postChangesNotification:(id)arg1 ;
-(SCDynamicStoreRef)networkServiceStore;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)__ipv4SetupConfig;
-(id)__dhcpInfo;
-(id)__wifiServiceID;
-(void)setPrefsRef:(SCPreferencesRef)arg1 ;
-(id)ipv6PrefixLengths;
-(long long)ipv6ConfigMethod;
-(void)setInterfaceName:(NSString *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)dnsSearchDomains;
-(id)__dnsSetupConfig;
-(BOOL)hasValidIPv6Address;
-(id)ipv6Router;
-(void)setNetworkServiceStore:(SCDynamicStoreRef)arg1 ;
-(void)dealloc;
-(id)__ipv4StateConfig;
-(id)httpProxyServer;
-(id)ipv4DHCPClientID;
@end

