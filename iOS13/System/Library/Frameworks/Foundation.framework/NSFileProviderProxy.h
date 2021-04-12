/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSFileReactorProxy.h>

@protocol NSFileProviderXPCInterfaceNSXPCProxyCreating;
@class NSString, NSUUID, NSFileProviderXPCMessenger;

@interface NSFileProviderProxy : NSFileReactorProxy {

	NSString* _secureID;
	NSUUID* _uniqueID;
	id<NSFileProviderXPCInterface><NSXPCProxyCreating> _remoteProvider;
	NSFileProviderXPCMessenger* _forwardedMessenger;
	BOOL _wantsWriteNotifications;

}

@property (readonly) NSString * secureID;                                                            //@synthesize secureID=_secureID - In the implementation block
@property (readonly) NSUUID * uniqueID;                                                              //@synthesize uniqueID=_uniqueID - In the implementation block
@property (readonly) id<NSFileProviderXPCInterface><NSXPCProxyCreating> remoteProvider;              //@synthesize remoteProvider=_remoteProvider - In the implementation block
@property (assign) BOOL wantsWriteNotifications;                                                     //@synthesize wantsWriteNotifications=_wantsWriteNotifications - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(void)setItemLocation:(id)arg1 ;
-(void)providePhysicalURLForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)provideLogicalURLForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)observePresentationChangeOfKind:(id)arg1 withPresenter:(id)arg2 url:(id)arg3 newURL:(id)arg4 ;
-(NSUUID *)uniqueID;
-(/*^block*/id)provideItemForKernelRequestWithOperation:(unsigned)arg1 atURL:(id)arg2 forProcess:(int)arg3 withOptions:(unsigned long long)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)allowedForURL:(id)arg1 ;
-(void)forwardUsingProxy:(id)arg1 ;
-(id)initWithClient:(id)arg1 remoteProvider:(id)arg2 reactorID:(id)arg3 secureID:(id)arg4 uniqueID:(id)arg5 ;
-(void)setWantsWriteNotifications:(BOOL)arg1 ;
-(id<NSFileProviderXPCInterface><NSXPCProxyCreating>)remoteProvider;
-(/*^block*/id)provideItemAtURL:(id)arg1 withOptions:(unsigned long long)arg2 forAccessClaim:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)movingItemAtLocation:(id)arg1 requiresProvidingWithDestinationLocation:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)observeEndOfWriteAtLocation:(id)arg1 forAccessClaim:(id)arg2 ;
-(NSString *)secureID;
-(id)_clientProxy;
-(BOOL)wantsWriteNotifications;
@end

