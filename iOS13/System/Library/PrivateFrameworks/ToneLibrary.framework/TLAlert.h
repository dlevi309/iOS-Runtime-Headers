/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
*/


@protocol TLAlertPlaybackObserver;
@class TLAlertConfiguration, NSString;

@interface TLAlert : NSObject {

	long long _instanceIndex;
	BOOL _hasSynchronizedVibrationUnmatchedWithTone;
	id<TLAlertPlaybackObserver> _playbackObserver;
	TLAlertConfiguration* _configuration;
	long long _type;
	NSString* _toneIdentifier;
	NSString* _vibrationIdentifier;

}

@property (nonatomic,readonly) BOOL _hasSynchronizedVibrationUnmatchedWithTone;                //@synthesize hasSynchronizedVibrationUnmatchedWithTone=_hasSynchronizedVibrationUnmatchedWithTone - In the implementation block
@property (assign,nonatomic,__weak) id<TLAlertPlaybackObserver> playbackObserver;              //@synthesize playbackObserver=_playbackObserver - In the implementation block
@property (nonatomic,readonly) TLAlertConfiguration * configuration;                           //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) long long type;                                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * toneIdentifier;                                      //@synthesize toneIdentifier=_toneIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * vibrationIdentifier;                                 //@synthesize vibrationIdentifier=_vibrationIdentifier - In the implementation block
+(id)alertWithConfiguration:(id)arg1 ;
+(long long)_currentOverridePolicyForType:(long long)arg1 ;
+(void)_setCurrentOverridePolicy:(long long)arg1 forType:(long long)arg2 ;
+(void)playAlertForType:(long long)arg1 ;
+(void)playToneAndVibrationForType:(long long)arg1 ;
+(BOOL)_watchPrefersSalientToneAndVibration;
+(void)_setWatchPrefersSalientToneAndVibration:(BOOL)arg1 ;
+(BOOL)_stopAllAlerts;
-(id)description;
-(id)debugDescription;
-(long long)type;
-(void)stop;
-(id)initWithType:(long long)arg1 ;
-(TLAlertConfiguration *)configuration;
-(void)play;
-(void)playWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)toneIdentifier;
-(NSString *)vibrationIdentifier;
-(id)_descriptionForDebugging:(BOOL)arg1 ;
-(id)initWithType:(long long)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3 ;
-(BOOL)playWithCompletionHandler:(/*^block*/id)arg1 targetQueue:(id)arg2 ;
-(void)_updateAudioVolumeDynamicallyToValue:(float)arg1 ;
-(id)initWithType:(long long)arg1 accountIdentifier:(id)arg2 ;
-(id<TLAlertPlaybackObserver>)playbackObserver;
-(void)setPlaybackObserver:(id<TLAlertPlaybackObserver>)arg1 ;
-(id)_initWithConfiguration:(id)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3 hasSynchronizedVibrationUnmatchedWithTone:(BOOL)arg4 ;
-(void)stopWithOptions:(id)arg1 ;
-(BOOL)_hasSynchronizedVibrationUnmatchedWithTone;
@end

