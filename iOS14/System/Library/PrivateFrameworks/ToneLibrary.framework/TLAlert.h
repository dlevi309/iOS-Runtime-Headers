/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(long long)bb_toneLibraryAlertTypeForSectionID:(id)arg1 ;
+(id)alertWithConfiguration:(id)arg1 ;
+(void)_setCurrentOverridePolicy:(long long)arg1 forType:(long long)arg2 ;
+(long long)_currentOverridePolicyForType:(long long)arg1 ;
+(void)playAlertForType:(long long)arg1 ;
+(void)playToneAndVibrationForType:(long long)arg1 ;
+(BOOL)_watchPrefersSalientToneAndVibration;
+(void)_setWatchPrefersSalientToneAndVibration:(BOOL)arg1 ;
+(BOOL)_stopAllAlerts;
-(id)initWithType:(long long)arg1 ;
-(NSString *)vibrationIdentifier;
-(id)_descriptionForDebugging:(BOOL)arg1 ;
-(NSString *)toneIdentifier;
-(void)preheatWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)debugDescription;
-(void)play;
-(void)playWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stop;
-(id)description;
-(TLAlertConfiguration *)configuration;
-(long long)type;
-(void)_updateAudioVolumeDynamicallyToValue:(float)arg1 ;
-(id)initWithType:(long long)arg1 accountIdentifier:(id)arg2 ;
-(id)initWithType:(long long)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3 ;
-(BOOL)playWithCompletionHandler:(/*^block*/id)arg1 targetQueue:(id)arg2 ;
-(id<TLAlertPlaybackObserver>)playbackObserver;
-(void)setPlaybackObserver:(id<TLAlertPlaybackObserver>)arg1 ;
-(id)_initWithConfiguration:(id)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3 hasSynchronizedVibrationUnmatchedWithTone:(BOOL)arg4 ;
-(void)stopWithOptions:(id)arg1 ;
-(BOOL)_hasSynchronizedVibrationUnmatchedWithTone;
@end

