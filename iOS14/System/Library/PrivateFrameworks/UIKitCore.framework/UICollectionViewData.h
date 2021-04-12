/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setContentSize:(CGSize)arg1 ;
-(void)_validateItemCounts;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(void)invalidate:(BOOL)arg1 ;
-(long long)globalIndexForItemAtIndexPath:(id)arg1 ;
-(void)validateSupplementaryViews;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(long long)numberOfItemsBeforeSection:(long long)arg1 ;
-(void)invalidateDecorationIndexPaths:(id)arg1 ;
-(long long)numberOfItems;
-(id)layoutAttributesForElementsInSection:(long long)arg1 ;
-(void)_prepareToLoadData;
-(CGRect)rectForDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(CGRect)rectForGlobalItemIndex:(long long)arg1 ;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)numberOfSections;
-(void)_validateContentSize;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 nilAttributesArePermitted:(BOOL)arg3 ;
-(CGSize)contentSize;
-(BOOL)isIndexPathValid:(id)arg1 ;
-(long long)validatedGlobalIndexForItemAtIndexPath:(id)arg1 ;
-(void)validateLayoutInRect:(CGRect)arg1 ;
-(CGRect)_TEST_validLayoutRect;
-(id)knownDecorationElementKinds;
-(long long)_extantNumberOfItems;
-(id)layoutAttributesForGlobalItemIndex:(long long)arg1 ;
-(void)_loadEverything;
-(id)validatedIndexPathForItemAtGlobalIndex:(long long)arg1 ;
-(CGRect)collectionViewContentRect;
-(BOOL)isIndexPathValid:(id)arg1 validateItemCounts:(BOOL)arg2 ;
-(void)_updateItemCounts;
-(id)layoutAttributesForCellsInRect:(CGRect)arg1 validateLayout:(BOOL)arg2 ;
-(NSArray *)clonedDecorationAttributes;
-(id)initWithCollectionView:(id)arg1 layout:(id)arg2 ;
-(BOOL)dataSourceMatchesCurrentCounts;
-(id)indexPathForItemAtGlobalIndex:(long long)arg1 ;
-(NSArray *)clonedSupplementaryAttributes;
-(void)invalidateItemsAtIndexPaths:(id)arg1 ;
-(BOOL)isLayoutLocked;
-(void)setLayoutLocked:(BOOL)arg1 ;
-(void)validateDecorationViews;
-(NSArray *)clonedCellAttributes;
-(id)_screenPageForPoint:(CGPoint)arg1 ;
-(id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_setLayoutAttributes:(id)arg1 atGlobalItemIndex:(int)arg2 ;
-(void)invalidateSupplementaryIndexPaths:(id)arg1 ;
-(id)_layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(BOOL)isGlobalIndexValid:(long long)arg1 ;
-(id)knownSupplementaryElementKinds;
-(CGRect)rectForItemAtIndexPath:(id)arg1 ;
-(CGRect)rectForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)existingSupplementaryLayoutAttributes;
-(BOOL)layoutIsPrepared;
-(id)existingSupplementaryLayoutAttributesInSection:(long long)arg1 ;
@end

