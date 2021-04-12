/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBSystemGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBHomeGestureParticipantDelegate.h>

@class NSHashTable, NSMutableSet, SBReachabilityWindow, UITransform, UITapGestureRecognizer, SBHomeGestureParticipant, SBReachabilityGestureRecognizer, SBScreenEdgePanGestureRecognizer, UIPanGestureRecognizer, NSString;

@interface SBReachabilityManager : NSObject <SBSystemGestureRecognizerDelegate, SBHomeGestureParticipantDelegate> {

	NSHashTable* _observers;
	BOOL _reachabilityModeActive;
	unsigned long long _reachabilityExtensionGenerationCount;
	BOOL _reachabilityModeEnabled;
	NSMutableSet* _temporaryDisabledReasons;
	SBReachabilityWindow* _reachabilityWindow;
	UITransform* _reachabilityTransform;
	UITransform* _inverseReachabilityTransform;
	UITapGestureRecognizer* _dismissTapGestureRecognizer;
	SBHomeGestureParticipant* _homeGestureParticipant;
	NSHashTable* _ignoredWindows;
	long long _animationsInFlight;
	SBReachabilityGestureRecognizer* _reachabilityGestureRecognizer;
	double _effectiveReachabilityYOffset;
	SBScreenEdgePanGestureRecognizer* _dismissEdgeGestureRecognizer;
	UIPanGestureRecognizer* _dismissPanGestureRecognizer;

}

@property (nonatomic,readonly) BOOL reachabilityModeActive;                                                  //@synthesize reachabilityModeActive=_reachabilityModeActive - In the implementation block
@property (assign,nonatomic) BOOL reachabilityEnabled; 
@property (nonatomic,readonly) SBReachabilityGestureRecognizer * reachabilityGestureRecognizer;              //@synthesize reachabilityGestureRecognizer=_reachabilityGestureRecognizer - In the implementation block
@property (nonatomic,readonly) SBScreenEdgePanGestureRecognizer * dismissEdgeGestureRecognizer;              //@synthesize dismissEdgeGestureRecognizer=_dismissEdgeGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * dismissPanGestureRecognizer;                         //@synthesize dismissPanGestureRecognizer=_dismissPanGestureRecognizer - In the implementation block
@property (nonatomic,readonly) double reachabilityYOffset; 
@property (nonatomic,readonly) double effectiveReachabilityYOffset;                                          //@synthesize effectiveReachabilityYOffset=_effectiveReachabilityYOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)reachabilitySupported;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)toggleReachability;
-(void)setReachabilityEnabled:(BOOL)arg1 ;
-(BOOL)reachabilityEnabled;
-(UIPanGestureRecognizer *)dismissPanGestureRecognizer;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1 ;
-(void)deactivateReachability;
-(void)_notifyObserversReachabilityModeActive:(BOOL)arg1 ;
-(void)_setKeepAliveTimer;
-(void)_setupGestureRecognizers;
-(void)_handleSignificantTimeChanged;
-(void)_screenDidDim;
-(BOOL)canActivateReachability;
-(void)_toggleReachabilityMode;
-(void)_updateReachabilityModeActive:(BOOL)arg1 ;
-(void)_modifyDefaultPresentationContextHostTransformForWindow:(id)arg1 fromTransform:(id)arg2 toTransform:(id)arg3 ;
-(void)_updateReachabilityModeActive:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setupReachabilityWindowIfNecessary;
-(double)reachabilityYOffset;
-(void)_tearDownReachabilityWindow;
-(void)_updateReachabilityWindowForYOffset:(double)arg1 mode:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_pingKeepAliveWithDuration:(double)arg1 interactedBeforePing:(BOOL)arg2 initialKeepAliveTime:(double)arg3 ;
-(void)_activateReachability:(id)arg1 ;
-(void)_panToDeactivateReachability:(id)arg1 ;
-(void)_tapToDeactivateReachability:(id)arg1 ;
-(id)_sceneForWindow:(id)arg1 ;
-(void)_transitionWithTransformer:(id)arg1 fromTransform:(id)arg2 toTransform:(id)arg3 ;
-(void)_notifyObserversWillBeginReachabilityAnimation;
-(id)ignoredWindows;
-(void)_notifyObserversReachabilityYOffsetDidChange;
-(void)_notifyObserversDidEndReachabilityAnimation;
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
-(void)setReachabilityTemporarilyDisabled:(BOOL)arg1 forReason:(id)arg2 ;
-(void)ignoreWindowForReachability:(id)arg1 ;
-(SBReachabilityGestureRecognizer *)reachabilityGestureRecognizer;
-(double)effectiveReachabilityYOffset;
-(BOOL)reachabilityModeActive;
-(SBScreenEdgePanGestureRecognizer *)dismissEdgeGestureRecognizer;
@end

