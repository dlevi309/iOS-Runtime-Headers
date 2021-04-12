/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/ShareSheet-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@class UILongPressGestureRecognizer, NSIndexPath, NSArray, _UIActivityGroupActivityCell;

@interface _UIActivityGroupViewFlowLayout : UICollectionViewLayout {

	UILongPressGestureRecognizer* _editingGestureRecognizer;
	NSIndexPath* _indexPathForDraggedItem;
	double _evaluatedHorizontalItemOffset;
	NSArray* _preparedLayoutAttributes;
	NSArray* _preparedUpdateItems;
	_UIActivityGroupActivityCell* _draggingView;
	CGSize _evaluatedItemSize;
	CGSize _evaluatedContentSize;
	UIOffset _draggingOffset;
	UIEdgeInsets _externalSafeInset;
	UIEdgeInsets _evaluatedInset;

}

@property (assign,nonatomic) UIEdgeInsets evaluatedInset;                                          //@synthesize evaluatedInset=_evaluatedInset - In the implementation block
@property (assign,nonatomic) CGSize evaluatedItemSize;                                             //@synthesize evaluatedItemSize=_evaluatedItemSize - In the implementation block
@property (assign,nonatomic) CGSize evaluatedContentSize;                                          //@synthesize evaluatedContentSize=_evaluatedContentSize - In the implementation block
@property (assign,nonatomic) double evaluatedHorizontalItemOffset;                                 //@synthesize evaluatedHorizontalItemOffset=_evaluatedHorizontalItemOffset - In the implementation block
@property (nonatomic,copy) NSArray * preparedLayoutAttributes;                                     //@synthesize preparedLayoutAttributes=_preparedLayoutAttributes - In the implementation block
@property (nonatomic,copy) NSArray * preparedUpdateItems;                                          //@synthesize preparedUpdateItems=_preparedUpdateItems - In the implementation block
@property (assign,nonatomic) UIOffset draggingOffset;                                              //@synthesize draggingOffset=_draggingOffset - In the implementation block
@property (nonatomic,retain) _UIActivityGroupActivityCell * draggingView;                          //@synthesize draggingView=_draggingView - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * editingGestureRecognizer;              //@synthesize editingGestureRecognizer=_editingGestureRecognizer - In the implementation block
@property (nonatomic,copy) NSIndexPath * indexPathForDraggedItem;                                  //@synthesize indexPathForDraggedItem=_indexPathForDraggedItem - In the implementation block
@property (assign,nonatomic) UIEdgeInsets externalSafeInset;                                       //@synthesize externalSafeInset=_externalSafeInset - In the implementation block
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(CGSize)collectionViewContentSize;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(BOOL)_shouldScrollToContentBeginningInRightToLeft;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(UILongPressGestureRecognizer *)editingGestureRecognizer;
-(void)handleEditingGesture:(id)arg1 ;
-(UIEdgeInsets)evaluatedInset;
-(id)_indexPathsForItemsInSection:(long long)arg1 ;
-(CGSize)_evaluatePreferredItemSizeForItemsAtIndexPaths:(id)arg1 ;
-(UIEdgeInsets)_evaluateInsetForSectionAtIndex:(long long)arg1 ;
-(double)_evaluateHorizontalItemOffsetForItemSize:(CGSize)arg1 inset:(UIEdgeInsets)arg2 offscreenPeekInFactor:(float)arg3 ;
-(UIEdgeInsets)externalSafeInset;
-(void)setEvaluatedHorizontalItemOffset:(double)arg1 ;
-(void)setEvaluatedInset:(UIEdgeInsets)arg1 ;
-(void)setEvaluatedItemSize:(CGSize)arg1 ;
-(CGSize)evaluatedContentSize;
-(void)setEvaluatedContentSize:(CGSize)arg1 ;
-(id)_layoutAttributesForItemAtIndexPath:(id)arg1 numberOfItemsInSection:(unsigned long long)arg2 ;
-(void)setPreparedLayoutAttributes:(NSArray *)arg1 ;
-(BOOL)shouldReverseLayoutDirection;
-(NSArray *)preparedLayoutAttributes;
-(id)adjustLayoutAttributesForDraggingIfNeeded:(id)arg1 ;
-(NSArray *)preparedUpdateItems;
-(void)setPreparedUpdateItems:(NSArray *)arg1 ;
-(CGSize)evaluatedItemSize;
-(double)evaluatedHorizontalItemOffset;
-(NSIndexPath *)indexPathForDraggedItem;
-(id)indexPathForItemRecognizedByGesture:(id)arg1 ;
-(void)setDraggingOffset:(UIOffset)arg1 ;
-(void)setIndexPathForDraggedItem:(NSIndexPath *)arg1 ;
-(void)beginDraggingForGesture:(id)arg1 ;
-(void)updateDraggingViewForGesture:(id)arg1 ;
-(BOOL)shouldCancelDraggingForGesture:(id)arg1 ;
-(void)cancelDraggingForGesture:(id)arg1 ;
-(_UIActivityGroupActivityCell *)draggingView;
-(id)draggingViewForItemAtIndexPath:(id)arg1 ;
-(void)setDraggingView:(_UIActivityGroupActivityCell *)arg1 ;
-(void)invalidateGroupViewLayoutAnimated:(BOOL)arg1 ;
-(UIOffset)draggingOffset;
-(void)setEditingGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(void)setExternalSafeInset:(UIEdgeInsets)arg1 ;
@end

