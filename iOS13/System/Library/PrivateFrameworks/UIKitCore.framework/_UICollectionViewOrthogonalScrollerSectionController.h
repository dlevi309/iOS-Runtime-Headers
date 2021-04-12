/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UICollectionView, NSMapTable, NSHashTable, NSIndexSet, UIScrollView, NSString;

@interface _UICollectionViewOrthogonalScrollerSectionController : NSObject <UIScrollViewDelegate> {

	UICollectionView* _collectionView;
	NSMapTable* _scrollViewFromSectionMap;
	NSMapTable* _scrollViewToSectionMap;
	NSHashTable* _frontMostElements;
	NSIndexSet* _currentOrthogonalSectionIndexes;
	UIScrollView* _scrollViewCurrentlyBeingConfigured;

}

@property (assign,nonatomic,__weak) UICollectionView * collectionView;                       //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) NSMapTable * scrollViewFromSectionMap;                          //@synthesize scrollViewFromSectionMap=_scrollViewFromSectionMap - In the implementation block
@property (nonatomic,retain) NSMapTable * scrollViewToSectionMap;                            //@synthesize scrollViewToSectionMap=_scrollViewToSectionMap - In the implementation block
@property (nonatomic,retain) NSHashTable * frontMostElements;                                //@synthesize frontMostElements=_frontMostElements - In the implementation block
@property (nonatomic,retain) NSIndexSet * currentOrthogonalSectionIndexes;                   //@synthesize currentOrthogonalSectionIndexes=_currentOrthogonalSectionIndexes - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollViewCurrentlyBeingConfigured;              //@synthesize scrollViewCurrentlyBeingConfigured=_scrollViewCurrentlyBeingConfigured - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(UICollectionView *)collectionView;
-(id)initWithCollectionView:(id)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)_scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)restoreLayoutContentOffsetsFromEmbeddedScrollViews;
-(BOOL)isElementInOrthogonalScrollingSection:(id)arg1 ;
-(void)addElementIfNeeded:(id)arg1 ;
-(void)adjustElementHierarchyOrderingForOrthogonalElementIfNeeded:(id)arg1 layoutAttributes:(id)arg2 ;
-(void)performLayout;
-(BOOL)isIndexPathInOrthogonalScrollingSection:(id)arg1 ;
-(void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)reconfigureOrthogonalSectionsForUpdate:(id)arg1 ;
-(id)_sectionScrollViewForIndexPath:(id)arg1 ;
-(id)_addSectionScrollViewForIndexPath:(id)arg1 ;
-(NSMapTable *)scrollViewFromSectionMap;
-(CGSize)_contentSizeForSection:(long long)arg1 layout:(id)arg2 ;
-(UIScrollView *)scrollViewCurrentlyBeingConfigured;
-(void)setScrollViewCurrentlyBeingConfigured:(UIScrollView *)arg1 ;
-(void)_configureScrollView:(id)arg1 forSection:(long long)arg2 baseContentInsets:(UIEdgeInsets)arg3 ;
-(void)setScrollViewFromSectionMap:(NSMapTable *)arg1 ;
-(void)setScrollViewToSectionMap:(NSMapTable *)arg1 ;
-(void)setCurrentOrthogonalSectionIndexes:(NSIndexSet *)arg1 ;
-(NSIndexSet *)currentOrthogonalSectionIndexes;
-(id)_sectionScrollViewForSection:(long long)arg1 ;
-(id)_addSectionScrollViewForSection:(long long)arg1 ;
-(NSMapTable *)scrollViewToSectionMap;
-(void)_forceElementsOnTopAsNeeded;
-(id)_managedScrollViews;
-(NSHashTable *)frontMostElements;
-(void)setFrontMostElements:(NSHashTable *)arg1 ;
@end

