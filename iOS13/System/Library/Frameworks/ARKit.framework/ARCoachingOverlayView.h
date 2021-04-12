/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<ARCoachingOverlayViewDelegate>)delegate;
-(void)setDelegate:(id<ARCoachingOverlayViewDelegate>)arg1 ;
-(BOOL)isActive;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(ARSession *)session;
-(void)setSession:(ARSession *)arg1 ;
-(void)teardown;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)setActive:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)buttonPress:(id)arg1 ;
-(id<ARPrivateCoachingOverlayViewDelegate>)privateDelegate;
-(void)fadeOut;
-(long long)currentDeviceOrientation;
-(void)session:(id)arg1 didFailWithError:(id)arg2 ;
-(void)session:(id)arg1 didUpdateFrame:(id)arg2 ;
-(void)session:(id)arg1 didAddAnchors:(id)arg2 ;
-(void)session:(id)arg1 didRemoveAnchors:(id)arg2 ;
-(void)setGoal:(long long)arg1 ;
-(long long)goal;
-(void)startup;
-(void)session:(id)arg1 willRunWithConfiguration:(id)arg2 ;
-(BOOL)wasEverActivated;
-(BOOL)checkActivationHeuristics;
-(BOOL)isRelocalizing;
-(void)fadeInWithButton:(BOOL)arg1 ;
-(BOOL)isUIAnimating;
-(BOOL)checkDeactivationHeuristics;
-(ARCoachingSessionCache *)coachingSessionCache;
-(void)setupView;
-(void)setActivatesAutomatically:(BOOL)arg1 ;
-(void)orientationChanged;
-(void)swapState:(id)arg1 ;
-(void)restartIfActive;
-(void)doStateAction:(long long)arg1 ;
-(void)finishAllUIAnimations;
-(void)generateHeuristicsForActive:(BOOL)arg1 ;
-(void)updateWithFrame:(id)arg1 ;
-(void)updateCoachingRequirements;
-(void)resolveCoachingMessage;
-(void)displayLinkUpdate;
-(void)killUIAnimations;
-(double)calcFadeDurationIn:(BOOL)arg1 withButton:(BOOL)arg2 ;
-(void)setCoachingMessage:(long long)arg1 animationState:(long long)arg2 ;
-(void)crossFadeCoachingMessage:(long long)arg1 ;
-(void)updateUIAnimations;
-(void)createConstraintsForDeviceOrientation:(long long)arg1 ;
-(void)setSessionProvider:(NSObject*<ARSessionProviding>)arg1 ;
-(void)setResetButtonLandscapeVerticalOffset:(float)arg1 ;
-(void)setResetButtonPortraitVerticalOffset:(float)arg1 ;
-(NSObject*<ARSessionProviding>)sessionProvider;
-(BOOL)activatesAutomatically;
-(long long)trackingStateReasonOverride;
-(void)setTrackingStateReasonOverride:(long long)arg1 ;
-(BOOL)trackingStateNormalOverride;
-(void)setTrackingStateNormalOverride:(BOOL)arg1 ;
-(float)resetButtonLandscapeVerticalOffset;
-(float)resetButtonPortraitVerticalOffset;
@end

