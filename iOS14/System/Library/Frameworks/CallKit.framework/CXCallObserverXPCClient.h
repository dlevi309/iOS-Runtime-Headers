/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,copy,readonly) NSDictionary * callUUIDToCallMap; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedXPCClientSemaphore;
+(void)releaseSharedXPCClient;
+(id)sharedXPCClient;
-(NSObject*<OS_dispatch_queue>)concurrentQueue;
-(NSHashTable *)delegates;
-(void)_invalidate;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)_markAllCallsAsEnded;
-(void)setClientsShouldConnectToken:(int)arg1 ;
-(id)init;
-(oneway void)addOrUpdateCall:(id)arg1 ;
-(int)clientsShouldConnectToken;
-(void)setClientsShouldConnect:(BOOL)arg1 ;
-(NSMutableDictionary *)mutableCallUUIDToCallMap;
-(NSDictionary *)callUUIDToCallMap;
-(void)requestTransaction:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSXPCConnection *)connection;
-(BOOL)clientsShouldConnect;
-(void)_requestCalls;
-(oneway void)removeCall:(id)arg1 ;
-(void)invalidate;
-(id)_init;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 isSynchronous:(BOOL)arg2 ;
-(void)dealloc;
-(void)_addOrUpdateCall:(id)arg1 ;
-(void)_removeCall:(id)arg1 ;
@end

