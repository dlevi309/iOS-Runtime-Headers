/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	float _vitalityEaseMinRate;
	double _vitalityEaseDuration;
	long long _startBehavior;
	double _forceScrubRewindFactor;
	double _forceScrubMinRateChange;
	double _forceScrubMinimumRate;
	double _forceScrubMaximumInteractiveRate;

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
@property (assign,nonatomic) double forceScrubRewindFactor;                        //@synthesize forceScrubRewindFactor=_forceScrubRewindFactor - In the implementation block
@property (assign,nonatomic) double forceScrubMinRateChange;                       //@synthesize forceScrubMinRateChange=_forceScrubMinRateChange - In the implementation block
@property (assign,nonatomic) double forceScrubMinimumRate;                         //@synthesize forceScrubMinimumRate=_forceScrubMinimumRate - In the implementation block
@property (assign,nonatomic) double forceScrubMaximumInteractiveRate;              //@synthesize forceScrubMaximumInteractiveRate=_forceScrubMaximumInteractiveRate - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setPlayDuringHint:(BOOL)arg1 ;
-(BOOL)allowVideoPreRoll;
-(void)setShowStateOverlay:(BOOL)arg1 ;
-(BOOL)playIsSticky;
-(void)setAudioEnabled:(BOOL)arg1 ;
-(BOOL)audioEnabled;
-(double)forceScrubRewindFactor;
-(void)setForceScrubRewindFactor:(double)arg1 ;
-(BOOL)loopingEnabled;
-(void)setEasingEnabled:(BOOL)arg1 ;
-(void)setForceScrubMinRateChange:(double)arg1 ;
-(void)setVitalityEaseMinRate:(float)arg1 ;
-(BOOL)prerollBeforePlaying;
-(BOOL)allowFrameBlending;
-(double)forceScrubMinimumRate;
-(void)setForceScrubMinimumRate:(double)arg1 ;
-(double)forceScrubMaximumInteractiveRate;
-(void)setPlayIsSticky:(BOOL)arg1 ;
-(double)forceScrubMinRateChange;
-(void)setAllowVideoPreRoll:(BOOL)arg1 ;
-(float)vitalityEaseMinRate;
-(BOOL)scaleDuringPlayback;
-(BOOL)playDuringHint;
-(void)setLoopingEnabled:(BOOL)arg1 ;
-(long long)startBehavior;
-(void)setUseDedicatedQueues:(BOOL)arg1 ;
-(void)setScaleDuringPlayback:(BOOL)arg1 ;
-(double)vitalityEaseDuration;
-(BOOL)crossfadeEnabled;
-(void)setVitalityEaseDuration:(double)arg1 ;
-(void)setLongExposureVitality:(BOOL)arg1 ;
-(void)setAllowFrameBlending:(BOOL)arg1 ;
-(BOOL)longExposureVitality;
-(BOOL)useDedicatedQueues;
-(void)setPrerollBeforePlaying:(BOOL)arg1 ;
-(void)setCrossfadeEnabled:(BOOL)arg1 ;
-(void)setStartBehavior:(long long)arg1 ;
-(void)setForceScrubMaximumInteractiveRate:(double)arg1 ;
-(BOOL)easingEnabled;
-(BOOL)showStateOverlay;
@end

