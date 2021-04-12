/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

