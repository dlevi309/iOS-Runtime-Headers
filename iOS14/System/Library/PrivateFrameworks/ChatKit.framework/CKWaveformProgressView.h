/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKBalloonImageView.h>

@class UIImage, IMManualUpdater;

@interface CKWaveformProgressView : CKBalloonImageView {

	char _color;
	BOOL _playing;
	BOOL _played;
	double _duration;
	double _currentTime;
	UIImage* _waveform;
	IMManualUpdater* _displayUpdater;

}

@property (nonatomic,retain) IMManualUpdater * displayUpdater;              //@synthesize displayUpdater=_displayUpdater - In the implementation block
@property (assign,nonatomic) char color;                                    //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double duration;                               //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double currentTime;                            //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,retain) UIImage * waveform;                            //@synthesize waveform=_waveform - In the implementation block
@property (assign,getter=isPlaying,nonatomic) BOOL playing;                 //@synthesize playing=_playing - In the implementation block
@property (assign,getter=isPlayed,nonatomic) BOOL played;                   //@synthesize played=_played - In the implementation block
-(void)prepareForDisplay;
-(BOOL)isPlaying;
-(void)setNeedsPrepareForDisplay;
-(IMManualUpdater *)displayUpdater;
-(void)setWaveform:(UIImage *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImage *)waveform;
-(char)color;
-(BOOL)isPlayed;
-(void)setCurrentTime:(double)arg1 ;
-(void)setPlaying:(BOOL)arg1 ;
-(double)currentTime;
-(void)setColor:(char)arg1 ;
-(void)prepareForDisplayIfNeeded;
-(void)setPlayed:(BOOL)arg1 ;
-(double)duration;
-(void)setDisplayUpdater:(IMManualUpdater *)arg1 ;
@end

