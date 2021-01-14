/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKBalloonImageView.h>

@class IMManualUpdater;

@interface CKAudioProgressView : CKBalloonImageView {

	BOOL _playing;
	BOOL _played;
	char _color;
	float _progress;
	int _style;
	IMManualUpdater* _displayUpdater;

}

@property (nonatomic,retain) IMManualUpdater * displayUpdater;              //@synthesize displayUpdater=_displayUpdater - In the implementation block
@property (assign,nonatomic) float progress;                                //@synthesize progress=_progress - In the implementation block
@property (assign,getter=isPlaying,nonatomic) BOOL playing;                 //@synthesize playing=_playing - In the implementation block
@property (assign,getter=isPlayed,nonatomic) BOOL played;                   //@synthesize played=_played - In the implementation block
@property (assign,nonatomic) char color;                                    //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) int style;                                     //@synthesize style=_style - In the implementation block
+(id)imageWithType:(unsigned char)arg1 color:(char)arg2 ;
+(id)templateImageWithType:(unsigned char)arg1 ;
+(id)templateImageWithControlImage:(id)arg1 ;
+(float)progressForTime:(double)arg1 duration:(double)arg2 ;
-(void)prepareForDisplay;
-(BOOL)isPlaying;
-(void)setNeedsPrepareForDisplay;
-(IMManualUpdater *)displayUpdater;
-(id)initWithFrame:(CGRect)arg1 ;
-(float)progress;
-(char)color;
-(BOOL)isPlayed;
-(void)setPlaying:(BOOL)arg1 ;
-(void)setColor:(char)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)prepareForDisplayIfNeeded;
-(void)setProgress:(float)arg1 ;
-(void)setStyle:(int)arg1 ;
-(void)setPlayed:(BOOL)arg1 ;
-(int)style;
-(void)setDisplayUpdater:(IMManualUpdater *)arg1 ;
@end

