/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <UIKit/UIPointerInteractionDelegate.h>

@protocol PMSliderProviderProtocol;
@class UICollectionViewFlowLayout, NSString;

@interface PMiOSSliderViewController : UICollectionViewController <UIPointerInteractionDelegate> {

	BOOL _needsMiddlePositionUpdate;
	BOOL _ignoreScrolling;
	id<PMSliderProviderProtocol> _provider;
	UICollectionViewFlowLayout* _flowLayout;
	long long _selectedItem;

}

@property (nonatomic,readonly) UICollectionViewFlowLayout * flowLayout;              //@synthesize flowLayout=_flowLayout - In the implementation block
@property (assign,nonatomic) long long selectedItem;                                 //@synthesize selectedItem=_selectedItem - In the implementation block
@property (assign,nonatomic) BOOL needsMiddlePositionUpdate;                         //@synthesize needsMiddlePositionUpdate=_needsMiddlePositionUpdate - In the implementation block
@property (assign,nonatomic) BOOL ignoreScrolling;                                   //@synthesize ignoreScrolling=_ignoreScrolling - In the implementation block
@property (nonatomic,retain) id<PMSliderProviderProtocol> provider;                  //@synthesize provider=_provider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(CGPoint)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)setProvider:(id<PMSliderProviderProtocol>)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)init;
-(id<PMSliderProviderProtocol>)provider;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)updateFonts;
-(void)viewDidLoad;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(UICollectionViewFlowLayout *)flowLayout;
-(long long)selectedItem;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)setSelectedItem:(long long)arg1 ;
-(void)dealloc;
-(void)setIgnoreScrolling:(BOOL)arg1 ;
-(BOOL)needsMiddlePositionUpdate;
-(void)setNeedsMiddlePositionUpdate:(BOOL)arg1 ;
-(void)invalidateSelectedItemPostion;
-(void)_setFontStyleForCell:(id)arg1 highlighted:(BOOL)arg2 ;
-(id)indexPathToMiddleItemInCollectionView:(id)arg1 ;
-(BOOL)ignoreScrolling;
-(CGPoint)pointForMiddleOfItemInCollectionView:(id)arg1 withOffset:(CGPoint)arg2 ;
-(void)performScrollTest:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4 ;
@end

