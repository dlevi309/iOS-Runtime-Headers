/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isMonitoringEvents;
-(id)IPv6Addresses;
-(id)IPv4Addresses;
-(id)eventHandler;
-(void)stopEventMonitoring;
-(void)setEventHandler:(id)arg1 ;
-(id)IPv4SubnetMasks;
-(id)init;
-(id)IPv4ServiceName;
-(id)IPv4Router;
-(id)IPv6InterfaceName;
-(id)IPv6Router;
-(id)IPv6ServiceID;
-(id)__IPv6StateConfigForServiceID:(id)arg1 ;
-(id)__nameForServiceWithID:(id)arg1 ;
-(id)DNSDomainName;
-(void)__startEventMonitoring;
-(id)__IPv4SetupConfigForServiceID:(id)arg1 ;
-(id)IPv6PrefixLengths;
-(id)__DNSGlobalStateConfig;
-(id)IPv4InterfaceName;
-(id)__IPv6GlobalStateConfig;
-(id)IPv6ServiceName;
-(id)DNSSearchDomains;
-(id)DNSServerAddresses;
-(void)startEventMonitoring;
-(id)__IPv4GlobalStateConfig;
-(id)__IPv4StateConfigForServiceID:(id)arg1 ;
-(void)dealloc;
-(id)IPv4ServiceID;
-(id)__IPv6SetupConfigForServiceID:(id)arg1 ;
@end

