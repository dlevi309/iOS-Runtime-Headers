/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/PKXPCServiceDelegate.h>

@protocol OS_dispatch_queue;
@class NSHashTable, PKXPCService, NSObject, NSString;

@interface PKAssertionCoordinator : NSObject <PKXPCServiceDelegate> {

	NSHashTable* _acquiredAssertions;
	PKXPCService* _remoteService;
	NSObject*<OS_dispatch_queue> _coordinatorSerialQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)_existingRemoteObjectProxy;
-(id)_remoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(id)initSharedInstance;
-(void)_removeAssertionWithIdentifier:(id)arg1 ;
-(void)invalidateAssertion:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)assertion:(id)arg1 shouldInvalidateWhenBackgrounded:(BOOL)arg2 ;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_remoteObjectProxy;
-(id)_remoteObjectProxyWithSemaphore:(id)arg1 ;
-(void)remoteService:(id)arg1 didInterruptConnection:(id)arg2 ;
-(void)isAssertionValid:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)remoteServiceDidSuspend:(id)arg1 ;
-(void)acquireAssertionOfType:(unsigned long long)arg1 withReason:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)remoteService:(id)arg1 didEstablishConnection:(id)arg2 ;
-(void)dealloc;
@end

