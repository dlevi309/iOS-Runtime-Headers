/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * appearanceIdentifier; 
@property (nonatomic,readonly) long long backgroundStyle; 
@property (nonatomic,copy,readonly) NSSet * components; 
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings;                            //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
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
@property (assign,nonatomic,__weak) id<CSCoverSheetViewPresenting> presenter;                         //@synthesize presenter=_presenter - In the implementation block
@property (nonatomic,readonly) long long presentationStyle; 
@property (nonatomic,readonly) long long presentationType; 
@property (nonatomic,readonly) long long presentationTransition; 
@property (nonatomic,readonly) long long presentationPriority; 
@property (nonatomic,readonly) long long presentationAltitude; 
@property (nonatomic,copy,readonly) CSAppearance * activeAppearance; 
@property (nonatomic,copy,readonly) CSBehavior * activeBehavior; 
@property (nonatomic,copy,readonly) CSPresentation * externalPresentation; 
+(Class)viewClass;
+(id)coverSheetIdentifier;
-(void)dealloc;
-(NSString *)description;
-(NSSet *)components;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(UIColor *)backgroundColor;
-(void)loadView;
-(id)_presenter;
-(void)dismiss;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(long long)presentationStyle;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)_canShowWhileLocked;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)isPresentation;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)handleEvent:(id)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(long long)backgroundStyle;
-(id<CSCoverSheetViewPresenting>)presenter;
-(long long)presentationType;
-(NSString *)appearanceIdentifier;
-(long long)presentationTransition;
-(long long)idleTimerMode;
-(unsigned long long)restrictedCapabilities;
-(long long)notificationBehavior;
-(void)updateForPresentation:(id)arg1 ;
-(void)setPresenter:(id<CSCoverSheetViewPresenting>)arg1 ;
-(long long)participantState;
-(CSBehavior *)activeBehavior;
-(NSArray *)presentationRegions;
-(void)unregisterView:(id)arg1 ;
-(CSAppearance *)activeAppearance;
-(void)sendAction:(id)arg1 ;
-(void)handleAction:(id)arg1 fromSender:(id)arg2 ;
-(long long)presentationPriority;
-(void)registerView:(id)arg1 forRole:(long long)arg2 ;
-(void)aggregateAppearance:(id)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(void)updateAppearanceForController:(id)arg1 ;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(NSString *)coverSheetIdentifier;
-(long long)scrollingStrategy;
-(long long)proximityDetectionMode;
-(void)updateBehaviorForController:(id)arg1 ;
-(void)rebuildBehavior;
-(UIViewController *)kitPresentedViewController;
-(void)rebuildAppearance;
-(id<UICoordinateSpace>)presentationCoordinateSpace;
-(long long)idleTimerDuration;
-(long long)idleWarnMode;
-(long long)presentationAltitude;
-(void)updateAppearanceForController:(id)arg1 withAnimationSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_conformsToCSCoverSheetViewPresenting;
-(CSPresentation *)externalPresentation;
-(void)setDisplayLayoutElementActive:(BOOL)arg1 ;
-(BOOL)presentationCancelsTouches;
-(void)rebuildEverythingForReason:(id)arg1 ;
-(id)displayLayoutElementIdentifier;
-(void)performCustomTransitionToVisible:(BOOL)arg1 withAnimationSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)unregisterAllViews;
-(void)registerView:(id)arg1 forRole:(long long)arg2 options:(unsigned long long)arg3 ;
-(CGSize)effectiveContentSizeForScrollView:(id)arg1 ;
-(void)aggregatePresentation:(id)arg1 ;
-(BOOL)handleAppearanceUpdateFromController:(id)arg1 animationSettings:(inout id*)arg2 ;
-(void)willTransitionToPresented:(BOOL)arg1 ;
-(void)didTransitionToPresented:(BOOL)arg1 ;
-(void)updateAppearance:(/*^block*/id)arg1 ;
-(void)updateBehavior:(/*^block*/id)arg1 ;
-(BOOL)isDisappeared;
-(void)_rebuildDisposition;
-(void)setDisplayLayoutElementActive:(BOOL)arg1 immediately:(BOOL)arg2 ;
-(void)configureDisplayLayoutElement:(id)arg1 ;
-(BOOL)_presentationParticipant;
-(void)updateAppearance:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_rebuildPresentation;
-(id)_regionsForView:(id)arg1 ;
-(BOOL)_rebuildAppearance;
-(void)_layoutIfNeededForPresentation;
-(BOOL)_rebuildBehavior;
-(BOOL)handleAction:(id)arg1 fromController:(id)arg2 ;
@end

