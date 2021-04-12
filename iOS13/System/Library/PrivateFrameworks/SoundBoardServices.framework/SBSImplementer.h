/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoundBoardServices.framework/SoundBoardServices
*/


@protocol SBSImplementer <NSObject>
@required
-(void)reboot:(id)arg1;
-(void)requestDeferredReboot;
-(void)setAppleCareIsEnabled:(BOOL)arg1 withOptions:(id)arg2;
-(void)setDeviceAsStereoLeader:(BOOL)arg1 withOptions:(id)arg2;
-(void)getAllDebugInfo:(/*^block*/id)arg1;
-(void)getTuningInfo:(/*^block*/id)arg1;
-(void)setTuningInfoOnBox:(id)arg1 at:(id)arg2 withValue:(float)arg3;
-(void)playTone:(unsigned)arg1;
-(void)stopTone:(unsigned)arg1;
-(void)sysdiagnoseHasStarted:(BOOL)arg1;
-(void)siriUtteranceFileToBePlayed:(id)arg1 duckMusic:(BOOL)arg2 reply:(/*^block*/id)arg3;
-(void)getUserDefaults:(/*^block*/id)arg1;
-(void)setUserDefaults:(id)arg1 withValue:(id)arg2;
-(void)resetAllUserDefaults;
-(void)resetUserDefault:(id)arg1;
-(void)homeKitSettingForKeyPathChanged:(id)arg1 updatedValue:(id)arg2 completion:(/*^block*/id)arg3;
-(void)deviceAttributeChanged:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3;

@end

