/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
*/


@class NSString, DMPluginFaulter, DMTimer;

@interface DMMigrationPluginWrapperWatchdog : NSObject {

	NSString* _pluginBundleIdentifier;
	NSString* _backupDeviceUUID;
	DMPluginFaulter* _faulter;
	unsigned long long _secondsBeforeNextFault;
	unsigned long long _secondsOfLeeway;
	DMTimer* _timer;
	unsigned long long _fireCount;

}

@property (nonatomic,copy) NSString * pluginBundleIdentifier;                        //@synthesize pluginBundleIdentifier=_pluginBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * backupDeviceUUID;                              //@synthesize backupDeviceUUID=_backupDeviceUUID - In the implementation block
@property (nonatomic,retain) DMPluginFaulter * faulter;                              //@synthesize faulter=_faulter - In the implementation block
@property (assign,nonatomic) unsigned long long secondsBeforeNextFault;              //@synthesize secondsBeforeNextFault=_secondsBeforeNextFault - In the implementation block
@property (assign,nonatomic) unsigned long long secondsOfLeeway;                     //@synthesize secondsOfLeeway=_secondsOfLeeway - In the implementation block
@property (nonatomic,retain) DMTimer * timer;                                        //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) unsigned long long fireCount;                           //@synthesize fireCount=_fireCount - In the implementation block
+(id)_messageStringWithPluginBundleIdentifier:(id)arg1 minutes:(long long)arg2 backupDeviceUUID:(id)arg3 ;
-(NSString *)backupDeviceUUID;
-(DMTimer *)timer;
-(void)setTimer:(DMTimer *)arg1 ;
-(DMPluginFaulter *)faulter;
-(unsigned long long)secondsOfLeeway;
-(void)setBackupDeviceUUID:(NSString *)arg1 ;
-(void)setFireCount:(unsigned long long)arg1 ;
-(void)setSecondsOfLeeway:(unsigned long long)arg1 ;
-(void)setFaulter:(DMPluginFaulter *)arg1 ;
-(void)setPluginBundleIdentifier:(NSString *)arg1 ;
-(void)setSecondsBeforeNextFault:(unsigned long long)arg1 ;
-(unsigned long long)secondsBeforeNextFault;
-(void)_migrationPluginDuration5Minutes;
-(void)_migrationPluginDuration10Minutes;
-(void)_migrationPluginDuration20Minutes;
-(void)_migrationPluginDuration40Minutes;
-(id)initWithPluginBundleIdentifier:(id)arg1 backupDeviceUUID:(id)arg2 ;
-(void)cancel;
-(unsigned long long)fireCount;
-(void)resume;
-(NSString *)pluginBundleIdentifier;
@end

