/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/HFAudioPlayerDelegate.h>

@class NSArray, NSURL, UIImageView, UIButton, UIVisualEffectView, UILabel, UIImage, UIColor, HFAudioPlayer, NSString;

@interface HURecordedWaveformView : UIView <HFAudioPlayerDelegate> {

	double _duration;
	NSArray* _audioPowerLevels;
	NSURL* _audioFileURL;
	UIImageView* _waveformImageView;
	UIButton* _playRecordingButton;
	UIVisualEffectView* _blurView;
	UILabel* _timeLabel;
	UIImage* _waveformImage;
	double _minTimeLabelWidth;
	UIColor* _waveformColor;
	UIColor* _backgroundColor;
	HFAudioPlayer* _audioPlayer;

}

@property (nonatomic,retain) UIVisualEffectView * blurView;                //@synthesize blurView=_blurView - In the implementation block
@property (nonatomic,retain) UILabel * timeLabel;                          //@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,retain) UIImageView * waveformImageView;              //@synthesize waveformImageView=_waveformImageView - In the implementation block
@property (nonatomic,retain) UIImage * waveformImage;                      //@synthesize waveformImage=_waveformImage - In the implementation block
@property (nonatomic,retain) UIButton * playRecordingButton;               //@synthesize playRecordingButton=_playRecordingButton - In the implementation block
@property (assign,nonatomic) double minTimeLabelWidth;                     //@synthesize minTimeLabelWidth=_minTimeLabelWidth - In the implementation block
@property (nonatomic,retain) UIColor * waveformColor;                      //@synthesize waveformColor=_waveformColor - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                    //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) HFAudioPlayer * audioPlayer;                  //@synthesize audioPlayer=_audioPlayer - In the implementation block
@property (assign,nonatomic) double duration;                              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSArray * audioPowerLevels;                   //@synthesize audioPowerLevels=_audioPowerLevels - In the implementation block
@property (nonatomic,retain) NSURL * audioFileURL;                         //@synthesize audioFileURL=_audioFileURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTimeLabel:(UILabel *)arg1 ;
-(UILabel *)timeLabel;
-(void)setBlurView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)blurView;
-(void)setDuration:(double)arg1 ;
-(HFAudioPlayer *)audioPlayer;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setAudioPlayer:(HFAudioPlayer *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setMinTimeLabelWidth:(double)arg1 ;
-(double)minTimeLabelWidth;
-(void)layoutSubviews;
-(void)setAudioFileURL:(NSURL *)arg1 ;
-(NSURL *)audioFileURL;
-(double)duration;
-(void)setAlpha:(double)arg1 ;
-(UIImage *)waveformImage;
-(void)setWaveformImage:(UIImage *)arg1 ;
-(void)setWaveformImageView:(UIImageView *)arg1 ;
-(UIImageView *)waveformImageView;
-(void)audioPlayer:(id)arg1 didPausePlaybackWithReason:(id)arg2 ;
-(void)audioPlayerDidStopPlayback:(id)arg1 ;
-(void)audioPlayerDidResumePlayback:(id)arg1 ;
-(void)audioPlayer:(id)arg1 didUpdatePlaybackTime:(double)arg2 ;
-(void)audioPlayerDidFinishPlayback:(id)arg1 withError:(id)arg2 ;
-(NSArray *)audioPowerLevels;
-(void)setAudioPowerLevels:(NSArray *)arg1 ;
-(void)setWaveformColor:(UIColor *)arg1 ;
-(UIColor *)waveformColor;
-(void)_playRecording:(id)arg1 ;
-(UIButton *)playRecordingButton;
-(id)_waveFormImageForWidth:(double)arg1 havingColor:(id)arg2 ;
-(void)_updateProgressForPlaybackTime:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 waveformColor:(id)arg2 backgroundColor:(id)arg3 tintColor:(id)arg4 ;
-(void)setPlayRecordingButton:(UIButton *)arg1 ;
@end

