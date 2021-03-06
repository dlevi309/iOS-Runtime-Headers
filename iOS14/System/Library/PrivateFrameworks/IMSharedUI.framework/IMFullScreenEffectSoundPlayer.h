/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
*/

#import <IMSharedUI/IMAudioControllerDelegate.h>
#import <IMSharedUI/IMFullScreenEffectSoundPlayer.h>

@protocol IMFullScreenEffectSoundPlayer <NSObject>
@property (assign,nonatomic,__weak) id<IMFullScreenEffectSoundPlayerDelegate> delegate; 
@required
-(id<IMFullScreenEffectSoundPlayerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)stopPlayingSound;
-(id)initWithSoundURL:(id)arg1 hasHapticTrack:(BOOL)arg2;
-(void)prepareToPlaySound;
-(void)startPlayingSound;

@end


@protocol IMFullScreenEffectSoundPlayerDelegate;
@class IMAudioController, NSURL, NSString;

@interface IMFullScreenEffectSoundPlayer : NSObject <IMAudioControllerDelegate, IMFullScreenEffectSoundPlayer> {

	BOOL _started;
	BOOL _hasHapticTrack;
	float _currentVolume;
	id<IMFullScreenEffectSoundPlayerDelegate> _delegate;
	IMAudioController* _audioController;
	NSURL* _soundURL;

}

@property (nonatomic,retain) IMAudioController * audioController;                                    //@synthesize audioController=_audioController - In the implementation block
@property (assign,nonatomic) BOOL started;                                                           //@synthesize started=_started - In the implementation block
@property (nonatomic,readonly) NSURL * soundURL;                                                     //@synthesize soundURL=_soundURL - In the implementation block
@property (nonatomic,readonly) BOOL hasHapticTrack;                                                  //@synthesize hasHapticTrack=_hasHapticTrack - In the implementation block
@property (assign,nonatomic) float currentVolume;                                                    //@synthesize currentVolume=_currentVolume - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IMFullScreenEffectSoundPlayerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<IMFullScreenEffectSoundPlayerDelegate>)delegate;
-(BOOL)started;
-(float)currentVolume;
-(void)setDelegate:(id<IMFullScreenEffectSoundPlayerDelegate>)arg1 ;
-(void)_didPrepare;
-(void)_didStart;
-(NSURL *)soundURL;
-(IMAudioController *)audioController;
-(void)setAudioController:(IMAudioController *)arg1 ;
-(BOOL)_supportsSoundEffects;
-(void)_audioSessionOptionsWillChange:(id)arg1 ;
-(id)_ensureAudioPlayer;
-(void)setCurrentVolume:(float)arg1 ;
-(void)setStarted:(BOOL)arg1 ;
-(void)audioController:(id)arg1 didChangeProgressForContentAtURL:(id)arg2 currentTime:(double)arg3 duration:(double)arg4 ;
-(void)audioController:(id)arg1 didPrepareToPlayContentAtURL:(id)arg2 successfully:(BOOL)arg3 ;
-(BOOL)hasHapticTrack;
-(void)_didStop;
-(void)stopPlayingSound;
-(id)initWithSoundURL:(id)arg1 hasHapticTrack:(BOOL)arg2 ;
-(void)prepareToPlaySound;
-(void)startPlayingSound;
@end

