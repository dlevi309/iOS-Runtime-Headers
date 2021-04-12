/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GameController-Structs.h>
#import <GameController/_GCControllerManager.h>
#import <libobjc.A.dylib/GCPhysicalDeviceRegistry.h>
#import <libobjc.A.dylib/GCLogicalDeviceRegistry.h>
#import <libobjc.A.dylib/GCDeviceRegistry.h>
#import <libobjc.A.dylib/GCDeviceConfigurationRegistry.h>

@class NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface _GCControllerManagerServer : _GCControllerManager <GCPhysicalDeviceRegistry, GCLogicalDeviceRegistry, GCDeviceRegistry, GCDeviceConfigurationRegistry> {

	NSMutableDictionary* _allDeviceManagers;
	NSMutableDictionary* _physicalDeviceManagers;
	NSMutableDictionary* _logicalDeviceManagers;
	os_unfair_lock_s _configurationsLock;
	NSMutableSet* _configurations;
	NSMutableDictionary* _allDevices;
	NSMutableDictionary* _physicalDevices;
	NSMutableDictionary* _logicalDevices;
	NSMutableSet* _activeConfigurations;
	NSMutableSet* _hidServices;
	NSMutableDictionary* _hidServiceOwners;
	NSMutableDictionary* _pendingDriverConnections;
	NSSet* _activeControllerDevices;

}

@property (copy) NSSet * activeControllerDevices;                                                //@synthesize activeControllerDevices=_activeControllerDevices - In the implementation block
@property (readonly) id<GCDeviceConfigurationRegistry> deviceConfigurationRegistry; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)removeConfigurationWithIdentifier:(id)arg1 ;
-(void)_onqueue_registerLogicalDevice:(id)arg1 ;
-(id)init;
-(BOOL)addConfiguration:(id)arg1 replaceExisting:(BOOL)arg2 ;
-(id)configurationWithIdentifier:(id)arg1 ;
-(id)initWithControllerProfiles:(id)arg1 ;
-(void)deviceManager:(id)arg1 deviceDidConnect:(id)arg2 ;
-(id)_hidqueue_popPendingDriverConnectionsForRegistryID:(id)arg1 ;
-(void)_hidqueue_pushPendingDriverConnection:(id)arg1 forRegistryID:(id)arg2 ;
-(void)_onqueue_registerPhysicalDevice:(id)arg1 ;
-(void)refreshActiveConfigurations;
-(void)setActiveControllerDevices:(NSSet *)arg1 ;
-(void)deviceManager:(id)arg1 deviceDidDisconnect:(id)arg2 ;
-(BOOL)updateConfiguration:(id)arg1 ;
-(id)logicalDevices;
-(NSSet *)activeControllerDevices;
-(void)_onqueue_refreshLogicalDevices;
-(void)_onqueue_unregisterLogicalDevice:(id)arg1 ;
-(BOOL)hasConfigurationWithIdentifier:(id)arg1 ;
-(void)onHIDDeviceAdded:(IOHIDServiceClientRef)arg1 ;
-(BOOL)acceptIncomingDriverConnection:(id)arg1 ;
-(void)_onqueue_unregisterPhysicalDevice:(id)arg1 ;
-(void)_onqueue_refreshControllers;
-(void)refreshActiveConfigurationsWithCompletion:(/*^block*/id)arg1 ;
-(void)driverCheckIn;
-(id<GCDeviceConfigurationRegistry>)deviceConfigurationRegistry;
-(void)onHIDDeviceRemoved:(IOHIDServiceClientRef)arg1 ;
@end

