/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(void)viewWillLayoutSubviews;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)setContentMargins:(unsigned long long)arg1 ;
-(id<HUServiceGridViewControllerDelegate>)delegate;
-(unsigned long long)contentMargins;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)scrollDirection;
-(id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(CGSize)preferredContentSizeForCollectionViewContentSize:(CGSize)arg1 ;
-(void)setScrollDirection:(long long)arg1 ;
-(void)setDelegate:(id<HUServiceGridViewControllerDelegate>)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)configureCell:(id)arg1 forItem:(id)arg2 ;
-(HUGridLayoutOptions *)layoutOptions;
-(void)itemManager:(id)arg1 performUpdateRequest:(id)arg2 ;
-(id)_performTapActionForItem:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)setLayoutOptions:(HUGridLayoutOptions *)arg1 ;
-(id)_defaultLayoutOptionsForViewSize:(CGSize)arg1 ;
-(id)initWithItemManager:(id)arg1 ;
-(void)layoutOptionsDidChange;
-(id)layoutOptionsForSection:(long long)arg1 ;
-(unsigned long long)itemTypeForItem:(id)arg1 ;
-(BOOL)shouldShowLoadingState;
-(void)setShouldShowLoadingState:(BOOL)arg1 ;
-(void)_layoutSectionHeaders;
@end

