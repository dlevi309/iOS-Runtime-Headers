/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTPushNotificationsSupportDelegate.h>
#import <libobjc.A.dylib/AVTCoreDataCloudKitMirroringHandlerDelegate.h>
#import <libobjc.A.dylib/AVTAvatarsDaemonServerDelegate.h>
#import <libobjc.A.dylib/AVTAvatarStoreServer.h>

@protocol AVTStoreBackend, AVTUILogger, AVTBlockScheduler, AVTCoreDataPersistentStoreLocalConfiguration, OS_dispatch_queue, AVTPushNotificationsSupport, AVTCoreDataCloudKitMirroringHandler, AVTSyncSchedulingAuthority, AVTCoreDataRemoteChangesObserver, AVTAvatarRecordChangeTracker, AVTAvatarsDaemonServer, AVTCoreDataStoreMaintenance;
@class AVTCoreEnvironment, NSXPCStoreServer, NSObject, AVTAvatarRecordImageGenerator, AVTStickerChangeObserver;

@interface AVTCoreDataStoreServer : NSObject <AVTPushNotificationsSupportDelegate, AVTCoreDataCloudKitMirroringHandlerDelegate, AVTAvatarsDaemonServerDelegate, AVTAvatarStoreServer> {

	BOOL _setupCompleted;
	id<AVTStoreBackend> _backend;
	AVTCoreEnvironment* _environment;
	id<AVTUILogger> _logger;
	id<AVTBlockScheduler> _blockScheduler;
	id<AVTCoreDataPersistentStoreLocalConfiguration> _configuration;
	/*^block*/id _migratorProvider;
	NSXPCStoreServer* _server;
	NSObject*<OS_dispatch_queue> _backgroundQueue;
	id<AVTPushNotificationsSupport> _pushNotificationsSupport;
	id<AVTCoreDataCloudKitMirroringHandler> _mirroringHandler;
	id<AVTSyncSchedulingAuthority> _schedulingAuthority;
	id<AVTCoreDataRemoteChangesObserver> _remoteChangesObserver;
	AVTAvatarRecordImageGenerator* _imageGenerator;
	AVTStickerChangeObserver* _stickerChangeObserver;
	id<AVTAvatarRecordChangeTracker> _changeTracker;
	id<AVTAvatarsDaemonServer> _daemonServer;
	id<AVTCoreDataStoreMaintenance> _storeMaintenance;
	/*^block*/id _migrationActivityCompletion;
	/*^block*/id _userRequestedBackupActivityCompletion;

}

