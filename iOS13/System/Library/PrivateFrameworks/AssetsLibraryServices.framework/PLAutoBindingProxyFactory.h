/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)_unboostingRemoteObjectProxy;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)addBarrierBlock:(/*^block*/id)arg1 ;
-(NSURL *)photoLibraryURL;
-(void)_connectionInterrupted:(id)arg1 ;
-(id<PLXPCProxyCreating>)proxyFactory;
-(id)_cachedBindResult;
-(id)initWithProxyFactory:(id)arg1 photoLibraryURL:(id)arg2 ;
-(id)_blackholeProxyForProxy:(id)arg1 ;
-(BOOL)_bindToPhotoLibraryIfNecessaryWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_bindToPhotoLibraryIfNecessary;
-(id)_bindToPhotoLibraryAndCacheResult;
-(void)_updateCachedBindResult:(id)arg1 ;
-(id)_lazilyBindToPhotoLibrary;
-(id)_bindToPhotoLibrary;
-(id)_attemptBindToPhotoLibrary;
-(BOOL)_isResultAnInterruptionError:(id)arg1 ;
@end

