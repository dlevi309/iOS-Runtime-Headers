/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UICollectionView, NSMapTable, NSHashTable, NSIndexSet, _UICollectionViewOrthogonalScrollerEmbeddedScrollView, NSString;

@interface _UICollectionViewOrthogonalScrollerSectionController : NSObject <UIScrollViewDelegate> {

	BOOL _isHandlingScrollViewDelegateCallout;
	UICollectionView* _collectionView;
	NSMapTable* _scrollViewFromSectionMap;
	NSMapTable* _scrollViewToSectionMap;
	NSHashTable* _frontMostElements;
	NSIndexSet* _currentOrthogonalSectionIndexes;
	_UICollectionViewOrthogonalScrollerEmbeddedScrollView* _scrollViewCurrentlyBeingConfigured;

}

@property (assign,nonatomic,__weak) UICollectionView * collectionView;                                                                //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) NSMapTable * scrollViewFromSectionMap;                                                                   //@synthesize scrollViewFromSectionMap=_scrollViewFromSectionMap - In the implementation block
@property (nonatomic,retain) NSMapTable * scrollViewToSectionMap;                                                                     //@synthesize scrollViewToSectionMap=_scrollViewToSectionMap - In the implementation block
@property (nonatomic,retain) NSHashTable * frontMostElements;                                                                         //@synthesize frontMostElements=_frontMostElements - In the implementation block
@property (nonatomic,retain) NSIndexSet * currentOrthogonalSectionIndexes;                                                            //@synthesize currentOrthogonalSectionIndexes=_currentOrthogonalSectionIndexes - In the implementation block
@property (nonatomic,retain) _UICollectionViewOrthogonalScrollerEmbeddedScrollView * scrollViewCurrentlyBeingConfigured;              //@synthesize scrollViewCurrentlyBeingConfigured=_scrollViewCurrentlyBeingConfigured - In the implementation block
@property (assign,nonatomic) BOOL isHandlingScrollViewDelegateCallout;                                                                //@synthesize isHandlingScrollViewDelegateCallout=_isHandlingScrollViewDelegateCallout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCollectionView:(id)arg1 ;
-(void)setFrontMostElements:(NSHashTable *)arg1 ;
-(NSIndexSet *)currentOrthogonalSectionIndexes;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)addElementIfNeeded:(id)arg1 ;
-(void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)setScrollViewToSectionMap:(NSMapTable *)arg1 ;
-(NSHashTable *)frontMostElements;
-(UICollectionView *)collectionView;
-(id)_managedScrollViews;
-(id)_addSectionScrollViewForSection:(long long)arg1 ;
-(id)_add_sectionScrollViewForIndexPath:(id)arg1 ;
-(void)performLayout;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)_configureScrollView:(id)arg1 forSection:(long long)arg2 baseContentInsets:(UIEdgeInsets)arg3 isInitialConfiguration:(BOOL)arg4 ;
-(void)setScrollViewFromSectionMap:(NSMapTable *)arg1 ;
-(void)reconfigureOrthogonalSectionsForUpdate:(id)arg1 ;
-(void)setCurrentOrthogonalSectionIndexes:(NSIndexSet *)arg1 ;
-(BOOL)isIndexPathInExtantOrthogonalScroller:(id)arg1 ;
-(void)_scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(id)_sectionScrollViewForSection:(long long)arg1 ;
-(_UICollectionViewOrthogonalScrollerEmbeddedScrollView *)scrollViewCurrentlyBeingConfigured;
-(void)cleanupEmbeddedOrthogonalScrollViews;
-(NSMapTable *)scrollViewFromSectionMap;
-(void)setScrollViewCurrentlyBeingConfigured:(_UICollectionViewOrthogonalScrollerEmbeddedScrollView *)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(BOOL)isIndexPathInOrthogonalScrollingSection:(id)arg1 ;
-(NSMapTable *)scrollViewToSectionMap;
-(BOOL)isElementInOrthogonalScrollingSection:(id)arg1 ;
-(id)_sectionScrollViewForIndexPath:(id)arg1 ;
-(BOOL)isHandlingScrollViewDelegateCallout;
-(CGSize)_contentSizeForSection:(long long)arg1 layout:(id)arg2 ;
-(void)setIsHandlingScrollViewDelegateCallout:(BOOL)arg1 ;
-(void)adjustElementHierarchyOrderingForOrthogonalElementIfNeeded:(id)arg1 layoutAttributes:(id)arg2 ;
-(void)_forceElementsOnTopAsNeeded;
@end

