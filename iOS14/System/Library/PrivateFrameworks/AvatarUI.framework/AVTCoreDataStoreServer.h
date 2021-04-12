/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)migrate;
-(void)startListening;
-(void)setServer:(NSXPCStoreServer *)arg1 ;
-(void)setupThen:(/*^block*/id)arg1 ;
-(void)didReceivePushNotification:(id)arg1 ;
-(BOOL)processInternalSettingsChanges:(/*^block*/id)arg1 ;
-(id)initWithLocalBackend:(id)arg1 configuration:(id)arg2 migratorProvider:(/*^block*/id)arg3 pushSupport:(id)arg4 mirroringHandler:(id)arg5 schedulingAuthority:(id)arg6 remoteChangesObserver:(id)arg7 imageGenerator:(id)arg8 stickerChangeObserver:(id)arg9 changeTracker:(id)arg10 daemonServer:(id)arg11 storeMaintenance:(id)arg12 backgroundQueue:(id)arg13 environment:(id)arg14 ;
-(id<AVTAvatarsDaemonServer>)daemonServer;
-(id<AVTPushNotificationsSupport>)pushNotificationsSupport;
-(id<AVTSyncSchedulingAuthority>)schedulingAuthority;
-(void)scheduleExportWithManagedObjectContext:(id)arg1 discretionary:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id<AVTCoreDataStoreMaintenance>)storeMaintenance;
-(void)scheduleUpdateThumbnails;
-(void)deleteStickerRecents;
-(id<AVTCoreDataCloudKitMirroringHandler>)mirroringHandler;
-(void)setMigrationActivityCompletion:(id)arg1 ;
-(void)completeMigrationActivityIfNeeded;
-(BOOL)setupCompleted;
-(void)setUserRequestedBackupActivityCompletion:(id)arg1 ;
-(void)completeUserRequestedBackupActivityIfNeeded;
-(void)scheduleImportExportIfRequiredWithPostImportHandler:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)scheduleSetupThen:(/*^block*/id)arg1 ;
-(id)migrationActivityCompletion;
-(id)userRequestedBackupActivityCompletion;
-(void)setSetupCompleted:(BOOL)arg1 ;
-(void)updateThumbnails;
-(void)scheduleMigrationThen:(/*^block*/id)arg1 ;
-(void)scheduleImportDiscretionary:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)migratorProvider;
-(id<AVTAvatarRecordChangeTracker>)changeTracker;
-(AVTStickerChangeObserver *)stickerChangeObserver;
-(id)initWithEnvironment:(id)arg1 ;
-(id<AVTCoreDataPersistentStoreLocalConfiguration>)configuration;
-(NSXPCStoreServer *)server;
-(id<AVTStoreBackend>)backend;
-(void)clientDidCheckInForServer:(id)arg1 ;
-(id<AVTUILogger>)logger;
-(id<AVTCoreDataRemoteChangesObserver>)remoteChangesObserver;
-(AVTCoreEnvironment *)environment;
-(void)mirroringHandler:(id)arg1 willResetSyncWithReason:(unsigned long long)arg2 ;
-(void)mirroringHandler:(id)arg1 didResetSyncWithReason:(unsigned long long)arg2 ;
-(NSObject*<OS_dispatch_queue>)backgroundQueue;
-(AVTAvatarRecordImageGenerator *)imageGenerator;
-(id<AVTBlockScheduler>)blockScheduler;
@end

