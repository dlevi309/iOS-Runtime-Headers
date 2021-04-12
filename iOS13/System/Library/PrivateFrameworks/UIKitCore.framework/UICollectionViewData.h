/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UICollectionView, UICollectionViewLayout, NSMapTable, NSMutableIndexSet, NSMutableDictionary, NSMutableArray, NSArray;

@interface UICollectionViewData : NSObject {

	UICollectionView* _collectionView;
	UICollectionViewLayout* _layout;
	NSMapTable* _screenPageMap;
	NSMutableIndexSet* _globalIndexesOfItemsAwaitingValidation;
	NSMutableDictionary* _supplementaryLayoutAttributes;
	NSMutableDictionary* _decorationLayoutAttributes;
	NSMutableDictionary* _invalidatedSupplementaryIndexPaths;
	NSMutableDictionary* _invalidatedDecorationIndexPaths;
	CGRect _validLayoutRect;
	long long _lastSectionTestedForNumberOfItemsBeforeSection;
	long long _lastResultForNumberOfItemsBeforeSection;
	CGSize _contentSize;
	NSMutableArray* _clonedCellAttributes;
	NSMutableArray* _clonedSupplementaryAttributes;
	NSMutableArray* _clonedDecorationAttributes;
	struct {
		unsigned contentSizeIsValid : 1;
		unsigned itemCountsAreValid : 1;
		unsigned layoutIsPreparing : 1;
		unsigned layoutIsPrepared : 1;
		unsigned layoutLocked : 1;
	}  _collectionViewDataFlags;
	vector<UICollectionViewLayoutAttributes *, std::__1::allocator<UICollectionViewLayoutAttributes *> >* _globalItems;
	vector<long, std::__1::allocator<long> >* _sectionItemCounts;

}

@property (nonatomic,readonly) BOOL layoutIsPrepared; 
@property (assign,getter=isLayoutLocked,nonatomic) BOOL layoutLocked; 
@property (assign,nonatomic) CGSize contentSize;                                     //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,readonly) NSArray * clonedCellAttributes;                       //@synthesize clonedCellAttributes=_clonedCellAttributes - In the implementation block
@property (nonatomic,readonly) NSArray * clonedSupplementaryAttributes;              //@synthesize clonedSupplementaryAttributes=_clonedSupplementaryAttributes - In the implementation block
@property (nonatomic,readonly) NSArray * clonedDecorationAttributes;                 //@synthesize clonedDecorationAttributes=_clonedDecorationAttributes - In the implementation block
+(void)initialize;
-(void)invalidate:(BOOL)arg1 ;
-(CGSize)contentSize;
-(void)setContentSize:(CGSize)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(void)invalidateItemsAtIndexPaths:(id)arg1 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(long long)numberOfSections;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfItems;
-(BOOL)dataSourceMatchesCurrentCounts;
-(BOOL)layoutIsPrepared;
-(CGRect)collectionViewContentRect;
-(id)layoutAttributesForCellsInRect:(CGRect)arg1 validateLayout:(BOOL)arg2 ;
-(id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(NSArray *)clonedCellAttributes;
-(NSArray *)clonedSupplementaryAttributes;
-(NSArray *)clonedDecorationAttributes;
-(void)validateLayoutInRect:(CGRect)arg1 ;
-(id)initWithCollectionView:(id)arg1 layout:(id)arg2 ;
-(void)_prepareToLoadData;
-(long long)validatedGlobalIndexForItemAtIndexPath:(id)arg1 ;
-(BOOL)isIndexPathValid:(id)arg1 ;
-(CGRect)rectForItemAtIndexPath:(id)arg1 ;
-(id)indexPathForItemAtGlobalIndex:(long long)arg1 ;
-(void)setLayoutLocked:(BOOL)arg1 ;
-(id)validatedIndexPathForItemAtGlobalIndex:(long long)arg1 ;
-(long long)globalIndexForItemAtIndexPath:(id)arg1 ;
-(id)existingSupplementaryLayoutAttributesInSection:(long long)arg1 ;
-(id)layoutAttributesForGlobalItemIndex:(long long)arg1 ;
-(id)existingSupplementaryLayoutAttributes;
-(CGRect)rectForDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(CGRect)rectForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)knownDecorationElementKinds;
-(id)knownSupplementaryElementKinds;
-(void)invalidateSupplementaryIndexPaths:(id)arg1 ;
-(void)invalidateDecorationIndexPaths:(id)arg1 ;
-(void)_updateItemCounts;
-(void)_validateItemCounts;
-(void)_validateContentSize;
-(id)_screenPageForPoint:(CGPoint)arg1 ;
-(void)_setLayoutAttributes:(id)arg1 atGlobalItemIndex:(int)arg2 ;
-(void)validateSupplementaryViews;
-(void)validateDecorationViews;
-(BOOL)isIndexPathValid:(id)arg1 validateItemCounts:(BOOL)arg2 ;
-(BOOL)isGlobalIndexValid:(long long)arg1 ;
-(long long)numberOfItemsBeforeSection:(long long)arg1 ;
-(id)_layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(void)_loadEverything;
-(CGRect)rectForGlobalItemIndex:(long long)arg1 ;
-(id)layoutAttributesForElementsInSection:(long long)arg1 ;
-(BOOL)isLayoutLocked;
-(CGRect)_TEST_validLayoutRect;
@end

