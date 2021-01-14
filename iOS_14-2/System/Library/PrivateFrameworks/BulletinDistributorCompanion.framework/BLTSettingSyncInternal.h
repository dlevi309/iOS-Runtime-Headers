/*
* Generated on Thursday, January 14, 2021 at 2:27:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <libobjc.A.dylib/BBObserverDelegate.h>
#import <libobjc.A.dylib/BLTSettingSyncingClient.h>

@class BLTWristStateObserver, BBSettingsGateway, BLTMuteSync, BLTSettingSyncServer, BLTSectionConfiguration, BLTSpokenSettingSync, BBObserver, NSString;

@interface BLTSettingSyncInternal : NSObject <BBObserverDelegate, BLTSettingSyncingClient> {

	BLTWristStateObserver* _wristStateObserver;
	BBSettingsGateway* _settingsGateway;
	BLTMuteSync* _muteSync;
	BLTSettingSyncServer* _connection;
	BLTSectionConfiguration* _sectionConfiguration;
	BLTSpokenSettingSync* _spokenSettingSync;
	BBObserver* _observer;

}

@property (nonatomic,retain) BBSettingsGateway * settingsGateway;                           //@synthesize settingsGateway=_settingsGateway - In the implementation block
@property (nonatomic,retain) BLTMuteSync * muteSync;                                        //@synthesize muteSync=_muteSync - In the implementation block
@property (nonatomic,retain) BLTSettingSyncServer * connection;                             //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) BOOL isWristDetectDisabled; 
@property (nonatomic,readonly) BLTSectionConfiguration * sectionConfiguration;              //@synthesize sectionConfiguration=_sectionConfiguration - In the implementation block
@property (nonatomic,retain) BLTSpokenSettingSync * spokenSettingSync;                      //@synthesize spokenSettingSync=_spokenSettingSync - In the implementation block
@property (nonatomic,retain) BBObserver * observer;                                         //@synthesize observer=_observer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setObserver:(BBObserver *)arg1 ;
-(id)init;
-(BBObserver *)observer;
-(void)observer:(id)arg1 updateGlobalSettings:(id)arg2 ;
-(void)connect;
-(BLTSettingSyncServer *)connection;
-(void)setSettingsGateway:(BBSettingsGateway *)arg1 ;
-(void)setConnection:(BLTSettingSyncServer *)arg1 ;
-(BBSettingsGateway *)settingsGateway;
-(void)dealloc;
-(void)disableStandaloneTestMode;
-(void)enableStandaloneTestModeWithMinimumSendDelay:(unsigned long long)arg1 maximumSendDelay:(unsigned long long)arg2 minimumResponseDelay:(unsigned long long)arg3 maximumResponseDelay:(unsigned long long)arg4 ;
-(BOOL)isWristDetectDisabled;
-(BLTSectionConfiguration *)sectionConfiguration;
-(void)removeSectionWithSectionID:(id)arg1 ;
-(void)transportUpdateRemoteGlobalSpokenSettingEnabled:(BOOL)arg1 date:(id)arg2 ;
-(id)initWithSectionConfiguration:(id)arg1 queue:(id)arg2 ;
-(void)setNotificationsLevel:(unsigned long long)arg1 sectionID:(id)arg2 mirror:(BOOL)arg3 fromRemote:(BOOL)arg4 ;
-(unsigned long long)willNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 subtype:(long long)arg3 category:(id)arg4 ignoresDowntime:(BOOL)arg5 isCritical:(BOOL)arg6 ;
-(id)_overriddenSectionInfoForSectionID:(id)arg1 ;
-(void)setSectionInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSectionSubtypeParametersIcon:(id)arg1 forSectionID:(id)arg2 forSubtypeID:(long long)arg3 ;
-(void)setNotificationsLevel:(unsigned long long)arg1 sectionID:(id)arg2 mirror:(BOOL)arg3 ;
-(void)setNotificationsGrouping:(int)arg1 sectionID:(id)arg2 ;
-(void)setNotificationsSoundEnabled:(int)arg1 sectionID:(id)arg2 ;
-(void)setNotificationsCriticalAlertEnabled:(int)arg1 sectionID:(id)arg2 ;
-(void)enableNotifications:(BOOL)arg1 sectionID:(id)arg2 mirror:(BOOL)arg3 ;
-(unsigned long long)willNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 subtype:(long long)arg3 ;
-(BLTMuteSync *)muteSync;
-(void)setMuteSync:(BLTMuteSync *)arg1 ;
-(BLTSpokenSettingSync *)spokenSettingSync;
-(void)setSpokenSettingSync:(BLTSpokenSettingSync *)arg1 ;
@end

