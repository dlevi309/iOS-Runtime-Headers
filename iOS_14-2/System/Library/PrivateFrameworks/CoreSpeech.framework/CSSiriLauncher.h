/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@interface CSSiriLauncher : NSObject
+(id)sharedLauncher;
-(void)notifyBuiltInVoiceTrigger:(id)arg1 myriadPHash:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)notifyCarPlayVoiceTrigger:(id)arg1 deviceId:(id)arg2 myriadPHash:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)notifyBluetoothDeviceVoiceTrigger:(id)arg1 deviceId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)notifyRemoraVoiceTrigger:(id)arg1 deviceId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deactivateSiriActivationConnectionWithReason:(long long)arg1 withOptions:(unsigned long long)arg2 ;
@end

