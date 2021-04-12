/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/_GCIPCObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/GCDeviceLegacy.h>
#import <libobjc.A.dylib/GCDevice.h>

@protocol OS_dispatch_queue, NSCopyingNSObjectNSSecureCoding, GCControllerProductInfo, GCControllerMotionConfigurableSensors, GCControllerSettingsComponent, GCControllerPlayerIndicator, GCDeviceHapticCapabilityInfo, GCDeviceLightComponent, GCDeviceBatteryComponent, GCNamedProfile;
@class NSObject, NSArray, GCPhysicalInputProfile, GCMotion, NSString, NSMutableArray, GCControllerSettings, GCDeviceBattery, GCGamepad, GCMicroGamepad, GCExtendedGamepad, GCDeviceLight, GCDeviceHaptics;

@interface GCController : NSObject <_GCIPCObject, NSSecureCoding, GCDeviceLegacy, GCDevice> {

	NSObject*<OS_dispatch_queue> _handlerQueue;
	id<NSCopying><NSObject><NSSecureCoding> _identifier;
	NSArray* _components;
	id<GCControllerProductInfo> _info;
	GCPhysicalInputProfile* _physicalInput;
	GCMotion* _motion;
	id<GCControllerMotionConfigurableSensors> _motionConfigurableSensors;
	id<GCControllerSettingsComponent> _settings;
	id<GCControllerPlayerIndicator> _playerIndicator;
	id<GCDeviceHapticCapabilityInfo> _hapticCapabilityInfo;
	id<GCDeviceLightComponent> _light;
	id<GCDeviceBatteryComponent> _battery;
	id<GCNamedProfile> _profile;
	NSString* _uniqueIdentifier;
	unsigned _service;
	NSMutableArray* _hidServices;
	NSString* _physicalDeviceUniqueID;
	NSString* _debugName;
	NSString* _vendorName;
	NSString* _description;
	unsigned long long _deviceHash;
	long long _playerIndex;
	BOOL _physicalDeviceUsesCompass;
	BOOL _forwarded;
	BOOL _allHIDDevicesConnected;
	BOOL _published;
	BOOL _isProxyController;
	BOOL _snapshot;
	/*^block*/id _controllerPausedHandler;

}

