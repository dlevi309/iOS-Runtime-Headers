/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
*/

#import <libobjc.A.dylib/ACCTransportIOAccessoryListenerProtocol.h>
#import <libobjc.A.dylib/ACCTransportIOAccessoryManagerProtocol.h>
#import <libobjc.A.dylib/ACCTransportIOAccessoryPortProtocol.h>
#import <libobjc.A.dylib/ACCTransportIOAccessoryAuthCPProtocol.h>
#import <libobjc.A.dylib/ACCTransportIOAccessoryEAProtocol.h>
#import <libobjc.A.dylib/ACCTransportIOAccessoryOOBPairingProtocol.h>

@protocol OS_dispatch_queue;
@class ACCTransportPluginIOAccessoryManager, NSObject, NSMutableSet, ACCTransportIOAccessoryListener, ACCTransportIOAccessoryManager, NSRecursiveLock, ACCSettingsState, NSMutableArray, NSString;

@interface ACCTransportIOAccessorySharedManager : NSObject <ACCTransportIOAccessoryListenerProtocol, ACCTransportIOAccessoryManagerProtocol, ACCTransportIOAccessoryPortProtocol, ACCTransportIOAccessoryAuthCPProtocol, ACCTransportIOAccessoryEAProtocol, ACCTransportIOAccessoryOOBPairingProtocol> {

