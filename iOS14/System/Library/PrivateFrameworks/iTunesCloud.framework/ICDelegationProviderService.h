/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <libobjc.A.dylib/ICSDelegationProviderServiceXPC.h>
#import <libobjc.A.dylib/ICDelegationProviderServiceSessionDelegate.h>
#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMapTable, NSMutableSet, ICUserIdentityStore, NSXPCListener, NSNetServiceBrowser, NSOperationQueue, NSMutableDictionary, NSXPCConnection, ICRequestContext, NSString;

@interface ICDelegationProviderService : NSObject <ICSDelegationProviderServiceXPC, ICDelegationProviderServiceSessionDelegate, NSNetServiceBrowserDelegate, NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMapTable* _activeServiceSessions;
	NSMutableSet* _connections;
	NSMapTable* _connectionToAssertions;
	NSMutableSet* _assertions;
	NSObject*<OS_dispatch_source> _assertionTimeoutSource;
	NSMutableSet* _discoveredServices;
	ICUserIdentityStore* _identityStore;
	BOOL _isNetServiceBrowserSearching;
	BOOL _isSystemService;
	NSXPCListener* _listener;
	NSNetServiceBrowser* _netServiceBrowser;
	NSObject*<OS_dispatch_queue> _netServiceBrowserQueue;
	NSOperationQueue* _identityStoreOperationQueue;
	NSMutableDictionary* _supportedDelegationAccountUUIDToUserIdentity;
	NSXPCConnection* _xpcConnection;
	ICRequestContext* _requestContext;

}

@property (nonatomic,copy,readonly) ICRequestContext * requestContext;              //@synthesize requestContext=_requestContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedService;
+(id)systemServiceWithRequestContext:(id)arg1 ;
-(void)delegationProviderServiceAddAssertion:(id)arg1 ;
-(id)_xpcConnection;
-(void)delegationProviderServiceRemoveAssertion:(id)arg1 ;
-(void)startSystemXPCService;
-(void)_removeConnection:(id)arg1 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)removeAssertion:(id)arg1 ;
-(void)_registerNotificationsForDelegationNetService:(id)arg1 ;
-(ICRequestContext *)requestContext;
-(void)_addConnection:(id)arg1 ;
-(void)_updateBrowsingStatus;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_unregisterNotificationsForDelegationNetService:(id)arg1 ;
-(void)_updateSupportedDelegationAccountUUIDs;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)addAssertion:(id)arg1 ;
-(void)_updateDelegationForDiscoveredServices;
-(void)_updateAssertionTimeouts;
-(void)_userIdentityStoreDidChangeNotification:(id)arg1 ;
-(id)_init;
-(void)_netServiceDelegationAccountUUIDsDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(void)delegationProviderServiceSession:(id)arg1 didFinishWithError:(id)arg2 ;
@end

