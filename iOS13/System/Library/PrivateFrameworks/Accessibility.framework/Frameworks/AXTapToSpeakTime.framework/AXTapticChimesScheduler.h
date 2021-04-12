/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXTapToSpeakTime.framework/AXTapToSpeakTime
*/

#import <libobjc.A.dylib/AVAudioPlayerDelegate.h>

@class PCSimpleTimer, AVAudioPlayer, NSString, AXTapticChimeAsset, NSDate;

@interface AXTapticChimesScheduler : NSObject <AVAudioPlayerDelegate> {

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
-(void)dealloc;
-(id)_init;
-(void)_registerForNotifications;
-(void)_unregisterForNotifications;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2 ;
-(id)_currentDate;
-(BOOL)processIsAllowedToScheduleChimes;
-(void)_tapticChimesStateDidChange:(BOOL)arg1 ;
-(void)_scheduleChimeTimer;
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
-(BOOL)canPlayScheduledTapticChime;
-(void)_normalizeVolumeIfNecessary;
@end

