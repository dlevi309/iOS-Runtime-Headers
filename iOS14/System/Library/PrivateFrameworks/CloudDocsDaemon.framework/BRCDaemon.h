/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)isDaemonRunning;
+(id)UTIForExtension:(id)arg1 ;
-(BOOL)isInSyncBubble;
-(void)restart;
-(void)setDirPath:(id)arg1 forSyncedFolderType:(unsigned long long)arg2 ;
-(void)waitForConfiguration;
-(void)suspendIPCAcceptation;
-(void)_loadAccountIfNeeded;
-(void)exitWithCode:(int)arg1 ;
-(void)waitUntilDeviceIsUnlocked;
-(BOOL)doesNotHaveEnoughDiskSpaceToBeFunctional;
-(id)init;
-(void)setDoesNotHaveEnoughDiskSpaceToBeFunctional:(BOOL)arg1 ;
-(NSString *)ubiquityTokenSalt;
-(void)start;
-(void)setForceIsGreedyState:(unsigned long long)arg1 ;
-(void)_setupVNodeRapidAging;
-(void)networkReachabilityChanged:(BOOL)arg1 ;
-(NSXPCListenerEndpoint *)endpoint;
-(void)willSwitchUser;
-(BOOL)disableAppsChangesHandling;
-(BOOL)retrySyncBubbleLaterIfNeededWithError:(id)arg1 ;
-(Class)containerClass;
-(BRCAccountSession *)session;
-(void)setDisableAccountChangesHandling:(BOOL)arg1 ;
-(void)accountHandler:(id)arg1 didChangeSessionTo:(id)arg2 ;
-(void)_initSignals;
-(void)accountHandler:(id)arg1 willChangeSessionFrom:(id)arg2 ;
-(BRCAccountHandler *)accountHandler;
-(void)setIsInSyncBubble:(BOOL)arg1 ;
-(void)networkReachabilityFlagsChanged:(unsigned)arg1 ;
-(void)loadAndResumeAccount;
-(void)setContainerClass:(Class)arg1 ;
-(unsigned long long)nonPurgeableSizeGivenPurgeableSize:(unsigned long long)arg1 ;
-(id)registerShareAcceptOperation:(id)arg1 forURL:(id)arg2 ;
-(void)setAppSupportDirPath:(NSString *)arg1 ;
-(void)setSession:(BRCAccountSession *)arg1 ;
-(BOOL)_haveRequiredKernelFeatures;
-(void)setCacheDirPath:(NSString *)arg1 ;
-(void)_finishStartup;
-(unsigned long long)recursivelySizeDirectoryAtPath:(id)arg1 ;
-(void)_startupAndLoadAccount;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setLogsDirPath:(NSString *)arg1 ;
-(NSString *)appSupportDirPath;
-(NSDate *)startupDate;
-(void)setLoggedOutError:(NSError *)arg1 ;
-(unsigned long long)totalSize;
-(void)uploadContent;
-(BOOL)_isDeviceUnlocked;
-(void)dumpToContext:(id)arg1 ;
-(BOOL)checkEnoughDiskSpaceToBeFunctional;
-(void)_resumeAccount;
-(void)_startXPCListeners;
-(void)resumeIPCAcceptation;
-(void)setUpSandbox;
-(BRCVersionsFileProvider *)versionsProvider;
-(NSError *)loggedOutError;
-(id)dirPathForSyncedFolderType:(unsigned long long)arg1 ;
-(void)_setupCacheDelete;
-(NSString *)cacheDirPath;
-(BOOL)selfCheck:(_sFILE*)arg1 ;
-(void)localeDidChange;
-(NSString *)logsDirPath;
-(void)loadAccount;
-(BOOL)disableAccountChangesHandling;
-(void)handleExitSignal:(int)arg1 ;
-(void)setDisableAppsChangesHandling:(BOOL)arg1 ;
-(unsigned long long)forceIsGreedyState;
-(BOOL)_shouldCacheDeleteForVolume:(id)arg1 ;
-(void)setUpAnonymousListener;
-(void)waitOnAccountResumedQueue;
-(void)_createSyncBubbleTasks;
@end

