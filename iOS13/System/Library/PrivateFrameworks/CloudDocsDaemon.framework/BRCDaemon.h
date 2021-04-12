/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/BRCReachabilityDelegate.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/BRCAccountHandlerDelegate.h>
#import <libobjc.A.dylib/UMUserSyncStakeholder.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSXPCListener, BRCAccountSession, BRCAccountHandler, UMUserSyncTask, NSMutableDictionary, BRCVersionsFileProvider, NSOperationQueue, NSString, NSError, NSDate, NSXPCListenerEndpoint;

@interface BRCDaemon : NSObject <BRCReachabilityDelegate, NSXPCListenerDelegate, BRCAccountHandlerDelegate, UMUserSyncStakeholder> {

	NSObject*<OS_dispatch_source> _sigIntSrc;
	NSObject*<OS_dispatch_source> _sigQuitSrc;
	NSObject*<OS_dispatch_source> _sigTermSrc;
	NSXPCListener* _xpcListener;
	NSXPCListener* _tokenListener;
	BOOL _unitTestMode;
	BOOL _resumed;
	BOOL _deviceUnlocked;
	BOOL _hasNotEnoughDiskSpaceToBeFunctional;
	BRCAccountSession* _session;
	BRCAccountHandler* _accountHandler;
	NSObject*<OS_dispatch_queue> _xpcListenersReadyQueue;
	NSObject*<OS_dispatch_queue> _accountReadyQueue;
	NSObject*<OS_dispatch_queue> _accountResumedQueue;
	NSObject*<OS_dispatch_queue> _startupQueue;
	int _serverAvailabilityNotifyToken;
	NSObject*<OS_dispatch_queue> _accountLoaderQueue;
	BOOL _isInSyncBubble;
	UMUserSyncTask* _loginTask;
	NSMutableDictionary* _dirPaths;
	BRCVersionsFileProvider* _versionsProvider;
	NSMutableDictionary* _shareAcceptOperationsByURL;
	NSOperationQueue* _shareAcceptQueue;
	BOOL _disableAccountChangesHandling;
	BOOL _disableAppsChangesHandling;
	NSString* _logsDirPath;
	NSString* _appSupportDirPath;
	NSString* _cacheDirPath;
	Class _containerClass;
	NSError* _loggedOutError;
	NSString* _ubiquityTokenSalt;
	unsigned long long _forceIsGreedyState;
	NSDate* _startupDate;

}

