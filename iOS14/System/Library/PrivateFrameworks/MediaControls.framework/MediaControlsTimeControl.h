/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_MR1 _durationSnapshot;

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
@property (assign,nonatomic) SCD_Struct_MR1 durationSnapshot;                                    //@synthesize durationSnapshot=_durationSnapshot - In the implementation block
@property (assign,getter=isTimeControlOnScreen,nonatomic) BOOL timeControlOnScreen;              //@synthesize timeControlOnScreen=_timeControlOnScreen - In the implementation block
@property (nonatomic,retain) MTVisualStylingProvider * visualStylingProvider;                    //@synthesize visualStylingProvider=_visualStylingProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MTVisualStylingProvider *)visualStylingProvider;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setVisualStylingProvider:(MTVisualStylingProvider *)arg1 ;
-(void)_updateStyle;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLiveBackground:(UIView *)arg1 ;
-(void)providedStylesDidChangeForProvider:(id)arg1 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setDurationSnapshot:(SCD_Struct_MR1)arg1 ;
-(void)setElapsedTrack:(UIView *)arg1 ;
-(UIView *)elapsedTrack;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)isCurrentlyTracking;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setLiveBackgroundMask:(CAGradientLayer *)arg1 ;
-(BOOL)isTimeControlOnScreen;
-(UILayoutGuide *)trackLayoutGuide;
-(void)setRemainingTrack:(UIView *)arg1 ;
-(void)setTrackLayoutGuide:(UILayoutGuide *)arg1 ;
-(void)setResponseItem:(MPCPlayerResponseItem *)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UILabel *)remainingTimeLabel;
-(void)_updateDisplayLinkPause;
-(void)_updateTimeControl;
-(UIView *)remainingTrack;
-(void)setLiveLabel:(UILabel *)arg1 ;
-(void)_updateLabels:(double)arg1 withRemainingDuration:(double)arg2 ;
-(void)setTransitioning:(BOOL)arg1 ;
-(void)_updateLabels:(SCD_Struct_MR1)arg1 withTargetTimestamp:(double)arg2 ;
-(void)updateBackgroundMask;
-(UILabel *)elapsedTimeLabel;
-(void)layoutSubviews;
-(void)_updateSliderPosition;
-(UILabel *)liveLabel;
-(MPCPlayerResponse *)response;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)createDisplayLinkIfNeeded;
-(void)setResponse:(MPCPlayerResponse *)arg1 ;
-(void)setRemainingTimeLabel:(UILabel *)arg1 ;
-(void)setCurrentlyTracking:(BOOL)arg1 ;
-(MPCPlayerResponseItem *)responseItem;
-(void)setElapsedTimeLabel:(UILabel *)arg1 ;
-(void)updateSliderConstraint;
-(BOOL)isTransitioning;
-(void)invalidateDisplayLinkIfNeeded;
-(void)viewDidMoveToSuperview;
-(void)updateLabelAvoidance;
-(UIView *)knobView;
-(void)setStyle:(long long)arg1 ;
-(void)setKnobView:(UIView *)arg1 ;
-(BOOL)isEmpty;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(CAGradientLayer *)liveBackgroundMask;
-(void)setTimeControlOnScreen:(BOOL)arg1 ;
-(double)sliderValue;
-(void)_displayLinkTick:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(SCD_Struct_MR1)durationSnapshot;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setSliderValue:(double)arg1 ;
-(UIView *)liveBackground;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(long long)style;
-(void)setEmpty:(BOOL)arg1 ;
@end

