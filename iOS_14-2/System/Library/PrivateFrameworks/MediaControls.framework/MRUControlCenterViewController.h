/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <MediaControls/MediaControlsEndpointsManagerDelegate.h>
#import <libobjc.A.dylib/MRUNowPlayingViewControllerDelegate.h>
#import <libobjc.A.dylib/MRUEndpointMetadataControllerObserver.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/MRUModuleViewController.h>

@class MediaControlsEndpointsManager, UICollectionViewDiffableDataSource, NSMutableDictionary, MRUNowPlayingViewController, UIViewController, FBSDisplayLayoutMonitor, MRUControlCenterView, NSString, UIViewPropertyAnimator;

@interface MRUControlCenterViewController : UIViewController <MediaControlsEndpointsManagerDelegate, MRUNowPlayingViewControllerDelegate, MRUEndpointMetadataControllerObserver, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, UIGestureRecognizerDelegate, MRUModuleViewController> {

	BOOL _onScreen;
	/*^block*/id _dismissalBlock;
	/*^block*/id _routingCornerViewTappedBlock;
	/*^block*/id _homeGestureDismissalAllowedBlock;
	MediaControlsEndpointsManager* _endpointsManager;
	UICollectionViewDiffableDataSource* _dataSource;
	NSMutableDictionary* _viewControllers;
	MRUNowPlayingViewController* _selectedViewController;
	/*^block*/id _replaceRoutes;
	UIViewController* _alertViewController;
	FBSDisplayLayoutMonitor* _displayMonitor;

}

@property (nonatomic,retain) MRUControlCenterView * view; 
@property (nonatomic,retain) MRUControlCenterView * viewIfLoaded; 
@property (nonatomic,retain) MediaControlsEndpointsManager * endpointsManager;                  //@synthesize endpointsManager=_endpointsManager - In the implementation block
@property (nonatomic,retain) UICollectionViewDiffableDataSource * dataSource;                   //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * viewControllers;                             //@synthesize viewControllers=_viewControllers - In the implementation block
@property (nonatomic,retain) MRUNowPlayingViewController * selectedViewController;              //@synthesize selectedViewController=_selectedViewController - In the implementation block
@property (nonatomic,copy) id replaceRoutes;                                                    //@synthesize replaceRoutes=_replaceRoutes - In the implementation block
@property (assign,getter=isOnScreen,nonatomic) BOOL onScreen;                                   //@synthesize onScreen=_onScreen - In the implementation block
@property (nonatomic,retain) UIViewController * alertViewController;                            //@synthesize alertViewController=_alertViewController - In the implementation block
@property (nonatomic,retain) FBSDisplayLayoutMonitor * displayMonitor;                          //@synthesize displayMonitor=_displayMonitor - In the implementation block
@property (nonatomic,copy) id dismissalBlock;                                                   //@synthesize dismissalBlock=_dismissalBlock - In the implementation block
@property (nonatomic,copy) id routingCornerViewTappedBlock;                                     //@synthesize routingCornerViewTappedBlock=_routingCornerViewTappedBlock - In the implementation block
@property (nonatomic,copy) id homeGestureDismissalAllowedBlock;                                 //@synthesize homeGestureDismissalAllowedBlock=_homeGestureDismissalAllowedBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double preferredExpandedContentHeight; 
@property (nonatomic,readonly) double preferredExpandedContentWidth; 
@property (nonatomic,readonly) double preferredExpandedContinuousCornerRadius; 
@property (nonatomic,readonly) BOOL providesOwnPlatter; 
@property (nonatomic,readonly) UIViewPropertyAnimator * customAnimator; 
@property (nonatomic,readonly) BOOL shouldPerformHoverInteraction; 
@property (nonatomic,readonly) BOOL shouldPerformClickInteraction; 
-(id)routingCornerViewTappedBlock;
-(void)dismissPresentedContentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewWillLayoutSubviews;
-(BOOL)canDismissPresentedContent;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)isOnScreen;
-(void)setViewControllers:(NSMutableDictionary *)arg1 ;
-(BOOL)providesOwnPlatter;
-(id)init;
-(void)setRoutingCornerViewTappedBlock:(id)arg1 ;
-(NSMutableDictionary *)viewControllers;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)endpointsManager:(id)arg1 activeSystemRouteDidChange:(id)arg2 ;
-(void)setEndpointsManager:(MediaControlsEndpointsManager *)arg1 ;
-(void)setOnScreen:(BOOL)arg1 ;
-(UICollectionViewDiffableDataSource *)dataSource;
-(void)updateViewControllers;
-(double)preferredExpandedContentHeight;
-(BOOL)shouldExpandModuleOnTouch:(id)arg1 ;
-(BOOL)shouldPerformHoverInteraction;
-(void)setDataSource:(UICollectionViewDiffableDataSource *)arg1 ;
-(double)preferredExpandedContentWidth;
-(FBSDisplayLayoutMonitor *)displayMonitor;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)setDismissalBlock:(id)arg1 ;
-(void)setState:(long long)arg1 ;
-(id)dismissalBlock;
-(void)endpointsManager:(id)arg1 defersRoutesReplacement:(/*^block*/id)arg2 ;
-(void)setHomeGestureDismissalAllowedBlock:(id)arg1 ;
-(void)setSelectedViewController:(MRUNowPlayingViewController *)arg1 ;
-(void)setDisplayMonitor:(FBSDisplayLayoutMonitor *)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(void)transitionToState:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)homeGestureDismissalAllowedBlock;
-(MediaControlsEndpointsManager *)endpointsManager;
-(MRUNowPlayingViewController *)selectedViewController;
-(void)dismiss;
-(void)nowPlayingViewController:(id)arg1 didChangeSizeWithAnimations:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)nowPlayingViewControllerDidChangeLayout:(id)arg1 ;
-(void)nowPlayingViewController:(id)arg1 showViewController:(id)arg2 ;
-(id)selectedIdentifier;
-(void)didSelectListState:(id)arg1 ;
-(void)updateCell:(id)arg1 forIdentifier:(id)arg2 ;
-(void)updateDiscoveryMode;
-(void)updateLockedState;
-(void)updateSelectedViewControllerLayout;
-(UIViewController *)alertViewController;
-(void)setAlertViewController:(UIViewController *)arg1 ;
-(void)updateMetadataControllers;
-(void)updateCellForIdentifier:(id)arg1 ;
-(void)updateMoreButtonVisibility;
-(void)didSelectQuickActionButton:(id)arg1 ;
-(void)updateVisibilityForActiveCell:(BOOL)arg1 inActiveCells:(BOOL)arg2 ;
-(BOOL)metadataControllerShouldAutomaticallyUpdateReponse:(id)arg1 ;
-(void)metadataController:(id)arg1 didLoadNewResponse:(id)arg2 ;
-(void)metadataController:(id)arg1 didUpdateApplicationIcon:(id)arg2 ;
-(void)metadataControllerDidChangeState:(id)arg1 ;
-(void)metadataControllerDidUpdateRoutingAvailability:(id)arg1 ;
-(void)metadataControllerRouteDidUpdate:(id)arg1 ;
-(id)replaceRoutes;
-(void)setReplaceRoutes:(id)arg1 ;
@end

