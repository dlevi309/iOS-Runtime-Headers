/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CSPageViewController.h>
#import <libobjc.A.dylib/CSTodayViewControllerDelegate.h>
#import <libobjc.A.dylib/SBUICoronaAnimationControllerParticipant.h>
#import <libobjc.A.dylib/CSPageViewControllerProtocol.h>
#import <libobjc.A.dylib/SBUISpotlightInitiating.h>

@class SBViewControllerTransitionContext, CSLayoutStrategy, CSTodayContentViewController, CSTodayViewController, NSString, CSAppearance, CSBehavior, CSPresentation, NSSet, _UILegibilitySettings, UIColor, NSArray;

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
@property (assign,nonatomic,__weak) id<CSCoverSheetViewControllerProtocol> coverSheetViewController; 
@property (assign,getter=isTransitioning,nonatomic) BOOL transitioning; 
@property (nonatomic,readonly) BOOL authenticated; 
@property (nonatomic,retain) CSLayoutStrategy * layoutStrategy;                                                   //@synthesize layoutStrategy=_layoutStrategy - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageRole; 
@property (nonatomic,copy,readonly) CSAppearance * activeAppearance; 
@property (nonatomic,copy,readonly) CSBehavior * activeBehavior; 
@property (nonatomic,copy,readonly) CSPresentation * externalPresentation; 
@property (assign,nonatomic,__weak) id<CSCoverSheetViewPresenting> presenter; 
@property (nonatomic,readonly) long long presentationStyle; 
@property (nonatomic,readonly) long long presentationType; 
@property (nonatomic,readonly) long long presentationTransition; 
@property (nonatomic,readonly) long long presentationPriority; 
@property (nonatomic,readonly) long long presentationAltitude; 
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
@property (nonatomic,retain) SBViewControllerTransitionContext * transitionContext; 
+(BOOL)isAvailableForConfiguration;
+(unsigned long long)requiredCapabilities;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)cleanupAfterSpotlightDismissal;
-(void)resetForSpotlightDismissalAnimated:(BOOL)arg1 ;
-(CSTodayViewController *)todayViewController;
-(id)spotlightHeaderAcquiringViewController;
-(double)customListWidth;
-(double)dateTimeInsetX;
-(unsigned long long)listWidthStrategy;
-(double)listInsetX;
-(NSString *)pageRole;
-(void)coronaAnimationController:(id)arg1 willAnimateCoronaTransitionWithAnimator:(id)arg2 ;
-(BOOL)_isPortrait;
-(id)displayLayoutElementIdentifier;
-(double)minimumDateToListSpacing;
-(void)updateTransitionWhileRubberBandingInProgress:(BOOL)arg1 ;
-(CSLayoutStrategy *)layoutStrategy;
-(void)setTransitionContext:(SBViewControllerTransitionContext *)arg1 ;
-(SBViewControllerTransitionContext *)transitionContext;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(void)setContentViewController:(CSTodayContentViewController *)arg1 ;
-(void)setLayoutStrategy:(CSLayoutStrategy *)arg1 ;
-(CSTodayContentViewController *)contentViewController;
-(unsigned long long)listLayout;
-(void)aggregateAppearance:(id)arg1 ;
-(void)coverSheetTodayViewController:(id)arg1 contentViewsDidChange:(id)arg2 ;
-(void)viewDidLoad;
-(void)coverSheetTodayViewControllerDidFocusSearchView:(id)arg1 ;
-(BOOL)_listBelowDateTime;
-(unsigned long long)dateTimeLayout;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

