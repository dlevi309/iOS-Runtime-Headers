/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/

#import <AssetsLibraryServices/AssetsLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLXPCProxyCreating.h>

@protocol PLXPCProxyCreating;
@class PLLazyObject, PLResult, NSURL, NSString;

@interface PLAutoBindingProxyFactory : NSObject <PLXPCProxyCreating> {

	os_unfair_lock_s _bindLock;
	PLLazyObject* _lazyBindToPhotoLibrary;
	PLResult* _cachedBindResult;
	id<PLXPCProxyCreating> _proxyFactory;
	NSURL* _photoLibraryURL;

}

@property (readonly) id<PLXPCProxyCreating> proxyFactory;              //@synthesize proxyFactory=_proxyFactory - In the implementation block
@property (copy,readonly) NSURL * photoLibraryURL;                     //@synthesize photoLibraryURL=_photoLibraryURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientToServiceSandboxExtensionForURL:(id)arg1 ;
+(unsigned long long)maxBindAttemptCount;
-(id)_bindToPhotoLibrary;
-(NSURL *)photoLibraryURL;
-(id)_unboostingRemoteObjectProxy;
-(id)initWithProxyFactory:(id)arg1 photoLibraryURL:(id)arg2 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_bindToPhotoLibraryIfNecessary;
-(id)_attemptBindToPhotoLibrary;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(BOOL)_bindToPhotoLibraryIfNecessaryWithErrorHandler:(/*^block*/id)arg1 ;
-(void)addBarrierBlock:(/*^block*/id)arg1 ;
-(id)_bindToPhotoLibraryAndCacheResult;
-(id)_cachedBindResult;
-(id<PLXPCProxyCreating>)proxyFactory;
-(id)_blackholeProxyForProxy:(id)arg1 ;
-(BOOL)_isResultAnInterruptionError:(id)arg1 ;
-(void)_connectionInterrupted:(id)arg1 ;
-(void)_updateCachedBindResult:(id)arg1 ;
-(id)_lazilyBindToPhotoLibrary;
@end

