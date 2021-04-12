/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXTapToSpeakTime.framework/AXTapToSpeakTime
*/

#import <libobjc.A.dylib/AVAudioPlayerDelegate.h>

@class NSString, PCSimpleTimer, AVAudioPlayer, AXTapticChimeAsset, NSDate;

@interface AXTapticChimesScheduler : NSObject <AVAudioPlayerDelegate> {

	NSString* _pcServiceIdentifier;
	PCSimpleTimer* _chimeTimer;
	AVAudioPlayer* _audioPlayer;
	NSString* _previousAudioSessionCategory;
	AXTapticChimeAsset* _currentChimeAsset;
	unsigned _audioPlaybackPowerAssertionID;
	NSDate* _lastExpectedWakeTime;
	NSDate* _lastActualWakeTime;
	NSDate* _lastExpectedChimeTime;
	NSDate* _lastActualChimeTime;
	float _lastMediaVolume;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)initializeIfNeeded;
-(void)_registerForNotifications;
-(void)_unregisterForNotifications;
-(id)_currentDate;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2 ;
-(id)_init;
-(void)dealloc;
-(BOOL)processIsAllowedToScheduleChimes;
-(void)_tapticChimesStateDidChange:(BOOL)arg1 ;
-(void)_scheduleChimeTimer;
-(BOOL)canPlayScheduledTapticChime;
-(void)_previewChimes;
-(void)_clearChimeTimer;
-(BOOL)canPlayTapticChime;
-(BOOL)canScheduleTapticChimes;
-(void)_previewChimesForStartDate:(id)arg1 chimeDate:(id)arg2 frequency:(long long)arg3 soundType:(long long)arg4 ;
-(id)nextChimeAssetForStartDate:(id)arg1 frequency:(long long)arg2 soundType:(long long)arg3 timeIntervalUntilChime:(double*)arg4 ;
-(BOOL)_outputTapticChime:(id)arg1 atDate:(id)arg2 ;
-(void)_releasePowerAssertionIfPossible:(unsigned)arg1 ;
-(void)_denormalizeVolumeIfNecessary;
-(double)_preWakeTimeInterval;
-(double)_prePlayAudioTimeInterval;
-(void)_chimeWakeTimerFired:(id)arg1 ;
-(unsigned)_createPowerAssertionWithName:(id)arg1 timeout:(double)arg2 ;
-(void)_normalizeVolumeIfNecessary;
-(void)_chimeDidFinishPlaying;
@end

