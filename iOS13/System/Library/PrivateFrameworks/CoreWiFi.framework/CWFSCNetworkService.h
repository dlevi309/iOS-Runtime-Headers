/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)serviceName;
-(id)IPv6Addresses;
-(id)IPv4Addresses;
-(id)eventHandler;
-(void)setEventHandler:(id)arg1 ;
-(NSString *)interfaceName;
-(id)initWithInterfaceName:(id)arg1 ;
-(NSString *)serviceID;
-(BOOL)isServiceEnabled;
-(id)__proxiesSetupConfig;
-(void)startEventMonitoring;
-(void)stopEventMonitoring;
-(BOOL)isMonitoringEvents;
-(BOOL)__updateServiceID;
-(void)__refreshNotificationKeys;
-(id)__IPv4StateConfig;
-(id)__IPv4SetupConfig;
-(id)__IPv6StateConfig;
-(id)__IPv6SetupConfig;
-(id)__DNSStateConfig;
-(id)__DNSSetupConfig;
-(id)__DHCPInfo;
-(id)IPv4Router;
-(id)IPv6Router;
-(id)IPv6ConfigMethod;
-(id)IPv4ConfigMethod;
-(id)DNSDomainName;
-(id)DNSServerAddresses;
-(id)DHCPLeaseStartTimestamp;
-(id)DHCPLeaseExpirationTimestamp;
@end

