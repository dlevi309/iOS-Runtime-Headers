/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue, HDXPCListenerDelegate, HDXPCListenerClientProvider;
@class NSXPCListener, NSObject, NSMapTable, NSString, NSArray, NSXPCListenerEndpoint;

@interface HDXPCListener : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _underlyingListener;
	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSMapTable* _exportedObjectsByClient;
	id<HDXPCListenerDelegate> _delegate;
	id<HDXPCListenerClientProvider> _clientProvider;
	NSString* _label;

}

@property (copy,readonly) NSArray * allClients; 
@property (assign,nonatomic,__weak) id<HDXPCListenerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<HDXPCListenerClientProvider> clientProvider;              //@synthesize clientProvider=_clientProvider - In the implementation block
@property (readonly) NSXPCListenerEndpoint * endpoint; 
@property (copy,readonly) NSString * label;                                                      //@synthesize label=_label - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceListener;
-(NSArray *)allClients;
-(void)setConnectionQueue:(id)arg1 ;
-(id)init;
-(id<HDXPCListenerDelegate>)delegate;
-(void)_handleInterruptionWithClient:(id)arg1 exportedObject:(id)arg2 ;
-(id)initWithLabel:(id)arg1 ;
-(void)_handleConnectionInvalidationForClient:(id)arg1 exportedObject:(id)arg2 ;
-(NSXPCListenerEndpoint *)endpoint;
-(void)setDelegate:(id<HDXPCListenerDelegate>)arg1 ;
-(id)initWithMachServiceName:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_handleInvalidationWithClient:(id)arg1 exportedObject:(id)arg2 ;
-(void)invalidate;
-(void)setClientProvider:(id<HDXPCListenerClientProvider>)arg1 ;
-(id)initWithUnderlyingListener:(id)arg1 label:(id)arg2 ;
-(void)resume;
-(void)setQueue:(id)arg1 ;
-(NSString *)label;
-(id<HDXPCListenerClientProvider>)clientProvider;
-(void)dealloc;
@end

