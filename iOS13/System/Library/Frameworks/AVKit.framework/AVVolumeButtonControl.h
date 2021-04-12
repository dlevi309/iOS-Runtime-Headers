/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIControl.h>
#import <AVKit/AVExternalGestureRecognizerPreventing.h>
#import <AVKit/AVPlaybackControlsViewItem.h>

@class UISelectionFeedbackGenerator, NSString, UIViewPropertyAnimator, AVMicaPackage, UIImageView, NSTimer;

@interface AVVolumeButtonControl : UIControl <AVExternalGestureRecognizerPreventing, AVPlaybackControlsViewItem> {

	long long _trackingState;
	BOOL _included;
	BOOL _collapsed;
	BOOL _hasAlternateAppearance;
	BOOL _hasFullScreenAppearance;
	BOOL _removed;
	BOOL _longPressEnabled;
	BOOL _showsHighlightedAppearance;
	UISelectionFeedbackGenerator* _feedbackGenerator;
	NSString* _micaPackageStateName;
	UIViewPropertyAnimator* _highlightAnimator;
	AVMicaPackage* _micaPackage;
	UIImageView* _imageView;
	NSTimer* _longPressTimer;
	CGSize _extrinsicContentSize;
	CGPoint _translationOfPanFromPreviousTouch;
	CGPoint _cumulativeTranslationSincePanningBegan;
	CGPoint _locationOfTouchInWindow;
	CGPoint _initialPreciseLocationOfTouch;
	NSDirectionalEdgeInsets _hitRectInsets;

}

@property (assign,nonatomic,__weak) UIViewPropertyAnimator * highlightAnimator;                    //@synthesize highlightAnimator=_highlightAnimator - In the implementation block
@property (nonatomic,readonly) UISelectionFeedbackGenerator * feedbackGenerator;                   //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (nonatomic,retain) AVMicaPackage * micaPackage;                                          //@synthesize micaPackage=_micaPackage - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                              //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) CGPoint initialPreciseLocationOfTouch;                                //@synthesize initialPreciseLocationOfTouch=_initialPreciseLocationOfTouch - In the implementation block
@property (assign,nonatomic,__weak) NSTimer * longPressTimer;                                      //@synthesize longPressTimer=_longPressTimer - In the implementation block
@property (assign,nonatomic) long long trackingState;                                              //@synthesize trackingState=_trackingState - In the implementation block
@property (assign,nonatomic) BOOL showsHighlightedAppearance;                                      //@synthesize showsHighlightedAppearance=_showsHighlightedAppearance - In the implementation block
@property (nonatomic,retain) NSString * micaPackageStateName;                                      //@synthesize micaPackageStateName=_micaPackageStateName - In the implementation block
@property (assign,getter=isLongPressEnabled,nonatomic) BOOL longPressEnabled;                      //@synthesize longPressEnabled=_longPressEnabled - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets hitRectInsets;                                //@synthesize hitRectInsets=_hitRectInsets - In the implementation block
@property (assign,nonatomic) CGPoint translationOfPanFromPreviousTouch;                            //@synthesize translationOfPanFromPreviousTouch=_translationOfPanFromPreviousTouch - In the implementation block
@property (assign,nonatomic) CGPoint cumulativeTranslationSincePanningBegan;                       //@synthesize cumulativeTranslationSincePanningBegan=_cumulativeTranslationSincePanningBegan - In the implementation block
@property (assign,nonatomic) CGPoint locationOfTouchInWindow;                                      //@synthesize locationOfTouchInWindow=_locationOfTouchInWindow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGSize extrinsicContentSize;                                          //@synthesize extrinsicContentSize=_extrinsicContentSize - In the implementation block
@property (assign,getter=isRemoved,nonatomic) BOOL removed;                                        //@synthesize removed=_removed - In the implementation block
@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed;                                    //@synthesize collapsed=_collapsed - In the implementation block
@property (assign,getter=isIncluded,nonatomic) BOOL included;                                      //@synthesize included=_included - In the implementation block
@property (getter=isCollapsedOrExcluded,nonatomic,readonly) BOOL collapsedOrExcluded; 
@property (assign,nonatomic) BOOL hasAlternateAppearance;                                          //@synthesize hasAlternateAppearance=_hasAlternateAppearance - In the implementation block
@property (assign,nonatomic) BOOL hasFullScreenAppearance;                                         //@synthesize hasFullScreenAppearance=_hasFullScreenAppearance - In the implementation block
-(void)setBounds:(CGRect)arg1 ;
-(long long)trackingState;
-(void)setTrackingState:(long long)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(UIImageView *)imageView;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UISelectionFeedbackGenerator *)feedbackGenerator;
-(BOOL)isCollapsed;
-(void)setCollapsed:(BOOL)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)hitRect;
-(void)setImageView:(UIImageView *)arg1 ;
-(BOOL)isLongPressEnabled;
-(void)setExtrinsicContentSize:(CGSize)arg1 ;
-(CGSize)extrinsicContentSize;
-(NSDirectionalEdgeInsets)hitRectInsets;
-(void)setHitRectInsets:(NSDirectionalEdgeInsets)arg1 ;
-(BOOL)isRemoved;
-(BOOL)avkit_shouldPreventExternalGestureRecognizerAtPoint:(CGPoint)arg1 ;
-(BOOL)isCollapsedOrExcluded;
-(void)setIncluded:(BOOL)arg1 ;
-(void)setRemoved:(BOOL)arg1 ;
-(BOOL)isIncluded;
-(BOOL)hasAlternateAppearance;
-(void)setHasAlternateAppearance:(BOOL)arg1 ;
-(BOOL)hasFullScreenAppearance;
-(void)setHasFullScreenAppearance:(BOOL)arg1 ;
-(void)_updateIsHiddenAndAlpha;
-(void)setMicaPackage:(AVMicaPackage *)arg1 ;
-(void)setMicaPackageStateName:(NSString *)arg1 ;
-(void)triggerSelectionChangedFeedback;
-(void)setShowsHighlightedAppearance:(BOOL)arg1 ;
-(void)setNeedsUpdateGlyphRenderingMode;
-(id)imageNameForMicaPackageState;
-(void)_updateMicaPackage:(id)arg1 ;
-(NSString *)micaPackageStateName;
-(void)setLongPressEnabled:(BOOL)arg1 ;
-(CGPoint)translationOfPanFromPreviousTouch;
-(void)setTranslationOfPanFromPreviousTouch:(CGPoint)arg1 ;
-(CGPoint)cumulativeTranslationSincePanningBegan;
-(void)setCumulativeTranslationSincePanningBegan:(CGPoint)arg1 ;
-(CGPoint)locationOfTouchInWindow;
-(void)setLocationOfTouchInWindow:(CGPoint)arg1 ;
-(UIViewPropertyAnimator *)highlightAnimator;
-(void)setHighlightAnimator:(UIViewPropertyAnimator *)arg1 ;
-(AVMicaPackage *)micaPackage;
-(CGPoint)initialPreciseLocationOfTouch;
-(void)setInitialPreciseLocationOfTouch:(CGPoint)arg1 ;
-(NSTimer *)longPressTimer;
-(void)setLongPressTimer:(NSTimer *)arg1 ;
-(BOOL)showsHighlightedAppearance;
@end

