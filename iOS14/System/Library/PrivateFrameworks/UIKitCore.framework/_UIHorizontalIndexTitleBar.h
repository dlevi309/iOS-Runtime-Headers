/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol _UIHorizontalIndexTitleBarDelegate;
@class NSArray, UICollectionView, UICollectionViewFlowLayout, UIFocusGuide, _UIFocusFastScrollingIndexBarEntry, _UIHorizontalIndexTitleBarCell, NSString;

@interface _UIHorizontalIndexTitleBar : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	NSArray* _entries;
	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _flowLayout;
	UIFocusGuide* _horizontalIndexTitleBarFocusGuide;
	_UIFocusFastScrollingIndexBarEntry* _selectedEntry;
	_UIHorizontalIndexTitleBarCell* _focusedCell;
	_UIHorizontalIndexTitleBarCell* _selectedCell;
	id<_UIHorizontalIndexTitleBarDelegate> _delegate;
	UIEdgeInsets _sectionInset;
	UIEdgeInsets _parentContentInset;

}

@property (nonatomic,retain) UICollectionView * collectionView;                                                                      //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UICollectionViewFlowLayout * flowLayout;                                                                //@synthesize flowLayout=_flowLayout - In the implementation block
@property (nonatomic,retain) UIFocusGuide * horizontalIndexTitleBarFocusGuide;                                                       //@synthesize horizontalIndexTitleBarFocusGuide=_horizontalIndexTitleBarFocusGuide - In the implementation block
@property (nonatomic,retain) NSArray * entries;                                                                                      //@synthesize entries=_entries - In the implementation block
@property (nonatomic,retain) _UIFocusFastScrollingIndexBarEntry * selectedEntry;                                                     //@synthesize selectedEntry=_selectedEntry - In the implementation block
@property (assign,nonatomic,__weak) _UIHorizontalIndexTitleBarCell * focusedCell;                                                    //@synthesize focusedCell=_focusedCell - In the implementation block
@property (assign,nonatomic,__weak) _UIHorizontalIndexTitleBarCell * selectedCell;                                                   //@synthesize selectedCell=_selectedCell - In the implementation block
@property (assign,nonatomic,__weak) id<_UIHorizontalIndexTitleBarDelegate> delegate;                                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,setter=_setParentContentInset:,getter=_parentContentInset,nonatomic) UIEdgeInsets parentContentInset;              //@synthesize parentContentInset=_parentContentInset - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sectionInset;                                                                              //@synthesize sectionInset=_sectionInset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(id)preferredFocusEnvironments;
-(void)setEntries:(NSArray *)arg1 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)init;
-(id<_UIHorizontalIndexTitleBarDelegate>)delegate;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(UICollectionView *)collectionView;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(NSArray *)entries;
-(void)commonInit;
-(void)setDelegate:(id<_UIHorizontalIndexTitleBarDelegate>)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UICollectionViewFlowLayout *)flowLayout;
-(UIEdgeInsets)sectionInset;
-(_UIFocusFastScrollingIndexBarEntry *)selectedEntry;
-(void)_setParentContentInset:(UIEdgeInsets)arg1 ;
-(BOOL)_isViewEntryCell:(id)arg1 ;
-(_UIHorizontalIndexTitleBarCell *)focusedCell;
-(void)setSectionInset:(UIEdgeInsets)arg1 ;
-(_UIHorizontalIndexTitleBarCell *)selectedCell;
-(void)_updateWithEntries:(id)arg1 ;
-(void)_cancelDelayedFocusAction;
-(void)_sendDelayedFocusActionIfNecessary;
-(void)setSelectedCell:(_UIHorizontalIndexTitleBarCell *)arg1 ;
-(id)_currentlyFocusedCell;
-(void)_updateSectionInset;
-(void)setFocusedCell:(_UIHorizontalIndexTitleBarCell *)arg1 ;
-(void)_clearSelectedCell;
-(UIEdgeInsets)_parentContentInset;
-(void)_selectFocusedCell;
-(void)setHorizontalIndexTitleBarFocusGuide:(UIFocusGuide *)arg1 ;
-(void)_flipIfRightToLeft;
-(UIFocusGuide *)horizontalIndexTitleBarFocusGuide;
-(void)setSelectedEntry:(_UIFocusFastScrollingIndexBarEntry *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_selectEntryForTitleIndex:(long long)arg1 ;
-(void)setFlowLayout:(UICollectionViewFlowLayout *)arg1 ;
@end

