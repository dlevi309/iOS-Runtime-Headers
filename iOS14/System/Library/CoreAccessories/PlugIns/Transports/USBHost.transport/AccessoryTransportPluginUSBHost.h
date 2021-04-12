/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/USBHost.transport/USBHost
*/

#import <USBHost/USBHost-Structs.h>
#import <CoreAccessories/ACCTransportPlugin.h>
#import <libobjc.A.dylib/ACCTransportPluginProtocol.h>
#import <libobjc.A.dylib/ACCPlatformUSBHostPluginProtocol.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString;

@interface AccessoryTransportPluginUSBHost : ACCTransportPlugin <ACCTransportPluginProtocol, ACCPlatformUSBHostPluginProtocol> {

	IONotificationPortRef _iokitNotifyPort;
	unsigned _iokitAddedIterator;
	unsigned _iokitRemovedIterator;
	unsigned temp;
	BOOL _isRunning;
	NSMutableDictionary* _accessoryConnections;
	NSMutableDictionary* _accessoryNativeUSBEndpoints;
	NSMutableDictionary* _activeEAInterfaces;
	NSObject*<OS_dispatch_queue> _accessoryConnectionsLock;
	NSObject*<OS_dispatch_queue> _activeEAInterfacesLock;
	NSObject*<OS_dispatch_queue> _accessoryNativeUSBEndpointsLock;

}

@property (assign,nonatomic) BOOL isRunning;                                                            //@synthesize isRunning=_isRunning - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accessoryConnections;                                //@synthesize accessoryConnections=_accessoryConnections - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accessoryNativeUSBEndpoints;                         //@synthesize accessoryNativeUSBEndpoints=_accessoryNativeUSBEndpoints - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activeEAInterfaces;                                  //@synthesize activeEAInterfaces=_activeEAInterfaces - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessoryConnectionsLock;                     //@synthesize accessoryConnectionsLock=_accessoryConnectionsLock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> activeEAInterfacesLock;                       //@synthesize activeEAInterfacesLock=_activeEAInterfacesLock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accessoryNativeUSBEndpointsLock;              //@synthesize accessoryNativeUSBEndpointsLock=_accessoryNativeUSBEndpointsLock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * pluginName; 
-(void)setIsRunning:(BOOL)arg1 ;
-(NSString *)pluginName;
-(BOOL)setUSBHostHIDInterface:(unsigned char)arg1 withHIDFunction:(unsigned)arg2 forConnectionUUID:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)accessoryNativeUSBEndpointsLock;
-(NSMutableDictionary *)accessoryNativeUSBEndpoints;
-(BOOL)lockUSBHostInterfacesForConnectionUUID:(id)arg1 ;
-(void)setAccessoryNativeUSBEndpointsLock:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)accessoryConnectionsLock;
-(void)setActiveEAInterfacesLock:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)activeEAInterfaces;
-(void)serviceAdded:(unsigned)arg1 ;
-(NSObject*<OS_dispatch_queue>)activeEAInterfacesLock;
-(void)serviceRemoved:(unsigned)arg1 ;
-(void)tearDownIOKit;
-(BOOL)unlockUSBHostInterfacesForConnectionUUID:(id)arg1 ;
-(void)startConfiguringIOKit;
-(BOOL)sendOutgoingData:(id)arg1 forEndpointWithUUID:(id)arg2 connectionUUID:(id)arg3 ;
-(void)_handleOpenEASessionNotificationForEndpoint:(id)arg1 connection:(id)arg2 ;
-(void)_handleCloseEASessionNotificationForEndpoint:(id)arg1 connection:(id)arg2 ;
-(NSMutableDictionary *)accessoryConnections;
-(void)setAccessoryConnections:(NSMutableDictionary *)arg1 ;
-(void)configureIOKit;
-(BOOL)isRunning;
-(void)stopPlugin;
-(BOOL)clearUSBHostHIDInterfacesForConnectionUUID:(id)arg1 ;
-(void)initPlugin;
-(void)_handleOpenSocketFromAppToAccessoryNotification:(id)arg1 ;
-(BOOL)setNeedOutZLP:(BOOL)arg1 maxOutLength:(unsigned)arg2 forConnectionUUID:(id)arg3 ;
-(void)setActiveEAInterfaces:(NSMutableDictionary *)arg1 ;
-(void)_handleOpenSocketFromAccessoryToAppNotification:(id)arg1 ;
-(void)setAccessoryNativeUSBEndpoints:(NSMutableDictionary *)arg1 ;
-(void)startPlugin;
-(BOOL)configureUSBHostNCMInterface:(unsigned char)arg1 asCarPlay:(BOOL)arg2 forConnectionUUID:(id)arg3 ;
-(void)setAccessoryConnectionsLock:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

