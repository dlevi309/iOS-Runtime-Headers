/*
* Generated on Thursday, January 14, 2021 at 2:25:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDXPCListenerDelegate.h>
#import <libobjc.A.dylib/HDXPCListenerClientProvider.h>

@protocol OS_dispatch_queue;
@class HDDaemon, NSObject, NSMapTable, NSMutableSet, HDXPCListener, NSArray, NSString;

@interface HDDaemonConnectionManager : NSObject <HDXPCListenerDelegate, HDXPCListenerClientProvider> {

	HDDaemon* _daemon;
	NSObject*<OS_dispatch_queue> _listenerQueue;
	os_unfair_lock_s _lock;
	NSMapTable* _processesByAuditToken;
	NSMutableSet* _endpoints;
	HDXPCListener* _serviceListener;
	/*^block*/id _processCreationHandler;

}

@property (nonatomic,copy) id processCreationHandler;                        //@synthesize processCreationHandler=_processCreationHandler - In the implementation block
@property (nonatomic,readonly) HDXPCListener * serviceListener;              //@synthesize serviceListener=_serviceListener - In the implementation block
@property (copy,readonly) NSArray * clientProcesses; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidateAllServersForProfile:(id)arg1 ;
-(HDXPCListener *)serviceListener;
-(void)invalidate;
-(id)exportObjectForListener:(id)arg1 client:(id)arg2 error:(id*)arg3 ;
-(void)resume;
-(id)clientForListener:(id)arg1 connection:(id)arg2 error:(id*)arg3 ;
-(NSArray *)clientProcesses;
-(id)initWithMachServiceName:(id)arg1 daemon:(id)arg2 ;
-(id)createListenerWithMachServiceName:(id)arg1 ;
-(id)createAnonymousListenerWithLabel:(id)arg1 ;
-(void)_configureListener:(id)arg1 ;
-(id)_processForConnection:(id)arg1 error:(id*)arg2 ;
-(void)endpointInvalidated:(id)arg1 ;
-(id)processCreationHandler;
-(void)setProcessCreationHandler:(id)arg1 ;
@end

