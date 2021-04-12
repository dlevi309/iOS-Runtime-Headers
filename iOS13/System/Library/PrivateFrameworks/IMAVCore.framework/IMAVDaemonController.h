/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
*/


@protocol IMAVDaemonProtocol, OS_dispatch_queue;
#import <IMAVCore/IMAVCore-Structs.h>
@class IMRemoteObject, IMLocalObject, IMAVDaemonListener, NSString, NSMutableArray, NSLock, NSObject;

@interface IMAVDaemonController : NSObject {

	IMRemoteObject*<IMAVDaemonProtocol> _remoteObject;
	IMLocalObject* _localObject;
	IMAVDaemonListener* _daemonListener;
	NSString* _listenerID;
	NSMutableArray* _listeners;
	NSLock* _connectionLock;
	NSObject*<OS_dispatch_queue> _listenerLockQueue;
	NSObject*<OS_dispatch_queue> _remoteDaemonLockQueue;
	NSObject*<OS_dispatch_queue> _remoteMessageQueue;
	NSObject*<OS_dispatch_queue> _localObjectLockQueue;
	CFRunLoopSourceRef _runLoopSource;
	BOOL _hasCheckedForDaemon;
	BOOL _acquiringDaemonConnection;

}

@property (nonatomic,readonly) IMAVDaemonListener * listener; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(IMAVDaemonListener *)listener;
-(BOOL)isConnected;
-(void)_localObjectCleanup;
-(void)_remoteObjectCleanup;
-(BOOL)remoteObjectExists;
-(void)remoteObjectDiedNotification:(id)arg1 ;
-(void)localObjectDiedNotification:(id)arg1 ;
-(BOOL)localObjectExists;
-(BOOL)isConnecting;
-(BOOL)hasListenerForID:(id)arg1 ;
-(void)_listenerSetUpdated;
-(BOOL)removeListenerID:(id)arg1 ;
-(void)_noteSetupComplete;
-(BOOL)addListenerID:(id)arg1 ;
-(void)_connectToDaemon;
-(void)_cleanUpConnection;
-(BOOL)__isLocalObjectValidOnQueue:(id)arg1 ;
-(BOOL)__isRemoteObjectValidOnQueue:(id)arg1 ;
-(void)_disconnectFromDaemon;
-(BOOL)_makeConnectionWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_localObjectDiedNotification:(id)arg1 ;
-(void)_remoteObjectDiedNotification:(id)arg1 ;
@end

