/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/


@protocol OS_dispatch_queue;
#import <CoreWiFi/CoreWiFi-Structs.h>
@class NSObject;

@interface CWFSCNetworkConfiguration : NSObject {

	NSObject*<OS_dispatch_queue> _mutexQueue;
	NSObject*<OS_dispatch_queue> _eventQueue;
	SCDynamicStoreRef _storeRef;
	BOOL _isMonitoringEvents;
	/*^block*/id _eventHandler;

}

@property (copy) id eventHandler;              //@synthesize eventHandler=_eventHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(id)IPv6Addresses;
-(id)IPv4Addresses;
-(id)eventHandler;
-(void)setEventHandler:(id)arg1 ;
-(void)startEventMonitoring;
-(void)stopEventMonitoring;
-(BOOL)isMonitoringEvents;
-(id)IPv4Router;
-(id)IPv6Router;
-(id)DNSDomainName;
-(id)DNSServerAddresses;
-(id)IPv4InterfaceName;
-(id)IPv6InterfaceName;
-(id)IPv4ServiceID;
-(id)IPv6ServiceID;
-(id)IPv4ServiceName;
-(id)IPv6ServiceName;
-(void)__startEventMonitoring;
-(id)__IPv4GlobalStateConfig;
-(id)__nameForServiceWithID:(id)arg1 ;
-(id)__IPv4StateConfigForServiceID:(id)arg1 ;
-(id)__IPv4SetupConfigForServiceID:(id)arg1 ;
-(id)__IPv6GlobalStateConfig;
-(id)__IPv6StateConfigForServiceID:(id)arg1 ;
-(id)__IPv6SetupConfigForServiceID:(id)arg1 ;
-(id)__DNSGlobalStateConfig;
-(id)IPv4SubnetMasks;
-(id)IPv6PrefixLengths;
-(id)DNSSearchDomains;
@end

