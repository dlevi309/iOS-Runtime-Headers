/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIKitCore/UICollectionViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class ICPaperStyleHeaderView, NSString;

@interface ICPaperStyleCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout> {

	BOOL _forPreferences;
	BOOL _needsUpdateItemSpacing;
	double _itemSpacing;
	double _itemSpacingVertical;
	ICPaperStyleHeaderView* _headerViewMeasuringCell;
	CGSize _itemSize;
	UIEdgeInsets _sectionInsets;

}

@property (assign,nonatomic) BOOL forPreferences;                                           //@synthesize forPreferences=_forPreferences - In the implementation block
@property (assign,nonatomic) BOOL needsUpdateItemSpacing;                                   //@synthesize needsUpdateItemSpacing=_needsUpdateItemSpacing - In the implementation block
@property (assign,nonatomic) double itemSpacing;                                            //@synthesize itemSpacing=_itemSpacing - In the implementation block
@property (assign,nonatomic) double itemSpacingVertical;                                    //@synthesize itemSpacingVertical=_itemSpacingVertical - In the implementation block
@property (assign,nonatomic) CGSize itemSize;                                               //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sectionInsets;                                    //@synthesize sectionInsets=_sectionInsets - In the implementation block
@property (nonatomic,retain) ICPaperStyleHeaderView * headerViewMeasuringCell;              //@synthesize headerViewMeasuringCell=_headerViewMeasuringCell - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(void)viewWillLayoutSubviews;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)itemSize;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(double)itemSpacing;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)init;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)viewDidLoad;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(void)setItemSpacing:(double)arg1 ;
-(void)setSectionInsets:(UIEdgeInsets)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(UIEdgeInsets)sectionInsets;
-(void)updateSettings;
-(void)setItemSize:(CGSize)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setForPreferences:(BOOL)arg1 ;
-(void)setHeaderViewMeasuringCell:(ICPaperStyleHeaderView *)arg1 ;
-(void)setNeedsUpdateItemSpacing:(BOOL)arg1 ;
-(id)indexPathFromSetting:(id)arg1 ;
-(BOOL)needsUpdateItemSpacing;
-(void)updateItemSpacing;
-(id)indexPathForInitialSelection;
-(void)setItemSpacingVertical:(double)arg1 ;
-(double)itemSpacingVertical;
-(id)settingFromIndexPath:(id)arg1 ;
-(unsigned long long)paperStyleTypeFromIndexPath:(id)arg1 ;
-(id)indexPathFromPaperStyleType:(unsigned long long)arg1 ;
-(BOOL)forPreferences;
-(id)titleForHeaderView;
-(ICPaperStyleHeaderView *)headerViewMeasuringCell;
-(id)initWithLargeIcons:(BOOL)arg1 forPreferences:(BOOL)arg2 ;
@end

