/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isRunning;
-(void)setIsRunning:(BOOL)arg1 ;
-(NSString *)pluginName;
-(void)initPlugin;
-(void)startPlugin;
-(void)stopPlugin;
-(BOOL)sendOutgoingData:(id)arg1 forEndpointWithUUID:(id)arg2 connectionUUID:(id)arg3 ;
-(void)setAccessoryConnections:(NSMutableDictionary *)arg1 ;
-(void)setAccessoryNativeUSBEndpoints:(NSMutableDictionary *)arg1 ;
-(void)setActiveEAInterfaces:(NSMutableDictionary *)arg1 ;
-(void)setAccessoryConnectionsLock:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setActiveEAInterfacesLock:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAccessoryNativeUSBEndpointsLock:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_handleOpenSocketFromAccessoryToAppNotification:(id)arg1 ;
-(void)_handleOpenSocketFromAppToAccessoryNotification:(id)arg1 ;
-(void)startConfiguringIOKit;
-(void)tearDownIOKit;
-(void)configureIOKit;
-(NSObject*<OS_dispatch_queue>)accessoryConnectionsLock;
-(NSMutableDictionary *)accessoryConnections;
-(NSObject*<OS_dispatch_queue>)accessoryNativeUSBEndpointsLock;
-(NSMutableDictionary *)accessoryNativeUSBEndpoints;
-(NSObject*<OS_dispatch_queue>)activeEAInterfacesLock;
-(NSMutableDictionary *)activeEAInterfaces;
-(void)_handleOpenEASessionNotificationForEndpoint:(id)arg1 connection:(id)arg2 ;
-(void)_handleCloseEASessionNotificationForEndpoint:(id)arg1 connection:(id)arg2 ;
-(BOOL)unlockUSBHostInterfacesForConnectionUUID:(id)arg1 ;
-(BOOL)lockUSBHostInterfacesForConnectionUUID:(id)arg1 ;
-(BOOL)setUSBHostHIDInterface:(unsigned char)arg1 withHIDFunction:(unsigned)arg2 forConnectionUUID:(id)arg3 ;
-(BOOL)clearUSBHostHIDInterfacesForConnectionUUID:(id)arg1 ;
-(BOOL)configureUSBHostNCMInterface:(unsigned char)arg1 asCarPlay:(BOOL)arg2 forConnectionUUID:(id)arg3 ;
-(BOOL)setNeedOutZLP:(BOOL)arg1 maxOutLength:(unsigned)arg2 forConnectionUUID:(id)arg3 ;
-(void)serviceAdded:(unsigned)arg1 ;
-(void)serviceRemoved:(unsigned)arg1 ;
@end