@property (assign,nonatomic) BOOL disableAccountChangesHandling;                         //@synthesize disableAccountChangesHandling=_disableAccountChangesHandling - In the implementation block
@property (assign,nonatomic) BOOL disableAppsChangesHandling;                            //@synthesize disableAppsChangesHandling=_disableAppsChangesHandling - In the implementation block
@property (assign,nonatomic) unsigned long long forceIsGreedyState;                      //@synthesize forceIsGreedyState=_forceIsGreedyState - In the implementation block
@property (nonatomic,retain) NSString * logsDirPath;                                     //@synthesize logsDirPath=_logsDirPath - In the implementation block
@property (nonatomic,retain) NSString * appSupportDirPath;                               //@synthesize appSupportDirPath=_appSupportDirPath - In the implementation block
@property (nonatomic,retain) NSString * cacheDirPath;                                    //@synthesize cacheDirPath=_cacheDirPath - In the implementation block
@property (nonatomic,readonly) BRCAccountHandler * accountHandler;                       //@synthesize accountHandler=_accountHandler - In the implementation block
@property (nonatomic,retain) BRCAccountSession * session;                                //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSError * loggedOutError;                                   //@synthesize loggedOutError=_loggedOutError - In the implementation block
@property (nonatomic,readonly) NSXPCListenerEndpoint * endpoint; 
@property (nonatomic,readonly) NSString * ubiquityTokenSalt;                             //@synthesize ubiquityTokenSalt=_ubiquityTokenSalt - In the implementation block
@property (nonatomic,readonly) NSDate * startupDate;                                     //@synthesize startupDate=_startupDate - In the implementation block
@property (assign,nonatomic) BOOL isInSyncBubble;                                        //@synthesize isInSyncBubble=_isInSyncBubble - In the implementation block
@property (assign,nonatomic) BOOL doesNotHaveEnoughDiskSpaceToBeFunctional;              //@synthesize hasNotEnoughDiskSpaceToBeFunctional=_hasNotEnoughDiskSpaceToBeFunctional - In the implementation block
@property (nonatomic,retain) Class containerClass;                                       //@synthesize containerClass=_containerClass - In the implementation block
@property (nonatomic,readonly) BRCVersionsFileProvider * versionsProvider;               //@synthesize versionsProvider=_versionsProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)daemon;
+(id)UTIForExtension:(id)arg1 ;
+(BOOL)isDaemonRunning;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)start;
-(NSXPCListenerEndpoint *)endpoint;
-(BOOL)isInSyncBubble;
-(BRCAccountSession *)session;
-(void)setSession:(BRCAccountSession *)arg1 ;
-(void)willSwitchUser;
-(void)uploadContent;
-(unsigned long long)totalSize;
-(BOOL)_isDeviceUnlocked;
-(void)restart;
-(void)networkReachabilityChanged:(BOOL)arg1 ;
-(Class)containerClass;
-(void)setContainerClass:(Class)arg1 ;
-(void)localeDidChange;
-(void)_initSignals;
-(void)handleExitSignal:(int)arg1 ;
-(void)exitWithCode:(int)arg1 ;
-(NSString *)appSupportDirPath;
-(NSDate *)startupDate;
-(BRCVersionsFileProvider *)versionsProvider;
-(void)dumpToContext:(id)arg1 ;
-(void)networkReachabilityFlagsChanged:(unsigned)arg1 ;
-(BRCAccountHandler *)accountHandler;
-(id)dirPathForSyncedFolderType:(unsigned long long)arg1 ;
-(NSString *)ubiquityTokenSalt;
-(void)setLoggedOutError:(NSError *)arg1 ;
-(void)setDoesNotHaveEnoughDiskSpaceToBeFunctional:(BOOL)arg1 ;
-(void)accountHandler:(id)arg1 willChangeSessionFrom:(id)arg2 ;
-(void)accountHandler:(id)arg1 didChangeSessionTo:(id)arg2 ;
-(void)_setupVNodeRapidAging;
-(NSString *)cacheDirPath;
-(void)waitUntilDeviceIsUnlocked;
-(void)_loadAccountIfNeeded;
-(void)_resumeAccount;
-(unsigned long long)recursivelySizeDirectoryAtPath:(id)arg1 ;
-(BOOL)_shouldCacheDeleteForVolume:(id)arg1 ;
-(unsigned long long)nonPurgeableSizeGivenPurgeableSize:(unsigned long long)arg1 ;
-(void)setUpSandbox;
-(BOOL)_haveRequiredKernelFeatures;
-(BOOL)checkEnoughDiskSpaceToBeFunctional;
-(void)loadAccount;
-(void)_setupCacheDelete;
-(void)_createSyncBubbleTasks;
-(void)_startXPCListeners;
-(void)_startupAndLoadAccount;
-(void)_finishStartup;
-(void)waitOnAccountResumedQueue;
-(void)setIsInSyncBubble:(BOOL)arg1 ;
-(NSError *)loggedOutError;
-(void)waitForConfiguration;
-(void)setUpAnonymousListener;
-(void)loadAndResumeAccount;
-(id)registerShareAcceptOperation:(id)arg1 forURL:(id)arg2 ;
-(BOOL)retrySyncBubbleLaterIfNeededWithError:(id)arg1 ;
-(void)setDirPath:(id)arg1 forSyncedFolderType:(unsigned long long)arg2 ;
-(BOOL)selfCheck:(_sFILE*)arg1 ;
-(void)suspendIPCAcceptation;
-(void)resumeIPCAcceptation;
-(NSString *)logsDirPath;
-(void)setLogsDirPath:(NSString *)arg1 ;
-(void)setAppSupportDirPath:(NSString *)arg1 ;
-(void)setCacheDirPath:(NSString *)arg1 ;
-(BOOL)disableAccountChangesHandling;
-(void)setDisableAccountChangesHandling:(BOOL)arg1 ;
-(BOOL)disableAppsChangesHandling;
-(void)setDisableAppsChangesHandling:(BOOL)arg1 ;
-(unsigned long long)forceIsGreedyState;
-(void)setForceIsGreedyState:(unsigned long long)arg1 ;
-(BOOL)doesNotHaveEnoughDiskSpaceToBeFunctional;
@end

