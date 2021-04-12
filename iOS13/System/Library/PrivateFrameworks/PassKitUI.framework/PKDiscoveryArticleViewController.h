/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PKDiscoveryCardViewDelegate.h>
#import <libobjc.A.dylib/PKPaymentSetupDelegate.h>

@protocol OS_dispatch_queue;
@class PKDiscoveryArticleAnimatedTransitioningHandler, PKDiscoveryArticleLayout, PKDiscoveryDismissButton, UIActivityIndicatorView, UILabel, NSString, UIPanGestureRecognizer, UIScreenEdgePanGestureRecognizer, NSMutableDictionary, NSObject, PKDiscoveryCardView, UICollectionView;

@interface PKDiscoveryArticleViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate, PKDiscoveryCardViewDelegate, PKPaymentSetupDelegate> {

	PKDiscoveryArticleAnimatedTransitioningHandler* _transitioningHandler;
	PKDiscoveryArticleLayout* _articleLayout;
	UIEdgeInsets _contentInsets;
	PKDiscoveryDismissButton* _dismissButton;
	BOOL _isDownloading;
	UIActivityIndicatorView* _activityIndicator;
	UILabel* _downloadingLabel;
	NSString* _referrerIdentifierOverride;
	/*^block*/id _callToActionTappedOverride;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UIScreenEdgePanGestureRecognizer* _screenEdgePanGestureRecognizer;
	NSMutableDictionary* _cellImageCache;
	NSMutableDictionary* _imageDownloads;
	os_unfair_lock_s _lockDownloads;
	NSObject*<OS_dispatch_queue> _loadImageQueue;
	BOOL _hasSafeAreaInsetOverride;
	BOOL _animatingCard;
	BOOL _useCustomPresentation;
	BOOL _shouldHideStatusBar;
	PKDiscoveryCardView* _cardView;
	UICollectionView* _collectionView;
	UIEdgeInsets _safeAreaOverrideInsets;

}

@property (assign,nonatomic) BOOL shouldHideStatusBar;                                                   //@synthesize shouldHideStatusBar=_shouldHideStatusBar - In the implementation block
@property (nonatomic,readonly) PKDiscoveryCardView * cardView;                                           //@synthesize cardView=_cardView - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView;                                        //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) BOOL hasSafeAreaInsetOverride;                                              //@synthesize hasSafeAreaInsetOverride=_hasSafeAreaInsetOverride - In the implementation block
@property (assign,nonatomic) UIEdgeInsets safeAreaOverrideInsets;                                        //@synthesize safeAreaOverrideInsets=_safeAreaOverrideInsets - In the implementation block
@property (assign,getter=isAnimatingCard,nonatomic) BOOL animatingCard;                                  //@synthesize animatingCard=_animatingCard - In the implementation block
@property (assign,getter=shouldUseCustomPresentation,nonatomic) BOOL useCustomPresentation;              //@synthesize useCustomPresentation=_useCustomPresentation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(UICollectionView *)collectionView;
-(void)viewWillLayoutSubviews;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(long long)preferredStatusBarUpdateAnimation;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(void)_handlePanGesture:(id)arg1 ;
-(long long)modalPresentationStyle;
-(long long)modalTransitionStyle;
-(BOOL)prefersStatusBarHidden;
-(void)_systemTextSizeChanged;
-(void)setIsDownloading:(BOOL)arg1 ;
-(PKDiscoveryCardView *)cardView;
-(void)_dismissButtonTapped;
-(void)paymentSetupDidFinish:(id)arg1 ;
-(id)_paymentSetupNavigationControllerForProvisioningController:(id)arg1 ;
-(void)discoveryCardViewCTATapped:(id)arg1 callToAction:(id)arg2 ;
-(void)setCallToActionTappedOverride:(/*^block*/id)arg1 ;
-(id)initWithArticleLayout:(id)arg1 referrerIdentifier:(id)arg2 ;
-(void)setArticleLayout:(id)arg1 animated:(BOOL)arg2 ;
-(void)setSafeAreaOverrideInsets:(UIEdgeInsets)arg1 ;
-(void)setHasSafeAreaInsetOverride:(BOOL)arg1 ;
-(void)setAnimatingCard:(BOOL)arg1 ;
-(void)setShouldHideStatusBar:(BOOL)arg1 ;
-(long long)_dismissButtonStyleForCard;
-(void)_leftScreenEdgePanSwipeGesture:(id)arg1 ;
-(BOOL)isAnimatingCard;
-(void)_updateDismissButtonIfNecessary;
-(void)_dismissForActionCompleted:(BOOL)arg1 withRelevantPassUniqueIdentifier:(id)arg2 ;
-(id)_shelfForIndexPath:(id)arg1 ;
-(BOOL)shouldUseCustomPresentation;
-(BOOL)_hasCardInGalleryView;
-(void)_configureInlineMediaShelfView:(id)arg1 forInlineMediaShelf:(id)arg2 atIndexPath:(id)arg3 ;
-(void)_configureCallToActionShelfView:(id)arg1 forCallToActionShelf:(id)arg2 atIndexPath:(id)arg3 ;
-(void)_loadMedia:(id)arg1 forShelfViewAtIndexPath:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithItemIdentifier:(id)arg1 referrerIdentifier:(id)arg2 ;
-(void)setUseCustomPresentation:(BOOL)arg1 ;
-(BOOL)hasSafeAreaInsetOverride;
-(UIEdgeInsets)safeAreaOverrideInsets;
-(BOOL)shouldHideStatusBar;
@end

