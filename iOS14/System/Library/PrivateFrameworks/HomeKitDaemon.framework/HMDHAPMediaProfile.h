/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDMediaProfile.h>

@interface HMDHAPMediaProfile : HMDMediaProfile
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)registerForNotifications;
-(unsigned long long)capability;
-(void)handleAccessoryConnected:(id)arg1 ;
-(BOOL)_updatePlayback:(id)arg1 ;
-(BOOL)_updateRefreshPlayback:(id)arg1 ;
-(void)handleCharacteristicsUpdated:(id)arg1 ;
-(void)_handleCharacteristicChanges:(id)arg1 ;
-(BOOL)_updateAudioControl:(id)arg1 ;
-(void)handleHomeCharacteristicValuesChanged:(id)arg1 ;
-(id)_smartSpeakerService;
-(id)_smartSpeakerTargetMediaStateWriteRequestWithPlaybackState:(id)arg1 ;
-(id)_smartSpeakerTargetMediaStateCharacteristic;
-(id)_smartSpeakerCurrentMediaStateCharacteristic;
-(id)_smartSpeakerVolumeCharacteristic;
-(id)_smartSpeakerVolumeWriteRequestWithVolumePercentage:(id)arg1 ;
-(id)_smartSpeakerMutedCharacteristic;
-(id)_smartSpeakerCurrentMediaStateReadRequest;
-(id)_smartSpeakerVolumeReadRequest;
-(id)_smartSpeakerMutedReadRequest;
-(void)_updateCurrentMediaState:(id)arg1 volumePercentage:(id)arg2 muted:(id)arg3 message:(id)arg4 ;
-(void)_updateCharacteristicChanges;
-(id)_smartSpeakerMutedWriteRequestWithMuted:(id)arg1 ;
-(id)_mediaSessionStateFromProfile;
-(id)initWithMediaServices:(id)arg1 ;
-(id)playStateWriteRequestWithPlaybackState:(long long)arg1 ;
-(id)volumeWriteRequestWithVolumePercentage:(id)arg1 ;
@end

