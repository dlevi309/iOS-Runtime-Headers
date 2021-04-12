/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <PhotosPlayer/ISBasePlayerUIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/ISChangeObserver.h>

@class UIImpactFeedbackGenerator, UIGestureRecognizer, CAMeshTransform, ISTouchLivePhotoPlaybackFilter, UILabel, ISLivePhotoPlayer, NSString;

@interface ISLivePhotoUIView : ISBasePlayerUIView <UIGestureRecognizerDelegate, ISChangeObserver> {

	UIImpactFeedbackGenerator* _feedbackGenerator;
	BOOL __playingVitality;
	UIGestureRecognizer* _playbackGestureRecognizer;
	CAMeshTransform* _vitalityTransform;
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
@property (nonatomic,copy) CAMeshTransform * vitalityTransform;                                                        //@synthesize vitalityTransform=_vitalityTransform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)livePhotoPlayer;
-(void)contentDidChange;
-(void)setPlayer:(ISLivePhotoPlayer *)arg1 ;
-(void)_dismissOverlayLabel:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updatePlaybackFilterInput;
-(void)setVitalityTransform:(CAMeshTransform *)arg1 ;
-(BOOL)_playingVitality;
-(void)_handlePlaybackRecognizer:(id)arg1 ;
-(void)audioSessionDidChange;
-(UILabel *)_overlayLabel;
-(long long)_overlayDismissalID;
-(void)_playerDidChangePlaybackStyle;
-(void)_ISLivePhotoUIViewCommonInitialization;
-(void)_updateVideoTransform;
-(id)initWithCoder:(id)arg1 ;
-(void)_updateGestureRecognizerParameters;
-(void)_setOverlayDismissalID:(long long)arg1 ;
-(void)_updatePlaybackFilter;
-(UIGestureRecognizer *)playbackGestureRecognizer;
-(CAMeshTransform *)vitalityTransform;
-(void)_playerDidChangeHinting;
-(void)_setPlayingVitality:(BOOL)arg1 ;
-(ISTouchLivePhotoPlaybackFilter *)_playbackFilter;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)dealloc;
-(void)_showOverlayLabel;
-(void)_setPlaybackFilter:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

