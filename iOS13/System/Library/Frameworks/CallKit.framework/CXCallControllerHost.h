/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/CXCallControllerHostConnectionDelegate.h>

@protocol OS_dispatch_queue, CXCallControllerHostDelegate;
@class NSObject, NSXPCListener, NSMutableDictionary, NSMutableSet, NSString;

@interface CXCallControllerHost : NSObject <NSXPCListenerDelegate, CXCallControllerHostConnectionDelegate> {

	int _clientsShouldConnectToken;
	NSObject*<OS_dispatch_queue> _queue;
	id<CXCallControllerHostDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSXPCListener* _xpcListener;
	NSMutableDictionary* _callUUIDToCallMap;
	NSMutableDictionary* _callUUIDToPublicCallUUIDMap;
	NSMutableSet* _connections;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<CXCallControllerHostDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                     //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) NSXPCListener * xpcListener;                                    //@synthesize xpcListener=_xpcListener - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * callUUIDToCallMap;                        //@synthesize callUUIDToCallMap=_callUUIDToCallMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * callUUIDToPublicCallUUIDMap;              //@synthesize callUUIDToPublicCallUUIDMap=_callUUIDToPublicCallUUIDMap - In the implementation block
@property (nonatomic,retain) NSMutableSet * connections;                                     //@synthesize connections=_connections - In the implementation block
@property (nonatomic,readonly) int clientsShouldConnectToken;                                //@synthesize clientsShouldConnectToken=_clientsShouldConnectToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<CXCallControllerHostDelegate>)delegate;
-(void)setDelegate:(id<CXCallControllerHostDelegate>)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setXpcListener:(NSXPCListener *)arg1 ;
-(NSXPCListener *)xpcListener;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(NSMutableSet *)connections;
-(void)setConnections:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)callUUIDToCallMap;
-(NSMutableDictionary *)callUUIDToPublicCallUUIDMap;
-(id)_sanitizedCallFromCall:(id)arg1 forCallControllerHostConnection:(id)arg2 ;
-(void)addOrUpdateCall:(id)arg1 ;
-(void)removeCall:(id)arg1 ;
-(id)_callsForCallControllerHostConnection:(id)arg1 ;
-(void)_performDelegateCallback:(/*^block*/id)arg1 ;
-(void)callControllerHostConnectionInvalidated:(id)arg1 ;
-(void)callControllerHostConnection:(id)arg1 requestCalls:(/*^block*/id)arg2 ;
-(void)callControllerHostConnection:(id)arg1 requestTransaction:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithCalls:(id)arg1 delegate:(id)arg2 queue:(id)arg3 ;
-(void)setCallUUIDToCallMap:(NSMutableDictionary *)arg1 ;
-(void)setCallUUIDToPublicCallUUIDMap:(NSMutableDictionary *)arg1 ;
-(int)clientsShouldConnectToken;
@end

