/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSDServiceBrokerProtocol.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSMutableSet, NSMutableArray, NSString;

@interface AMSDaemonConnection : NSObject <AMSDServiceBrokerProtocol> {

	NSXPCConnection* _sharedConnection;
	NSObject*<OS_dispatch_queue> _sharedConnectionAccessQueue;
	NSMutableSet* _activePromises;
	NSMutableArray* _interruptionHandlers;

}

@property (nonatomic,retain) NSXPCConnection * sharedConnection;                                      //@synthesize sharedConnection=_sharedConnection - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> sharedConnectionAccessQueue;              //@synthesize sharedConnectionAccessQueue=_sharedConnectionAccessQueue - In the implementation block
@property (nonatomic,readonly) NSMutableSet * activePromises;                                         //@synthesize activePromises=_activePromises - In the implementation block
@property (nonatomic,readonly) NSMutableArray * interruptionHandlers;                                 //@synthesize interruptionHandlers=_interruptionHandlers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableSet *)activePromises;
-(id)init;
-(id)pushNotificationService;
-(void)_handleInvalidation;
-(void)_handleInterruption;
-(id)callService:(id)arg1 then:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)sharedConnectionAccessQueue;
-(id)deviceMessengerProxyWithDelegate:(id)arg1 ;
-(id)_connectionProxyForAsync:(BOOL)arg1 accessBlock:(/*^block*/id)arg2 ;
-(id)securityServiceProxyWithDelegate:(id)arg1 ;
-(void)addInterruptionHandler:(/*^block*/id)arg1 ;
-(NSXPCConnection *)sharedConnection;
-(NSMutableArray *)interruptionHandlers;
-(void)setSharedConnection:(NSXPCConnection *)arg1 ;
-(void)_checkOutPromise:(id)arg1 ;
-(void)dealloc;
-(void)_checkInPromise:(id)arg1 ;
@end