@property (nonatomic,readonly) id<AVTStoreBackend> backend;                                                 //@synthesize backend=_backend - In the implementation block
@property (nonatomic,readonly) AVTCoreEnvironment * environment;                                            //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                                                      //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) id<AVTBlockScheduler> blockScheduler;                                        //@synthesize blockScheduler=_blockScheduler - In the implementation block
@property (nonatomic,readonly) id<AVTCoreDataPersistentStoreLocalConfiguration> configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy,readonly) id migratorProvider;                                                    //@synthesize migratorProvider=_migratorProvider - In the implementation block
@property (nonatomic,retain) NSXPCStoreServer * server;                                                     //@synthesize server=_server - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> backgroundQueue;                                //@synthesize backgroundQueue=_backgroundQueue - In the implementation block
@property (nonatomic,readonly) id<AVTPushNotificationsSupport> pushNotificationsSupport;                    //@synthesize pushNotificationsSupport=_pushNotificationsSupport - In the implementation block
@property (nonatomic,readonly) id<AVTCoreDataCloudKitMirroringHandler> mirroringHandler;                    //@synthesize mirroringHandler=_mirroringHandler - In the implementation block
@property (nonatomic,readonly) id<AVTSyncSchedulingAuthority> schedulingAuthority;                          //@synthesize schedulingAuthority=_schedulingAuthority - In the implementation block
@property (nonatomic,readonly) id<AVTCoreDataRemoteChangesObserver> remoteChangesObserver;                  //@synthesize remoteChangesObserver=_remoteChangesObserver - In the implementation block
@property (nonatomic,readonly) AVTAvatarRecordImageGenerator * imageGenerator;                              //@synthesize imageGenerator=_imageGenerator - In the implementation block
@property (nonatomic,readonly) AVTStickerChangeObserver * stickerChangeObserver;                            //@synthesize stickerChangeObserver=_stickerChangeObserver - In the implementation block
@property (nonatomic,readonly) id<AVTAvatarRecordChangeTracker> changeTracker;                              //@synthesize changeTracker=_changeTracker - In the implementation block
@property (nonatomic,readonly) id<AVTAvatarsDaemonServer> daemonServer;                                     //@synthesize daemonServer=_daemonServer - In the implementation block
@property (nonatomic,readonly) id<AVTCoreDataStoreMaintenance> storeMaintenance;                            //@synthesize storeMaintenance=_storeMaintenance - In the implementation block
@property (assign,nonatomic) BOOL setupCompleted;                                                           //@synthesize setupCompleted=_setupCompleted - In the implementation block
@property (nonatomic,copy) id migrationActivityCompletion;                                                  //@synthesize migrationActivityCompletion=_migrationActivityCompletion - In the implementation block
@property (nonatomic,copy) id userRequestedBackupActivityCompletion;                                        //@synthesize userRequestedBackupActivityCompletion=_userRequestedBackupActivityCompletion - In the implementation block
+(id)imageGeneratorForEnvironment:(id)arg1 ;
+(BOOL)resetSyncShouldPreserveContentForReason:(unsigned long long)arg1 ;
-(AVTCoreEnvironment *)environment;
-(void)setServer:(NSXPCStoreServer *)arg1 ;
-(id<AVTUILogger>)logger;
-(NSXPCStoreServer *)server;
-(id<AVTCoreDataPersistentStoreLocalConfiguration>)configuration;
-(id)initWithEnvironment:(id)arg1 ;
-(void)startListening;
-(id<AVTStoreBackend>)backend;
-(id<AVTBlockScheduler>)blockScheduler;
-(NSObject*<OS_dispatch_queue>)backgroundQueue;
-(void)migrate;
-(AVTAvatarRecordImageGenerator *)imageGenerator;
-(void)clientDidCheckInForServer:(id)arg1 ;
-(id<AVTCoreDataRemoteChangesObserver>)remoteChangesObserver;
-(void)mirroringHandler:(id)arg1 willResetSyncWithReason:(unsigned long long)arg2 ;
-(void)mirroringHandler:(id)arg1 didResetSyncWithReason:(unsigned long long)arg2 ;
-(void)didReceivePushNotification:(id)arg1 ;
-(id)initWithLocalBackend:(id)arg1 configuration:(id)arg2 migratorProvider:(/*^block*/id)arg3 pushSupport:(id)arg4 mirroringHandler:(id)arg5 schedulingAuthority:(id)arg6 remoteChangesObserver:(id)arg7 imageGenerator:(id)arg8 stickerChangeObserver:(id)arg9 changeTracker:(id)arg10 daemonServer:(id)arg11 storeMaintenance:(id)arg12 backgroundQueue:(id)arg13 environment:(id)arg14 ;
-(BOOL)processInternalSettingsChanges:(/*^block*/id)arg1 ;
-(id<AVTAvatarsDaemonServer>)daemonServer;
-(id<AVTPushNotificationsSupport>)pushNotificationsSupport;
-(id<AVTSyncSchedulingAuthority>)schedulingAuthority;
-(void)scheduleExportWithManagedObjectContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<AVTCoreDataStoreMaintenance>)storeMaintenance;
-(void)scheduleUpdateThumbnails;
-(void)deleteStickerRecents;
-(id<AVTCoreDataCloudKitMirroringHandler>)mirroringHandler;
-(void)setMigrationActivityCompletion:(id)arg1 ;
-(void)completeMigrationActivityIfNeeded;
-(void)setUserRequestedBackupActivityCompletion:(id)arg1 ;
-(BOOL)setupCompleted;
-(void)completeUserRequestedBackupActivityIfNeeded;
-(void)scheduleImportExportIfRequiredWithPostImportHandler:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)scheduleSetupThen:(/*^block*/id)arg1 ;
-(id)migrationActivityCompletion;
-(id)userRequestedBackupActivityCompletion;
-(void)setupThen:(/*^block*/id)arg1 ;
-(void)setSetupCompleted:(BOOL)arg1 ;
-(void)updateThumbnails;
-(void)scheduleMigrationThen:(/*^block*/id)arg1 ;
-(void)scheduleImportThen:(/*^block*/id)arg1 ;
-(id)migratorProvider;
-(id<AVTAvatarRecordChangeTracker>)changeTracker;
-(AVTStickerChangeObserver *)stickerChangeObserver;
@end

