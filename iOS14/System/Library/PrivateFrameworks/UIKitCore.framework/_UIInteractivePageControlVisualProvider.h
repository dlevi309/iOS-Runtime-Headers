/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIPageControlVisualProvider.h>
#import <UIKitCore/_UIPageIndicatorFeedDelegate.h>
#import <UIKitCore/_UIPageIndicatorStoreDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKitCore/_UITrackingGestureRecognizerDelegate.h>

@class _UIPageControlContentView, _UIPageControlIndicatorContentView, UIVisualEffectView, CADisplayLink, UIGestureRecognizer, UIDelayedAction, _UIPageIndicatorFeed, _UIPageIndicatorStore, _UIPageControlInteractor, UIViewFloatAnimatableProperty, CAMediaTimingFunction, UISelectionFeedbackGenerator, UIImpactFeedbackGenerator, NSString;

@interface _UIInteractivePageControlVisualProvider : _UIPageControlVisualProvider <_UIPageIndicatorFeedDelegate, _UIPageIndicatorStoreDelegate, UIGestureRecognizerDelegate, _UITrackingGestureRecognizerDelegate> {

	SCD_Struct_UI62 _state;
	long long _indicatorStartIndex;
	long long _numberOfVisibleIndicators;
	long long _targetPage;
	long long _currentTick;
	long long _tickThreshold;
	double _panDistance;
	double _indicatorPaddingOffset;
	double _continuousStartIndex;
	_UIPageControlContentView* _contentView;
	_UIPageControlIndicatorContentView* _indicatorContentView;
	UIVisualEffectView* _backgroundView;
	CADisplayLink* _displayLink;
	UIGestureRecognizer* _scrubbingGestureRecognizer;
	UIDelayedAction* _successiveTapAction;
	long long _previousMoveDirection;
	_UIPageIndicatorFeed* _indicatorFeed;
	_UIPageIndicatorStore* _indicatorStore;
	_UIPageControlInteractor* _interactor;
	UIViewFloatAnimatableProperty* _continuousDisplayedPage;
	UIViewFloatAnimatableProperty* _scrubProgress;
	CAMediaTimingFunction* _indicatorTransformCurve;
	UISelectionFeedbackGenerator* _selectionFeedbackGenerator;
	UIImpactFeedbackGenerator* _joggingFeedbackGenerator;
	CGPoint _previousTouchLocation;

}

