/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@protocol OS_dispatch_queue;
@class NSDate, NSObject, BBSettingsGateway, BLTSettingSyncServer, NSURL;

@interface BLTSpokenSettingSync : NSObject {

	BOOL _localGlobalSpokenSettingEnabled;
	BOOL _remoteGlobalSpokenSettingEnabled;
	NSDate* _localGlobalSpokenSettingDate;
	NSDate* _remoteGlobalSpokenSettingDate;
	unsigned long long _updatingLocalStateFromRemoteCount;
	NSObject*<OS_dispatch_queue> _queue;
	BBSettingsGateway* _settingsGateway;
	BLTSettingSyncServer* _syncServer;
	NSURL* _remoteSettingStoreURL;

}

@property (assign,nonatomic) BOOL localGlobalSpokenSettingEnabled;                              //@synthesize localGlobalSpokenSettingEnabled=_localGlobalSpokenSettingEnabled - In the implementation block
@property (assign,nonatomic) BOOL remoteGlobalSpokenSettingEnabled;                             //@synthesize remoteGlobalSpokenSettingEnabled=_remoteGlobalSpokenSettingEnabled - In the implementation block
@property (nonatomic,retain) NSDate * localGlobalSpokenSettingDate;                             //@synthesize localGlobalSpokenSettingDate=_localGlobalSpokenSettingDate - In the implementation block
@property (nonatomic,retain) NSDate * remoteGlobalSpokenSettingDate;                            //@synthesize remoteGlobalSpokenSettingDate=_remoteGlobalSpokenSettingDate - In the implementation block
@property (assign,nonatomic) unsigned long long updatingLocalStateFromRemoteCount;              //@synthesize updatingLocalStateFromRemoteCount=_updatingLocalStateFromRemoteCount - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) BBSettingsGateway * settingsGateway;                               //@synthesize settingsGateway=_settingsGateway - In the implementation block
@property (nonatomic,retain) BLTSettingSyncServer * syncServer;                                 //@synthesize syncServer=_syncServer - In the implementation block
@property (nonatomic,retain) NSURL * remoteSettingStoreURL;                                     //@synthesize remoteSettingStoreURL=_remoteSettingStoreURL - In the implementation block
-(BLTSettingSyncServer *)syncServer;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setSettingsGateway:(BBSettingsGateway *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BBSettingsGateway *)settingsGateway;
-(void)_queue_readSettings;
-(BOOL)_queue_updateLocalSetting;
-(void)_queue_resolveState;
-(id)_remoteSettingStoreURL;
-(BOOL)_queue_updateLocalGlobalSpokenSettingEnabledFromUser:(BOOL)arg1 ;
-(BOOL)_queue_isUpdatingLocalStateFromRemote;
-(void)_queue_synchronizeSettingsWithLocalEnabled:(BOOL)arg1 ;
-(BOOL)localGlobalSpokenSettingEnabled;
-(NSDate *)localGlobalSpokenSettingDate;
-(void)setLocalGlobalSpokenSettingEnabled:(BOOL)arg1 ;
-(void)setLocalGlobalSpokenSettingDate:(NSDate *)arg1 ;
-(void)_queue_writeLocalSetting;
-(BOOL)remoteGlobalSpokenSettingEnabled;
-(NSDate *)remoteGlobalSpokenSettingDate;
-(void)setRemoteGlobalSpokenSettingEnabled:(BOOL)arg1 ;
-(void)setRemoteGlobalSpokenSettingDate:(NSDate *)arg1 ;
-(void)_queue_writeRemoteSetting;
-(void)_queue_setNewLocalStateFromRemote:(BOOL)arg1 ;
-(void)_queue_setUpdatingLocalStateFromRemote;
-(id)initWithSettingsGateway:(id)arg1 syncServer:(id)arg2 ;
-(void)bbUpdateLocalGlobalSpokenSettingEnabled:(long long)arg1 ;
-(void)transportUpdateRemoteGlobalSpokenSettingEnabled:(BOOL)arg1 date:(id)arg2 ;
-(unsigned long long)updatingLocalStateFromRemoteCount;
-(void)setUpdatingLocalStateFromRemoteCount:(unsigned long long)arg1 ;
-(void)setSyncServer:(BLTSettingSyncServer *)arg1 ;
-(NSURL *)remoteSettingStoreURL;
-(void)setRemoteSettingStoreURL:(NSURL *)arg1 ;
@end

