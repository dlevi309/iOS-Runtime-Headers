/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBBarSwipeAffordanceDelegate.h>
#import <libobjc.A.dylib/SBBarSwipeAffordanceObserver.h>
#import <libobjc.A.dylib/SBTodayOverlayViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBFTodayOverlayControlling.h>
#import <libobjc.A.dylib/SBFIdleTimerBehaviorProviding.h>
#import <libobjc.A.dylib/CSExternalBehaviorProviding.h>
#import <libobjc.A.dylib/CSExternalEventHandling.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSHashTable, SBMainScreenActiveInterfaceOrientationWindow, SBBarSwipeAffordanceViewController, SBTodayOverlayViewController, FBDisplayLayoutElement, SBAppStatusBarDateTimeAssertion, NSString;

@interface SBTodayOverlayController : NSObject <SBBarSwipeAffordanceDelegate, SBBarSwipeAffordanceObserver, SBTodayOverlayViewControllerDelegate, UIGestureRecognizerDelegate, SBFTodayOverlayControlling, SBFIdleTimerBehaviorProviding, CSExternalBehaviorProviding, CSExternalEventHandling, BSDescriptionProviding> {

	NSHashTable* _observers;
	BOOL _dismissing;
	SBMainScreenActiveInterfaceOrientationWindow* _window;
	SBBarSwipeAffordanceViewController* _homeAffordanceViewController;
	SBTodayOverlayViewController* _overlayViewController;
	FBDisplayLayoutElement* _displayLayoutElement;
	SBAppStatusBarDateTimeAssertion* _statusBarContentAssertion;
	unsigned long long _screenEdgeSystemGestureType;
	unsigned long long _indirectScreenEdgeSystemGestureType;
	unsigned long long _scrunchSystemGestureType;

}

@property (nonatomic,readonly) SBMainScreenActiveInterfaceOrientationWindow * window;                          //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) SBBarSwipeAffordanceViewController * homeAffordanceViewController;              //@synthesize homeAffordanceViewController=_homeAffordanceViewController - In the implementation block
@property (nonatomic,readonly) SBTodayOverlayViewController * overlayViewController;                           //@synthesize overlayViewController=_overlayViewController - In the implementation block
@property (nonatomic,retain) FBDisplayLayoutElement * displayLayoutElement;                                    //@synthesize displayLayoutElement=_displayLayoutElement - In the implementation block
@property (nonatomic,retain) SBAppStatusBarDateTimeAssertion * statusBarContentAssertion;                      //@synthesize statusBarContentAssertion=_statusBarContentAssertion - In the implementation block
@property (assign,getter=isDismissing,nonatomic) BOOL dismissing;                                              //@synthesize dismissing=_dismissing - In the implementation block
@property (nonatomic,readonly) unsigned long long screenEdgeSystemGestureType;                                 //@synthesize screenEdgeSystemGestureType=_screenEdgeSystemGestureType - In the implementation block
@property (nonatomic,readonly) unsigned long long indirectScreenEdgeSystemGestureType;                         //@synthesize indirectScreenEdgeSystemGestureType=_indirectScreenEdgeSystemGestureType - In the implementation block
@property (nonatomic,readonly) unsigned long long scrunchSystemGestureType;                                    //@synthesize scrunchSystemGestureType=_scrunchSystemGestureType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double contentWidth; 
@property (assign,nonatomic) double presentationProgress; 
@property (getter=isPresented,nonatomic,readonly) BOOL presented; 
@property (nonatomic,readonly) long long idleTimerDuration; 
@property (nonatomic,readonly) long long idleTimerMode; 
@property (nonatomic,readonly) long long idleWarnMode; 
@property (nonatomic,readonly) double customIdleExpirationTimeout; 
@property (nonatomic,readonly) double customIdleWarningTimeout; 
@property (nonatomic,readonly) long long scrollingStrategy; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long proximityDetectionMode; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
-(void)dealloc;
-(NSString *)description;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(double)contentWidth;
-(SBMainScreenActiveInterfaceOrientationWindow *)window;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 ;
-(BOOL)handleEvent:(id)arg1 ;
-(SBTodayOverlayViewController *)overlayViewController;
-(BOOL)isDismissing;
-(void)presentAnimated:(BOOL)arg1 ;
-(void)setDismissing:(BOOL)arg1 ;
-(long long)idleTimerMode;
-(BOOL)isPresented;
-(unsigned long long)restrictedCapabilities;
-(long long)notificationBehavior;
-(long long)participantState;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(NSString *)coverSheetIdentifier;
-(long long)scrollingStrategy;
-(long long)proximityDetectionMode;
-(long long)idleTimerDuration;
-(long long)idleWarnMode;
-(double)presentationProgress;
-(void)setPresentationProgress:(double)arg1 interactive:(BOOL)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setDisplayLayoutElementActive:(BOOL)arg1 ;
-(SBBarSwipeAffordanceViewController *)homeAffordanceViewController;
-(void)addTodayOverlayObserver:(id)arg1 ;
-(void)setPresentationProgress:(double)arg1 ;
-(double)finalPresentationProgressForPresentationProgress:(double)arg1 gestureVelocity:(double)arg2 ;
-(id)testScrollView;
-(void)_relinquishStatusBarContentAssertion;
-(id)initWithWindowLevel:(double)arg1 homeGestureParticipantIdentifier:(long long)arg2 screenEdgeSystemGestureType:(unsigned long long)arg3 indirectScreenEdgeSystemGestureType:(unsigned long long)arg4 scrunchSystemGestureType:(unsigned long long)arg5 secure:(BOOL)arg6 ;
-(SBAppStatusBarDateTimeAssertion *)statusBarContentAssertion;
-(void)setStatusBarContentAssertion:(SBAppStatusBarDateTimeAssertion *)arg1 ;
-(unsigned long long)barSwipeAffordanceView:(id)arg1 systemGestureTypeForType:(long long)arg2 ;
-(void)homeGesturePerformedForBarSwipeAffordanceView:(id)arg1 ;
-(FBDisplayLayoutElement *)displayLayoutElement;
-(void)setDisplayLayoutElement:(FBDisplayLayoutElement *)arg1 ;
-(void)dismissTapGestureUpdated:(id)arg1 ;
-(void)dismissScrollGestureUpdated:(id)arg1 ;
-(void)_addSystemGestureRecognizer;
-(void)_takeStatusBarContentAssertion;
-(void)_removeSystemGestureRecognizer;
-(void)enumerateTodayOverlayObserversUsingBlock:(/*^block*/id)arg1 ;
-(void)todayOverlayViewControllerDidChangeHeaderVisibility:(id)arg1 ;
-(void)removeTodayOverlayObserver:(id)arg1 ;
-(unsigned long long)screenEdgeSystemGestureType;
-(unsigned long long)indirectScreenEdgeSystemGestureType;
-(unsigned long long)scrunchSystemGestureType;
@end

