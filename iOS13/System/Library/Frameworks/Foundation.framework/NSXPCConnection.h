/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSXPCProxyCreating.h>

@protocol OS_dispatch_queue, NSObject;
@class NSObject, NSXPCInterface, NSString, NSXPCListenerEndpoint;

@interface NSXPCConnection : NSObject <NSXPCProxyCreating> {

	void* _xconnection;
	id _repliesExpected;
	NSObject*<OS_dispatch_queue> _userQueue;
	unsigned _state;
	unsigned _state2;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	id _exportInfo;
	id _repliesRequested;
	id _importInfo;
	id<NSObject> _otherInfo;
	id _reserved1;
	NSXPCInterface* _remoteObjectInterface;
	NSString* _serviceName;
	NSXPCListenerEndpoint* _endpoint;
	id _eCache;
	id _dCache;
	os_unfair_lock_s _lock;

}

@property (copy,readonly) NSString * serviceName; 
@property (retain,readonly) NSXPCListenerEndpoint * endpoint; 
@property (retain) NSXPCInterface * exportedInterface; 
@property (retain) id exportedObject; 
@property (retain) NSXPCInterface * remoteObjectInterface;                 //@synthesize remoteObjectInterface=_remoteObjectInterface - In the implementation block
@property (retain,readonly) id remoteObjectProxy; 
@property (copy) id interruptionHandler; 
@property (copy) id invalidationHandler; 
@property (readonly) int auditSessionIdentifier; 
@property (readonly) int processIdentifier; 
@property (readonly) unsigned effectiveUserIdentifier; 
@property (readonly) unsigned effectiveGroupIdentifier; 
+(id)currentConnection;
+(id)_currentBoost;
+(void)beginTransaction;
+(void)endTransaction;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(id)_queue;
-(id)userInfo;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(unsigned long long)_generationCount;
-(void)resume;
-(id)_unboostingRemoteObjectProxy;
-(void)setExportedObject:(id)arg1 ;
-(void)setExportedInterface:(NSXPCInterface *)arg1 ;
-(void)_setQueue:(id)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(int)processIdentifier;
-(SCD_Struct_NS0)auditToken;
-(void)stop;
-(id)initWithMachServiceName:(id)arg1 ;
-(void)setRemoteObjectInterface:(NSXPCInterface *)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)initWithListenerEndpoint:(id)arg1 ;
-(void)start;
-(void)set_additionalInvalidationHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(NSXPCListenerEndpoint *)endpoint;
-(void)addBarrierBlock:(/*^block*/id)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
-(id)_xpcConnection;
-(void)_killConnection:(int)arg1 ;
-(void)suspend;
-(id)remoteObjectProxy;
-(id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned)effectiveUserIdentifier;
-(id)valueForEntitlement:(id)arg1 ;
-(id)_errorDescription;
-(id)initWithServiceName:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_sendInvocation:(id)arg1 orArguments:(id*)arg2 count:(unsigned long long)arg3 methodSignature:(id)arg4 selector:(SEL)arg5 withProxy:(id)arg6 ;
-(void)_cancelProgress:(unsigned long long)arg1 ;
-(void)_pauseProgress:(unsigned long long)arg1 ;
-(void)_resumeProgress:(unsigned long long)arg1 ;
-(void)_decodeAndInvokeReplyBlockWithEvent:(id)arg1 sequence:(unsigned long long)arg2 replyInfo:(id)arg3 ;
-(Class)_remoteObjectInterfaceClass;
-(void)_sendDesistForProxy:(id)arg1 ;
-(void)_decodeAndInvokeMessageWithEvent:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)_initWithPeerConnection:(id)arg1 name:(id)arg2 options:(unsigned long long)arg3 ;
-(id)initWithEndpoint:(id)arg1 ;
-(void)scheduleSendBarrierBlock:(/*^block*/id)arg1 ;
-(void)_sendSelector:(SEL)arg1 withProxy:(id)arg2 ;
-(void)_sendSelector:(SEL)arg1 withProxy:(id)arg2 arg1:(id)arg3 ;
-(void)_sendSelector:(SEL)arg1 withProxy:(id)arg2 arg1:(id)arg3 arg2:(id)arg4 ;
-(void)_sendSelector:(SEL)arg1 withProxy:(id)arg2 arg1:(id)arg3 arg2:(id)arg4 arg3:(id)arg5 ;
-(void)_sendSelector:(SEL)arg1 withProxy:(id)arg2 arg1:(id)arg3 arg2:(id)arg4 arg3:(id)arg5 arg4:(id)arg6 ;
-(void)_sendInvocation:(id)arg1 withProxy:(id)arg2 ;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(/*^block*/id)_additionalInvalidationHandler;
-(NSString *)serviceName;
-(id)_exportTable;
-(id)replacementObjectForEncoder:(id)arg1 object:(id)arg2 ;
-(BOOL)_encodeCacheContainsClass:(Class)arg1 ;
-(void)_addClassToEncodeCache:(Class)arg1 ;
-(BOOL)_decodeCacheContainsClass:(Class)arg1 ;
-(void)_addClassToDecodeCache:(Class)arg1 ;
-(id)exportedObject;
-(NSXPCInterface *)exportedInterface;
-(id)remoteObjectProxyWithUserInfo:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)remoteObjectProxyWithTimeout:(double)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_addImportedProxy:(id)arg1 ;
-(void)_removeImportedProxy:(id)arg1 ;
-(int)auditSessionIdentifier;
-(unsigned)effectiveGroupIdentifier;
-(void)_setUUID:(id)arg1 ;
-(void)_setTargetUserIdentifier:(unsigned)arg1 ;
-(void)_sendProgressMessage:(id)arg1 forSequence:(unsigned long long)arg2 ;
-(void)_decodeProgressMessageWithData:(id)arg1 flags:(unsigned long long)arg2 ;
-(NSXPCInterface *)remoteObjectInterface;
@end

