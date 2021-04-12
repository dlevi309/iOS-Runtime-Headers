/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <AVKit/AVScrollViewObserverContentView.h>

@protocol AVPlayerViewControllerContentViewDelegate, AVPlaybackContentContainer;
@class NSString, AVExternalPlaybackIndicatorView, UIImageView, UIView, AVPlaybackControlsView, AVTurboModePlaybackControlsPlaceholderView, __AVPlayerLayerView, NSMutableDictionary, AVCABackdropLayerView, AVStyleSheet, AVScrollViewObserver, NSNumber;

@interface AVPlayerViewControllerContentView : UIView <AVScrollViewObserverContentView> {

	BOOL _shouldLoadPlaybackControlsHint;
	BOOL _canAutomaticallyZoomLetterboxVideos;
	BOOL _styleSheetShouldUseCompactFullScreenItemSize;
	BOOL _needsInitialLayout;
	NSString* _automaticVideoGravity;
	AVExternalPlaybackIndicatorView* _externalPlaybackIndicatorView;
	UIImageView* _unsupportedContentIndicatorView;
	UIImageView* _audioOnlyIndicatorView;
	UIView* _iAdPreRollView;
	id<AVPlayerViewControllerContentViewDelegate> _delegate;
	UIView*<AVPlaybackContentContainer> _playbackContentContainerView;
	UIView* _interactiveContentOverlayView;
	AVPlaybackControlsView* _playbackControlsView;
	AVTurboModePlaybackControlsPlaceholderView* _turboModePlaybackControlsPlaceholderView;
	__AVPlayerLayerView* _playerLayerView;
	NSMutableDictionary* _targetVideoGravities;
	AVCABackdropLayerView* _backdropLayerView;
	NSString* _externalPlaybackIndicatorTitle;
	NSString* _externalPlaybackIndicatorSubtitle;
	AVStyleSheet* _styleSheet;
	AVScrollViewObserver* _scrollingObserver;
	UIEdgeInsets _edgeInsetsForLetterboxedContent;
	UIEdgeInsets _videoContentInset;

}

