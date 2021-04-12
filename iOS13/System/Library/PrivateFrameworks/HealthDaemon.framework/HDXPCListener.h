/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol HDXPCListenerDelegate, OS_dispatch_queue;
@class NSXPCListener, NSMutableDictionary, NSObject, NSArray, NSXPCListenerEndpoint, NSString;

@interface HDXPCListener : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _underlyingListener;
	os_unfair_lock_s _lock;
	NSMutableDictionary* _exportedObjectsByClient;
	id<HDXPCListenerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _connectionQueue;

}

@property (copy,readonly) NSArray * allClients; 
@property (assign,nonatomic,__weak) id<HDXPCListenerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSXPCListenerEndpoint * endpoint; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> connectionQueue;              //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceListener;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<HDXPCListenerDelegate>)delegate;
-(void)setDelegate:(id<HDXPCListenerDelegate>)arg1 ;
-(void)resume;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithMachServiceName:(id)arg1 ;
-(NSXPCListenerEndpoint *)endpoint;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(void)setConnectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSArray *)allClients;
-(id)initWithUnderlyingListener:(id)arg1 ;
-(id)newClientWithConnection:(id)arg1 error:(id*)arg2 ;
@end

