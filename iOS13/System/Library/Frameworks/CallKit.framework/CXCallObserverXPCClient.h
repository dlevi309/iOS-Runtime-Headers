/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <libobjc.A.dylib/CXCallObserverDataSource.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSObject, NSMutableDictionary, NSHashTable, NSXPCConnection, NSString;

@interface CXCallObserverXPCClient : NSObject <CXCallObserverDataSource> {

	BOOL _clientsShouldConnect;
	int _clientsShouldConnectToken;
	NSObject*<OS_dispatch_queue> _concurrentQueue;
	NSMutableDictionary* _mutableCallUUIDToCallMap;
	NSHashTable* _delegates;
	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) NSMutableDictionary * mutableCallUUIDToCallMap;              //@synthesize mutableCallUUIDToCallMap=_mutableCallUUIDToCallMap - In the implementation block
@property (nonatomic,readonly) NSHashTable * delegates;                                     //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                  //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) int clientsShouldConnectToken;                                 //@synthesize clientsShouldConnectToken=_clientsShouldConnectToken - In the implementation block
@property (assign,nonatomic) BOOL clientsShouldConnect;                                     //@synthesize clientsShouldConnect=_clientsShouldConnect - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> concurrentQueue;                //@synthesize concurrentQueue=_concurrentQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * callUUIDToCallMap; 
+(id)sharedXPCClientSemaphore;
+(id)sharedXPCClient;
+(void)releaseSharedXPCClient;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
-(id)_init;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)concurrentQueue;
-(NSHashTable *)delegates;
-(NSDictionary *)callUUIDToCallMap;
-(oneway void)addOrUpdateCall:(id)arg1 ;
-(oneway void)removeCall:(id)arg1 ;
-(int)clientsShouldConnectToken;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 isSynchronous:(BOOL)arg2 ;
-(void)requestTransaction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setClientsShouldConnect:(BOOL)arg1 ;
-(void)_requestCalls;
-(NSMutableDictionary *)mutableCallUUIDToCallMap;
-(void)_removeCall:(id)arg1 ;
-(BOOL)clientsShouldConnect;
-(void)_addOrUpdateCall:(id)arg1 ;
-(void)_markAllCallsAsEnded;
-(void)setClientsShouldConnectToken:(int)arg1 ;
@end

