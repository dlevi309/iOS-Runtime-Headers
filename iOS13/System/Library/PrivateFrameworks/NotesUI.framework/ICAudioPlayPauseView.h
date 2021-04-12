/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIKitCore/UIView.h>

@class ICAttachment, CALayer, ICNoteEditorIconImageView, AVAsset;

@interface ICAudioPlayPauseView : UIView {

	ICAttachment* _audioAttachment;
	CALayer* _backgroundLayer;
	ICNoteEditorIconImageView* _playView;
	ICNoteEditorIconImageView* _pauseView;

}

@property (nonatomic,retain) CALayer * backgroundLayer;                          //@synthesize backgroundLayer=_backgroundLayer - In the implementation block
@property (nonatomic,retain) ICNoteEditorIconImageView * playView;               //@synthesize playView=_playView - In the implementation block
@property (nonatomic,retain) ICNoteEditorIconImageView * pauseView;              //@synthesize pauseView=_pauseView - In the implementation block
@property (nonatomic,readonly) AVAsset * audio; 
@property (nonatomic,retain) ICAttachment * audioAttachment;                     //@synthesize audioAttachment=_audioAttachment - In the implementation block
@property (nonatomic,readonly) BOOL isPlaying; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)pause;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)play;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)tintColorDidChange;
-(void)didMoveToWindow;
-(BOOL)isPlaying;
-(CALayer *)backgroundLayer;
-(void)setBackgroundLayer:(CALayer *)arg1 ;
-(void)tapGesture:(id)arg1 ;
-(AVAsset *)audio;
-(void)togglePlayPause;
-(void)updateTime:(double)arg1 duration:(double)arg2 ;
-(void)setAudioAttachment:(ICAttachment *)arg1 ;
-(void)sharedInit;
-(void)audioWillChange;
-(void)audioDidChange;
-(ICAttachment *)audioAttachment;
-(void)createBackgroundLayer;
-(void)createPlayPauseViews;
-(void)showStopped;
-(void)didPlayToEndNotification:(id)arg1 ;
-(id)addSubImageViewForImage:(id)arg1 ;
-(void)setPlayView:(ICNoteEditorIconImageView *)arg1 ;
-(void)setPauseView:(ICNoteEditorIconImageView *)arg1 ;
-(ICNoteEditorIconImageView *)playView;
-(ICNoteEditorIconImageView *)pauseView;
-(void)showPressed:(BOOL)arg1 ;
-(void)showPlaying;
-(void)showPaused;
-(void)audioPlaybackPlayNotification:(id)arg1 ;
-(void)audioPlaybackPauseNotification:(id)arg1 ;
-(void)audioPlaybackStopNotification:(id)arg1 ;
-(void)audioPlaybackTimeChangedNotification:(id)arg1 ;
-(void)setImageNamed:(id)arg1 onLayer:(id)arg2 adjustLayerSize:(BOOL)arg3 ;
-(id)foregroundStrokeColor;
@end

