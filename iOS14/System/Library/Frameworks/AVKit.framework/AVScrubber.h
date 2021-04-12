/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UISlider.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <AVKit/AVExternalGestureRecognizerPreventing.h>
#import <AVKit/AVPlaybackControlsViewItem.h>

@protocol AVScrubberDelegate;
@class UISelectionFeedbackGenerator, UIView, NSMutableArray, AVLayoutItemAttributes, NSArray, UIScrollView, UIImageView, NSTimer, NSString;

@interface AVScrubber : UISlider <UIScrollViewDelegate, AVExternalGestureRecognizerPreventing, AVPlaybackControlsViewItem> {

	double _trackingStartTime;
	float _previousValue;
	double _previousValueChangeTime;
	double _currentValueChangedTime;
	BOOL _didHaveLessThanFullScrubbingSpeedSinceTrackingBegin;
	BOOL _collapsed;
	BOOL _included;
	BOOL _removed;
	BOOL _hasAlternateAppearance;
	BOOL _hasFullScreenAppearance;
	BOOL _scrollScrubbing;
	BOOL _slowKnobMovementDetected;
	BOOL _shouldRecoverFromPrecisionScrubbingIfNeeded;
	BOOL _scrubsWhenTappedAnywhere;
	BOOL _canChangeScrubbingSpeed;
	BOOL _hasChangedLocationAtLeastOnce;
	float _estimatedFrameRate;
	float _rate;
	UISelectionFeedbackGenerator* _feedbackGenerator;
	UIView* _loadedTrackOverlayView;
	NSMutableArray* _previousScrubberVelocities;
	AVLayoutItemAttributes* _layoutAttributes;
	id<AVScrubberDelegate> _delegate;
	NSArray* _loadedTimeRanges;
	long long _scrubbingSpeed;
	double _resolution;
	UIScrollView* _scrollView;
	UIImageView* _currentThumbView;
	NSTimer* _updateSlowKnobMovementDetectedTimer;
	double _timestampWhenTrackingEnded;
	CGSize _extrinsicContentSize;
	NSDirectionalEdgeInsets _hitRectInsets;

}

