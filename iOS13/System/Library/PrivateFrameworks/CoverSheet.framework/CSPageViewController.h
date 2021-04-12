/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CSPresentationViewController.h>
#import <libobjc.A.dylib/CSPageViewControllerProtocol.h>

@protocol CSCoverSheetViewControllerProtocol;
@class CSLayoutStrategy, NSString, NSSet, _UILegibilitySettings, UIColor, NSArray, CSAppearance, CSBehavior, CSPresentation;

@interface CSPageViewController : CSPresentationViewController <CSPageViewControllerProtocol> {

	id<CSCoverSheetViewControllerProtocol> _coverSheetViewController;
	BOOL _transitioning;
	BOOL _authenticated;
	CSLayoutStrategy* _layoutStrategy;

}

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
@property (assign,nonatomic,__weak) id<CSCoverSheetViewControllerProtocol> coverSheetViewController;              //@synthesize coverSheetViewController=_coverSheetViewController - In the implementation block
@property (assign,getter=isTransitioning,nonatomic) BOOL transitioning;                                           //@synthesize transitioning=_transitioning - In the implementation block
@property (nonatomic,readonly) BOOL authenticated;                                                                //@synthesize authenticated=_authenticated - In the implementation block
@property (nonatomic,retain) CSLayoutStrategy * layoutStrategy;                                                   //@synthesize layoutStrategy=_layoutStrategy - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageRole; 
+(Class)viewClass;
+(unsigned long long)requiredCapabilities;
+(BOOL)isAvailableForConfiguration;
-(BOOL)authenticated;
-(id)view;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)setTransitioning:(BOOL)arg1 ;
-(BOOL)isTransitioning;
-(id)pageView;
-(long long)participantState;
-(void)handleAction:(id)arg1 fromSender:(id)arg2 ;
-(id<CSCoverSheetViewControllerProtocol>)coverSheetViewController;
-(void)setCoverSheetViewController:(id<CSCoverSheetViewControllerProtocol>)arg1 ;
-(void)aggregateAppearance:(id)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(CSLayoutStrategy *)layoutStrategy;
-(void)setLayoutStrategy:(CSLayoutStrategy *)arg1 ;
-(long long)presentationAltitude;
-(void)updateTransitionToVisible:(BOOL)arg1 progress:(double)arg2 mode:(long long)arg3 ;
-(void)updateTransitionWhileRubberBandingInProgress:(BOOL)arg1 ;
-(void)willTransitionToVisible:(BOOL)arg1 ;
-(void)didTransitionToVisible:(BOOL)arg1 ;
-(long long)requestedDismissalType;
-(id)requestedDismissalSettings;
@end

