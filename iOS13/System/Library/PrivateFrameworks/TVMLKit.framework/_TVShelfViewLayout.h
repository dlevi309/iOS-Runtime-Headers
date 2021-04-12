/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@class _TVShelfLayoutHelper, NSArray;

@interface _TVShelfViewLayout : UICollectionViewLayout {

	BOOL _shouldSnapContent;
	double _minimumInteritemSpacing;
	double _minimumLineSpacing;
	long long _rowCount;
	long long _prominentSectionIndex;
	double _headerSelectionMargin;
	double _headerBottomMargin;
	_TVShelfLayoutHelper* _layoutHelper;
	NSArray* _shelfLayoutSections;
	CGSize _itemSize;
	CGSize _headerReferenceSize;
	UIEdgeInsets _sectionInset;

}

@property (nonatomic,retain) _TVShelfLayoutHelper * layoutHelper;              //@synthesize layoutHelper=_layoutHelper - In the implementation block
@property (nonatomic,retain) NSArray * shelfLayoutSections;                    //@synthesize shelfLayoutSections=_shelfLayoutSections - In the implementation block
@property (assign,nonatomic) BOOL shouldSnapContent;                           //@synthesize shouldSnapContent=_shouldSnapContent - In the implementation block
@property (assign,nonatomic) double minimumInteritemSpacing;                   //@synthesize minimumInteritemSpacing=_minimumInteritemSpacing - In the implementation block
@property (assign,nonatomic) double minimumLineSpacing;                        //@synthesize minimumLineSpacing=_minimumLineSpacing - In the implementation block
@property (assign,nonatomic) CGSize itemSize;                                  //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) long long rowCount;                               //@synthesize rowCount=_rowCount - In the implementation block
@property (assign,nonatomic) long long prominentSectionIndex;                  //@synthesize prominentSectionIndex=_prominentSectionIndex - In the implementation block
@property (assign,nonatomic) CGSize headerReferenceSize;                       //@synthesize headerReferenceSize=_headerReferenceSize - In the implementation block
@property (assign,nonatomic) double headerSelectionMargin;                     //@synthesize headerSelectionMargin=_headerSelectionMargin - In the implementation block
@property (assign,nonatomic) double headerBottomMargin;                        //@synthesize headerBottomMargin=_headerBottomMargin - In the implementation block
@property (assign,nonatomic) UIEdgeInsets sectionInset;                        //@synthesize sectionInset=_sectionInset - In the implementation block
+(double)defaultHeaderSelectionMargin;
-(id)init;
-(long long)rowCount;
-(void)setMinimumLineSpacing:(double)arg1 ;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(CGSize)itemSize;
-(void)setItemSize:(CGSize)arg1 ;
-(double)minimumInteritemSpacing;
-(double)minimumLineSpacing;
-(UIEdgeInsets)sectionInset;
-(void)setMinimumInteritemSpacing:(double)arg1 ;
-(void)setHeaderReferenceSize:(CGSize)arg1 ;
-(void)setSectionInset:(UIEdgeInsets)arg1 ;
-(CGSize)headerReferenceSize;
-(void)setRowCount:(long long)arg1 ;
-(_TVShelfLayoutHelper *)layoutHelper;
-(void)setLayoutHelper:(_TVShelfLayoutHelper *)arg1 ;
-(double)headerBottomMargin;
-(long long)computedRowCount;
-(double)headerSelectionMargin;
-(void)snapContent;
-(id)indexPathForSnappedContent;
-(void)snapContentToIndexPath:(id)arg1 ;
-(void)setShouldSnapContent:(BOOL)arg1 ;
-(long long)prominentSectionIndex;
-(void)setProminentSectionIndex:(long long)arg1 ;
-(void)setHeaderSelectionMargin:(double)arg1 ;
-(NSArray *)shelfLayoutSections;
-(void)setShelfLayoutSections:(NSArray *)arg1 ;
-(BOOL)_bumpHeaderForLayoutSection:(id)arg1 forIndexPath:(id)arg2 ;
-(double)computedContentHeight;
-(BOOL)shouldSnapContent;
-(id)_indexPathForItemAtProposedContentOffset:(CGPoint)arg1 ;
-(CGRect)boundingSelectionFrameForFrame:(CGRect)arg1 ;
-(void)setHeaderBottomMargin:(double)arg1 ;
@end

