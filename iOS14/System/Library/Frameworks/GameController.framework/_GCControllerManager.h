/*
* Generated on Thursday, January 14, 2021 at 2:26:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/_GCImplicitIPCObject.h>
#import <libobjc.A.dylib/_GCIPCObjectRegistry.h>
#import <libobjc.A.dylib/_GCIPCServiceRegistry.h>
#import <libobjc.A.dylib/_GCIPCObjectMaterializationContext.h>
#import <GameController/GameControllerClientProtocol.h>
#import <libobjc.A.dylib/_GCHIDEventSource.h>

@protocol OS_dispatch_queue, GCRemoteDaemonProxy;
@class NSObject, NSMapTable, _GCHIDEventSubject, GCController, GCMicroGamepad, GCExtendedGamepad, NSXPCConnection, NSThread, NSMutableArray, NSMutableDictionary, NSTimer, GCKeyboardAndMouseManager, NSString, GCMouse;

@interface _GCControllerManager : NSObject <_GCImplicitIPCObject, _GCIPCObjectRegistry, _GCIPCServiceRegistry, _GCIPCObjectMaterializationContext, GameControllerClientProtocol, _GCHIDEventSource> {

	NSObject*<OS_dispatch_queue> _controllersQueue;
	NSObject*<OS_dispatch_queue> _hidSystemClientQueue;
	os_unfair_lock_s _ipcRegistryLock;
	NSMapTable* _ipcObjectRegistry;
	IOHIDEventSystemClientRef _hidSystemClient;
	_GCHIDEventSubject* _hidEventSource;
	GCController* _currentController;
	GCMicroGamepad* _currentMicroGamepad;
	GCExtendedGamepad* _currentExtendedGamepad;
	NSXPCConnection* _connection;
	NSXPCConnection* _daemonConnection;
	NSObject*<GCRemoteDaemonProxy> _remote;
	NSThread* _hidInputThread;
	CFRunLoopRef _hidInputThreadRunLoop;
	CFRunLoopSourceRef _hidThreadRunLoopSource;
	NSMutableArray* _hidThreadExecutionBlocks;
	IOHIDManagerRef _hidManager;
	IONotificationPortRef _usbNotify;
	unsigned _usbAddedIterator;
	unsigned _usbRemovedIterator;
	id _hidEventObservation;
	BOOL _shouldKeepRunning;
	/*^block*/id _requestConnectedHostsCallback;
	NSMutableDictionary* _controllersByUDID;
	NSMutableDictionary* _controllersByRegistryID;
	/*^block*/id _logger;
	GCController* _firstMicroGamepad;
	NSTimer* _idleWatchTimer;
	BOOL _gameControllerActive;
	BOOL _isAppInBackground;
	BOOL _shouldMonitorBackgroundEvents;
	long long _currentMediaRemoteInputMode;
	GCKeyboardAndMouseManager* _keyboardAndMouseManager;
	NSObject*<OS_dispatch_queue> _hidSystemPropertyQueue;

}