@property (nonatomic,retain) UIScrollView * scrollView;                                            //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,getter=isScrollScrubbing,nonatomic) BOOL scrollScrubbing;                        //@synthesize scrollScrubbing=_scrollScrubbing - In the implementation block
@property (assign,nonatomic) long long scrubbingSpeed;                                             //@synthesize scrubbingSpeed=_scrubbingSpeed - In the implementation block
@property (assign,nonatomic) double resolution;                                                    //@synthesize resolution=_resolution - In the implementation block
@property (assign,nonatomic) BOOL slowKnobMovementDetected;                                        //@synthesize slowKnobMovementDetected=_slowKnobMovementDetected - In the implementation block
@property (assign,nonatomic) BOOL shouldRecoverFromPrecisionScrubbingIfNeeded;                     //@synthesize shouldRecoverFromPrecisionScrubbingIfNeeded=_shouldRecoverFromPrecisionScrubbingIfNeeded - In the implementation block
@property (nonatomic,readonly) UIView * loadedTrackOverlayView;                                    //@synthesize loadedTrackOverlayView=_loadedTrackOverlayView - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * currentThumbView;                                //@synthesize currentThumbView=_currentThumbView - In the implementation block
@property (nonatomic,retain) NSMutableArray * previousScrubberVelocities;                          //@synthesize previousScrubberVelocities=_previousScrubberVelocities - In the implementation block
@property (nonatomic,retain) NSTimer * updateSlowKnobMovementDetectedTimer;                        //@synthesize updateSlowKnobMovementDetectedTimer=_updateSlowKnobMovementDetectedTimer - In the implementation block
@property (assign,nonatomic) double timestampWhenTrackingEnded;                                    //@synthesize timestampWhenTrackingEnded=_timestampWhenTrackingEnded - In the implementation block
@property (nonatomic,readonly) UISelectionFeedbackGenerator * feedbackGenerator;                   //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (assign,nonatomic) BOOL scrubsWhenTappedAnywhere;                                        //@synthesize scrubsWhenTappedAnywhere=_scrubsWhenTappedAnywhere - In the implementation block
@property (assign,nonatomic) BOOL canChangeScrubbingSpeed;                                         //@synthesize canChangeScrubbingSpeed=_canChangeScrubbingSpeed - In the implementation block
@property (assign,nonatomic) BOOL hasChangedLocationAtLeastOnce;                                   //@synthesize hasChangedLocationAtLeastOnce=_hasChangedLocationAtLeastOnce - In the implementation block
@property (assign,nonatomic,__weak) id<AVScrubberDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * loadedTimeRanges;                                             //@synthesize loadedTimeRanges=_loadedTimeRanges - In the implementation block
@property (nonatomic,readonly) NSString * localizedScrubbingSpeedName; 
@property (assign,nonatomic) float estimatedFrameRate;                                             //@synthesize estimatedFrameRate=_estimatedFrameRate - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets hitRectInsets;                                //@synthesize hitRectInsets=_hitRectInsets - In the implementation block
@property (nonatomic,readonly) double timeIntervalSinceTrackingEnded; 
@property (assign,nonatomic) float rate;                                                           //@synthesize rate=_rate - In the implementation block
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
+(id)keyPathsForValuesAffectingLocalizedScrubbingSpeedName;
-(BOOL)isCollapsed;
-(void)setRemoved:(BOOL)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setHasFullScreenAppearance:(BOOL)arg1 ;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(double)resolution;
-(BOOL)isRemoved;
-(CGSize)intrinsicContentSize;
-(AVLayoutItemAttributes *)layoutAttributes;
-(CGRect)hitRect;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSDirectionalEdgeInsets)hitRectInsets;
-(BOOL)avkit_shouldPreventExternalGestureRecognizerAtPoint:(CGPoint)arg1 ;
-(UIView *)loadedTrackOverlayView;
-(NSMutableArray *)previousScrubberVelocities;
-(float)clampedEstimatedFrameRate;
-(NSString *)localizedScrubbingSpeedName;
-(BOOL)isTracking;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(CGSize)extrinsicContentSize;
-(void)setCurrentThumbView:(UIImageView *)arg1 ;
-(double)timeIntervalSinceTrackingEnded;
-(void)endOrCancelTracking;
-(void)updateScrollViewContentSizeAndOffsetIfNeeded;
-(float)normalizedPosition;
-(double)normalizedScrollOffset;
-(float)valueFromScrollView;
-(CGPoint)contentOffsetFromValue;
-(BOOL)_shouldTrackTouchAtPoint:(CGPoint)arg1 ;
-(void)_updateSlowKnobMovementDetected;
-(void)_updateSlowKnobMovementDetectedForTargetValue:(float)arg1 ;
-(void)_updateLayoutItem;
-(void)setPreviousScrubberVelocities:(NSMutableArray *)arg1 ;
-(long long)scrubbingSpeed;
-(void)setScrubbingSpeed:(long long)arg1 ;
-(float)estimatedFrameRate;
-(void)setEstimatedFrameRate:(float)arg1 ;
-(BOOL)isScrollScrubbing;
-(void)setScrollScrubbing:(BOOL)arg1 ;
-(BOOL)isIncluded;
-(BOOL)slowKnobMovementDetected;
-(void)setSlowKnobMovementDetected:(BOOL)arg1 ;
-(BOOL)shouldRecoverFromPrecisionScrubbingIfNeeded;
-(void)setShouldRecoverFromPrecisionScrubbingIfNeeded:(BOOL)arg1 ;
-(UIImageView *)currentThumbView;
-(NSTimer *)updateSlowKnobMovementDetectedTimer;
-(void)setUpdateSlowKnobMovementDetectedTimer:(NSTimer *)arg1 ;
-(double)timestampWhenTrackingEnded;
-(void)setTimestampWhenTrackingEnded:(double)arg1 ;
-(BOOL)scrubsWhenTappedAnywhere;
-(void)setScrubsWhenTappedAnywhere:(BOOL)arg1 ;
-(BOOL)canChangeScrubbingSpeed;
-(void)setCanChangeScrubbingSpeed:(BOOL)arg1 ;
-(BOOL)hasChangedLocationAtLeastOnce;
-(void)setHasChangedLocationAtLeastOnce:(BOOL)arg1 ;
-(NSArray *)loadedTimeRanges;
-(id<AVScrubberDelegate>)delegate;
-(UIEdgeInsets)alignmentRectInsets;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(CGRect)minimumValueImageRectForBounds:(CGRect)arg1 ;
-(void)setHitRectInsets:(NSDirectionalEdgeInsets)arg1 ;
-(void)layoutAttributesDidChange;
-(void)setLoadedTimeRanges:(NSArray *)arg1 ;
-(void)setRate:(float)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UISelectionFeedbackGenerator *)feedbackGenerator;
-(void)setHasAlternateAppearance:(BOOL)arg1 ;
-(void)setValue:(float)arg1 ;
-(void)setDelegate:(id<AVScrubberDelegate>)arg1 ;
-(void)layoutSubviews;
-(float)rate;
-(CGRect)maximumValueImageRectForBounds:(CGRect)arg1 ;
-(void)setIncluded:(BOOL)arg1 ;
-(BOOL)hasAlternateAppearance;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(void)setExtrinsicContentSize:(CGSize)arg1 ;
-(void)setCollapsed:(BOOL)arg1 ;
-(id)createThumbView;
-(BOOL)isCollapsedOrExcluded;
-(float)duration;
-(UIScrollView *)scrollView;
-(BOOL)hasFullScreenAppearance;
-(void)setResolution:(double)arg1 ;
@end

