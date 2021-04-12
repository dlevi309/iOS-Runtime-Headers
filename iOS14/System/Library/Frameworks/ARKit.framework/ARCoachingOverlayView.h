/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <ARKit/ARInternalSessionObserver.h>

@protocol ARCoachingOverlayViewDelegate, ARSessionProviding;
@class UIView, UILabel, ARCoachingPillButton, ARCoachingState, ARCoachingHeuristicCollection, ARCoachingMotionTracker, NSLayoutConstraint, ARCoachingAnimationView, CADisplayLink, NSMutableArray, NSObject, ARSession, ARCoachingSessionCache, NSString;

@interface ARCoachingOverlayView : UIView <ARInternalSessionObserver> {

	UIView* _background;
	UILabel* _coachingText;
	ARCoachingPillButton* _resetButton;
	ARCoachingState* _state;
	ARCoachingHeuristicCollection* _heuristics;
	ARCoachingMotionTracker* _motionTracker;
	long long _coachingRequirements;
	long long _requestedGoal;
	long long _coachingMessageType;
	long long _nextCoachingMessageType;
	long long _nextCoachingAnimationState;
	double _lastCoachingUpdateTime;
	long long _currentConstraintDeviceOrientation;
	NSLayoutConstraint* _resetButtonBottomLayoutConstraint;
	NSLayoutConstraint* _coachingTextLeftAnchorConstraint;
	NSLayoutConstraint* _coachingTextRightAnchorConstraint;
	ARCoachingAnimationView* _coachingAnimationView;
	CADisplayLink* _displayLink;
	NSMutableArray* _uiAnimationQueue;
	BOOL _uiAnimationQueueRunning;
	BOOL _isSessionRelocalizingMap;
	BOOL _activatesAutomatically;
	BOOL _wasEverActivated;
	BOOL _trackingStateNormalOverride;
	float _resetButtonLandscapeVerticalOffset;
	float _resetButtonPortraitVerticalOffset;
	id<ARCoachingOverlayViewDelegate> _delegate;
	NSObject*<ARSessionProviding> _sessionProvider;
	ARSession* _session;
	long long _goal;
	ARCoachingSessionCache* _coachingSessionCache;
	long long _trackingStateReasonOverride;

}

@property (nonatomic,readonly) BOOL isUIAnimating; 
@property (nonatomic,readonly) BOOL wasEverActivated;                                                        //@synthesize wasEverActivated=_wasEverActivated - In the implementation block
@property (nonatomic,readonly) BOOL isRelocalizing; 
@property (nonatomic,readonly) ARCoachingSessionCache * coachingSessionCache;                                //@synthesize coachingSessionCache=_coachingSessionCache - In the implementation block
@property (nonatomic,__weak,readonly) id<ARPrivateCoachingOverlayViewDelegate> privateDelegate; 
@property (assign,nonatomic) long long trackingStateReasonOverride;                                          //@synthesize trackingStateReasonOverride=_trackingStateReasonOverride - In the implementation block
@property (assign,nonatomic) BOOL trackingStateNormalOverride;                                               //@synthesize trackingStateNormalOverride=_trackingStateNormalOverride - In the implementation block
@property (assign,nonatomic) float resetButtonLandscapeVerticalOffset;                                       //@synthesize resetButtonLandscapeVerticalOffset=_resetButtonLandscapeVerticalOffset - In the implementation block
@property (assign,nonatomic) float resetButtonPortraitVerticalOffset;                                        //@synthesize resetButtonPortraitVerticalOffset=_resetButtonPortraitVerticalOffset - In the implementation block
@property (assign,nonatomic,__weak) id<ARCoachingOverlayViewDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<ARSessionProviding> sessionProvider;                           //@synthesize sessionProvider=_sessionProvider - In the implementation block
@property (nonatomic,retain) ARSession * session;                                                            //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) long long goal;                                                                 //@synthesize goal=_goal - In the implementation block
@property (assign,nonatomic) BOOL activatesAutomatically;                                                    //@synthesize activatesAutomatically=_activatesAutomatically - In the implementation block
@property (nonatomic,readonly) BOOL isActive; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)goal;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(long long)currentDeviceOrientation;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<ARCoachingOverlayViewDelegate>)delegate;
-(BOOL)isActive;
-(void)encodeWithCoder:(id)arg1 ;
-(void)updateWithFrame:(id)arg1 ;
-(void)startup;
-(ARSession *)session;
-(void)session:(id)arg1 didFailWithError:(id)arg2 ;
-(void)session:(id)arg1 didUpdateFrame:(id)arg2 ;
-(void)session:(id)arg1 didAddAnchors:(id)arg2 ;
-(void)session:(id)arg1 didRemoveAnchors:(id)arg2 ;
-(void)setGoal:(long long)arg1 ;
-(void)setupView;
-(void)setDelegate:(id<ARCoachingOverlayViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)setSession:(ARSession *)arg1 ;
-(id<ARPrivateCoachingOverlayViewDelegate>)privateDelegate;
-(NSObject*<ARSessionProviding>)sessionProvider;
-(void)fadeOut;
-(id)initWithCoder:(id)arg1 ;
-(void)teardown;
-(void)buttonPress:(id)arg1 ;
-(void)setActive:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
-(void)setSessionProvider:(NSObject*<ARSessionProviding>)arg1 ;
-(void)session:(id)arg1 willRunWithConfiguration:(id)arg2 ;
-(BOOL)wasEverActivated;
-(BOOL)checkActivationHeuristics;
-(BOOL)isRelocalizing;
-(void)fadeInWithButton:(BOOL)arg1 ;
-(BOOL)isUIAnimating;
-(BOOL)checkDeactivationHeuristics;
-(ARCoachingSessionCache *)coachingSessionCache;
-(BOOL)activatesAutomatically;
-(void)orientationChanged;
-(void)setActivatesAutomatically:(BOOL)arg1 ;
-(void)swapState:(id)arg1 ;
-(void)restartIfActive;
-(void)doStateAction:(long long)arg1 ;
-(void)finishAllUIAnimations;
-(void)generateHeuristicsForActive:(BOOL)arg1 ;
-(void)updateCoachingMessagingWithMotionTracker:(BOOL)arg1 ;
-(void)updateFromDisplayLink;
-(void)killUIAnimations;
-(double)calcFadeDurationIn:(BOOL)arg1 withButton:(BOOL)arg2 ;
-(void)setCoachingMessage:(long long)arg1 animationState:(long long)arg2 ;
-(void)crossFadeCoachingMessage:(long long)arg1 ;
-(void)updateUIAnimations;
-(void)resolveCoachingMessage;
-(void)createConstraintsForDeviceOrientation:(long long)arg1 ;
-(void)setResetButtonLandscapeVerticalOffset:(float)arg1 ;
-(void)setResetButtonPortraitVerticalOffset:(float)arg1 ;
-(long long)trackingStateReasonOverride;
-(void)setTrackingStateReasonOverride:(long long)arg1 ;
-(BOOL)trackingStateNormalOverride;
-(void)setTrackingStateNormalOverride:(BOOL)arg1 ;
-(float)resetButtonLandscapeVerticalOffset;
-(float)resetButtonPortraitVerticalOffset;
@end

