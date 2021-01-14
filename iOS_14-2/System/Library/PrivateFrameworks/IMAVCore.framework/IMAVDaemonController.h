/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_connectToDaemon;
-(BOOL)addListenerID:(id)arg1 ;
-(BOOL)isConnected;
-(id)init;
-(void)_noteSetupComplete;
-(void)_listenerSetUpdated;
-(BOOL)removeListenerID:(id)arg1 ;
-(void)remoteObjectDiedNotification:(id)arg1 ;
-(IMAVDaemonListener *)listener;
-(BOOL)__isLocalObjectValidOnQueue:(id)arg1 ;
-(void)_localObjectCleanup;
-(BOOL)localObjectExists;
-(BOOL)remoteObjectExists;
-(BOOL)isConnecting;
-(BOOL)hasListenerForID:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)_cleanUpConnection;
-(void)localObjectDiedNotification:(id)arg1 ;
-(void)dealloc;
-(void)_remoteObjectCleanup;
-(void)forwardInvocation:(id)arg1 ;
-(void)_disconnectFromDaemon;
-(BOOL)__isRemoteObjectValidOnQueue:(id)arg1 ;
-(BOOL)_makeConnectionWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_localObjectDiedNotification:(id)arg1 ;
-(void)_remoteObjectDiedNotification:(id)arg1 ;
@end

