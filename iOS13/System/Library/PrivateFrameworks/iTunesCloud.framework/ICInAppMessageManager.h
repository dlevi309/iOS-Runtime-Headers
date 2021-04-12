/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/ICInAppMessageManagerProtocol.h>
#import <libobjc.A.dylib/ICEnvironmentMonitorObserver.h>

@protocol OS_dispatch_queue;
@class NSOperationQueue, NSObject, ICInAppMessageStore, ICUserIdentityStore, AMSPushHandler, BKSApplicationStateMonitor, NSString, NSXPCListener, NSMutableSet, NSXPCConnection;

@interface ICInAppMessageManager : NSObject <NSXPCListenerDelegate, ICInAppMessageManagerProtocol, ICEnvironmentMonitorObserver> {

	NSOperationQueue* _operationQueue;
	NSOperationQueue* _downloadOperationQueue;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	ICInAppMessageStore* _messageStore;
	ICUserIdentityStore* _identityStore;
	BOOL _isSystemService;
	AMSPushHandler* _amsPushHandler;
	BKSApplicationStateMonitor* _applicationStateMonitor;
	NSString* _foregroundApplicationIdentifier;
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
-(id)_init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_removeConnection:(id)arg1 ;
-(void)_addConnection:(id)arg1 ;
-(void)environmentMonitorDidChangeNetworkReachability:(id)arg1 ;
-(void)_handleUserIdentityStoreDidChangeNotification:(id)arg1 ;
-(id)_storeRequestContext;
-(id)initWithMessageStore:(id)arg1 identityStore:(id)arg2 ;
-(void)_handleICInAppMessagesDidChangeDistributedNotification:(id)arg1 ;
-(void)_schedulePeriodicUpdate;
-(void)syncMessagesWithCompletion:(/*^block*/id)arg1 ;
-(id)_xpcClientConnection;
-(void)allMessageEntriesWithCompletion:(/*^block*/id)arg1 ;
-(void)messageEntriesForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)messageEntryWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addMessageEntry:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_addMessageEntry:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateMessageEntry:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeMessageEntryWithIdentifier:(id)arg1 forBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_removeMessageEntryWithIdentifier:(id)arg1 forBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeAllMessageEntriesForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_removeAllMessageEntriesForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)resetMessagesWithCompletion:(/*^block*/id)arg1 ;
-(id)_resourceCacheDirectoryPath;
-(void)reportEventForMessageIdentifier:(id)arg1 withParams:(id)arg2 flushImmediately:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)flushEventsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_privacyAcknowledgementRequired;
-(void)downloadResourcesForMessageWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_downloadResourcesForMessageWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateShouldDownloadResources:(BOOL)arg1 onMessageWithIdentifier:(id)arg2 bundleIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)clearCachedResourcesForMessageWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getMetadataForMessageIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getAllMetadataForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateMetadata:(id)arg1 messageIdentifier:(id)arg2 bundleIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)removeMetadataForMessageIdentifier:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getGlobalPropertyForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setGlobalProperty:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getPropertyForKey:(id)arg1 bundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 bundleIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_performCacheConsistencyCheck;
-(void)_loadConfigurationWithCompletion:(/*^block*/id)arg1 ;
-(void)_processSyncResponse:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_checkForMessageResourcesNeedingDownload;
-(id)_amsPushHandler;
-(void)_performSyncRetryIfPending;
-(void)startSystemService;
-(void)stopSystemService;
-(void)reportEventForMessageIdentifier:(id)arg1 withParams:(id)arg2 completion:(/*^block*/id)arg3 ;
-(ICInAppMessageStore *)_unsafeMessageStore;
@end