@property (nonatomic,copy) id __deprecated_controllerPausedHandler; 
@property (getter=isComponentBased,nonatomic,readonly) BOOL componentBased; 
@property (nonatomic,readonly) NSArray * components; 
@property (nonatomic,readonly) id<GCControllerMotionConfigurableSensors> motionConfigurableSensors; 
@property (nonatomic,readonly) GCControllerSettings * settings; 
@property (nonatomic,readonly) GCControllerSettings * settingsForBundleID; 
@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) GCPhysicalInputProfile*<GCNamedProfile> profile; 
@property (nonatomic,retain) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) NSArray * hidServices; 
@property (nonatomic,readonly) unsigned service; 
@property (nonatomic,retain) NSString * physicalDeviceUniqueID; 
@property (assign,nonatomic) BOOL physicalDeviceUsesCompass; 
@property (getter=isBluetoothAndUSBMirrored,nonatomic,readonly) BOOL bluetoothAndUSBMirrored; 
@property (nonatomic,readonly) unsigned long long deviceHash; 
@property (nonatomic,copy) NSString * debugName; 
@property (assign,getter=isForwarded,nonatomic) BOOL forwarded; 
@property (assign,getter=areAllHIDDevicesConnected,nonatomic) BOOL allHIDDevicesConnected; 
@property (assign,getter=isPublished,nonatomic) BOOL published; 
@property (nonatomic,readonly) NSString * productCategory; 
@property (nonatomic,readonly) id<NSCopying><NSObject><NSSecureCoding> identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSArray * components;                                                                 //@synthesize components=_components - In the implementation block
@property (nonatomic,copy) id controllerPausedHandler;                                                           //@synthesize controllerPausedHandler=_controllerPausedHandler - In the implementation block
@property (getter=isAttachedToDevice,nonatomic,readonly) BOOL attachedToDevice; 
@property (getter=isSnapshot,readonly) BOOL snapshot;                                                            //@synthesize snapshot=_snapshot - In the implementation block
@property (assign,nonatomic) long long playerIndex; 
@property (nonatomic,copy,readonly) GCDeviceBattery * battery; 
@property (nonatomic,readonly) GCGamepad * gamepad; 
@property (nonatomic,readonly) GCMicroGamepad * microGamepad; 
@property (nonatomic,readonly) GCExtendedGamepad * extendedGamepad; 
@property (nonatomic,readonly) GCMotion * motion; 
@property (nonatomic,retain,readonly) GCDeviceLight * light; 
@property (nonatomic,retain,readonly) GCDeviceHaptics * haptics; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> handlerQueue;                                          //@synthesize handlerQueue=_handlerQueue - In the implementation block
@property (nonatomic,copy,readonly) NSString * vendorName; 
@property (nonatomic,readonly) GCPhysicalInputProfile * physicalInputProfile; 
+(BOOL)supportsSecureCoding;
+(void)_startWirelessControllerDiscoveryWithCompanions:(BOOL)arg1 btClassic:(BOOL)arg2 btle:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)__daemon__appDidEnterBackground;
+(id)controllerWithMicroGamepad;
+(void)__openXPC__;
+(void)__open__;
+(id)current;
+(id)controllerWithExtendedGamepad;
+(void)__setLogger__:(/*^block*/id)arg1 ;
+(void)stopWirelessControllerDiscovery;
+(void)__daemon__appWillEnterForeground;
+(id)controllers;
+(void)__openXPC_and_CBApplicationDidBecomeActive__;
+(void)startWirelessControllerDiscoveryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setProfile:(GCPhysicalInputProfile*<GCNamedProfile>)arg1 ;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(NSString *)vendorName;
-(void)setPublished:(BOOL)arg1 ;
-(void)setComponents:(NSArray *)arg1 ;
-(void)setDebugName:(NSString *)arg1 ;
-(BOOL)isSnapshot;
-(id)initWithProfile:(id)arg1 ;
-(void)handleEvent:(IOHIDEventRef)arg1 ;
-(GCDeviceLight *)light;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(void)addComponent:(id)arg1 ;
-(GCGamepad *)gamepad;
-(NSArray *)components;
-(NSString *)physicalDeviceUniqueID;
-(NSString *)description;
-(id)initWithComponents:(id)arg1 ;
-(id)capture;
-(void)setForwarded:(BOOL)arg1 ;
-(void)setHandlerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(GCPhysicalInputProfile*<GCNamedProfile>)profile;
-(GCControllerSettings *)settings;
-(void)setService:(unsigned)arg1 ;
-(NSObject*<OS_dispatch_queue>)handlerQueue;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isPublished;
-(GCMotion *)motion;
-(GCDeviceBattery *)battery;
-(GCDeviceHaptics *)haptics;
-(id<NSObject><NSCopying><NSSecureCoding>)identifier;
-(GCExtendedGamepad *)extendedGamepad;
-(void)setVendorName:(NSString *)arg1 ;
-(void)setPlayerIndex:(long long)arg1 ;
-(long long)playerIndex;
-(unsigned long long)deviceHash;
-(NSString *)debugName;
-(void)removeComponent:(id)arg1 ;
-(unsigned)sampleRate;
-(unsigned)service;
-(void)dealloc;
-(NSString *)productCategory;
-(BOOL)isForwarded;
-(BOOL)isBluetoothAndUSBMirrored;
-(NSArray *)hidServices;
-(id)_legacy_mouse;
-(GCPhysicalInputProfile *)physicalInputProfile;
-(BOOL)isProxyController;
-(id)initWithProfileClass:(Class)arg1 serviceRef:(IOHIDServiceClientRef)arg2 ;
-(void)setIsProxyController:(BOOL)arg1 ;
-(void)setPhysicalDeviceUniqueID:(NSString *)arg1 ;
-(BOOL)areAllHIDDevicesConnected;
-(void)setAllHIDDevicesConnected:(BOOL)arg1 ;
-(id)_legacy_vendorName;
-(id)_legacy_productCategory;
-(BOOL)_legacy_isEqualToController:(id)arg1 ;
-(id)_legacy_description;
-(void*)createInputBufferForDevice:(IOHIDDeviceRef)arg1 withSize:(unsigned long long)arg2 ;
-(void)addServiceRefsWithDevice:(id)arg1 ;
-(void)addServiceRef:(id)arg1 ;
-(BOOL)hasServiceRef:(IOHIDServiceClientRef)arg1 ;
-(void)removeServiceRef:(IOHIDServiceClientRef)arg1 ;
-(void)clearServiceRef;
-(BOOL)supportsMotionLite;
-(long long)_legacy_playerIndex;
-(void)_legacy_setPlayerIndex:(long long)arg1 ;
-(id)_legacy_physicalInputProfileName;
-(id)_legacy_physicalInputProfile;
-(id)initWithServiceRef:(IOHIDServiceClientRef)arg1 ;
-(BOOL)_legacy_isAttachedToDevice;
-(GCMicroGamepad *)microGamepad;
-(id)detailedProductCategory;
-(id)physicalInputProfileName;
-(BOOL)isAttachedToDevice;
-(BOOL)physicalDeviceUsesCompass;
-(id<GCControllerMotionConfigurableSensors>)motionConfigurableSensors;
-(void)initializeHapticEngines;
-(void)removeHapticEngines;
-(id)hapticEngines;
-(void)setControllerPausedHandler:(id)arg1 ;
-(id)controllerPausedHandler;
-(void)set__deprecated_controllerPausedHandler:(id)arg1 ;
-(id)__deprecated_controllerPausedHandler;
-(id)initWithIdentifier:(id)arg1 components:(id)arg2 ;
-(GCControllerSettings *)settingsForBundleID;
-(BOOL)isComponentBased;
-(id)_legacy_batteryStatus;
-(id)_legacy_extendedGamepad;
-(id)_legacy_gamepad;
-(id)_legacy_microGamepad;
-(id)_legacy_motion;
-(void)_setSnapshot:(BOOL)arg1 ;
-(BOOL)isEqualToController:(id)arg1 ;
-(void)_becomeCurrent;
-(id)controllerSettings;
-(void)setPhysicalDeviceUsesCompass:(BOOL)arg1 ;
-(BOOL)displayTrueSiriRemoteName;
-(id)initWithProfileClass:(Class)arg1 services:(id)arg2 ;
-(void)setHidServices:(NSArray *)arg1 ;
-(void)setDeviceHash:(unsigned long long)arg1 ;
-(void)addServiceRefs:(id)arg1 ;
-(id)_legacy_keyboard;
@end

