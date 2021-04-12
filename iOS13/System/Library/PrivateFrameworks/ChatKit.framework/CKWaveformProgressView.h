/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)duration;
-(char)color;
-(void)setImage:(id)arg1 ;
-(void)setColor:(char)arg1 ;
-(void)setDuration:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForDisplay;
-(double)currentTime;
-(BOOL)isPlaying;
-(BOOL)isPlayed;
-(void)setPlaying:(BOOL)arg1 ;
-(void)setCurrentTime:(double)arg1 ;
-(void)setWaveform:(UIImage *)arg1 ;
-(UIImage *)waveform;
-(void)setPlayed:(BOOL)arg1 ;
-(void)prepareForDisplayIfNeeded;
-(void)setDisplayUpdater:(IMManualUpdater *)arg1 ;
-(void)setNeedsPrepareForDisplay;
-(IMManualUpdater *)displayUpdater;
@end

