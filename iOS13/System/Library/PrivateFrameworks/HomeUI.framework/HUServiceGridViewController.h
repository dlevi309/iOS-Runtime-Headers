/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUControllableItemCollectionViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol HUServiceGridViewControllerDelegate;
@class HUGridLayoutOptions, NSString;

@interface HUServiceGridViewController : HUControllableItemCollectionViewController <UICollectionViewDelegateFlowLayout> {

	BOOL _shouldShowLoadingState;
	unsigned long long _contentMargins;
	long long _scrollDirection;
	id<HUServiceGridViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) HUGridLayoutOptions * layoutOptions; 
@property (assign,nonatomic) unsigned long long contentMargins;                                    //@synthesize contentMargins=_contentMargins - In the implementation block
@property (assign,nonatomic) long long scrollDirection;                                            //@synthesize scrollDirection=_scrollDirection - In the implementation block
@property (assign,nonatomic) BOOL shouldShowLoadingState;                                          //@synthesize shouldShowLoadingState=_shouldShowLoadingState - In the implementation block
@property (assign,nonatomic,__weak) id<HUServiceGridViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HUServiceGridViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HUServiceGridViewControllerDelegate>)arg1 ;
-(HUGridLayoutOptions *)layoutOptions;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setScrollDirection:(long long)arg1 ;
-(long long)scrollDirection;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(void)setContentMargins:(unsigned long long)arg1 ;
-(unsigned long long)contentMargins;
-(unsigned long long)itemTypeForItem:(id)arg1 ;
-(void)setLayoutOptions:(HUGridLayoutOptions *)arg1 ;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(id)initWithItemManager:(id)arg1 ;
-(id)layoutOptionsForSection:(long long)arg1 ;
-(id)_performTapActionForItem:(id)arg1 ;
-(void)layoutOptionsDidChange;
-(id)_defaultLayoutOptionsForViewSize:(CGSize)arg1 ;
-(CGSize)preferredContentSizeForCollectionViewContentSize:(CGSize)arg1 ;
-(BOOL)shouldShowLoadingState;
-(void)setShouldShowLoadingState:(BOOL)arg1 ;
-(void)_layoutSectionHeaders;
@end