@property (nonatomic,readonly) AVExternalPlaybackIndicatorView * externalPlaybackIndicatorView;                                           //@synthesize externalPlaybackIndicatorView=_externalPlaybackIndicatorView - In the implementation block
@property (nonatomic,readonly) UIImageView * unsupportedContentIndicatorView;                                                             //@synthesize unsupportedContentIndicatorView=_unsupportedContentIndicatorView - In the implementation block
@property (nonatomic,readonly) UIImageView * audioOnlyIndicatorView;                                                                      //@synthesize audioOnlyIndicatorView=_audioOnlyIndicatorView - In the implementation block
@property (nonatomic,readonly) AVExternalPlaybackIndicatorView * externalPlaybackIndicatorViewIfLoaded; 
@property (nonatomic,readonly) UIImageView * unsupportedContentIndicatorViewIfLoaded; 
@property (nonatomic,readonly) UIImageView * audioOnlyIndicatorViewIfLoaded; 
@property (assign,nonatomic) UIEdgeInsets videoContentInset;                                                                              //@synthesize videoContentInset=_videoContentInset - In the implementation block
@property (nonatomic,retain) __AVPlayerLayerView * playerLayerView;                                                                       //@synthesize playerLayerView=_playerLayerView - In the implementation block
@property (assign,nonatomic) BOOL needsInitialLayout;                                                                                     //@synthesize needsInitialLayout=_needsInitialLayout - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * targetVideoGravities;                                                                //@synthesize targetVideoGravities=_targetVideoGravities - In the implementation block
@property (nonatomic,copy) NSString * automaticVideoGravity;                                                                              //@synthesize automaticVideoGravity=_automaticVideoGravity - In the implementation block
@property (nonatomic,readonly) AVCABackdropLayerView * backdropLayerView;                                                                 //@synthesize backdropLayerView=_backdropLayerView - In the implementation block
@property (nonatomic,copy) NSString * externalPlaybackIndicatorTitle;                                                                     //@synthesize externalPlaybackIndicatorTitle=_externalPlaybackIndicatorTitle - In the implementation block
@property (nonatomic,copy) NSString * externalPlaybackIndicatorSubtitle;                                                                  //@synthesize externalPlaybackIndicatorSubtitle=_externalPlaybackIndicatorSubtitle - In the implementation block
@property (nonatomic,retain) AVStyleSheet * styleSheet;                                                                                   //@synthesize styleSheet=_styleSheet - In the implementation block
@property (nonatomic,readonly) AVScrollViewObserver * scrollingObserver;                                                                  //@synthesize scrollingObserver=_scrollingObserver - In the implementation block
@property (assign,nonatomic,__weak) id<AVPlayerViewControllerContentViewDelegate> delegate;                                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isCoveringWindow; 
@property (nonatomic,retain) UIView*<AVPlaybackContentContainer> playbackContentContainerView;                                            //@synthesize playbackContentContainerView=_playbackContentContainerView - In the implementation block
@property (nonatomic,readonly) NSNumber * layoutClass; 
@property (getter=isInAWindowAndNotScrolling,nonatomic,readonly) BOOL inAWindowAndNotScrolling; 
@property (getter=isScrolling,nonatomic,readonly) BOOL scrolling; 
@property (getter=isScrollingQuickly,nonatomic,readonly) BOOL scrollingQuickly; 
@property (assign,nonatomic) BOOL shouldLoadPlaybackControlsHint;                                                                         //@synthesize shouldLoadPlaybackControlsHint=_shouldLoadPlaybackControlsHint - In the implementation block
@property (assign,nonatomic) BOOL canAutomaticallyZoomLetterboxVideos;                                                                    //@synthesize canAutomaticallyZoomLetterboxVideos=_canAutomaticallyZoomLetterboxVideos - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsetsForLetterboxedContent;                                                                //@synthesize edgeInsetsForLetterboxedContent=_edgeInsetsForLetterboxedContent - In the implementation block
@property (nonatomic,retain) UIView * interactiveContentOverlayView;                                                                      //@synthesize interactiveContentOverlayView=_interactiveContentOverlayView - In the implementation block
@property (nonatomic,readonly) UIView * iAdPreRollView;                                                                                   //@synthesize iAdPreRollView=_iAdPreRollView - In the implementation block
@property (nonatomic,readonly) UIView * iAdPreRollViewIfLoaded; 
@property (nonatomic,readonly) AVPlaybackControlsView * playbackControlsView;                                                             //@synthesize playbackControlsView=_playbackControlsView - In the implementation block
@property (nonatomic,__weak,readonly) AVTurboModePlaybackControlsPlaceholderView * turboModePlaybackControlsPlaceholderView;              //@synthesize turboModePlaybackControlsPlaceholderView=_turboModePlaybackControlsPlaceholderView - In the implementation block
@property (assign,nonatomic) BOOL styleSheetShouldUseCompactFullScreenItemSize;                                                           //@synthesize styleSheetShouldUseCompactFullScreenItemSize=_styleSheetShouldUseCompactFullScreenItemSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<AVPlayerViewControllerContentViewDelegate>)delegate;
-(void)setDelegate:(id<AVPlayerViewControllerContentViewDelegate>)arg1 ;
-(BOOL)isScrolling;
-(void)layoutSubviews;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(AVStyleSheet *)styleSheet;
-(__AVPlayerLayerView *)playerLayerView;
-(id)_mediaTimingFunctionForCurrentAnimationCurve;
-(void)setStyleSheet:(AVStyleSheet *)arg1 ;
-(void)setPlayerLayerView:(__AVPlayerLayerView *)arg1 ;
-(BOOL)isScrollingQuickly;
-(void)avkit_needsUpdateBackdropCaptureViewHidden;
-(id)avkit_backdropGroupLeader;
-(BOOL)avkit_hasFullScreenLayoutClass;
-(UIView *)interactiveContentOverlayView;
-(BOOL)needsInitialLayout;
-(void)setNeedsInitialLayout:(BOOL)arg1 ;
-(AVPlaybackControlsView *)playbackControlsView;
-(AVTurboModePlaybackControlsPlaceholderView *)turboModePlaybackControlsPlaceholderView;
-(BOOL)isCoveringWindow;
-(AVCABackdropLayerView *)backdropLayerView;
-(void)scrollViewObserverValuesDidChange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 playbackContentContainerView:(id)arg2 targetVideoGravities:(id)arg3 ;
-(NSString *)automaticVideoGravity;
-(void)setAutomaticVideoGravity:(NSString *)arg1 ;
-(void)setStyleSheetShouldUseCompactFullScreenItemSize:(BOOL)arg1 ;
-(AVExternalPlaybackIndicatorView *)externalPlaybackIndicatorView;
-(AVExternalPlaybackIndicatorView *)externalPlaybackIndicatorViewIfLoaded;
-(UIImageView *)unsupportedContentIndicatorView;
-(UIImageView *)unsupportedContentIndicatorViewIfLoaded;
-(UIImageView *)audioOnlyIndicatorView;
-(UIImageView *)audioOnlyIndicatorViewIfLoaded;
-(UIView *)iAdPreRollView;
-(UIView *)iAdPreRollViewIfLoaded;
-(void)setInteractiveContentOverlayView:(UIView *)arg1 ;
-(void)setShouldLoadPlaybackControlsHint:(BOOL)arg1 ;
-(void)addPlaybackContentContainerViewIfNeeded;
-(void)setPlaybackContentContainerView:(UIView*<AVPlaybackContentContainer>)arg1 ;
-(BOOL)isViewDescendantOfPlaybackControlsSubview:(id)arg1 ;
-(void)setShowsUnsupportedContentIndicator:(BOOL)arg1 ;
-(void)setShowsAudioOnlyIndicator:(BOOL)arg1 ;
-(void)setShowsExternalPlaybackIndicator:(BOOL)arg1 ;
-(void)setExternalPlaybackIndicatorTitle:(id)arg1 subtitle:(id)arg2 ;
-(void)setTargetVideoGravity:(id)arg1 forLayoutClass:(unsigned long long)arg2 ;
-(NSNumber *)layoutClass;
-(void)loadPlaybackControlsViewIfNeeded;
-(void)removeTurboModePlaybackControlsPlaceholderViewIfNeeded;
-(BOOL)isInAWindowAndNotScrolling;
-(BOOL)_isBeingTransitionedToOrFromFullScreen;
-(void)_updateVideoGravityDuringLayoutSubviewsAndAssertThatIfYouBreakThisMethodYouOwnThisMethod;
-(void)_updateVideoContentInsetForVideoGravity:(long long)arg1 ;
-(void)_applyVideoGravityIfNeeded:(long long)arg1 ;
-(void)_insertPlaybackControlsOrPlaceholderView:(id)arg1 ;
-(void)_loadTurboOrFullPlaybackControlsIfNeeded;
-(void)_loadTurboModePlaybackControlsPlaceholderViewIfNeeded;
-(void)_updateStyleSheet;
-(UIView*<AVPlaybackContentContainer>)playbackContentContainerView;
-(BOOL)shouldLoadPlaybackControlsHint;
-(BOOL)canAutomaticallyZoomLetterboxVideos;
-(void)setCanAutomaticallyZoomLetterboxVideos:(BOOL)arg1 ;
-(UIEdgeInsets)edgeInsetsForLetterboxedContent;
-(void)setEdgeInsetsForLetterboxedContent:(UIEdgeInsets)arg1 ;
-(BOOL)styleSheetShouldUseCompactFullScreenItemSize;
-(UIEdgeInsets)videoContentInset;
-(void)setVideoContentInset:(UIEdgeInsets)arg1 ;
-(NSMutableDictionary *)targetVideoGravities;
-(NSString *)externalPlaybackIndicatorTitle;
-(void)setExternalPlaybackIndicatorTitle:(NSString *)arg1 ;
-(NSString *)externalPlaybackIndicatorSubtitle;
-(void)setExternalPlaybackIndicatorSubtitle:(NSString *)arg1 ;
-(AVScrollViewObserver *)scrollingObserver;
@end

