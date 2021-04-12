/*
* Generated on Monday, March 1, 2021 at 2:31:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIButton.h>
#import <AVKit/AVPlaybackControlsViewItem.h>

@class NSString, AVMicaPackage, UIViewPropertyAnimator, NSNumber, NSTimer, AVUserInteractionObserverGestureRecognizer, UIVisualEffectView;

@interface AVButton : UIButton <AVPlaybackControlsViewItem> {

	BOOL _collapsed;
	BOOL _included;
	BOOL _removed;
	BOOL _hasFullScreenAppearance;
	BOOL _hasAlternateAppearance;
	BOOL _wasLongPressed;
	BOOL _treatsForcePressAsLongPress;
	BOOL _usesBackgroundEffectViewForTextOnlyButtons;
	BOOL _multipleTouchesEndsTracking;
	BOOL _disablesHighlightWhenLongPressed;
	BOOL _clampsHitRectInsetsWhenContainedInScrollableView;
	BOOL _wasForcePressTriggered;
	long long _tintEffectStyle;
	double _forceThreshold;
	double _force;
	double _maximumForceSinceTrackingBegan;
	NSString* _imageName;
	NSString* _fullScreenImageName;
	NSString* _inlineImageName;
	NSString* _fullScreenAlternateImageName;
	NSString* _inlineAlternateImageName;
	AVMicaPackage* _micaPackage;
	double _micaSnapshotAlpha;
	UIViewPropertyAnimator* _highlightAnimator;
	double _trackingStartTime;
	double _horizontalTranslationOfLongPress;
	NSNumber* _previousHorizontalPositionOfLongPress;
	NSTimer* _longPressTimer;
	AVUserInteractionObserverGestureRecognizer* _userInteractionGestureRecognizer;
	UIVisualEffectView* _backgroundEffectView;
	CGSize _extrinsicContentSize;
	NSDirectionalEdgeInsets _hitRectInsets;

}

@property (assign,nonatomic,__weak) UIViewPropertyAnimator * highlightAnimator;                                          //@synthesize highlightAnimator=_highlightAnimator - In the implementation block
@property (assign,nonatomic) double trackingStartTime;                                                                   //@synthesize trackingStartTime=_trackingStartTime - In the implementation block
@property (assign,nonatomic) BOOL wasLongPressed;                                                                        //@synthesize wasLongPressed=_wasLongPressed - In the implementation block
@property (assign,nonatomic) BOOL wasForcePressTriggered;                                                                //@synthesize wasForcePressTriggered=_wasForcePressTriggered - In the implementation block
@property (assign,nonatomic) double horizontalTranslationOfLongPress;                                                    //@synthesize horizontalTranslationOfLongPress=_horizontalTranslationOfLongPress - In the implementation block
@property (nonatomic,retain) NSNumber * previousHorizontalPositionOfLongPress;                                           //@synthesize previousHorizontalPositionOfLongPress=_previousHorizontalPositionOfLongPress - In the implementation block
@property (assign,nonatomic) double force;                                                                               //@synthesize force=_force - In the implementation block
@property (assign,nonatomic) double maximumForceSinceTrackingBegan;                                                      //@synthesize maximumForceSinceTrackingBegan=_maximumForceSinceTrackingBegan - In the implementation block
@property (assign,nonatomic,__weak) NSTimer * longPressTimer;                                                            //@synthesize longPressTimer=_longPressTimer - In the implementation block
@property (nonatomic,retain) AVUserInteractionObserverGestureRecognizer * userInteractionGestureRecognizer;              //@synthesize userInteractionGestureRecognizer=_userInteractionGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backgroundEffectView;                                                  //@synthesize backgroundEffectView=_backgroundEffectView - In the implementation block
@property (assign,nonatomic) BOOL treatsForcePressAsLongPress;                                                           //@synthesize treatsForcePressAsLongPress=_treatsForcePressAsLongPress - In the implementation block
@property (assign,nonatomic) long long tintEffectStyle;                                                                  //@synthesize tintEffectStyle=_tintEffectStyle - In the implementation block
@property (assign,nonatomic) BOOL usesBackgroundEffectViewForTextOnlyButtons;                                            //@synthesize usesBackgroundEffectViewForTextOnlyButtons=_usesBackgroundEffectViewForTextOnlyButtons - In the implementation block
@property (assign,nonatomic) double forceThreshold;                                                                      //@synthesize forceThreshold=_forceThreshold - In the implementation block
@property (assign,nonatomic) BOOL multipleTouchesEndsTracking;                                                           //@synthesize multipleTouchesEndsTracking=_multipleTouchesEndsTracking - In the implementation block
@property (nonatomic,copy) NSString * imageName;                                                                         //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,copy) NSString * fullScreenImageName;                                                               //@synthesize fullScreenImageName=_fullScreenImageName - In the implementation block
@property (nonatomic,copy) NSString * inlineImageName;                                                                   //@synthesize inlineImageName=_inlineImageName - In the implementation block
@property (nonatomic,copy) NSString * fullScreenAlternateImageName;                                                      //@synthesize fullScreenAlternateImageName=_fullScreenAlternateImageName - In the implementation block
@property (nonatomic,copy) NSString * inlineAlternateImageName;                                                          //@synthesize inlineAlternateImageName=_inlineAlternateImageName - In the implementation block
@property (nonatomic,retain) AVMicaPackage * micaPackage;                                                                //@synthesize micaPackage=_micaPackage - In the implementation block
@property (assign,nonatomic) double micaSnapshotAlpha;                                                                   //@synthesize micaSnapshotAlpha=_micaSnapshotAlpha - In the implementation block
@property (assign,nonatomic) BOOL disablesHighlightWhenLongPressed;                                                      //@synthesize disablesHighlightWhenLongPressed=_disablesHighlightWhenLongPressed - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets hitRectInsets;                                                      //@synthesize hitRectInsets=_hitRectInsets - In the implementation block
@property (assign,nonatomic) BOOL clampsHitRectInsetsWhenContainedInScrollableView;                                      //@synthesize clampsHitRectInsetsWhenContainedInScrollableView=_clampsHitRectInsetsWhenContainedInScrollableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGSize extrinsicContentSize;                                                                //@synthesize extrinsicContentSize=_extrinsicContentSize - In the implementation block
@property (assign,getter=isRemoved,nonatomic) BOOL removed;                                                              //@synthesize removed=_removed - In the implementation block
@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed;                                                          //@synthesize collapsed=_collapsed - In the implementation block
@property (assign,getter=isIncluded,nonatomic) BOOL included;                                                            //@synthesize included=_included - In the implementation block
@property (getter=isCollapsedOrExcluded,nonatomic,readonly) BOOL collapsedOrExcluded; 
@property (assign,nonatomic) BOOL hasAlternateAppearance;                                                                //@synthesize hasAlternateAppearance=_hasAlternateAppearance - In the implementation block
@property (assign,nonatomic) BOOL hasFullScreenAppearance;                                                               //@synthesize hasFullScreenAppearance=_hasFullScreenAppearance - In the implementation block
+(id)buttonWithAccessibilityIdentifier:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(BOOL)isCollapsed;
-(void)setCollapsed:(BOOL)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)hitRect;
-(double)force;
-(void)setForce:(double)arg1 ;
-(void)setImageName:(NSString *)arg1 ;
-(NSString *)imageName;
-(UIVisualEffectView *)backgroundEffectView;
-(void)setBackgroundEffectView:(UIVisualEffectView *)arg1 ;
-(void)setExtrinsicContentSize:(CGSize)arg1 ;
-(CGSize)extrinsicContentSize;
-(NSDirectionalEdgeInsets)hitRectInsets;
-(void)setHitRectInsets:(NSDirectionalEdgeInsets)arg1 ;
-(BOOL)isRemoved;
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
-(UIViewPropertyAnimator *)highlightAnimator;
-(void)setHighlightAnimator:(UIViewPropertyAnimator *)arg1 ;
-(AVMicaPackage *)micaPackage;
-(NSTimer *)longPressTimer;
-(void)setLongPressTimer:(NSTimer *)arg1 ;
-(void)setWasLongPressed:(BOOL)arg1 ;
-(void)setMultipleTouchesEndsTracking:(BOOL)arg1 ;
-(void)setUsesBackgroundEffectViewForTextOnlyButtons:(BOOL)arg1 ;
-(void)setTintEffectStyle:(long long)arg1 ;
-(CGSize)_preferredLayoutSize;
-(void)_handleUserInteractionGestureRecognizer:(id)arg1 ;
-(void)_resetTrackedState;
-(void)_updateImageIfNeeded;
-(void)_updateEdgeInsets;
-(void)_updateBackgroundEffectViewIsHidden;
-(id)_preferredImageName;
-(double)_imageViewAlpha;
-(BOOL)wasLongPressed;
-(BOOL)treatsForcePressAsLongPress;
-(void)setTreatsForcePressAsLongPress:(BOOL)arg1 ;
-(long long)tintEffectStyle;
-(BOOL)usesBackgroundEffectViewForTextOnlyButtons;
-(double)forceThreshold;
-(void)setForceThreshold:(double)arg1 ;
-(double)maximumForceSinceTrackingBegan;
-(void)setMaximumForceSinceTrackingBegan:(double)arg1 ;
-(BOOL)multipleTouchesEndsTracking;
-(NSString *)fullScreenImageName;
-(void)setFullScreenImageName:(NSString *)arg1 ;
-(NSString *)inlineImageName;
-(void)setInlineImageName:(NSString *)arg1 ;
-(NSString *)fullScreenAlternateImageName;
-(void)setFullScreenAlternateImageName:(NSString *)arg1 ;
-(NSString *)inlineAlternateImageName;
-(void)setInlineAlternateImageName:(NSString *)arg1 ;
-(double)micaSnapshotAlpha;
-(void)setMicaSnapshotAlpha:(double)arg1 ;
-(BOOL)disablesHighlightWhenLongPressed;
-(void)setDisablesHighlightWhenLongPressed:(BOOL)arg1 ;
-(BOOL)clampsHitRectInsetsWhenContainedInScrollableView;
-(void)setClampsHitRectInsetsWhenContainedInScrollableView:(BOOL)arg1 ;
-(double)trackingStartTime;
-(void)setTrackingStartTime:(double)arg1 ;
-(BOOL)wasForcePressTriggered;
-(void)setWasForcePressTriggered:(BOOL)arg1 ;
-(double)horizontalTranslationOfLongPress;
-(void)setHorizontalTranslationOfLongPress:(double)arg1 ;
-(NSNumber *)previousHorizontalPositionOfLongPress;
-(void)setPreviousHorizontalPositionOfLongPress:(NSNumber *)arg1 ;
-(AVUserInteractionObserverGestureRecognizer *)userInteractionGestureRecognizer;
-(void)setUserInteractionGestureRecognizer:(AVUserInteractionObserverGestureRecognizer *)arg1 ;
@end

