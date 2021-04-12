/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(float)progressForTime:(double)arg1 duration:(double)arg2 ;
+(id)imageWithType:(unsigned char)arg1 color:(char)arg2 ;
+(id)templateImageWithType:(unsigned char)arg1 ;
+(id)templateImageWithControlImage:(id)arg1 ;
-(float)progress;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(char)color;
-(void)setColor:(char)arg1 ;
-(void)setProgress:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)prepareForDisplay;
-(BOOL)isPlaying;
-(BOOL)isPlayed;
-(void)setPlaying:(BOOL)arg1 ;
-(void)setPlayed:(BOOL)arg1 ;
-(void)prepareForDisplayIfNeeded;
-(void)setDisplayUpdater:(IMManualUpdater *)arg1 ;
-(void)setNeedsPrepareForDisplay;
-(IMManualUpdater *)displayUpdater;
@end

