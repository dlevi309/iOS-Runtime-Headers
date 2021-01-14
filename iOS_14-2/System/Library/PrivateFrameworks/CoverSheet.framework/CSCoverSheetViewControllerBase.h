/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CSCoverSheetViewPresenting.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol CSCoverSheetViewPresenting;
@class CSAppearance, CSBehavior, CSPresentation, _UILegibilitySettings, FBDisplayLayoutElement, NSHashTable, UIViewController, NSString, NSSet, UIColor, NSArray;

@interface CSCoverSheetViewControllerBase : UIViewController <CSCoverSheetViewPresenting, BSDescriptionProviding> {

	CSAppearance* _appearance;
	CSBehavior* _behavior;
	CSPresentation* _presentation;
	_UILegibilitySettings* _legibilitySettings;
	FBDisplayLayoutElement* _displayLayoutElement;
	NSHashTable* _regionProviders;
	BOOL _forcingLayoutForPresentation;
	BOOL _isBeingPresented;
	id<CSCoverSheetViewPresenting> _presenter;

}

@property (getter=isPresentation,nonatomic,readonly) BOOL presentation;                               //@synthesize isBeingPresented=_isBeingPresented - In the implementation block
@property (getter=isDisappeared,nonatomic,readonly) BOOL disappeared; 
@property (nonatomic,readonly) BOOL presentationCancelsTouches; 
@property (nonatomic,readonly) UIViewController * kitPresentedViewController; 
@property (nonatomic,copy,readonly) CSAppearance * activeAppearance; 
@property (nonatomic,copy,readonly) CSBehavior * activeBehavior; 
@property (nonatomic,copy,readonly) CSPresentation * externalPresentation; 
@property (assign,nonatomic,__weak) id<CSCoverSheetViewPresenting> presenter;                         //@synthesize presenter=_presenter - In the implementation block
@property (nonatomic,readonly) long long presentationStyle; 
@property (nonatomic,readonly) long long presentationType; 
@property (nonatomic,readonly) long long presentationTransition; 
@property (nonatomic,readonly) long long presentationPriority; 
@property (nonatomic,readonly) long long presentationAltitude; 
@property (nonatomic,copy,readonly) NSString * appearanceIdentifier; 
@property (nonatomic,readonly) long long backgroundStyle; 
@property (nonatomic,copy,readonly) NSSet * components; 
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings;                            //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
+(id)coverSheetIdentifier;
+(Class)viewClass;
-(id<UICoordinateSpace>)presentationCoordinateSpace;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)conformsToCSEventHandling;
-(id)succinctDescription;
-(long long)presentationStyle;
-(void)viewWillLayoutSubviews;
-(long long)presentationPriority;
-(long long)presentationTransition;
-(void)setPresenter:(id<CSCoverSheetViewPresenting>)arg1 ;
-(NSArray *)presentationRegions;
-(CSBehavior *)activeBehavior;
-(id)displayLayoutElementIdentifier;
-(BOOL)handleEvent:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(long long)backgroundStyle;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(CGSize)effectiveContentSizeForScrollView:(id)arg1 ;
-(long long)notificationBehavior;
-(CSPresentation *)externalPresentation;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(void)conformsToCSBehaviorProviding;
-(long long)presentationAltitude;
-(BOOL)isPresentation;
-(void)handleAction:(id)arg1 fromSender:(id)arg2 ;
-(long long)proximityDetectionMode;
-(NSString *)appearanceIdentifier;
-(UIColor *)backgroundColor;
-(void)conformsToCSCoverSheetViewControlling;
-(NSSet *)components;
-(id<CSCoverSheetViewPresenting>)presenter;
-(CSAppearance *)activeAppearance;
-(NSString *)coverSheetIdentifier;
-(void)setDisplayLayoutElementActive:(BOOL)arg1 ;
-(void)aggregateAppearance:(id)arg1 ;
-(NSString *)description;
-(void)conformsToCSAppearanceProviding;
-(long long)presentationType;
-(BOOL)_canShowWhileLocked;
-(void)updateBehaviorForController:(id)arg1 ;
-(void)updateAppearanceForController:(id)arg1 ;
-(void)viewDidLoad;
-(_UILegibilitySettings *)legibilitySettings;
-(long long)idleTimerDuration;
-(long long)idleTimerMode;
-(long long)participantState;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)sendAction:(id)arg1 ;
-(void)rebuildEverythingForReason:(id)arg1 ;
-(long long)idleWarnMode;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)conformsToCSCoverSheetViewPresenting;
-(void)loadView;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)performCustomTransitionToVisible:(BOOL)arg1 withAnimationSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)succinctDescriptionBuilder;
-(id)_presenter;
-(void)updateAppearanceForController:(id)arg1 withAnimationSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(long long)scrollingStrategy;
-(void)configureDisplayLayoutElement:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(unsigned long long)restrictedCapabilities;
-(void)dealloc;
-(void)unregisterView:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)updateForPresentation:(id)arg1 ;
-(void)dismiss;
-(void)registerView:(id)arg1 forRole:(long long)arg2 ;
-(void)willTransitionToPresented:(BOOL)arg1 ;
-(UIViewController *)kitPresentedViewController;
-(void)rebuildAppearance;
-(void)rebuildBehavior;
-(void)updateAppearance:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isDisappeared;
-(void)setDisplayLayoutElementActive:(BOOL)arg1 immediately:(BOOL)arg2 ;
-(BOOL)presentationCancelsTouches;
-(void)unregisterAllViews;
-(void)registerView:(id)arg1 forRole:(long long)arg2 options:(unsigned long long)arg3 ;
-(void)aggregatePresentation:(id)arg1 ;
-(BOOL)handleAppearanceUpdateFromController:(id)arg1 animationSettings:(inout id*)arg2 ;
-(void)didTransitionToPresented:(BOOL)arg1 ;
-(void)updateAppearance:(/*^block*/id)arg1 ;
-(void)updateBehavior:(/*^block*/id)arg1 ;
-(void)_rebuildDisposition;
-(BOOL)_presentationParticipant;
-(BOOL)_rebuildPresentation;
-(id)_regionsForView:(id)arg1 ;
-(BOOL)_rebuildAppearance;
-(void)_layoutIfNeededForPresentation;
-(BOOL)_rebuildBehavior;
-(BOOL)handleAction:(id)arg1 fromController:(id)arg2 ;
@end

