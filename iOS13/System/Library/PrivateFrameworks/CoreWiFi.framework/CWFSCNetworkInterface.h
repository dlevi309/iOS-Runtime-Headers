/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)IPv6Addresses;
-(id)IPv4Addresses;
-(id)eventHandler;
-(void)setEventHandler:(id)arg1 ;
-(NSString *)interfaceName;
-(id)initWithInterfaceName:(id)arg1 ;
-(void)startEventMonitoring;
-(void)stopEventMonitoring;
-(BOOL)isMonitoringEvents;
-(id)__IPv4StateConfig;
-(id)__IPv6StateConfig;
-(NSString *)hardwareAddress;
-(void)__startEventMonitoring;
-(id)IPv4SubnetMasks;
-(id)IPv6PrefixLengths;
-(id)__hardwareAddress;
-(id)__linkStateConfig;
-(id)__networkInterfaceHardwareAddress;
-(id)__networkStackHardwareAddress;
-(id)airPortStateConfiguration;
-(id)airPortSetupConfiguration;
-(id)IPv4BroadcastAddresses;
-(id)IPv6Flags;
-(BOOL)isLinkActive;
@end

