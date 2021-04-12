/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/MTVisualStylingProviderObservingPrivate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSArray, NSLayoutConstraint, CADisplayLink, AVTimeFormatter, NSString, MPCPlayerResponse, MPCPlayerResponseItem, MTVisualStylingProvider, UIView, UILabel, CAGradientLayer, UILayoutGuide;

@interface MediaControlsTimeControl : UIControl <MTVisualStylingProviderObservingPrivate, UIGestureRecognizerDelegate> {

	NSArray* _defaultConstraints;
	NSArray* _trackingConstraints;
	NSArray* _initialConstraints;
	NSLayoutConstraint* _knobViewXConstraint;
	CADisplayLink* _displayLink;
	AVTimeFormatter* _elapsedTimeFormatter;
	AVTimeFormatter* _remainingTimeFormatter;
	double _lastRecordedTime;
	double _currentTimeInTrack;
	NSString* _elapsedTime;
	NSString* _remainingTime;
	BOOL _debugPreviousDisplayLinkPaused;
	BOOL _transitioning;
	BOOL _empty;
	BOOL _timeControlOnScreen;
	BOOL _currentlyTracking;
	long long _style;
	MPCPlayerResponse* _response;
	MPCPlayerResponseItem* _responseItem;
	MTVisualStylingProvider* _visualStylingProvider;
	UIView* _elapsedTrack;
	UIView* _remainingTrack;
	UIView* _knobView;
	UILabel* _elapsedTimeLabel;
	UILabel* _remainingTimeLabel;
	UILabel* _liveLabel;
	UIView* _liveBackground;
	CAGradientLayer* _liveBackgroundMask;
	UILayoutGuide* _trackLayoutGuide;
	double _sliderValue;
	SCD_Struct_Me0 _durationSnapshot;

}

@property (nonatomic,retain) UIView * elapsedTrack;                                              //@synthesize elapsedTrack=_elapsedTrack - In the implementation block
@property (nonatomic,retain) UIView * remainingTrack;                                            //@synthesize remainingTrack=_remainingTrack - In the implementation block
@property (nonatomic,retain) UIView * knobView;                                                  //@synthesize knobView=_knobView - In the implementation block
@property (nonatomic,retain) UILabel * elapsedTimeLabel;                                         //@synthesize elapsedTimeLabel=_elapsedTimeLabel - In the implementation block
@property (nonatomic,retain) UILabel * remainingTimeLabel;                                       //@synthesize remainingTimeLabel=_remainingTimeLabel - In the implementation block
@property (nonatomic,retain) UILabel * liveLabel;                                                //@synthesize liveLabel=_liveLabel - In the implementation block
@property (nonatomic,retain) UIView * liveBackground;                                            //@synthesize liveBackground=_liveBackground - In the implementation block
@property (nonatomic,retain) CAGradientLayer * liveBackgroundMask;                               //@synthesize liveBackgroundMask=_liveBackgroundMask - In the implementation block
@property (nonatomic,retain) UILayoutGuide * trackLayoutGuide;                                   //@synthesize trackLayoutGuide=_trackLayoutGuide - In the implementation block
@property (assign,nonatomic) double sliderValue;                                                 //@synthesize sliderValue=_sliderValue - In the implementation block
@property (assign,getter=isCurrentlyTracking,nonatomic) BOOL currentlyTracking;                  //@synthesize currentlyTracking=_currentlyTracking - In the implementation block
@property (assign,getter=isTransitioning,nonatomic) BOOL transitioning;                          //@synthesize transitioning=_transitioning - In the implementation block
@property (assign,getter=isEmpty,nonatomic) BOOL empty;                                          //@synthesize empty=_empty - In the implementation block
@property (assign,nonatomic) long long style;                                                    //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) MPCPlayerResponse * response;                                       //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) MPCPlayerResponseItem * responseItem;                               //@synthesize responseItem=_responseItem - In the implementation block
@property (assign,nonatomic) SCD_Struct_Me0 durationSnapshot;                                    //@synthesize durationSnapshot=_durationSnapshot - In the implementation block
@property (assign,getter=isTimeControlOnScreen,nonatomic) BOOL timeControlOnScreen;              //@synthesize timeControlOnScreen=_timeControlOnScreen - In the implementation block
@property (nonatomic,retain) MTVisualStylingProvider * visualStylingProvider;                    //@synthesize visualStylingProvider=_visualStylingProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEmpty;
-(void)setEnabled:(BOOL)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(MPCPlayerResponse *)response;
-(void)setResponse:(MPCPlayerResponse *)arg1 ;
-(void)setEmpty:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)tintColorDidChange;
-(void)_updateStyle;
-(void)setTransitioning:(BOOL)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_displayLinkTick:(id)arg1 ;
-(BOOL)isTransitioning;
-(UIView *)knobView;
-(void)setKnobView:(UIView *)arg1 ;
-(void)viewDidMoveToSuperview;
-(UILayoutGuide *)trackLayoutGuide;
-(UILabel *)elapsedTimeLabel;
-(void)providedStylesDidChangeForProvider:(id)arg1 ;
-(void)setElapsedTimeLabel:(UILabel *)arg1 ;
-(void)setRemainingTimeLabel:(UILabel *)arg1 ;
-(UILabel *)remainingTimeLabel;
-(MTVisualStylingProvider *)visualStylingProvider;
-(void)setVisualStylingProvider:(MTVisualStylingProvider *)arg1 ;
-(MPCPlayerResponseItem *)responseItem;
-(void)setResponseItem:(MPCPlayerResponseItem *)arg1 ;
-(void)setTimeControlOnScreen:(BOOL)arg1 ;
-(BOOL)isTimeControlOnScreen;
-(UIView *)elapsedTrack;
-(UIView *)remainingTrack;
-(UILabel *)liveLabel;
-(UIView *)liveBackground;
-(CAGradientLayer *)liveBackgroundMask;
-(void)_updateTimeControl;
-(void)updateSliderConstraint;
-(SCD_Struct_Me0)durationSnapshot;
-(void)updateBackgroundMask;
-(void)_updateSliderPosition;
-(void)_updateLabels:(double)arg1 withRemainingDuration:(double)arg2 ;
-(void)_updateDisplayLinkPause;
-(void)updateLabelAvoidance;
-(double)sliderValue;
-(void)setDurationSnapshot:(SCD_Struct_Me0)arg1 ;
-(void)setSliderValue:(double)arg1 ;
-(BOOL)isCurrentlyTracking;
-(void)createDisplayLinkIfNeeded;
-(void)invalidateDisplayLinkIfNeeded;
-(void)_updateLabels:(SCD_Struct_Me0)arg1 withTargetTimestamp:(double)arg2 ;
-(void)setElapsedTrack:(UIView *)arg1 ;
-(void)setRemainingTrack:(UIView *)arg1 ;
-(void)setLiveLabel:(UILabel *)arg1 ;
-(void)setLiveBackground:(UIView *)arg1 ;
-(void)setLiveBackgroundMask:(CAGradientLayer *)arg1 ;
-(void)setTrackLayoutGuide:(UILayoutGuide *)arg1 ;
-(void)setCurrentlyTracking:(BOOL)arg1 ;
@end

