/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)_unregisterConnection;
+(BOOL)_tryRegisterNewConnection;
+(unsigned long long)maxNumberOfOpenConnections;
-(void)disconnect;
-(NSXPCConnection *)xpcConnection;
-(id)init;
-(id<EKDaemonConnectionDelegate>)delegate;
-(void)_finishAllRepliesOnServerDeath;
-(void)setHasEverConnected:(BOOL)arg1 ;
-(id<CADInterface>)CADOperationProxy;
-(void)setDelegate:(id<EKDaemonConnectionDelegate>)arg1 ;
-(void)removeCancellableRemoteOperation:(unsigned)arg1 ;
-(void)CADClientReceiveOccurrenceCacheSearchResults:(id)arg1 forSearchToken:(unsigned)arg2 finished:(BOOL)arg3 ;
-(BOOL)_connectToServer;
-(void)setInitializationOptions:(CADDatabaseInitializationOptions *)arg1 ;
-(void)_daemonRestarted;
-(BOOL)hasEverConnected;
-(void)_createConnectionAndOperationProxyIfNeeded;
-(void)cancelRemoteOperation:(unsigned)arg1 ;
-(CADDatabaseInitializationOptions *)initializationOptions;
-(id<CADInterface>)CADOperationProxySync;
-(unsigned)addCancellableRemoteOperation:(id)arg1 ;
-(void)dealloc;
@end

