/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/


@protocol OS_dispatch_queue, GCNamedProfile;
#import <GameController/GameController-Structs.h>
@class NSString, NSObject, NSMutableArray, GCGamepad, GCMicroGamepad, GCExtendedGamepad, GCMotion;

@interface GCController : NSObject {

	NSString* _description;
	BOOL _allHIDDevicesConnected;
	BOOL _forwarded;
	BOOL _snapshot;
	BOOL _physicalDeviceUsesCompass;
	BOOL _published;
	unsigned _service;
	NSString* _vendorName;
	NSString* _debugName;
	/*^block*/id _controllerPausedHandler;
	NSObject*<OS_dispatch_queue> _handlerQueue;
	long long _playerIndex;
	NSString* _productCategory;
	id<GCNamedProfile> _profile;
	NSMutableArray* _hidServices;
	NSString* _physicalDeviceUniqueID;
	unsigned long long _deviceHash;

}

@property (nonatomic,copy) id __deprecated_controllerPausedHandler; 
@property (nonatomic,copy) NSString * vendorName;                                            //@synthesize vendorName=_vendorName - In the implementation block
@property (nonatomic,retain) NSString * productCategory;                                     //@synthesize productCategory=_productCategory - In the implementation block
@property (nonatomic,copy) NSString * debugName;                                             //@synthesize debugName=_debugName - In the implementation block
@property (nonatomic,retain) id<GCNamedProfile> profile;                                     //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSMutableArray * hidServices;                                   //@synthesize hidServices=_hidServices - In the implementation block
@property (assign,nonatomic) unsigned service;                                               //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSString * physicalDeviceUniqueID;                              //@synthesize physicalDeviceUniqueID=_physicalDeviceUniqueID - In the implementation block
@property (assign,nonatomic) BOOL physicalDeviceUsesCompass;                                 //@synthesize physicalDeviceUsesCompass=_physicalDeviceUsesCompass - In the implementation block
@property (assign,nonatomic) unsigned long long deviceHash;                                  //@synthesize deviceHash=_deviceHash - In the implementation block
@property (assign,getter=isForwarded,nonatomic) BOOL forwarded;                              //@synthesize forwarded=_forwarded - In the implementation block
@property (getter=areAllHIDDevicesConnected) BOOL allHIDDevicesConnected;                    //@synthesize allHIDDevicesConnected=_allHIDDevicesConnected - In the implementation block
@property (getter=isPublished) BOOL published;                                               //@synthesize published=_published - In the implementation block
@property (nonatomic,copy) id controllerPausedHandler;                                       //@synthesize controllerPausedHandler=_controllerPausedHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> handlerQueue;                      //@synthesize handlerQueue=_handlerQueue - In the implementation block
@property (getter=isAttachedToDevice,nonatomic,readonly) BOOL attachedToDevice; 
@property (getter=isSnapshot,readonly) BOOL snapshot;                                        //@synthesize snapshot=_snapshot - In the implementation block
@property (assign,nonatomic) long long playerIndex;                                          //@synthesize playerIndex=_playerIndex - In the implementation block
@property (nonatomic,retain,readonly) GCGamepad * gamepad; 
@property (nonatomic,retain,readonly) GCMicroGamepad * microGamepad; 
@property (nonatomic,retain,readonly) GCExtendedGamepad * extendedGamepad; 
@property (nonatomic,retain,readonly) GCMotion * motion; 
+(BOOL)supportsSecureCoding;
+(id)controllers;
+(void)__daemon__appDidEnterBackground;
+(void)__daemon__appWillEnterForeground;
+(id)controllerWithMicroGamepad;
+(id)controllerWithExtendedGamepad;
+(void)_startWirelessControllerDiscoveryWithCompanions:(BOOL)arg1 btClassic:(BOOL)arg2 btle:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)__open__;
+(void)__openXPC__;
+(void)__openXPC_and_CBApplicationDidBecomeActive__;
+(void)__setLogger__:(/*^block*/id)arg1 ;
+(void)__daemon__startBonjourService;
+(void)__daemon__setUserActivityUserInfo:(id)arg1 ;
+(void)__daemon__requestConnectedHostUpdatesWithHandler:(/*^block*/id)arg1 ;
+(void)__daemon__addController:(id)arg1 ;
+(void)__daemon__removeController:(id)arg1 ;
+(void)__daemon__controllerWithUDID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3 ;
+(void)startWirelessControllerDiscoveryWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)stopWirelessControllerDiscovery;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)vendorName;
-(id<GCNamedProfile>)profile;
-(void)setProfile:(id<GCNamedProfile>)arg1 ;
-(unsigned)service;
-(id)initWithProfile:(id)arg1 ;
-(NSString *)debugName;
-(void)setDebugName:(NSString *)arg1 ;
-(void)setHandlerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isSnapshot;
-(unsigned)sampleRate;
-(void)setService:(unsigned)arg1 ;
-(id)capture;
-(NSObject*<OS_dispatch_queue>)handlerQueue;
-(void)setPlayerIndex:(long long)arg1 ;
-(GCExtendedGamepad *)extendedGamepad;
-(GCGamepad *)gamepad;
-(NSString *)physicalDeviceUniqueID;
-(BOOL)isPublished;
-(void)setPublished:(BOOL)arg1 ;
-(void)setVendorName:(NSString *)arg1 ;
-(void)setForwarded:(BOOL)arg1 ;
-(long long)playerIndex;
-(GCMotion *)motion;
-(unsigned long long)deviceHash;
-(NSMutableArray *)hidServices;
-(id)__deprecated_controllerPausedHandler;
-(BOOL)supportsMotionLite;
-(GCMicroGamepad *)microGamepad;
-(NSString *)productCategory;
-(BOOL)isAttachedToDevice;
-(BOOL)physicalDeviceUsesCompass;
-(BOOL)isForwarded;
-(id)initWithServiceRef:(IOHIDServiceClientRef)arg1 ;
-(void)removeServiceRef:(IOHIDServiceClientRef)arg1 ;
-(BOOL)areAllHIDDevicesConnected;
-(void)setPhysicalDeviceUsesCompass:(BOOL)arg1 ;
-(void)addServiceRefs:(id)arg1 ;
-(void)clearServiceRef;
-(void)setPhysicalDeviceUniqueID:(NSString *)arg1 ;
-(void)setAllHIDDevicesConnected:(BOOL)arg1 ;
-(void)setControllerPausedHandler:(id)arg1 ;
-(id)controllerPausedHandler;
-(void)set__deprecated_controllerPausedHandler:(id)arg1 ;
-(BOOL)displayTrueSiriRemoteName;
-(BOOL)hasServiceRef:(IOHIDServiceClientRef)arg1 ;
-(void)_setSnapshot:(BOOL)arg1 ;
-(BOOL)isEqualToController:(id)arg1 ;
-(void*)createInputBufferForDevice:(IOHIDDeviceRef)arg1 withSize:(unsigned long long)arg2 ;
-(void)setProductCategory:(NSString *)arg1 ;
-(void)setHidServices:(NSMutableArray *)arg1 ;
-(void)setDeviceHash:(unsigned long long)arg1 ;
@end

