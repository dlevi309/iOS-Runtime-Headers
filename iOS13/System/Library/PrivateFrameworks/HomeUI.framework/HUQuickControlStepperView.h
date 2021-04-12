/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/HUQuickControlInteractiveView.h>

@protocol HUQuickControlViewInteractionDelegate;
@class HUQuickControlStepperViewProfile, UIView, NSArray, NSNumber, UILongPressGestureRecognizer, UIImpactFeedbackGenerator, NSString;

@interface HUQuickControlStepperView : UIView <UIGestureRecognizerDelegate, HUQuickControlInteractiveView> {

	BOOL _userInteractionActive;
	id<HUQuickControlViewInteractionDelegate> _interactionDelegate;
	HUQuickControlStepperViewProfile* _profile;
	unsigned long long _reachabilityState;
	UIView* _backgroundView;
	NSArray* _segmentViews;
	NSArray* _separatorViews;
	NSNumber* _selectedSegmentIndex;
	UILongPressGestureRecognizer* _gestureRecognizer;
	double _accumulatedTouchDistance;
	NSNumber* _trackingSegmentIndex;
	NSArray* _constraints;
	UIImpactFeedbackGenerator* _feedbackGenerator;
	CGPoint _lastTouchLocation;

}

@property (nonatomic,retain) UIView * backgroundView;                                                           //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) NSArray * segmentViews;                                                            //@synthesize segmentViews=_segmentViews - In the implementation block
@property (nonatomic,retain) NSArray * separatorViews;                                                          //@synthesize separatorViews=_separatorViews - In the implementation block
@property (nonatomic,retain) NSNumber * selectedSegmentIndex;                                                   //@synthesize selectedSegmentIndex=_selectedSegmentIndex - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * gestureRecognizer;                                  //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (assign,nonatomic) CGPoint lastTouchLocation;                                                         //@synthesize lastTouchLocation=_lastTouchLocation - In the implementation block
@property (assign,nonatomic) double accumulatedTouchDistance;                                                   //@synthesize accumulatedTouchDistance=_accumulatedTouchDistance - In the implementation block
@property (assign,getter=isUserInteractionActive,nonatomic) BOOL userInteractionActive;                         //@synthesize userInteractionActive=_userInteractionActive - In the implementation block
@property (nonatomic,retain) NSNumber * trackingSegmentIndex;                                                   //@synthesize trackingSegmentIndex=_trackingSegmentIndex - In the implementation block
@property (nonatomic,retain) NSArray * constraints;                                                             //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,retain) UIImpactFeedbackGenerator * feedbackGenerator;                                     //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (nonatomic,copy) HUQuickControlStepperViewProfile * profile;                                          //@synthesize profile=_profile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id value; 
@property (nonatomic,retain) id secondaryValue; 
@property (assign,nonatomic) unsigned long long reachabilityState;                                              //@synthesize reachabilityState=_reachabilityState - In the implementation block
@property (assign,nonatomic,__weak) id<HUQuickControlViewInteractionDelegate> interactionDelegate;              //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
-(NSArray *)constraints;
-(id)value;
-(void)setValue:(id)arg1 ;
-(HUQuickControlStepperViewProfile *)profile;
-(void)setProfile:(HUQuickControlStepperViewProfile *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)setInteractionDelegate:(id<HUQuickControlViewInteractionDelegate>)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIView *)backgroundView;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)tintColorDidChange;
-(void)setFeedbackGenerator:(UIImpactFeedbackGenerator *)arg1 ;
-(UIImpactFeedbackGenerator *)feedbackGenerator;
-(void)setBackgroundView:(UIView *)arg1 ;
-(NSNumber *)selectedSegmentIndex;
-(void)setSelectedSegmentIndex:(NSNumber *)arg1 ;
-(void)setGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)gestureRecognizer;
-(void)setConstraints:(NSArray *)arg1 ;
-(id<HUQuickControlViewInteractionDelegate>)interactionDelegate;
-(void)_handleGesture:(id)arg1 ;
-(void)setLastTouchLocation:(CGPoint)arg1 ;
-(CGPoint)lastTouchLocation;
-(NSArray *)separatorViews;
-(void)setSeparatorViews:(NSArray *)arg1 ;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1 ;
-(id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1 ;
-(void)setUserInteractionActive:(BOOL)arg1 ;
-(unsigned long long)reachabilityState;
-(void)_updateUIForReachabilityState:(unsigned long long)arg1 ;
-(void)_prepareForTapticFeedback;
-(void)setReachabilityState:(unsigned long long)arg1 ;
-(BOOL)isUserInteractionActive;
-(void)setSegmentViews:(NSArray *)arg1 ;
-(NSArray *)segmentViews;
-(void)setTrackingSegmentIndex:(NSNumber *)arg1 ;
-(NSNumber *)trackingSegmentIndex;
-(void)_actuateTapticFeedback;
-(void)_createSegmentAndSeparatorViews;
-(void)_layoutSegmentViews;
-(id)_stepperViewMetricsForControlSize:(unsigned long long)arg1 ;
-(void)_updateUserInteractionActive:(BOOL)arg1 forFirstTouch:(BOOL)arg2 ;
-(void)setAccumulatedTouchDistance:(double)arg1 ;
-(void)_updateSegmentHighlightedState;
-(BOOL)_shouldRequireMinimumDragDistanceForGestureRecognizer:(id)arg1 ;
-(double)accumulatedTouchDistance;
@end