	BOOL _isB139OrB164Connected;
	BOOL _bIsWatch;
	ACCTransportPluginIOAccessoryManager* _delegate;
	NSObject*<OS_dispatch_queue> _listQ;
	NSMutableSet* _allIOAccessories;
	NSMutableSet* _allIOAccessoryManagers;
	NSMutableSet* _rootIOAccessoryManagers;
	ACCTransportIOAccessoryListener* _ioAccessoryListener;
	ACCTransportIOAccessoryManager* _rootE75Manager;
	ACCTransportIOAccessoryManager* _rootOrionManager;
	NSRecursiveLock* _accessoryPortLock;
	ACCSettingsState* _enableDirectAWCAuth;
	NSMutableArray* _deferAuthCPServiceArray;
	NSMutableArray* _deferEAServiceArray;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> listQ;                                  //@synthesize listQ=_listQ - In the implementation block
@property (nonatomic,retain) NSMutableSet * allIOAccessories;                                     //@synthesize allIOAccessories=_allIOAccessories - In the implementation block
@property (nonatomic,retain) NSMutableSet * allIOAccessoryManagers;                               //@synthesize allIOAccessoryManagers=_allIOAccessoryManagers - In the implementation block
@property (nonatomic,retain) NSMutableSet * rootIOAccessoryManagers;                              //@synthesize rootIOAccessoryManagers=_rootIOAccessoryManagers - In the implementation block
@property (nonatomic,retain) ACCTransportIOAccessoryListener * ioAccessoryListener;               //@synthesize ioAccessoryListener=_ioAccessoryListener - In the implementation block
@property (nonatomic,readonly) ACCTransportIOAccessoryManager * rootE75Manager;                   //@synthesize rootE75Manager=_rootE75Manager - In the implementation block
@property (nonatomic,readonly) ACCTransportIOAccessoryManager * rootOrionManager;                 //@synthesize rootOrionManager=_rootOrionManager - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * accessoryPortLock;                                 //@synthesize accessoryPortLock=_accessoryPortLock - In the implementation block
@property (nonatomic,retain) ACCSettingsState * enableDirectAWCAuth;                              //@synthesize enableDirectAWCAuth=_enableDirectAWCAuth - In the implementation block
@property (nonatomic,readonly) BOOL bIsWatch;                                                     //@synthesize bIsWatch=_bIsWatch - In the implementation block
@property (nonatomic,retain) NSMutableArray * deferAuthCPServiceArray;                            //@synthesize deferAuthCPServiceArray=_deferAuthCPServiceArray - In the implementation block
@property (nonatomic,retain) NSMutableArray * deferEAServiceArray;                                //@synthesize deferEAServiceArray=_deferEAServiceArray - In the implementation block
@property (assign,nonatomic,__weak) ACCTransportPluginIOAccessoryManager * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isB139OrB164Connected;                                        //@synthesize isB139OrB164Connected=_isB139OrB164Connected - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(int)IOAccessoryClassTypeForIOAccessoryClassString:(id)arg1 ;
+(id)IOAccessoryClassStringForIOAccessoryClassType:(int)arg1 ;
-(unsigned)USBCurrentLimitInmA:(id)arg1 ;
-(BOOL)IOAccessoryEADataArrived:(id)arg1 eaEndpointUUID:(id)arg2 ;
-(void)setAccessoryPortLock:(NSRecursiveLock *)arg1 ;
-(void)setEnableDirectAWCAuth:(ACCSettingsState *)arg1 ;
-(void)startIOACCTransportManager;
-(void)_handleRequestForPrimaryPort:(id)arg1 ;
-(id)managerForIOAccessoryManagerService:(unsigned)arg1 ;
-(void)_IOAccessoryPortDetachInternal:(id)arg1 ;
-(BOOL)bIsWatch;
-(void)handleCloseEASessionNotification:(id)arg1 ;
-(void)_createModuleConnectionAndEndpoint:(id)arg1 ;
-(void)_createEAProtocolsForManager:(id)arg1 ;
-(BOOL)setUSBMode:(int)arg1 forEndpointUUID:(id)arg2 ;
-(id)_basePortForEndpointUUID:(id)arg1 ;
-(NSMutableArray *)deferEAServiceArray;
-(NSRecursiveLock *)accessoryPortLock;
-(BOOL)setUSBCurrentOffset:(int)arg1 forConnectionUUID:(id)arg2 ;
-(void)setDeferEAServiceArray:(NSMutableArray *)arg1 ;
-(id)_basePortForService:(unsigned)arg1 ;
-(BOOL)isPowerDuringSleepEnabled:(id)arg1 ;
-(id)init;
-(BOOL)openEASession:(id)arg1 withEAEndpointUUID:(id)arg2 ;
-(NSMutableArray *)deferAuthCPServiceArray;
-(NSMutableSet *)rootIOAccessoryManagers;
-(ACCTransportPluginIOAccessoryManager *)delegate;
-(void)IOAccessoryManagerServiceTerminated:(unsigned)arg1 ;
-(id)_managerContainingBase:(id)arg1 ;
-(void)IOAccessoryAuthCPServiceTerminated:(unsigned)arg1 ;
-(void)IOAccessoryAuthCPServiceAuthStatusChanged:(int)arg1 authType:(int)arg2 authCert:(id)arg3 authCTA:(BOOL)arg4 service:(unsigned)arg5 ;
-(unsigned)USBChargingVoltageInmV:(id)arg1 ;
-(int)USBModeForEndpointUUID:(id)arg1 ;
-(void)lockAccessoryPorts;
-(NSObject*<OS_dispatch_queue>)listQ;
-(void)setIoAccessoryListener:(ACCTransportIOAccessoryListener *)arg1 ;
-(id)IOAccessoryPortArrived:(id)arg1 withEndpointProtocol:(int)arg2 publish:(BOOL)arg3 ;
-(void)resetLightningBusForEndpointWithUUID:(id)arg1 ;
-(void)IOAccessoryAuthCPServiceArrived:(unsigned)arg1 ;
-(void)setRootIOAccessoryManagers:(NSMutableSet *)arg1 ;
-(void)IOAccessoryManagerResistorIDChanged:(int)arg1 forManager:(id)arg2 ;
-(void)IOAccessoryPortPropertyChanged:(id)arg1 ;
-(ACCTransportIOAccessoryManager *)rootOrionManager;
-(id)_managerForConnectionUUID:(id)arg1 ;
-(BOOL)IOAccessoryPortDataArrived:(id)arg1 endpointUUID:(id)arg2 ;
-(void)_handleRequestForIAPDPortB139B164Connected:(id)arg1 ;
-(BOOL)isB139OrB164Connected;
-(void)unlockAccessoryPorts;
-(void)setDelegate:(ACCTransportPluginIOAccessoryManager *)arg1 ;
-(void)IOAccessoryManagerServiceInfoSet:(unsigned)arg1 ;
-(void)_addIOAccessoryManagerWithIOService:(unsigned)arg1 ;
-(void)transmitData:(id)arg1 forEndpointUUID:(id)arg2 ;
-(id)_managerForBase:(id)arg1 ;
-(BOOL)setBatteryPackMode:(BOOL)arg1 forConnectionUUID:(id)arg2 ;
-(BOOL)IOAccessoryOOBPairingInfoArrived:(id)arg1 endpointUUID:(id)arg2 ;
-(void)setListQ:(NSObject*<OS_dispatch_queue>)arg1 ;
-(ACCSettingsState *)enableDirectAWCAuth;
-(unsigned)USBCurrentLimitOffsetInmA:(id)arg1 ;
-(id)_portForManagerMatchingPrimaryPort:(id)arg1 ;
-(id)_managerForBaseEndpointUUID:(id)arg1 ;
-(BOOL)isBatteryPackModeEnabled:(id)arg1 ;
-(void)setAllIOAccessories:(NSMutableSet *)arg1 ;
-(BOOL)setPowerDuringSleepEnabled:(BOOL)arg1 forConnectionUUID:(id)arg2 ;
-(void)IOAccessoryPortPublish:(id)arg1 ;
-(unsigned)accessoryChargingCurrentInmA:(id)arg1 ;
-(NSMutableSet *)allIOAccessories;
-(unsigned)accessoryPowerModeCurrentLimitInmA:(int)arg1 forConnectionUUID:(id)arg2 ;
-(void)IOAccessoryOOBPairingServiceArrived:(unsigned)arg1 ;
-(unsigned)sleepPowerCurrentLimitInmA:(id)arg1 ;
-(unsigned)USBCurrentLimitBaseInmA:(id)arg1 ;
-(int)_endpointTransportTypeForIOAccessoryPort:(id)arg1 ;
-(BOOL)setAccessoryRequestedCurrent:(unsigned)arg1 forConnectionUUID:(id)arg2 ;
-(void)IOAccessoryEAServiceTerminated:(unsigned)arg1 ;
-(void)_createEAEndpointForProtocol:(id)arg1 andManager:(id)arg2 ;
-(void)IOAccessoryPortServiceArrived:(unsigned)arg1 ;
-(void)IOAccessoryManagerServiceArrived:(unsigned)arg1 ;
-(int)CableType:(id)arg1 ;
-(id)digitalIDDataForUpstreamConnection:(id)arg1 ;
-(NSMutableSet *)allIOAccessoryManagers;
-(void)handleOpenEASessionNotification:(id)arg1 ;
-(ACCTransportIOAccessoryManager *)rootE75Manager;
-(BOOL)isPowerDuringSleepSupported:(id)arg1 ;
-(int)_accPlatformPowerModeToIOAccessoryPowerMode:(int)arg1 ;
-(BOOL)setUSBCurrentLimitBase:(unsigned)arg1 forConnectionUUID:(id)arg2 ;
-(void)setAllIOAccessoryManagers:(NSMutableSet *)arg1 ;
-(ACCTransportIOAccessoryListener *)ioAccessoryListener;
-(BOOL)setFeaturesFromAuthStatus:(int)arg1 andAuthCert:(id)arg2 forConnectionUUID:(id)arg3 withConnectionType:(int)arg4 ;
-(id)_basePortForConnectionUUID:(id)arg1 ;
-(void)closeEASession:(id)arg1 ;
-(void)IOAccessoryManagerServiceDetached:(unsigned)arg1 ;
-(int)USBModeForConnectionUUID:(id)arg1 ;
-(void)_clearChildPortEndpointsForManagerDisconnection:(id)arg1 ;
-(BOOL)IOAccessoryOOBPairingDataArrived:(id)arg1 endpointUUID:(id)arg2 ;
-(void)_processEAService:(unsigned)arg1 andPublish:(BOOL)arg2 ;
-(void)IOAccessoryManagerSupervisedTransportsRestrictedDidChange:(BOOL)arg1 forManager:(id)arg2 ;
-(void)_handleUSBHostPluginArrived:(id)arg1 ;
-(void)IOAccessoryOOBPairingServiceTerminated:(unsigned)arg1 ;
-(BOOL)configureAccessoryPowerMode:(int)arg1 forConnectionUUID:(id)arg2 ;
-(id)_managerForIOService:(unsigned)arg1 shouldCreateNewService:(BOOL)arg2 ;
-(int)_connectionTypeForIOAccessoryPort:(id)arg1 ;
-(void)stopIOACCTransportManager;
-(void)setDeferAuthCPServiceArray:(NSMutableArray *)arg1 ;
-(BOOL)_addACCTransportToManager:(id)arg1 ;
-(BOOL)resetAccessoryBaseCurrent:(id)arg1 ;
-(BOOL)_managerForConnectionUUIDHasActiveEndpoint:(id)arg1 ;
-(BOOL)IOAccessoryOOBPairingDataFinishedForEndpointUUID:(id)arg1 ;
-(BOOL)setAccessoryUsedCurrent:(unsigned)arg1 forConnectionUUID:(id)arg2 ;
-(void)IOAccessoryEAServiceArrived:(unsigned)arg1 ;
-(BOOL)setUSBMode:(int)arg1 forConnectionUUID:(id)arg2 ;
-(void)IOAccessoryPortServiceTerminated:(unsigned)arg1 ;
-(BOOL)shouldEnableDirectAWCAuth;
-(BOOL)IOAccessoryOOBPairingDataStartedForEndpointUUID:(id)arg1 ;
-(void)IOAccessoryPortDetach:(id)arg1 ;
-(void)dealloc;
@end

