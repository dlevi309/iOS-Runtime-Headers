/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <libobjc.A.dylib/ASCLockupViewDelegate.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>

@class UICollectionView;

@interface GameCenterUI.BaseCollectionViewController : UICollectionViewController <ASCLockupViewDelegate, UIAdaptivePresentationControllerDelegate> {

	 overlayView;
	 wantsHiddenNavigationBar;
	 wantsHiddenTitle;
	 manualScrollEdgeAppearanceProgress;
	 scrollObserver;
	 navbarScrollObserver;

}

@property (retain,nonatomic) UICollectionView * collectionView; 
-(id)presentingViewControllerForLockupView:(id)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UICollectionView *)collectionView;
-(void)viewDidLoad;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

