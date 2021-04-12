/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HAENotifications.framework/HAENotifications
*/


#import <HAENotifications/HAENotifications-Structs.h>
@class NSUserDefaults, NSMutableDictionary;

@interface HAENDefaults : NSObject {

	NSUserDefaults* _userDefaults;
	NSMutableDictionary* _domainSettings;
	os_unfair_lock_s _lock;
	BOOL _EUVolumeLimitFlag;
	BOOL _SKVolumeLimitFlag;

}
+(id)sharedInstance;
+(BOOL)isCurrentProcessMediaserverd;
-(id)init;
-(double)getLiveMonitoringThreshold;
-(int)getReduceLoudSoundThreshold;
-(BOOL)isHAENFeatureOptedIn;
-(double)volumeReductionDelta;
-(void)_registerNotification:(id)arg1 ;
-(void)updateRLSSettings;
-(void)setUserVolumeWithValue:(float)arg1 mininum:(float)arg2 ;
-(void)_updateSetting:(id)arg1 value:(id)arg2 notify:(BOOL)arg3 ;
-(BOOL)isConnectedUnknownWiredDeviceHeadphone;
-(BOOL)softwareVersionEnabled;
-(BOOL)isEUVolumeLimitOn;
-(BOOL)isHAENFeatureEnabled;
-(BOOL)isSKVolumeLimitOn;
-(void)updateAudioAccessoryIsConnectedToHeadphones:(long long)arg1 ;
-(void)setAudioAccessoryIsConnectedToHeadphones:(long long)arg1 ;
-(void)updateUserVolumeForVolumeLimit;
-(BOOL)_shouldRepromptSinceDate:(id)arg1 ;
-(BOOL)isReduceLoudSoundEnabled;
-(void)wiredDeviceStatusDidChange;
-(double)getLiveMonitorTimeWindowInSeconds;
-(id)_generateAccessoryKeyWithManufacture:(id)arg1 andSerialNumber:(id)arg2 ;
-(void)removeAllAdapters;
-(BOOL)isHAENFeatureMandatory;
-(void)forceReadDefaults;
-(long long)getAudioAccessoryConnectionInfo;
@end

