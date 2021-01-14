/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PXVideoScrubberControllerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol PHVideoScrubberViewInteractionDelegate, PHVideoScrubberFilmstripViewProvider, PHVideoScrubberFilmstripView;
@class AVPlayer, UIImage, UIScrollView, UIView, PXVideoScrubberController, PUPlayheadView, NSString;

@interface PHVideoScrubberView : UIView <PXVideoScrubberControllerDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate> {

	unsigned long long _previousPlayState;
	SCD_Struct_PH7 _interactionDelegateRespondsTo;
	BOOL __needsUpdateFilmStripView;
	BOOL __needsUpdateVideoScrubberController;
	AVPlayer* _player;
	double _estimatedDuration;
	UIImage* _placeholderThumbnail;
	UIScrollView* _scrollView;
	id<PHVideoScrubberViewInteractionDelegate> _interactionDelegate;
	id<PHVideoScrubberFilmstripViewProvider> _filmstripViewProvider;
	UIView*<PHVideoScrubberFilmstripView> __filmStripView;
	PXVideoScrubberController* __videoScrubberController;
	PUPlayheadView* __playheadView;

}

@property (assign,setter=_setNeedsUpdateFilmStripView:,nonatomic) BOOL _needsUpdateFilmStripView;                                   //@synthesize _needsUpdateFilmStripView=__needsUpdateFilmStripView - In the implementation block
@property (assign,setter=_setNeedsUpdateVideoScrubberController:,nonatomic) BOOL _needsUpdateVideoScrubberController;               //@synthesize _needsUpdateVideoScrubberController=__needsUpdateVideoScrubberController - In the implementation block
@property (setter=_setFilmStripView:,nonatomic,retain) UIView*<PHVideoScrubberFilmstripView> _filmStripView;                        //@synthesize _filmStripView=__filmStripView - In the implementation block
@property (setter=_setVideoScrubberController:,nonatomic,retain) PXVideoScrubberController * _videoScrubberController;              //@synthesize _videoScrubberController=__videoScrubberController - In the implementation block
@property (setter=_setScrollView:,nonatomic,retain) UIScrollView * scrollView;                                                      //@synthesize scrollView=_scrollView - In the implementation block
@property (setter=_setPlayheadView:,nonatomic,retain) PUPlayheadView * _playheadView;                                               //@synthesize _playheadView=__playheadView - In the implementation block
@property (nonatomic,retain) AVPlayer * player;                                                                                     //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) double estimatedDuration;                                                                              //@synthesize estimatedDuration=_estimatedDuration - In the implementation block
@property (nonatomic,retain) UIImage * placeholderThumbnail;                                                                        //@synthesize placeholderThumbnail=_placeholderThumbnail - In the implementation block
@property (assign,nonatomic,__weak) id<PHVideoScrubberViewInteractionDelegate> interactionDelegate;                                 //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PHVideoScrubberFilmstripViewProvider> filmstripViewProvider;                                 //@synthesize filmstripViewProvider=_filmstripViewProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(id)_scrollView;
-(void)setInteractionDelegate:(id<PHVideoScrubberViewInteractionDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<PHVideoScrubberViewInteractionDelegate>)interactionDelegate;
-(void)_handleLongPressGesture:(id)arg1 ;
-(void)_updateIfNeeded;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)_handleTapGesture:(id)arg1 ;
-(void)videoScrubberControllerDidUpdate:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)layoutSubviews;
-(void)_setVideoScrubberController:(id)arg1 ;
-(double)videoScrubberController:(id)arg1 lengthForDuration:(double)arg2 ;
-(void)setEstimatedDuration:(double)arg1 ;
-(PUPlayheadView *)_playheadView;
-(void)setPlaceholderThumbnail:(UIImage *)arg1 ;
-(id)_currentAVAsset;
-(id)_currentVideoComposition;
-(BOOL)_isUserInteractingWithScrollView;
-(BOOL)_playerIsPlaying;
-(void)_handleTouchGesture:(id)arg1 ;
-(void)_handleInteractionBegan;
-(void)_handleInteractionEndedAndTogglePlayState:(BOOL)arg1 ;
-(void)_invalidateFilmStripView;
-(void)_invalidateVideoScrubberController;
-(void)_updateFilmStripViewIfNeeded;
-(void)_updateVideoscrubberControllerIfNeeded;
-(void)_updateVisibleRectOfFilmStripView;
-(void)_updateScrollViewContentOffset;
-(void)_updatePlayheadFrame;
-(double)estimatedDuration;
-(UIImage *)placeholderThumbnail;
-(id<PHVideoScrubberFilmstripViewProvider>)filmstripViewProvider;
-(void)setFilmstripViewProvider:(id<PHVideoScrubberFilmstripViewProvider>)arg1 ;
-(BOOL)_needsUpdateFilmStripView;
-(void)_setNeedsUpdateFilmStripView:(BOOL)arg1 ;
-(BOOL)_needsUpdateVideoScrubberController;
-(void)_setNeedsUpdateVideoScrubberController:(BOOL)arg1 ;
-(UIView*<PHVideoScrubberFilmstripView>)_filmStripView;
-(void)_setFilmStripView:(id)arg1 ;
-(void)_setPlayheadView:(id)arg1 ;
-(BOOL)_needsUpdate;
-(void)scrollViewDidScroll:(id)arg1 ;
-(PXVideoScrubberController *)_videoScrubberController;
-(UIScrollView *)scrollView;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)dealloc;
-(void)_setScrollView:(id)arg1 ;
-(double)_lengthForDuration:(double)arg1 ;
@end

