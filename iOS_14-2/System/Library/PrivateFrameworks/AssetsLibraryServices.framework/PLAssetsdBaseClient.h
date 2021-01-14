/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
*/


@protocol PLXPCProxyCreatingPLXPCAsyncProxyCreating;
@interface PLAssetsdBaseClient : NSObject {

	id<PLXPCProxyCreating><PLXPCAsyncProxyCreating> _proxyFactory;

}

@property (readonly) id<PLXPCProxyCreating><PLXPCAsyncProxyCreating> proxyFactory;              //@synthesize proxyFactory=_proxyFactory - In the implementation block
-(id)initWithQueue:(id)arg1 proxyCreating:(id)arg2 proxyGetter:(SEL)arg3 ;
-(id<PLXPCProxyCreating><PLXPCAsyncProxyCreating>)proxyFactory;
@end

