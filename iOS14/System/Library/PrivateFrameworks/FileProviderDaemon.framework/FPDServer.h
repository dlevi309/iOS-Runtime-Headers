/*
* Generated on Thursday, January 14, 2021 at 2:27:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue, OS_dispatch_group;
@class NSObject, FPDCacheDeleteService, FPDActionOperationEngine, FPDAppMonitor, FPDExtensionManager, FPDPresenterManager, NSXPCListener, NSString;

@interface FPDServer : NSObject <NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_source> _sigIntSrc;
	NSObject*<OS_dispatch_source> _sigQuitSrc;
	NSObject*<OS_dispatch_source> _sigTermSrc;
	NSObject*<OS_dispatch_source> _machSrc;
	NSObject*<OS_dispatch_queue> _makeSureSetupEnqueued;
	NSObject*<OS_dispatch_queue> _setupQueue;
	NSObject*<OS_dispatch_queue> _afterSetupWorkQueue;
	NSObject*<OS_dispatch_group> _fileProviderManagerIsReadyGroup;
	NSObject*<OS_dispatch_queue> _machServerQueue;
	int _providerChangeNotificationToken;
	FPDCacheDeleteService* _cacheDelete;
	BOOL _isUnlocked;
	BOOL _isPastBuddy;
	FPDActionOperationEngine* _operationEngine;
	FPDAppMonitor* _appMonitor;
	FPDExtensionManager* _extensionManager;
	FPDPresenterManager* _presenterManager;
	Class _fpfsClass;
	Class _fpfsSQLBackupManagerClass;
	Class _fpfsSQLRestoreManagerClass;
	NSXPCListener* _listener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSXPCListener * listener;                                  //@synthesize listener=_listener - In the implementation block
@property (nonatomic,readonly) FPDActionOperationEngine * operationEngine;              //@synthesize operationEngine=_operationEngine - In the implementation block
@property (nonatomic,readonly) FPDCacheDeleteService * cacheDelete;                     //@synthesize cacheDelete=_cacheDelete - In the implementation block
@property (nonatomic,readonly) FPDAppMonitor * appMonitor;                              //@synthesize appMonitor=_appMonitor - In the implementation block
@property (nonatomic,readonly) FPDExtensionManager * extensionManager;                  //@synthesize extensionManager=_extensionManager - In the implementation block
@property (nonatomic,readonly) FPDPresenterManager * presenterManager;                  //@synthesize presenterManager=_presenterManager - In the implementation block
@property (nonatomic,retain) Class fpfsClass;                                           //@synthesize fpfsClass=_fpfsClass - In the implementation block
@property (nonatomic,retain) Class fpfsSQLBackupManagerClass;                           //@synthesize fpfsSQLBackupManagerClass=_fpfsSQLBackupManagerClass - In the implementation block
@property (nonatomic,retain) Class fpfsSQLRestoreManagerClass;                          //@synthesize fpfsSQLRestoreManagerClass=_fpfsSQLRestoreManagerClass - In the implementation block
+(id)homeDirectory;
+(id)cloudStoragePath;
+(id)appSupportPath;
-(Class)fpfsSQLRestoreManagerClass;
-(void)_setup;
-(void)exitWithCode:(int)arg1 ;
-(FPDCacheDeleteService *)cacheDelete;
-(FPDExtensionManager *)extensionManager;
-(id)init;
-(void)start;
-(void)_initSignals;
-(NSXPCListener *)listener;
-(void)_computeUnlockedStatus;
-(FPDActionOperationEngine *)operationEngine;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)materializeURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setFpfsClass:(Class)arg1 ;
-(FPDAppMonitor *)appMonitor;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)_finishSetup;
-(void)_startXPCListener;
-(Class)fpfsSQLBackupManagerClass;
-(void)providersDidChange;
-(void)setFpfsSQLBackupManagerClass:(Class)arg1 ;
-(void)setFpfsSQLRestoreManagerClass:(Class)arg1 ;
-(void)localeDidChange;
-(Class)fpfsClass;
-(void)handleExitSignal:(int)arg1 ;
-(FPDPresenterManager *)presenterManager;
-(void)signalProviderChanges;
@end

