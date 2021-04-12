/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <libobjc.A.dylib/CADClientInterface.h>

@protocol OS_dispatch_queue, CADInterface, EKDaemonConnectionDelegate;
@class NSObject, NSMutableDictionary, NSXPCConnection, CADDatabaseInitializationOptions;

@interface EKDaemonConnection : NSObject <CADClientInterface> {

	NSObject*<OS_dispatch_queue> _connectionLock;
	id<CADInterface> _remoteOperationProxy;
	id<CADInterface> _syncRemoteOperationProxy;
	NSObject*<OS_dispatch_queue> _replyHandlerLock;
	NSMutableDictionary* _cancellableOperations;
	unsigned _nextCancellationToken;
	BOOL _registeredForStartNote;
	BOOL _wasAbortedDueToExcessiveConnctions;
	BOOL _hasEverConnected;
	NSXPCConnection* _xpcConnection;
	id<EKDaemonConnectionDelegate> _delegate;
	CADDatabaseInitializationOptions* _initializationOptions;

}

@property (assign,nonatomic) BOOL hasEverConnected;                                                 //@synthesize hasEverConnected=_hasEverConnected - In the implementation block
@property (nonatomic,retain,readonly) NSXPCConnection * xpcConnection;                              //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain,readonly) id<CADInterface> CADOperationProxy; 
@property (nonatomic,retain,readonly) id<CADInterface> CADOperationProxySync; 
@property (__weak) id<EKDaemonConnectionDelegate> delegate;                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CADDatabaseInitializationOptions * initializationOptions;              //@synthesize initializationOptions=_initializationOptions - In the implementation block
+(BOOL)_tryRegisterNewConnection;
+(void)_unregisterConnection;
+(unsigned long long)maxNumberOfOpenConnections;
-(id)init;
-(void)dealloc;
-(id<EKDaemonConnectionDelegate>)delegate;
-(void)setDelegate:(id<EKDaemonConnectionDelegate>)arg1 ;
-(void)disconnect;
-(NSXPCConnection *)xpcConnection;
-(CADDatabaseInitializationOptions *)initializationOptions;
-(id<CADInterface>)CADOperationProxySync;
-(unsigned)addCancellableRemoteOperation:(id)arg1 ;
-(void)removeCancellableRemoteOperation:(unsigned)arg1 ;
-(id<CADInterface>)CADOperationProxy;
-(BOOL)_connectToServer;
-(void)setInitializationOptions:(CADDatabaseInitializationOptions *)arg1 ;
-(void)setHasEverConnected:(BOOL)arg1 ;
-(void)_createConnectionAndOperationProxyIfNeeded;
-(void)_finishAllRepliesOnServerDeath;
-(void)CADClientReceiveOccurrenceCacheSearchResults:(id)arg1 forSearchToken:(unsigned)arg2 finished:(BOOL)arg3 ;
-(void)_daemonRestarted;
-(void)cancelRemoteOperation:(unsigned)arg1 ;
-(BOOL)hasEverConnected;
@end

