/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSMutableSet, NSXPCListener, NSObject, NSString, NSXPCListenerEndpoint, NSXPCInterface;

@interface CUXPCAgent : NSObject <NSXPCListenerDelegate> {

	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	LogCategory* _ucat;
	NSXPCConnection* _xpcCnx;
	NSMutableSet* _xpcCnxSet;
	NSXPCListener* _xpcListener;
	/*^block*/id _connectionStartedHandler;
	/*^block*/id _connectionEndedHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;
	NSString* _label;
	NSXPCListenerEndpoint* _listenerEndpoint;
	NSXPCInterface* _exportedInterface;
	id _exportedObject;
	NSXPCInterface* _remoteObjectInterface;

}

@property (nonatomic,copy) id connectionStartedHandler;                               //@synthesize connectionStartedHandler=_connectionStartedHandler - In the implementation block
@property (nonatomic,copy) id connectionEndedHandler;                                 //@synthesize connectionEndedHandler=_connectionEndedHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                    //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * listenerEndpoint;                //@synthesize listenerEndpoint=_listenerEndpoint - In the implementation block
@property (nonatomic,retain) NSXPCInterface * exportedInterface;                      //@synthesize exportedInterface=_exportedInterface - In the implementation block
@property (nonatomic,retain) id exportedObject;                                       //@synthesize exportedObject=_exportedObject - In the implementation block
@property (nonatomic,retain) NSXPCInterface * remoteObjectInterface;                  //@synthesize remoteObjectInterface=_remoteObjectInterface - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
-(void)setExportedObject:(id)arg1 ;
-(void)setExportedInterface:(NSXPCInterface *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setRemoteObjectInterface:(NSXPCInterface *)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxy;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(id)exportedObject;
-(NSXPCInterface *)exportedInterface;
-(NSXPCInterface *)remoteObjectInterface;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_invalidated;
-(void)_interrupted;
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(BOOL)activateDirectAndReturnError:(id*)arg1 ;
-(id)connectionStartedHandler;
-(void)setConnectionStartedHandler:(id)arg1 ;
-(id)connectionEndedHandler;
-(void)setConnectionEndedHandler:(id)arg1 ;
-(void)setListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(void)_connectionInvalidated:(id)arg1 ;
@end

