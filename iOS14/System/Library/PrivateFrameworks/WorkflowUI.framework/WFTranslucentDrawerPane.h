/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFDrawerPaneHeaderViewDelegate.h>
#import <libobjc.A.dylib/WFDrawerPane.h>

@protocol WFDrawerPaneHeaderView;
@class UIViewController, WFDrawerPaneContainer, NSString, UIView, UISearchBar, WFDrawerGrabberView, UIVisualEffectView;

@interface WFTranslucentDrawerPane : UIViewController <WFDrawerPaneHeaderViewDelegate, WFDrawerPane> {

	BOOL _translucent;
	BOOL _roundsTopCorners;
	BOOL _usesVisualEffectView;
	BOOL _candidateForContentCapture;
	WFDrawerPaneContainer* _container;
	UIViewController* _viewController;
	double _bottomContentInset;
	double _topCornerRadius;
	UISearchBar* _searchBar;
	NSString* _title;
	UIView* _titleView;
	UIView*<WFDrawerPaneHeaderView> _activeHeaderView;
	UIView* _contentView;
	NSString* _drawerGroup;
	UIView* _shadowView;
	WFDrawerGrabberView* _grabberView;
	UIVisualEffectView* _visualEffectView;
	UIView* _backgroundView;
	UIView* _backgroundContentView;

}

@property (assign,nonatomic,__weak) UIView * shadowView;                                                       //@synthesize shadowView=_shadowView - In the implementation block
@property (assign,nonatomic,__weak) WFDrawerGrabberView * grabberView;                                         //@synthesize grabberView=_grabberView - In the implementation block
@property (assign,nonatomic,__weak) UIVisualEffectView * visualEffectView;                                     //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (assign,nonatomic,__weak) UIView * backgroundView;                                                   //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic,__weak) UIView * backgroundContentView;                                            //@synthesize backgroundContentView=_backgroundContentView - In the implementation block
@property (assign,getter=isCandidateForContentCapture,nonatomic) BOOL candidateForContentCapture;              //@synthesize candidateForContentCapture=_candidateForContentCapture - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                                           //@synthesize contentView=_contentView - In the implementation block
@property (assign,getter=isTranslucent,nonatomic) BOOL translucent;                                            //@synthesize translucent=_translucent - In the implementation block
@property (assign,nonatomic) BOOL roundsTopCorners;                                                            //@synthesize roundsTopCorners=_roundsTopCorners - In the implementation block
@property (assign,nonatomic) BOOL usesVisualEffectView;                                                        //@synthesize usesVisualEffectView=_usesVisualEffectView - In the implementation block
@property (nonatomic,copy) NSString * drawerGroup;                                                             //@synthesize drawerGroup=_drawerGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIViewController * viewController;                                                //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic,__weak) WFDrawerPaneContainer * container;                                         //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) CGRect grabberAreaBounds; 
@property (assign,nonatomic) double bottomContentInset;                                                        //@synthesize bottomContentInset=_bottomContentInset - In the implementation block
@property (assign,nonatomic) double topCornerRadius;                                                           //@synthesize topCornerRadius=_topCornerRadius - In the implementation block
@property (assign,nonatomic,__weak) UIView*<WFDrawerPaneHeaderView> activeHeaderView;                          //@synthesize activeHeaderView=_activeHeaderView - In the implementation block
@property (nonatomic,copy) NSString * title;                                                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIView * titleView;                                                               //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) UISearchBar * searchBar;                                                          //@synthesize searchBar=_searchBar - In the implementation block
-(UISearchBar *)searchBar;
-(void)viewWillLayoutSubviews;
-(double)bottomContentInset;
-(void)setTranslucent:(BOOL)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(void)setRoundsTopCorners:(BOOL)arg1 ;
-(BOOL)roundsTopCorners;
-(void)setGrabberView:(WFDrawerGrabberView *)arg1 ;
-(UIView *)titleView;
-(BOOL)isTranslucent;
-(void)setBottomContentInset:(double)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithViewController:(id)arg1 ;
-(UIView *)backgroundView;
-(UIVisualEffectView *)visualEffectView;
-(void)setTitle:(NSString *)arg1 ;
-(UIView *)shadowView;
-(void)setTitleView:(UIView *)arg1 ;
-(void)setContainer:(WFDrawerPaneContainer *)arg1 ;
-(UIViewController *)viewController;
-(WFDrawerGrabberView *)grabberView;
-(BOOL)accessibilityPerformEscape;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setShadowView:(UIView *)arg1 ;
-(void)loadView;
-(UIView *)contentView;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
-(WFDrawerPaneContainer *)container;
-(NSString *)title;
-(void)updateHeaderView;
-(id)wf_drawerController;
-(id)wf_drawerItem;
-(void)wf_setDrawerController:(id)arg1 ;
-(void)wf_setDrawerItem:(id)arg1 ;
-(NSString *)drawerGroup;
-(void)willTransitionToVisibility:(unsigned long long)arg1 ;
-(void)transitionContentForHeight:(double)arg1 ;
-(CGRect)grabberAreaBounds;
-(double)topCornerRadius;
-(void)setTopCornerRadius:(double)arg1 ;
-(UIView*<WFDrawerPaneHeaderView>)activeHeaderView;
-(void)setActiveHeaderView:(UIView*<WFDrawerPaneHeaderView>)arg1 ;
-(void)didDismissHeaderView:(id)arg1 ;
-(void)setCandidateForContentCapture:(BOOL)arg1 ;
-(void)setDrawerGroup:(NSString *)arg1 ;
-(void)updatePaneProperties;
-(void)installChildViewController:(id)arg1 ;
-(BOOL)usesVisualEffectView;
-(void)setUsesVisualEffectView:(BOOL)arg1 ;
-(UIView *)backgroundContentView;
-(void)setBackgroundContentView:(UIView *)arg1 ;
-(BOOL)isCandidateForContentCapture;
@end

