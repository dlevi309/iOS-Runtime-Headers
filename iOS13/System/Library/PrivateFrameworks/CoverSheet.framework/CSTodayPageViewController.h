/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CSPageViewController.h>
#import <libobjc.A.dylib/CSTodayViewControllerDelegate.h>
#import <libobjc.A.dylib/SBUICoronaAnimationControllerParticipant.h>
#import <libobjc.A.dylib/CSPageViewControllerProtocol.h>
#import <libobjc.A.dylib/SBUISpotlightInitiating.h>

@class SBViewControllerTransitionContext, CSLayoutStrategy, CSTodayContentViewController, CSTodayViewController, NSString, NSSet, _UILegibilitySettings, UIColor, NSArray, CSAppearance, CSBehavior, CSPresentation;

@interface CSTodayPageViewController : CSPageViewController <CSTodayViewControllerDelegate, SBUICoronaAnimationControllerParticipant, CSPageViewControllerProtocol, SBUISpotlightInitiating> {

	CSLayoutStrategy* _layoutStrategy;
	CSTodayContentViewController* _contentViewController;

}

@property (nonatomic,retain) CSTodayContentViewController * contentViewController;                                //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,readonly) CSTodayViewController * todayViewController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * appearanceIdentifier; 
@property (nonatomic,readonly) long long backgroundStyle; 
@property (nonatomic,copy,readonly) NSSet * components; 
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) long long scrollingStrategy; 
@property (nonatomic,readonly) long long notificationBehavior; 
@property (nonatomic,readonly) unsigned long long restrictedCapabilities; 
@property (nonatomic,readonly) long long proximityDetectionMode; 
@property (nonatomic,__weak,readonly) id<UICoordinateSpace> presentationCoordinateSpace; 
@property (nonatomic,copy,readonly) NSArray * presentationRegions; 
@property (nonatomic,copy,readonly) NSString * coverSheetIdentifier; 
@property (nonatomic,readonly) long long participantState; 
@property (nonatomic,readonly) long long idleTimerDuration; 
@property (nonatomic,readonly) long long idleTimerMode; 
@property (nonatomic,readonly) long long idleWarnMode; 
@property (nonatomic,readonly) double customIdleExpirationTimeout; 
@property (nonatomic,readonly) double customIdleWarningTimeout; 
@property (assign,nonatomic,__weak) id<CSCoverSheetViewPresenting> presenter; 
@property (nonatomic,readonly) long long presentationStyle; 
@property (nonatomic,readonly) long long presentationType; 
@property (nonatomic,readonly) long long presentationTransition; 
@property (nonatomic,readonly) long long presentationPriority; 
@property (nonatomic,readonly) long long presentationAltitude; 
@property (nonatomic,copy,readonly) CSAppearance * activeAppearance; 
@property (nonatomic,copy,readonly) CSBehavior * activeBehavior; 
@property (nonatomic,copy,readonly) CSPresentation * externalPresentation; 
@property (assign,nonatomic,__weak) id<CSCoverSheetViewControllerProtocol> coverSheetViewController; 
@property (assign,getter=isTransitioning,nonatomic) BOOL transitioning; 
@property (nonatomic,readonly) BOOL authenticated; 
@property (nonatomic,retain) CSLayoutStrategy * layoutStrategy;                                                   //@synthesize layoutStrategy=_layoutStrategy - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageRole; 
@property (nonatomic,retain) SBViewControllerTransitionContext * transitionContext; 
+(unsigned long long)requiredCapabilities;
+(BOOL)isAvailableForConfiguration;
-(void)setContentViewController:(CSTodayContentViewController *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(SBViewControllerTransitionContext *)transitionContext;
-(CSTodayContentViewController *)contentViewController;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setTransitionContext:(SBViewControllerTransitionContext *)arg1 ;
-(BOOL)_isPortrait;
-(void)coronaAnimationController:(id)arg1 willAnimateCoronaTransitionWithAnimator:(id)arg2 ;
-(unsigned long long)listLayout;
-(CSTodayViewController *)todayViewController;
-(unsigned long long)listWidthStrategy;
-(double)listInsetX;
-(double)customListWidth;
-(void)aggregateAppearance:(id)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(CSLayoutStrategy *)layoutStrategy;
-(void)setLayoutStrategy:(CSLayoutStrategy *)arg1 ;
-(BOOL)_listBelowDateTime;
-(unsigned long long)dateTimeLayout;
-(double)dateTimeInsetX;
-(double)minimumDateToListSpacing;
-(NSString *)pageRole;
-(void)updateTransitionWhileRubberBandingInProgress:(BOOL)arg1 ;
-(id)displayLayoutElementIdentifier;
-(void)resetForSpotlightDismissalAnimated:(BOOL)arg1 ;
-(void)cleanupAfterSpotlightDismissal;
-(void)coverSheetTodayViewController:(id)arg1 contentViewsDidChange:(id)arg2 ;
-(void)coverSheetTodayViewControllerDidFocusSearchView:(id)arg1 ;
-(id)spotlightHeaderAcquiringViewController;
@end

