/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)sharedConnection;
-(void)_handleInvalidation;
-(id)securityServiceProxyWithDelegate:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)sharedConnectionAccessQueue;
-(void)setSharedConnection:(NSXPCConnection *)arg1 ;
-(NSMutableArray *)interruptionHandlers;
-(id)_connectionProxyForAsync:(BOOL)arg1 accessBlock:(/*^block*/id)arg2 ;
-(NSMutableSet *)activePromises;
-(void)_handleInterruption;
-(id)deviceMessengerProxyWithDelegate:(id)arg1 ;
-(id)pushNotificationService;
-(void)addInterruptionHandler:(/*^block*/id)arg1 ;
@end

