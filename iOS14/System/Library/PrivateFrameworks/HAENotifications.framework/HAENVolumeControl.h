/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HAENotifications.framework/HAENotifications
*/


#import <HAENotifications/HAENotifications-Structs.h>
@interface HAENVolumeControl : NSObject {

	int _pid;
	BOOL _EUVolumeLimitFlagOn;
	BOOL _SKVolumeLimitFlagOn;
	BOOL _haenFeatureEnabled;
	BOOL _mxVolumeLimitOn;
	BOOL _wiredHeadphoneConnected;
	float _targetVolume80dB;
	float _targetVolume74dB;
	SCD_Struct_HA2 _stats;
	os_unfair_lock_s _lock;

}
+(id)sharedInstance;
-(void)_updateFlags;
-(void)setDeviceInfo:(id)arg1 ;
-(id)init;
-(SCD_Struct_HA2)getStats;
-(unsigned)limitVolume:(id)arg1 ;
-(void)_setMXVolumeLimit:(BOOL)arg1 ;
-(BOOL)PME_enabled;
-(void)_fetchCategory:(const CFStringRef)arg1 routeInfo:(SCD_Struct_HA5*)arg2 ;
-(float)getCurrentVolumeForCategory:(const CFStringRef)arg1 route:(SCD_Struct_HA5*)arg2 ;
-(float)computeLimitedVolume:(float)arg1 event:(id)arg2 action:(unsigned*)arg3 ;
-(void)limitVolumeTo:(float)arg1 category:(const CFStringRef)arg2 route:(SCD_Struct_HA5*)arg3 actionResult:(unsigned*)arg4 ;
-(void)_updateMXVolumeLimit;
-(BOOL)_RLSAllowsMXVolumeLimit;
-(void)updateMXVolumeLimitStatus;
-(void)wiredHeadphoneConnected:(BOOL)arg1 ;
@end

