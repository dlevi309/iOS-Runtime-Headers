/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <libobjc.A.dylib/PLXPCProxyCreating.h>
#import <libobjc.A.dylib/PLXPCAsyncProxyCreating.h>

@protocol PLXPCProxyCreating, OS_dispatch_queue;
@class NSObject, NSString;

@interface PLAssetsdServiceProxyFactory : NSObject <PLXPCProxyCreating, PLXPCAsyncProxyCreating> {

	SEL _proxyGetterSelector;
	id<PLXPCProxyCreating> _serviceProxy;
	id<PLXPCProxyCreating> _proxyCreating;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_unboostingRemoteObjectProxy;
-(void)_logReplyError:(id)arg1 withCallStackSymbols:(id)arg2 ;
-(id)_inq_createServiceProxyWithCallStackSymbols:(id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 handler:(/*^block*/id)arg2 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)addBarrierBlock:(/*^block*/id)arg1 ;
-(id)_inq_createServiceProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithQueue:(id)arg1 proxyCreating:(id)arg2 proxyGetter:(SEL)arg3 ;
-(id)serviceProxyWithErrorHandler:(/*^block*/id)arg1 ;
@end

