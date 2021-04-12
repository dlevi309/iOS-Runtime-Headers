/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIControl.h>
#import <AVKit/AVExternalGestureRecognizerPreventing.h>
#import <AVKit/AVPlaybackControlsViewItem.h>

@class UISelectionFeedbackGenerator, AVLayoutItemAttributes, NSString, UIViewPropertyAnimator, AVMicaPackage, UIImageView, UIView, NSTimer;

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
	AVLayoutItemAttributes* _layoutAttributes;
	NSString* _micaPackageStateName;
	UIViewPropertyAnimator* _highlightAnimator;
	AVMicaPackage* _micaPackage;
	UIImageView* _imageView;
	UIView* _micaPackageContainerView;
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
@property (nonatomic,retain) UIView * micaPackageContainerView;                                    //@synthesize micaPackageContainerView=_micaPackageContainerView - In the implementation block
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
@property (nonatomic,readonly) AVLayoutItemAttributes * layoutAttributes;                          //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
-(BOOL)isCollapsed;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setRemoved:(BOOL)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setHasFullScreenAppearance:(BOOL)arg1 ;
-(BOOL)isRemoved;
-(CGSize)intrinsicContentSize;
-(AVLayoutItemAttributes *)layoutAttributes;
-(CGRect)hitRect;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSDirectionalEdgeInsets)hitRectInsets;
-(BOOL)avkit_shouldPreventExternalGestureRecognizerAtPoint:(CGPoint)arg1 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(CGSize)extrinsicContentSize;
-(void)_updateLayoutItem;
-(BOOL)isIncluded;
-(UIImageView *)imageView;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(AVMicaPackage *)micaPackage;
-(void)setHitRectInsets:(NSDirectionalEdgeInsets)arg1 ;
-(void)layoutAttributesDidChange;
-(void)setMicaPackage:(AVMicaPackage *)arg1 ;
-(void)setMicaPackageStateName:(NSString *)arg1 ;
-(id)imageNameForMicaPackageState;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)triggerSelectionChangedFeedback;
-(void)setShowsHighlightedAppearance:(BOOL)arg1 ;
-(void)setNeedsUpdateGlyphRenderingMode;
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
-(UIView *)micaPackageContainerView;
-(void)setMicaPackageContainerView:(UIView *)arg1 ;
-(NSTimer *)longPressTimer;
-(UISelectionFeedbackGenerator *)feedbackGenerator;
-(CGPoint)initialPreciseLocationOfTouch;
-(void)setInitialPreciseLocationOfTouch:(CGPoint)arg1 ;
-(void)setLongPressTimer:(NSTimer *)arg1 ;
-(BOOL)showsHighlightedAppearance;
-(void)setBounds:(CGRect)arg1 ;
-(void)setHasAlternateAppearance:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setIncluded:(BOOL)arg1 ;
-(CGSize)minimumSize;
-(BOOL)hasAlternateAppearance;
-(long long)trackingState;
-(void)setTrackingState:(long long)arg1 ;
-(void)setExtrinsicContentSize:(CGSize)arg1 ;
-(void)setCollapsed:(BOOL)arg1 ;
-(BOOL)isCollapsedOrExcluded;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)hasFullScreenAppearance;
-(BOOL)isLongPressEnabled;
@end

