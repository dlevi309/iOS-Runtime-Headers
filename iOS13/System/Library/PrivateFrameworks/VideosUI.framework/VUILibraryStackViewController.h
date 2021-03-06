/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDelegate.h>

@class NSIndexPath, VUILibraryStackView, UICollectionView, NSString;

@interface VUILibraryStackViewController : UIViewController <UICollectionViewDelegate> {

	BOOL _requiresRelayout;
	NSIndexPath* _focusedIndexPath;
	VUILibraryStackView* _stackView;
	UICollectionView* _stackCollectionView;

}

@property (nonatomic,readonly) VUILibraryStackView * stackView;                     //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) UICollectionView * stackCollectionView;              //@synthesize stackCollectionView=_stackCollectionView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(VUILibraryStackView *)stackView;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)preferredStatusBarStyle;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(void)scrollToTop;
-(void)_updateNavigationBarPadding;
-(void)configureWithCollectionView:(id)arg1 ;
-(UICollectionView *)stackCollectionView;
-(void)_invalidateLayouts;
@end

