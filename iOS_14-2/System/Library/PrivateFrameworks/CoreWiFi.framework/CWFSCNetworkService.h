/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/


@protocol OS_dispatch_queue;
#import <CoreWiFi/CoreWiFi-Structs.h>
@class NSObject, NSString;

@interface CWFSCNetworkService : NSObject {

	NSObject*<OS_dispatch_queue> _mutexQueue;
	NSObject*<OS_dispatch_queue> _eventQueue;
	SCDynamicStoreRef _storeRef;
	SCPreferencesRef _prefsRef;
	BOOL _isMonitoringEvents;
	NSString* _serviceID;
	NSString* _serviceName;
	BOOL _isServiceEnabled;
	/*^block*/id _eventHandler;
	NSString* _interfaceName;

}

@property (copy) id eventHandler;                                          //@synthesize eventHandler=_eventHandler - In the implementation block
@property (nonatomic,copy,readonly) NSString * interfaceName;              //@synthesize interfaceName=_interfaceName - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceID; 
-(BOOL)isMonitoringEvents;
-(id)IPv6Addresses;
-(id)initWithInterfaceName:(id)arg1 ;
-(id)IPv4Addresses;
-(id)eventHandler;
-(void)stopEventMonitoring;
-(void)setEventHandler:(id)arg1 ;
-(id)__IPv6StateConfig;
-(id)__IPv4SetupConfig;
-(id)init;
-(id)IPv6ConfigMethod;
-(id)__proxiesSetupConfig;
-(NSString *)serviceID;
-(id)DHCPLeaseExpirationTimestamp;
-(id)__IPv4StateConfig;
-(id)IPv4Router;
-(NSString *)interfaceName;
-(id)IPv6Router;
-(id)DNSDomainName;
-(id)DHCPLeaseStartTimestamp;
-(void)__refreshNotificationKeys;
-(id)serviceName;
-(id)IPv4ConfigMethod;
-(id)__DNSSetupConfig;
-(id)__IPv6SetupConfig;
-(id)DNSServerAddresses;
-(void)startEventMonitoring;
-(BOOL)isServiceEnabled;
-(id)__DNSStateConfig;
-(id)__DHCPInfo;
-(void)dealloc;
-(BOOL)__updateServiceID;
@end

