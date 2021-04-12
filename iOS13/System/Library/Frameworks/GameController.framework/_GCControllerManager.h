/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GameControllerClientProtocol.h>

@protocol GameControllerDaemon, OS_dispatch_queue;
@class NSXPCConnection, NSMutableDictionary, NSTimer, NSObject, GCController, NSThread, NSMutableArray, NSString;

@interface _GCControllerManager : NSObject <GameControllerClientProtocol> {

	NSXPCConnection* _connection;
	id<GameControllerDaemon> _remote;
	IOHIDManagerRef _hidManager;
	NSMutableDictionary* _controllersByUDID;
	NSMutableDictionary* _controllersByRegistryID;
	IONotificationPortRef _usbNotify;
	unsigned _usbAddedIterator;
	unsigned _usbRemovedIterator;
	/*^block*/id _logger;
	BOOL _idleTimerNeedsReset;
	NSTimer* _idleWatchTimer;
	BOOL _shouldKeepRunning;
	/*^block*/id _requestConnectedHostsCallback;
	NSObject*<OS_dispatch_queue> _controllersQueue;
	long long _currentMediaRemoteInputMode;
	IOHIDEventSystemClientRef _hidSystemClient;
	NSObject*<OS_dispatch_queue> _hidSystemClientQueue;
	BOOL _shouldMonitorBackgroundEvents;
	BOOL _isAppInBackground;
	GCController* _firstMicroGamepad;
	NSThread* _hidInputThread;
	CFRunLoopRef _hidInputThreadRunLoop;
	CFRunLoopSourceRef _hidThreadRunLoopSource;
	NSMutableArray* _hidThreadExecutionBlocks;

}

@property (nonatomic,readonly) BOOL isAppInBackground;                                            //@synthesize isAppInBackground=_isAppInBackground - In the implementation block
@property (assign,nonatomic) IOHIDManagerRef hidManager;                                          //@synthesize hidManager=_hidManager - In the implementation block
@property (nonatomic,copy) id logger;                                                             //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                        //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) id<GameControllerDaemon> remote;                                     //@synthesize remote=_remote - In the implementation block
@property (assign,nonatomic) BOOL idleTimerNeedsReset;                                            //@synthesize idleTimerNeedsReset=_idleTimerNeedsReset - In the implementation block
@property (nonatomic,retain,readonly) NSThread * hidInputThread;                                  //@synthesize hidInputThread=_hidInputThread - In the implementation block
@property (nonatomic,readonly) CFRunLoopRef hidInputThreadRunLoop;                                //@synthesize hidInputThreadRunLoop=_hidInputThreadRunLoop - In the implementation block
@property (nonatomic,readonly) CFRunLoopSourceRef hidThreadRunLoopSource;                         //@synthesize hidThreadRunLoopSource=_hidThreadRunLoopSource - In the implementation block
@property (nonatomic,readonly) NSMutableArray * hidThreadExecutionBlocks;                         //@synthesize hidThreadExecutionBlocks=_hidThreadExecutionBlocks - In the implementation block
@property (assign,nonatomic,__weak) GCController * firstMicroGamepad;                             //@synthesize firstMicroGamepad=_firstMicroGamepad - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> controllersQueue;              //@synthesize controllersQueue=_controllersQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)open;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)logger;
-(id<GameControllerDaemon>)remote;
-(void)setLogger:(id)arg1 ;
-(id)controllers;
-(void)setRemote:(id<GameControllerDaemon>)arg1 ;
-(void)addController:(id)arg1 ;
-(void)removeController:(id)arg1 ;
-(void)controllerWithUDID:(unsigned long long)arg1 setData:(id)arg2 ;
-(void)controllerWithUDID:(unsigned long long)arg1 setValue:(float)arg2 forElement:(int)arg3 ;
-(void)microControllerWithDigitizerX:(float)arg1 withY:(float)arg2 withTimeStamp:(unsigned long long)arg3 touchDown:(BOOL)arg4 ;
-(void)microControllerWithUDID:(unsigned long long)arg1 setDigitizerX:(float)arg2 digitizerY:(float)arg3 withTimeStamp:(unsigned long long)arg4 touchDown:(BOOL)arg5 ;
-(void)replyConnectedHosts:(id)arg1 ;
-(void)publishController:(id)arg1 ;
-(void)unpublishController:(id)arg1 ;
-(void)startIdleWatchTimer;
-(void)CBApplicationWillResignActive;
-(void)CBApplicationDidBecomeActive;
-(void)launchHIDInputThread;
-(void)stopHIDDeviceMonitor;
-(void)updateControllerWithEvent:(IOHIDEventRef)arg1 ;
-(void)addControllerWithServiceRef:(IOHIDServiceClientRef)arg1 ;
-(void)startHIDDeviceMonitor;
-(void)removeControllerWithServiceRef:(IOHIDServiceClientRef)arg1 ;
-(void)removeController:(id)arg1 registryID:(id)arg2 ;
-(void)setIdleTimerNeedsReset:(BOOL)arg1 ;
-(NSMutableArray *)hidThreadExecutionBlocks;
-(void)threadHIDInputOnMain:(id)arg1 ;
-(void)stopHIDEventMonitor;
-(void)async_HIDBlock:(/*^block*/id)arg1 ;
-(void)addConnectedDevices;
-(void)startHIDEventMonitor;
-(void)updateIdleTimer:(id)arg1 ;
-(BOOL)combineSiriRemoteHIDDevicesWithNewController:(id)arg1 existingController:(id)arg2 ;
-(void)logController:(id)arg1 ;
-(BOOL)shouldStoreController:(id)arg1 ;
-(void)storeController:(id)arg1 ;
-(GCController *)firstMicroGamepad;
-(void)setFirstMicroGamepad:(GCController *)arg1 ;
-(void)controllerWithUDID:(unsigned long long)arg1 setValue0:(float)arg2 setValue1:(float)arg3 setValue2:(float)arg4 setValue3:(float)arg5 forElement:(int)arg6 ;
-(void)addControllerForAppStoreRemote:(id)arg1 ;
-(void)threadHIDInputOffMain:(id)arg1 ;
-(void)requestConnectedHostsWithHandler:(/*^block*/id)arg1 ;
-(BOOL)isExistingController:(id)arg1 ;
-(void)controller:(id)arg1 setValue:(float)arg2 forElement:(int)arg3 ;
-(BOOL)isPhysicalB239:(id)arg1 ;
-(void)removeCoalescedControllerComponent:(id)arg1 ;
-(BOOL)isAppInBackground;
-(IOHIDManagerRef)hidManager;
-(void)setHidManager:(IOHIDManagerRef)arg1 ;
-(BOOL)idleTimerNeedsReset;
-(NSThread *)hidInputThread;
-(CFRunLoopRef)hidInputThreadRunLoop;
-(CFRunLoopSourceRef)hidThreadRunLoopSource;
-(NSObject*<OS_dispatch_queue>)controllersQueue;
@end

