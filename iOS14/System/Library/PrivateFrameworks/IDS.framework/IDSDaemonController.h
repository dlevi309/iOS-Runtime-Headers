/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <IDS/IDSDaemonProtocol.h>

@protocol IDSDaemonProtocol, OS_dispatch_queue, OS_dispatch_group;
@class IMRemoteObject, IDSDaemonControllerForwarder, IMLocalObject, IDSDaemonListener, NSProtocolChecker, NSString, NSObject, NSMutableDictionary, NSSet, NSMutableSet;

@interface IDSDaemonController : NSObject <IDSDaemonProtocol> {

	id _delegate;
	IMRemoteObject*<IDSDaemonProtocol> _remoteObject;
	IDSDaemonControllerForwarder* _forwarder;
	IMLocalObject* _localObject;
	IDSDaemonListener* _daemonListener;
	NSProtocolChecker* _protocol;
	NSString* _listenerID;
	NSObject*<OS_dispatch_queue> _ivarQueue;
	NSObject*<OS_dispatch_group> _daemonConnectedGroup;
	NSObject*<OS_dispatch_queue> _remoteMessageQueue;
	unsigned long long _connectionID;
	NSMutableDictionary* _listenerServices;
	NSSet* _services;
	NSSet* _cachedServices;
	NSMutableDictionary* _listenerCommands;
	NSSet* _commands;
	NSSet* _cachedCommands;
	NSMutableDictionary* _listenerCapabilities;
	unsigned _cachedCapabilities;
	unsigned _lastUpdateCaps;
	BOOL _hasCheckedForDaemon;
	BOOL _preventReconnect;
	BOOL _acquiringDaemonConnection;
	BOOL _autoReconnect;
	BOOL _hasBeenSuspended;
	BOOL _fatalErrorOccured;
	int _curXPCMessagePriority;
	NSMutableSet* _notificationServices;

}

@property (setter=_setAutoReconnect:) BOOL _autoReconnect;                                    //@synthesize autoReconnect=_autoReconnect - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _remoteMessageQueue;              //@synthesize remoteMessageQueue=_remoteMessageQueue - In the implementation block
@property (assign,nonatomic,__weak) id delegate;                                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isConnecting; 
@property (nonatomic,retain) IMRemoteObject*<IDSDaemonProtocol> remoteObject;                 //@synthesize remoteObject=_remoteObject - In the implementation block
@property (nonatomic,readonly) NSString * listenerID;                                         //@synthesize listenerID=_listenerID - In the implementation block
@property (nonatomic,readonly) IDSDaemonListener * listener;                                  //@synthesize daemonListener=_daemonListener - In the implementation block
@property (assign,nonatomic) int curXPCMessagePriority;                                       //@synthesize curXPCMessagePriority=_curXPCMessagePriority - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_blockUntilSendQueueIsEmpty;
+(id)sharedInstance;
+(void)_setApplicationWillTerminate;
+(BOOL)_applicationWillTerminate;
-(BOOL)isConnected;
-(id)services;
-(BOOL)setCapabilities:(unsigned)arg1 forListenerID:(id)arg2 shouldLog:(BOOL)arg3 ;
-(void)_blockUntilSendQueueIsEmpty;
-(unsigned)capabilities;
-(BOOL)connectToDaemonWithLaunch:(BOOL)arg1 ;
-(void)_setServices:(id)arg1 commands:(id)arg2 capabilities:(unsigned)arg3 ;
-(id)init;
-(void)_disconnectFromDaemonWithForce:(BOOL)arg1 ;
-(BOOL)_makeConnectionWithLaunch:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)delegate;
-(NSString *)listenerID;
-(id)localObject;
-(BOOL)connectToDaemon;
-(void)disconnectFromDaemon;
-(void)sendXPCObject:(id)arg1 objectContext:(id)arg2 ;
-(void)systemApplicationWillEnterForeground;
-(void)blockUntilConnected;
-(BOOL)_setCommands:(id)arg1 ;
-(void)_agentDidLaunchNotification:(id)arg1 ;
-(void)_noteSetupComplete;
-(void)_performBlock:(/*^block*/id)arg1 wait:(BOOL)arg2 ;
-(void)_listenerSetUpdated;
-(id)commands;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)systemApplicationDidSuspend;
-(void)removeListenerID:(id)arg1 ;
-(void)remoteObjectDiedNotification:(id)arg1 ;
-(void)_handleDaemonException:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)forwarderWithCompletion:(/*^block*/id)arg1 ;
-(IDSDaemonListener *)listener;
-(int)curXPCMessagePriority;
-(void)addedDelegateForService:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_localObjectCleanup;
-(void)_setAutoReconnect:(BOOL)arg1 ;
-(BOOL)_setCapabilities:(unsigned)arg1 ;
-(BOOL)addListenerID:(id)arg1 services:(id)arg2 ;
-(void)systemApplicationDidResume;
-(BOOL)localObjectExists;
-(BOOL)addListenerID:(id)arg1 services:(id)arg2 commands:(id)arg3 ;
-(BOOL)setServices:(id)arg1 forListenerID:(id)arg2 ;
-(unsigned)capabilitiesForListenerID:(id)arg1 ;
-(BOOL)remoteObjectExists;
-(void)setCurXPCMessagePriority:(int)arg1 ;
-(IMRemoteObject*<IDSDaemonProtocol>)remoteObject;
-(void)_performBlock:(/*^block*/id)arg1 ;
-(BOOL)isConnecting;
-(id)servicesForListenerID:(id)arg1 ;
-(void)systemApplicationDidEnterBackground;
-(void)setRemoteObject:(IMRemoteObject*<IDSDaemonProtocol>)arg1 ;
-(BOOL)hasListenerForID:(id)arg1 ;
-(BOOL)_setServices:(id)arg1 ;
-(BOOL)connectToDaemonWithLaunch:(BOOL)arg1 services:(id)arg2 commands:(id)arg3 capabilities:(unsigned)arg4 ;
-(BOOL)setCommands:(id)arg1 forListenerID:(id)arg2 ;
-(void)_noteDisconnected;
-(BOOL)_autoReconnect;
-(id)commandsForListenerID:(id)arg1 ;
-(void)localObjectDiedNotification:(id)arg1 ;
-(void)_connectToDaemonWithLaunch:(BOOL)arg1 services:(id)arg2 commands:(id)arg3 capabilities:(unsigned)arg4 ;
-(void)dealloc;
-(void)_remoteObjectCleanup;
-(NSObject*<OS_dispatch_queue>)_remoteMessageQueue;
@end

