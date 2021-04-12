/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray, SSXPCConnection, NSHashTable, SSDownloadManagerOptions, NSMutableSet;

@interface SSDownloadManager : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSArray* _activeDownloads;
	BOOL _activeDownloadsChanged;
	NSObject*<OS_dispatch_queue> _backgroundQueue;
	SSXPCConnection* _connection;
	NSArray* _downloads;
	BOOL _downloadsChanged;
	BOOL _isUsingNetwork;
	SSXPCConnection* _observerConnection;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSHashTable* _observers;
	SSDownloadManagerOptions* _options;
	NSMutableSet* _removedDownloads;
	int _launchNotificationToken;

}

@property (readonly) SSDownloadManagerOptions * managerOptions; 
@property (readonly) NSArray * activeDownloads; 
@property (readonly) NSArray * downloads; 
@property (getter=isUsingNetwork,readonly) BOOL usingNetwork; 
+(id)IPodDownloadKinds;
+(void)_sendGlobalHandler:(id)arg1 ;
+(id)EBookDownloadKinds;
+(id)softwareDownloadKinds;
+(void)retryAllRestoreDownloads;
+(void)reconnectToLSApplicationWorkspace;
+(void)removePersistenceIdentifier:(id)arg1 ;
+(void)setDownloadHandler:(id)arg1 ;
+(id)EBookDownloadManager;
+(id)IPodDownloadManager;
+(id)softwareDownloadManager;
+(id)allStoreDownloadKinds;
+(id)ITunesDownloadKinds;
+(void)reevaluateBackgroundDownloadsForBundleIdentifiers:(id)arg1 ;
+(void)_triggerDownloads;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)_XPCConnection;
-(void)addDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)resumeDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)finishDownloads:(id)arg1 ;
-(void)getDownloadsUsingBlock:(/*^block*/id)arg1 ;
-(void)cancelDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithManagerOptions:(id)arg1 ;
-(BOOL)isUsingNetwork;
-(void)_sendMessage:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(NSArray *)activeDownloads;
-(NSArray *)downloads;
-(void)reloadFromServer;
-(void)insertDownloads:(id)arg1 afterDownload:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)moveDownload:(id)arg1 afterDownload:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)restartDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)pauseDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithDownloadKinds:(id)arg1 ;
-(BOOL)canCancelDownload:(id)arg1 ;
-(SSDownloadManagerOptions *)managerOptions;
-(void)_handleDownloadsRemoved:(id)arg1 ;
-(void)_willFinishDownloads:(id)arg1 ;
-(void)_finishDownloads:(id)arg1 ;
-(void)_resetAllDownloads;
-(void)moveDownload:(id)arg1 beforeDownload:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_copyDownloadsForMessage:(long long)arg1 downloadIDs:(id)arg2 ;
-(void)_pauseDownloads:(id)arg1 forced:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_sendDownloadsChanged:(id)arg1 ;
-(void)_connectAfterDaemonLaunch;
-(void)_connectAsObserver;
-(id)_initSSDownloadManagerWithOptions:(id)arg1 ;
-(void)_insertDownloads:(id)arg1 before:(id)arg2 after:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)_copyDownloads;
-(void)_moveDownload:(id)arg1 before:(id)arg2 after:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setDownloads:(id)arg1 forKinds:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_handleReply:(id)arg1 forDownloads:(id)arg2 message:(id)arg3 isRetry:(BOOL)arg4 block:(/*^block*/id)arg5 ;
-(void)_sendObserverConnection;
-(void)_loadDownloadKindsUsingNetwork;
-(void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2 ;
-(void)_reloadIsUsingNetworkWithDownloadKinds:(id)arg1 ;
-(void)_handleDownloadKindsUsingNetworkChanged:(id)arg1 ;
-(void)_handleDownloadsChanged:(id)arg1 ;
-(void)_handleDownloadStatesChanged:(id)arg1 ;
-(id)_copyDownloadKindsUsingNetwork;
-(void)_sendMessageToObservers:(SEL)arg1 ;
-(id)_newOptionsDictionary;
-(void)cancelAllDownloadsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)insertDownloads:(id)arg1 beforeDownload:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_pauseDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)_supportsSoftwareKind;
@end

