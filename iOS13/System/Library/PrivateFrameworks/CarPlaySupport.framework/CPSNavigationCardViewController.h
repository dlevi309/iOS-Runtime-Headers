/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CPSNavigationDisplaying.h>

@class CPSLayoutHelperView, UIColor, NSString, NSLayoutConstraint, UIView, CPSManeuversCardView, CPSPausedCardView, NSMutableSet;

@interface CPSNavigationCardViewController : UIViewController <CPSNavigationDisplaying> {

	BOOL _navigationCardHidden;
	BOOL _passesLinkCheck;
	CPSLayoutHelperView* _layoutHelperView;
	UIColor* _guidanceBackgroundColor;
	NSString* _navigatingBundleIdentifier;
	NSLayoutConstraint* _containerViewHeightConstraint;
	NSLayoutConstraint* _containerViewTopConstraint;
	NSLayoutConstraint* _sizingViewBottomConstraint;
	UIView* _containerView;
	CPSManeuversCardView* _currentManeuversCardView;
	CPSPausedCardView* _currentPausedCardView;
	NSMutableSet* _navigationCardHiddenRequesters;

}

@property (nonatomic,retain) NSLayoutConstraint * containerViewHeightConstraint;              //@synthesize containerViewHeightConstraint=_containerViewHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * containerViewTopConstraint;                 //@synthesize containerViewTopConstraint=_containerViewTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * sizingViewBottomConstraint;                 //@synthesize sizingViewBottomConstraint=_sizingViewBottomConstraint - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                          //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) CPSManeuversCardView * currentManeuversCardView;                 //@synthesize currentManeuversCardView=_currentManeuversCardView - In the implementation block
@property (nonatomic,retain) CPSPausedCardView * currentPausedCardView;                       //@synthesize currentPausedCardView=_currentPausedCardView - In the implementation block
@property (nonatomic,retain) NSMutableSet * navigationCardHiddenRequesters;                   //@synthesize navigationCardHiddenRequesters=_navigationCardHiddenRequesters - In the implementation block
@property (assign,nonatomic) BOOL passesLinkCheck;                                            //@synthesize passesLinkCheck=_passesLinkCheck - In the implementation block
@property (nonatomic,readonly) CPSLayoutHelperView * layoutHelperView;                        //@synthesize layoutHelperView=_layoutHelperView - In the implementation block
@property (nonatomic,retain) UIColor * guidanceBackgroundColor;                               //@synthesize guidanceBackgroundColor=_guidanceBackgroundColor - In the implementation block
@property (assign,nonatomic) BOOL navigationCardHidden;                                       //@synthesize navigationCardHidden=_navigationCardHidden - In the implementation block
@property (nonatomic,copy) NSString * navigatingBundleIdentifier;                             //@synthesize navigatingBundleIdentifier=_navigatingBundleIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)containerView;
-(void)setContainerView:(UIView *)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(BOOL)_shouldAnimate;
-(void)showManeuvers:(id)arg1 usingDisplayStyles:(id)arg2 ;
-(UIColor *)guidanceBackgroundColor;
-(void)setGuidanceBackgroundColor:(UIColor *)arg1 ;
-(void)updateEstimates:(id)arg1 forManeuver:(id)arg2 ;
-(void)navigator:(id)arg1 pausedTripForReason:(unsigned long long)arg2 description:(id)arg3 ;
-(void)updateTripEstimates:(id)arg1 ;
-(void)navigator:(id)arg1 didEndTrip:(BOOL)arg2 ;
-(void)setContainerViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setContainerViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)containerViewTopConstraint;
-(NSLayoutConstraint *)containerViewHeightConstraint;
-(CPSManeuversCardView *)currentManeuversCardView;
-(void)setNavigationCardHidden:(BOOL)arg1 forRequester:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(CPSPausedCardView *)currentPausedCardView;
-(NSMutableSet *)navigationCardHiddenRequesters;
-(void)_updateNavigationCardHidden;
-(BOOL)navigationCardHidden;
-(void)setNavigationCardHidden:(BOOL)arg1 ;
-(void)setCurrentManeuversCardView:(CPSManeuversCardView *)arg1 ;
-(void)setCurrentPausedCardView:(CPSPausedCardView *)arg1 ;
-(void)_updateCardBackgroundColors;
-(void)_transitionFromViews:(id)arg1 inView:(id)arg2 ;
-(void)_showPausedViewForReason:(unsigned long long)arg1 description:(id)arg2 ;
-(void)_updateHelperViewFrame;
-(CPSLayoutHelperView *)layoutHelperView;
-(BOOL)passesLinkCheck;
-(NSString *)navigatingBundleIdentifier;
-(void)setPassesLinkCheck:(BOOL)arg1 ;
-(void)_updateLinkedCheck;
-(void)availableHeightChangedTo:(double)arg1 ;
-(void)_updateSizingViewConstraintsForView:(id)arg1 ;
-(void)setNavigatingBundleIdentifier:(NSString *)arg1 ;
-(NSLayoutConstraint *)sizingViewBottomConstraint;
-(void)setSizingViewBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setNavigationCardHiddenRequesters:(NSMutableSet *)arg1 ;
@end

