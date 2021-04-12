/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/

#import <PhotosPlayer/ISSettings.h>

@interface ISPlayerSettings : ISSettings {

	BOOL _easingEnabled;
	BOOL _scaleDuringPlayback;
	BOOL _loopingEnabled;
	BOOL _crossfadeEnabled;
	BOOL _audioEnabled;
	BOOL _playIsSticky;
	BOOL _longExposureVitality;
	BOOL _playDuringHint;
	BOOL _showStateOverlay;
	BOOL _prerollBeforePlaying;
	BOOL _useDedicatedQueues;
	BOOL _allowFrameBlending;
	BOOL _allowVideoPreRoll;
	BOOL _allowPlayerReuse;
	float _vitalityEaseMinRate;
	double _vitalityEaseDuration;
	long long _startBehavior;
	double _forceTouchTimeoutInterval;
	double _forceTouchTimeoutMinimumProgress;
	double _forceScrubMinimumPressure;
	double _forceScrubMaximumPressure;
	double _forceScrubRewindFactor;
	double _forceScrubMinRateChange;
	double _forceScrubMinimumRate;
	double _forceScrubMaximumInteractiveRate;
	double _audioRampDuration;

}

@property (assign,nonatomic) BOOL easingEnabled;                                   //@synthesize easingEnabled=_easingEnabled - In the implementation block
@property (assign,nonatomic) double vitalityEaseDuration;                          //@synthesize vitalityEaseDuration=_vitalityEaseDuration - In the implementation block
@property (assign,nonatomic) float vitalityEaseMinRate;                            //@synthesize vitalityEaseMinRate=_vitalityEaseMinRate - In the implementation block
@property (assign,nonatomic) long long startBehavior;                              //@synthesize startBehavior=_startBehavior - In the implementation block
@property (assign,nonatomic) BOOL scaleDuringPlayback;                             //@synthesize scaleDuringPlayback=_scaleDuringPlayback - In the implementation block
@property (assign,nonatomic) BOOL loopingEnabled;                                  //@synthesize loopingEnabled=_loopingEnabled - In the implementation block
@property (assign,nonatomic) BOOL crossfadeEnabled;                                //@synthesize crossfadeEnabled=_crossfadeEnabled - In the implementation block
@property (assign,nonatomic) BOOL audioEnabled;                                    //@synthesize audioEnabled=_audioEnabled - In the implementation block
@property (assign,nonatomic) BOOL playIsSticky;                                    //@synthesize playIsSticky=_playIsSticky - In the implementation block
@property (assign,nonatomic) BOOL longExposureVitality;                            //@synthesize longExposureVitality=_longExposureVitality - In the implementation block
@property (assign,nonatomic) BOOL playDuringHint;                                  //@synthesize playDuringHint=_playDuringHint - In the implementation block
@property (assign,nonatomic) BOOL showStateOverlay;                                //@synthesize showStateOverlay=_showStateOverlay - In the implementation block
@property (assign,nonatomic) BOOL prerollBeforePlaying;                            //@synthesize prerollBeforePlaying=_prerollBeforePlaying - In the implementation block
@property (assign,nonatomic) BOOL useDedicatedQueues;                              //@synthesize useDedicatedQueues=_useDedicatedQueues - In the implementation block
@property (assign,nonatomic) BOOL allowFrameBlending;                              //@synthesize allowFrameBlending=_allowFrameBlending - In the implementation block
@property (assign,nonatomic) BOOL allowVideoPreRoll;                               //@synthesize allowVideoPreRoll=_allowVideoPreRoll - In the implementation block
@property (assign,nonatomic) BOOL allowPlayerReuse;                                //@synthesize allowPlayerReuse=_allowPlayerReuse - In the implementation block
@property (assign,nonatomic) double forceTouchTimeoutInterval;                     //@synthesize forceTouchTimeoutInterval=_forceTouchTimeoutInterval - In the implementation block
@property (assign,nonatomic) double forceTouchTimeoutMinimumProgress;              //@synthesize forceTouchTimeoutMinimumProgress=_forceTouchTimeoutMinimumProgress - In the implementation block
@property (assign,nonatomic) double forceScrubMinimumPressure;                     //@synthesize forceScrubMinimumPressure=_forceScrubMinimumPressure - In the implementation block
@property (assign,nonatomic) double forceScrubMaximumPressure;                     //@synthesize forceScrubMaximumPressure=_forceScrubMaximumPressure - In the implementation block
@property (assign,nonatomic) double forceScrubRewindFactor;                        //@synthesize forceScrubRewindFactor=_forceScrubRewindFactor - In the implementation block
@property (assign,nonatomic) double forceScrubMinRateChange;                       //@synthesize forceScrubMinRateChange=_forceScrubMinRateChange - In the implementation block
@property (assign,nonatomic) double forceScrubMinimumRate;                         //@synthesize forceScrubMinimumRate=_forceScrubMinimumRate - In the implementation block
@property (assign,nonatomic) double forceScrubMaximumInteractiveRate;              //@synthesize forceScrubMaximumInteractiveRate=_forceScrubMaximumInteractiveRate - In the implementation block
@property (assign,nonatomic) double audioRampDuration;                             //@synthesize audioRampDuration=_audioRampDuration - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setAudioEnabled:(BOOL)arg1 ;
-(BOOL)loopingEnabled;
-(void)setLoopingEnabled:(BOOL)arg1 ;
-(BOOL)audioEnabled;
-(void)setAllowPlayerReuse:(BOOL)arg1 ;
-(float)vitalityEaseMinRate;
-(BOOL)useDedicatedQueues;
-(BOOL)playDuringHint;
-(BOOL)prerollBeforePlaying;
-(long long)startBehavior;
-(BOOL)playIsSticky;
-(void)setPlayIsSticky:(BOOL)arg1 ;
-(BOOL)scaleDuringPlayback;
-(BOOL)longExposureVitality;
-(BOOL)showStateOverlay;
-(BOOL)easingEnabled;
-(double)vitalityEaseDuration;
-(double)forceScrubMinRateChange;
-(double)forceScrubMinimumRate;
-(double)forceScrubRewindFactor;
-(double)forceScrubMaximumInteractiveRate;
-(BOOL)allowFrameBlending;
-(void)setEasingEnabled:(BOOL)arg1 ;
-(void)setVitalityEaseDuration:(double)arg1 ;
-(void)setVitalityEaseMinRate:(float)arg1 ;
-(void)setStartBehavior:(long long)arg1 ;
-(void)setScaleDuringPlayback:(BOOL)arg1 ;
-(BOOL)crossfadeEnabled;
-(void)setCrossfadeEnabled:(BOOL)arg1 ;
-(void)setLongExposureVitality:(BOOL)arg1 ;
-(void)setPlayDuringHint:(BOOL)arg1 ;
-(void)setShowStateOverlay:(BOOL)arg1 ;
-(void)setPrerollBeforePlaying:(BOOL)arg1 ;
-(void)setUseDedicatedQueues:(BOOL)arg1 ;
-(void)setAllowFrameBlending:(BOOL)arg1 ;
-(BOOL)allowVideoPreRoll;
-(void)setAllowVideoPreRoll:(BOOL)arg1 ;
-(BOOL)allowPlayerReuse;
-(double)forceTouchTimeoutInterval;
-(void)setForceTouchTimeoutInterval:(double)arg1 ;
-(double)forceTouchTimeoutMinimumProgress;
-(void)setForceTouchTimeoutMinimumProgress:(double)arg1 ;
-(double)forceScrubMinimumPressure;
-(void)setForceScrubMinimumPressure:(double)arg1 ;
-(double)forceScrubMaximumPressure;
-(void)setForceScrubMaximumPressure:(double)arg1 ;
-(void)setForceScrubRewindFactor:(double)arg1 ;
-(void)setForceScrubMinRateChange:(double)arg1 ;
-(void)setForceScrubMinimumRate:(double)arg1 ;
-(void)setForceScrubMaximumInteractiveRate:(double)arg1 ;
-(double)audioRampDuration;
-(void)setAudioRampDuration:(double)arg1 ;
@end