@property (nonatomic,retain) _UIPageControlContentView * contentView;                                //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) _UIPageControlIndicatorContentView * indicatorContentView;              //@synthesize indicatorContentView=_indicatorContentView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backgroundView;                                    //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic) BOOL isPlatterExpanded; 
@property (assign,nonatomic) BOOL isScrubbing; 
@property (nonatomic,retain) CADisplayLink * displayLink;                                            //@synthesize displayLink=_displayLink - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * scrubbingGestureRecognizer;                       //@synthesize scrubbingGestureRecognizer=_scrubbingGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIDelayedAction * successiveTapAction;                                  //@synthesize successiveTapAction=_successiveTapAction - In the implementation block
@property (assign,nonatomic) long long previousMoveDirection;                                        //@synthesize previousMoveDirection=_previousMoveDirection - In the implementation block
@property (assign,nonatomic) CGPoint previousTouchLocation;                                          //@synthesize previousTouchLocation=_previousTouchLocation - In the implementation block
@property (nonatomic,retain) _UIPageIndicatorFeed * indicatorFeed;                                   //@synthesize indicatorFeed=_indicatorFeed - In the implementation block
@property (nonatomic,retain) _UIPageIndicatorStore * indicatorStore;                                 //@synthesize indicatorStore=_indicatorStore - In the implementation block
@property (nonatomic,retain) _UIPageControlInteractor * interactor;                                  //@synthesize interactor=_interactor - In the implementation block
@property (nonatomic,retain) UIViewFloatAnimatableProperty * continuousDisplayedPage;                //@synthesize continuousDisplayedPage=_continuousDisplayedPage - In the implementation block
@property (nonatomic,retain) UIViewFloatAnimatableProperty * scrubProgress;                          //@synthesize scrubProgress=_scrubProgress - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * indicatorTransformCurve;                        //@synthesize indicatorTransformCurve=_indicatorTransformCurve - In the implementation block
@property (nonatomic,retain) UISelectionFeedbackGenerator * selectionFeedbackGenerator;              //@synthesize selectionFeedbackGenerator=_selectionFeedbackGenerator - In the implementation block
@property (nonatomic,retain) UIImpactFeedbackGenerator * joggingFeedbackGenerator;                   //@synthesize joggingFeedbackGenerator=_joggingFeedbackGenerator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidateIndicators;
-(void)didUpdatePageIndicatorTintColor;
-(id)indicatorImageForPage:(long long)arg1 ;
-(void)setInteractor:(_UIPageControlInteractor *)arg1 ;
-(void)didUpdateAllowsContinuousInteraction;
-(void)setIsPlatterExpanded:(BOOL)arg1 ;
-(void)_updateCurrentPage:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(CGSize)sizeForNumberOfPages:(long long)arg1 ;
-(void)didUpdateCustomLayoutValues;
-(BOOL)_isPageWithinPermittedDisplayedRange:(long long)arg1 ;
-(id)preferredIndicatorImage;
-(void)_updateReuseQueue;
-(void)setCustomIndicatorImage:(id)arg1 forPage:(long long)arg2 ;
-(void)didUpdateNumberOfPages;
-(void)updateDisplayedPageToCurrentPage;
-(void)setPreferredIndicatorImage:(id)arg1 ;
-(void)pruneArchivedSubviews:(id)arg1 ;
-(void)didUpdateCurrentPageIndicatorTintColor;
-(BOOL)shouldDisableTouchTracking;
-(CADisplayLink *)displayLink;
-(CGSize)intrinsicContentSize;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(void)didUpdateBackgroundStyle;
-(id)customIndicatorImageForPage:(long long)arg1 ;
-(double)_displayLinkTickThresholdForTouchPage:(double)arg1 scrubPage:(double)arg2 ;
-(UIDelayedAction *)successiveTapAction;
-(void)setIndicatorTransformCurve:(CAMediaTimingFunction *)arg1 ;
-(void)setJoggingFeedbackGenerator:(UIImpactFeedbackGenerator *)arg1 ;
-(void)configureIndicator:(id)arg1 atPage:(long long)arg2 ;
-(void)setBackgroundView:(UIVisualEffectView *)arg1 ;
-(void)didScrubPageControl:(id)arg1 ;
-(void)_layoutImmediately;
-(UIVisualEffectView *)backgroundView;
-(long long)_numberOfVisibleIndicatorsFittingContentWidthForStartIndex:(long long)arg1 ;
-(BOOL)_isPageWithinValidJoggingOffset:(double)arg1 ;
-(void)traitCollectionDidChangeOnSubtree:(id)arg1 ;
-(void)updateScrubbingGestureRecognizer;
-(double)_defaultContentWidthForNumberOfIndicators:(long long)arg1 ;
-(void)_setDisplayedPage:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setIsScrubbing:(BOOL)arg1 ;
-(void)resetSuccessiveTapInfo;
-(UISelectionFeedbackGenerator *)selectionFeedbackGenerator;
-(CAMediaTimingFunction *)indicatorTransformCurve;
-(_UIPageControlIndicatorContentView *)indicatorContentView;
-(BOOL)_currentDisplayModeHasContentPadding;
-(void)setScrubProgress:(UIViewFloatAnimatableProperty *)arg1 ;
-(UIGestureRecognizer *)scrubbingGestureRecognizer;
-(void)setContinuousDisplayedPage:(UIViewFloatAnimatableProperty *)arg1 ;
-(void)layoutSubviews;
-(void)setIndicatorFeed:(_UIPageIndicatorFeed *)arg1 ;
-(id)_indicatorColorForEnabled:(BOOL)arg1 ;
-(void)trackingGestureRecognizer:(id)arg1 recognizedControlEvent:(unsigned long long)arg2 withEvent:(id)arg3 ;
-(void)setSelectionFeedbackGenerator:(UISelectionFeedbackGenerator *)arg1 ;
-(UIImpactFeedbackGenerator *)joggingFeedbackGenerator;
-(UIViewFloatAnimatableProperty *)scrubProgress;
-(id)_indicatorColorForPage:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isPlatterExpanded;
-(void)setContentView:(_UIPageControlContentView *)arg1 ;
-(double)_preciseIndicatorPageForPoint:(CGPoint)arg1 ;
-(CGSize)indicatorSizeForImage:(id)arg1 ;
-(void)_resetSuccessiveTapAction;
-(unsigned long long)defaultVisibleIndicators;
-(void)displayLinkTicked:(id)arg1 ;
-(id)_visibleRightIndicator;
-(_UIPageIndicatorFeed *)indicatorFeed;
-(double)_currentIndicatorContentViewOffsetForMovingDirection:(long long)arg1 ;
-(double)_currentJogDistance;
-(void)setSuccessiveTapAction:(UIDelayedAction *)arg1 ;
-(_UIPageIndicatorStore *)indicatorStore;
-(double)retargetedStartIndexForNumberOfVisibleIndicators:(long long)arg1 ;
-(void)_transitionIndicatorForPage:(long long)arg1 toEnabled:(BOOL)arg2 ;
-(void)animateTransitionIndicatorsFromPage:(long long)arg1 toPage:(long long)arg2 ripple:(BOOL)arg3 ;
-(UIViewFloatAnimatableProperty *)continuousDisplayedPage;
-(void)setPreviousMoveDirection:(long long)arg1 ;
-(double)_indicatorScaleForPage:(long long)arg1 ;
-(long long)_numberOfJoggingIndicators;
-(_UIPageControlContentView *)contentView;
-(CGPoint)previousTouchLocation;
-(long long)previousMoveDirection;
-(CGSize)_intrinsicContentSizeWithPageControlSize:(CGSize)arg1 ;
-(_UIPageControlInteractor *)interactor;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)didTapPageControl:(id)arg1 ;
-(void)prepare;
-(unsigned long long)maxVisibleIndicators;
-(void)setIndicatorStore:(_UIPageIndicatorStore *)arg1 ;
-(void)setPreviousTouchLocation:(CGPoint)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setScrubbingGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(id)_visibleLeftIndicator;
-(BOOL)isScrubbing;
-(void)setIndicatorContentView:(_UIPageControlIndicatorContentView *)arg1 ;
-(void)_updateCurrentPlatterMode;
@end

