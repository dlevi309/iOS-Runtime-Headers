/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/ICDelegateAccountStoreService.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSXPCListener, ICUserIdentityStore, NSXPCListenerEndpoint, NSString;

@interface ICDelegateAccountStoreServiceListener : NSObject <NSXPCListenerDelegate, ICDelegateAccountStoreService> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	BOOL _ignoresEntitlements;
	NSMutableArray* _connections;
	NSXPCListener* _listener;
	ICUserIdentityStore* _testingIdentityStore;

}

@property (nonatomic,readonly) NSXPCListenerEndpoint * XPCEndpoint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)machServiceListener;
+(id)testingListenerWithIdentityStore:(id)arg1 ;
-(void)invalidate;
-(void)resume;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)suspend;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_identityStore;
-(NSXPCListenerEndpoint *)XPCEndpoint;
-(void)recreateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeAllTokensWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeDelegationUUIDs:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeIdentityPropertiesForUserIdentity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeTokenForUserIdentity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeTokensExpiringBeforeDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setIdentityProperties:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setToken:(id)arg1 forUserIdentity:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_initWithXPCListener:(id)arg1 testingIdentityStore:(id)arg2 ;
-(void)_userIdentityStoreDelegateAccountStoreDidChangeNotification:(id)arg1 ;
@end

