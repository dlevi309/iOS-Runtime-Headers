/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <PhotosPlayer/ISBasePlayerUIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/ISChangeObserver.h>

@class UIImpactFeedbackGenerator, UIGestureRecognizer, ISTouchLivePhotoPlaybackFilter, UILabel, ISLivePhotoPlayer, NSString;

@interface ISLivePhotoUIView : ISBasePlayerUIView <UIGestureRecognizerDelegate, ISChangeObserver> {

	UIImpactFeedbackGenerator* _feedbackGenerator;
	BOOL __playingVitality;
	UIGestureRecognizer* _playbackGestureRecognizer;
	ISTouchLivePhotoPlaybackFilter* __playbackFilter;
	UILabel* __overlayLabel;
	long long __overlayDismissalID;

}

@property (setter=_setPlaybackFilter:,nonatomic,retain) ISTouchLivePhotoPlaybackFilter * _playbackFilter;              //@synthesize _playbackFilter=__playbackFilter - In the implementation block
@property (assign,setter=_setPlayingVitality:,nonatomic) BOOL _playingVitality;                                        //@synthesize _playingVitality=__playingVitality - In the implementation block
@property (nonatomic,readonly) UILabel * _overlayLabel;                                                                //@synthesize _overlayLabel=__overlayLabel - In the implementation block
@property (assign,setter=_setOverlayDismissalID:,nonatomic) long long _overlayDismissalID;                             //@synthesize _overlayDismissalID=__overlayDismissalID - In the implementation block
@property (nonatomic,retain) ISLivePhotoPlayer * player; 
@property (nonatomic,readonly) UIGestureRecognizer * playbackGestureRecognizer;                                        //@synthesize playbackGestureRecognizer=_playbackGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)contentDidChange;
-(void)setPlayer:(ISLivePhotoPlayer *)arg1 ;
-(UILabel *)_overlayLabel;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(UIGestureRecognizer *)playbackGestureRecognizer;
-(void)_setPlayingVitality:(BOOL)arg1 ;
-(BOOL)_playingVitality;
-(id)livePhotoPlayer;
-(void)audioSessionDidChange;
-(void)_ISLivePhotoUIViewCommonInitialization;
-(void)_handlePlaybackRecognizer:(id)arg1 ;
-(void)_updatePlaybackFilterInput;
-(void)_setPlaybackFilter:(id)arg1 ;
-(void)_updatePlaybackFilter;
-(void)_showOverlayLabel;
-(void)_dismissOverlayLabel:(long long)arg1 ;
-(void)_playerDidChangePlaybackStyle;
-(void)_playerDidChangeHinting;
-(void)_updateGestureRecognizerParameters;
-(ISTouchLivePhotoPlaybackFilter *)_playbackFilter;
-(long long)_overlayDismissalID;
-(void)_setOverlayDismissalID:(long long)arg1 ;
@end

