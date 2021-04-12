/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <libobjc.A.dylib/ICLibraryAuthServiceClientTokenProviderProtocol.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue, NSMutableDictionary, NSXPCListener, NSMutableSet, NSXPCConnection, AFMultiUserConnection, NSString;

@interface ICLibraryAuthServiceClientTokenProvider : NSObject <ICLibraryAuthServiceClientTokenProviderProtocol, NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSOperationQueue* _operationQueue;
	NSMutableDictionary* _tokenCache;
	BOOL _isService;
	NSXPCListener* _xpcServiceListener;
	NSMutableSet* _xpcConnections;
	NSXPCConnection* _xpcClientConnection;
	AFMultiUserConnection* _siriConnection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedProvider;
-(void)_commitCache;
-(id)init;
-(void)_refreshTokensForDSIDs:(id)arg1 forExternalRequest:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_removeConnection:(id)arg1 ;
-(void)_refreshTokenForDSID:(id)arg1 forExternalRequest:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateTokenCacheEntryForDSID:(id)arg1 tokenResult:(id)arg2 error:(id)arg3 ;
-(void)_addConnection:(id)arg1 ;
-(void)getTokenForcingRefresh:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)getTokenStatusForDSIDs:(id)arg1 forcingRefresh:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)startService;
-(void)_updateRefreshTimer;
-(void)addTokenResult:(id)arg1 forDSID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getAllTokensForAssistantForcingRefresh:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)stopService;
-(void)_handleUserIdentityStoreDidChangeNotification:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(BOOL)_isPrivacyAcknowledgementRequired;
-(void)_handleLibraryAuthServiceClientTokenDidChangeDistributedNotification:(id)arg1 ;
-(BOOL)_shouldStopBackgroundRefreshForError:(id)arg1 ;
-(void)getTokenResultForDSID:(id)arg1 forceRefresh:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)getAllTokenStatusForAssistantForcingRefresh:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)cachedTokenAndResetCache:(BOOL)arg1 ;
-(void)getTokenResultsForDSIDs:(id)arg1 forceRefresh:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_updateEntriesForAccountsChanges;
-(void)_loadCache;
-(void)getTokenForDSID:(id)arg1 forceRefresh:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_clientConnection;
-(void)getTokenStatusForcingRefresh:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

