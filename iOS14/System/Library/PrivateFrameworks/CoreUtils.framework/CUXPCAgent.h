/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setExportedObject:(id)arg1 ;
-(void)_invalidate;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setRemoteObjectInterface:(NSXPCInterface *)arg1 ;
-(void)setConnectionStartedHandler:(id)arg1 ;
-(id)remoteObjectProxy;
-(id)init;
-(id)exportedObject;
-(NSXPCInterface *)remoteObjectInterface;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSXPCInterface *)exportedInterface;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setExportedInterface:(NSXPCInterface *)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_interrupted;
-(BOOL)activateDirectAndReturnError:(id*)arg1 ;
-(void)_connectionInvalidated:(id)arg1 ;
-(void)setListenerEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(void)_invalidated;
-(NSXPCListenerEndpoint *)listenerEndpoint;
-(void)invalidate;
-(void)setConnectionEndedHandler:(id)arg1 ;
-(id)connectionEndedHandler;
-(void)setLabel:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(NSString *)label;
-(id)connectionStartedHandler;
-(id)interruptionHandler;
-(void)dealloc;
@end