@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<_GCIPCObjectRegistry> IPCObjectRegistry; 
@property (readonly) id<_GCIPCServiceRegistry> IPCServiceRegistry; 
@property (nonatomic,readonly) BOOL isAppInBackground; 
@property (assign,nonatomic) IOHIDManagerRef hidManager; 
@property (nonatomic,copy) id logger; 
@property (nonatomic,retain) NSXPCConnection * connection; 
@property (nonatomic,retain) NSXPCConnection * daemonConnection; 
@property (nonatomic,retain) NSObject*<GCRemoteDaemonProxy> remote; 
@property (assign,nonatomic) BOOL gameControllerActive; 
@property (nonatomic,readonly) NSThread * hidInputThread; 
@property (nonatomic,readonly) CFRunLoopRef hidInputThreadRunLoop; 
@property (nonatomic,readonly) CFRunLoopSourceRef hidThreadRunLoopSource; 
@property (nonatomic,readonly) NSMutableArray * hidThreadExecutionBlocks; 
@property (assign,nonatomic,__weak) GCController * firstMicroGamepad; 
@property (retain) GCController * currentController; 
@property (retain) GCMicroGamepad * currentMicroGamepad; 
@property (retain) GCExtendedGamepad * currentExtendedGamepad; 
@property (retain) GCMouse * currentMouse; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> controllersQueue;                    //@synthesize controllersQueue=_controllersQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> hidSystemPropertyQueue;              //@synthesize hidSystemPropertyQueue=_hidSystemPropertyQueue - In the implementation block
+(void)initialize;
+(id)sharedInstance;
-(void)open;
-(id)init;
-(void)updateCurrentControllerAndProfileForUnpublishedController:(id)arg1 ;
-(GCExtendedGamepad *)currentExtendedGamepad;
-(NSObject*<GCRemoteDaemonProxy>)remote;
-(void)setCurrentExtendedGamepad:(GCExtendedGamepad *)arg1 ;
-(id<_GCIPCServiceRegistry>)IPCServiceRegistry;
-(NSXPCConnection *)connection;
-(void)setLogger:(id)arg1 ;
-(void)setCurrentMicroGamepad:(GCMicroGamepad *)arg1 ;
-(id)logger;
-(void)CBApplicationDidBecomeActive;
-(void)onVideoRecordingToggledWithController:(id)arg1 ;
-(GCMicroGamepad *)currentMicroGamepad;
-(id)mice;
-(void)onScreenshotTriggeredWithController:(id)arg1 ;
-(void)onHIDDeviceAdded:(IOHIDServiceClientRef)arg1 ;
-(id<NSObject><NSCopying><NSSecureCoding>)identifier;
-(GCController *)currentController;
-(id)serviceClientForIPCService:(id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setCurrentController:(GCController *)arg1 ;
-(void)addController:(id)arg1 ;
-(void)removeController:(id)arg1 ;
-(void)controllerWithUDID:(unsigned long long)arg1 setData:(id)arg2 ;
-(void)controllerWithUDID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3 ;
-(id)controllers;
-(void)microControllerWithDigitizerX:(float)arg1 withY:(float)arg2 withTimeStamp:(unsigned long long)arg3 touchDown:(BOOL)arg4 ;
-(void)microControllerWithUDID:(unsigned long long)arg1 setDigitizerX:(float)arg2 digitizerY:(float)arg3 withTimeStamp:(unsigned long long)arg4 touchDown:(BOOL)arg5 ;
-(void)setRemote:(NSObject*<GCRemoteDaemonProxy>)arg1 ;
-(id<_GCIPCObjectRegistry>)IPCObjectRegistry;
-(void)dealloc;
-(void)onHIDDeviceRemoved:(IOHIDServiceClientRef)arg1 ;
-(NSXPCConnection *)daemonConnection;
-(void)setupHIDMonitor:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)controllersQueue;
-(void)registerIPCObject:(id)arg1 ;
-(GCMouse *)currentMouse;
-(void)setCurrentMouse:(GCMouse *)arg1 ;
-(id)observeHIDEvents:(/*^block*/id)arg1 forService:(id)arg2 ;
-(id)observeHIDEvents:(/*^block*/id)arg1 ;
-(void)_legacy_init;
-(void)_legacy_dealloc;
-(id)_legacy_makeHIDEventSource:(IOHIDEventSystemClientRef)arg1 ;
-(id)HIDDeviceMatchingAttributes;
-(void)_legacy_removeControllerWithServiceRef:(IOHIDServiceClientRef)arg1 ;
-(void)_legacy_addControllerWithServiceRef:(IOHIDServiceClientRef)arg1 ;
-(id)makeHIDEventSource:(IOHIDEventSystemClientRef)arg1 ;
-(void)_legacy_startHIDDeviceMonitor;
-(void)teardownHIDMonitor:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)hidSystemPropertyQueue;
-(id)IPCObjectWithIdentifier:(id)arg1 ;
-(id)_legacy_controllers;
-(id)_legacy_mice;
-(void)async_HIDBlock:(/*^block*/id)arg1 ;
-(id)coalescedKeyboard;
-(void)launchHIDInputThread;
-(void)_legacy_stopHIDDeviceMonitor;
-(NSMutableArray *)hidThreadExecutionBlocks;
-(void)threadHIDInputOnMain:(id)arg1 ;
-(void)_legacy_stopHIDEventMonitor;
-(void)_legacy_startHIDEventMonitor;
-(void)updateIdleTimer:(id)arg1 ;
-(void)_legacy_updateControllerWithEvent:(IOHIDEventRef)arg1 ;
-(BOOL)combineSiriRemoteHIDDevicesWithNewController:(id)arg1 existingController:(id)arg2 ;
-(BOOL)shouldStoreController:(id)arg1 ;
-(void)storeController:(id)arg1 ;
-(void)_legacy_publishController:(id)arg1 ;
-(void)removeController:(id)arg1 registryID:(id)arg2 ;
-(void)_queue_removeController:(id)arg1 registryID:(id)arg2 ;
-(void)_legacy_unpublishController:(id)arg1 ;
-(id)_legacy_coalescedKeyboard;
-(void)setGameControllerActive:(BOOL)arg1 ;
-(GCController *)firstMicroGamepad;
-(void)setFirstMicroGamepad:(GCController *)arg1 ;
-(NSThread *)hidInputThread;
-(CFRunLoopRef)hidInputThreadRunLoop;
-(CFRunLoopSourceRef)hidThreadRunLoopSource;
-(void)threadHIDInputOffMain:(id)arg1 ;
-(void)setDaemonConnection:(NSXPCConnection *)arg1 ;
-(BOOL)isAppInBackground;
-(void)CBApplicationWillResignActive;
-(BOOL)gameControllerActive;
-(void)startIdleWatchTimer;
-(IOHIDManagerRef)hidManager;
-(void)setHidManager:(IOHIDManagerRef)arg1 ;
-(BOOL)isExistingController:(id)arg1 ;
-(BOOL)isPhysicalB239:(id)arg1 ;
-(void)removeCoalescedControllerComponent:(id)arg1 ;
-(void)addControllerForAppStoreRemote:(id)arg1 ;
-(void)controller:(id)arg1 setValue:(float)arg2 forElement:(int)arg3 ;
-(void)controllerWithUDID:(unsigned long long)arg1 setValue0:(float)arg2 setValue1:(float)arg3 setValue2:(float)arg4 setValue3:(float)arg5 forElement:(int)arg6 ;
@end

