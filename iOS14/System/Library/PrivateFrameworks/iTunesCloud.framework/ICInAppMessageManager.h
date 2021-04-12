/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/ICInAppMessageManagerProtocol.h>
#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>

@protocol OS_dispatch_queue, NSCopying;
@class NSOperationQueue, NSObject, ICInAppMessageStore, ICUserIdentityStore, AMSPushHandler, NSString, NSXPCListener, NSMutableSet, NSXPCConnection;

@interface ICInAppMessageManager : NSObject <NSXPCListenerDelegate, ICInAppMessageManagerProtocol, ICEnvironmentMonitorObserver> {

	NSOperationQueue* _operationQueue;
	NSOperationQueue* _downloadOperationQueue;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	ICInAppMessageStore* _messageStore;
	ICUserIdentityStore* _identityStore;
	BOOL _isSystemService;
	AMSPushHandler* _amsPushHandler;
	NSString* _foregroundApplicationIdentifier;
	id<NSCopying> _privacyObserverToken;
	NSXPCListener* _xpcServiceListener;
	NSMutableSet* _xpcConnections;
	NSXPCConnection* _xpcClientConnection;

}

@property (nonatomic,readonly) ICInAppMessageStore * _unsafeMessageStore;              //@synthesize messageStore=_messageStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(id)initWithMessageStore:(id)arg1 identityStore:(id)arg2 ;
-(void)_performSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)_removeConnection:(id)arg1 ;
-(void)messageEntriesForBundleIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(ICInAppMessageStore *)_unsafeMessageStore;
-(void)allMessageEntriesWithCompletion:(/*^block*/id)arg1 ;
-(void)clearCachedResourcesForMessageWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_processSyncResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_downloadResourcesForMessageWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeMetadataForMessageIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)flushEventsWithCompletion:(/*^block*/id)arg1 ;
-(void)reportEventForMessageIdentifier:(id)arg1 withParams:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getAllMetadataForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)messageEntriesForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reportEventForMessageIdentifier:(id)arg1 withParams:(id)arg2 flushImmediately:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_performCacheConsistencyCheck;
-(void)updateMetadata:(id)arg1 messageIdentifier:(id)arg2 bundleIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)removeAllMessageEntriesForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_addConnection:(id)arg1 ;
-(void)_addMessageEntry:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getGlobalPropertyForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateMessageEntry:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performSyncRetryIfPending;
-(void)addMessageEntry:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_resourceCacheDirectoryPath;
-(void)_handleUserIdentityStoreDidChangeNotification:(id)arg1 ;
-(void)_loadConfigurationWithCompletion:(/*^block*/id)arg1 ;
-(void)getMetadataForMessageIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getPropertyForKey:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)resetMessagesWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_schedulePeriodicUpdate;
-(BOOL)_privacyAcknowledgementRequired;
-(void)_checkForMessageResourcesNeedingDownloadForcingIfNecessary:(BOOL)arg1 ;
-(void)downloadResourcesForMessageWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_xpcClientConnection;
-(void)startSystemService;
-(void)_removeAllMessageEntriesForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_removeMessageEntryWithIdentifier:(id)arg1 forBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getAllMetadataForBundleIdentifiers:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)messageEntryWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)stopSystemService;
-(id)_init;
-(id)_amsPushHandler;
-(void)setProperty:(id)arg1 forKey:(id)arg2 bundleIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_updateShouldDownloadResources:(BOOL)arg1 onMessageWithIdentifier:(id)arg2 bundleIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setGlobalProperty:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)syncMessagesWithCompletion:(/*^block*/id)arg1 ;
-(void)removeMessageEntryWithIdentifier:(id)arg1 forBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_storeRequestContext;
-(void)_handleICInAppMessagesDidChangeDistributedNotification:(id)arg1 ;
@end

