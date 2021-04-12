/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
*/


@protocol OS_dispatch_queue;
#import <CoreWiFi/CoreWiFi-Structs.h>
@class NSObject, NSString;

@interface CWFSCNetworkInterface : NSObject {

	NSObject*<OS_dispatch_queue> _mutexQueue;
	NSObject*<OS_dispatch_queue> _eventQueue;
	SCDynamicStoreRef _storeRef;
	BOOL _isMonitoringEvents;
	NSString* _interfaceName;
	NSString* _hardwareAddress;
	/*^block*/id _eventHandler;

}

@property (nonatomic,copy,readonly) NSString * interfaceName;                //@synthesize interfaceName=_interfaceName - In the implementation block
@property (nonatomic,copy,readonly) NSString * hardwareAddress;              //@synthesize hardwareAddress=_hardwareAddress - In the implementation block
@property (copy) id eventHandler;                                            //@synthesize eventHandler=_eventHandler - In the implementation block
-(BOOL)isMonitoringEvents;
-(id)IPv6Addresses;
-(id)initWithInterfaceName:(id)arg1 ;
-(id)IPv4Addresses;
-(id)eventHandler;
-(void)stopEventMonitoring;
-(void)setEventHandler:(id)arg1 ;
-(id)IPv4BroadcastAddresses;
-(id)__IPv6StateConfig;
-(id)__networkInterfaceHardwareAddress;
-(id)__hardwareAddress;
-(id)IPv4SubnetMasks;
-(id)init;
-(id)__IPv4StateConfig;
-(id)IPv6Flags;
-(id)airPortStateConfiguration;
-(id)__networkStackHardwareAddress;
-(NSString *)interfaceName;
-(id)airPortSetupConfiguration;
-(BOOL)isLinkActive;
-(void)__startEventMonitoring;
-(id)IPv6PrefixLengths;
-(NSString *)hardwareAddress;
-(id)__linkStateConfig;
-(void)startEventMonitoring;
-(void)dealloc;
@end

