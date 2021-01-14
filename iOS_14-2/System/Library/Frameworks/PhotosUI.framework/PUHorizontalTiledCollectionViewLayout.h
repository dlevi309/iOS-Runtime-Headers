/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@protocol PUHorizontalTiledCollectionViewLayoutDelegate;
@class PUCollectionViewData, UICollectionViewLayoutAttributes;

@interface PUHorizontalTiledCollectionViewLayout : UICollectionViewLayout {

	PUCollectionViewData* _data;
	UICollectionViewLayoutAttributes* _dummyAttrs;
	double _interitemSpacing;
	id<PUHorizontalTiledCollectionViewLayoutDelegate> _delegate;
	UIEdgeInsets _itemsContentInset;

}

@property (assign,nonatomic) double interitemSpacing;                                                        //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets itemsContentInset;                                                 //@synthesize itemsContentInset=_itemsContentInset - In the implementation block
@property (assign,nonatomic,__weak) id<PUHorizontalTiledCollectionViewLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL hasReferenceIndexPath; 
+(Class)invalidationContextClass;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)init;
-(id<PUHorizontalTiledCollectionViewLayoutDelegate>)delegate;
-(double)interitemSpacing;
-(BOOL)_shouldInvalidateCachedLayoutForBoundsChange:(CGRect)arg1 ;
-(void)setItemsContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)itemsContentInset;
-(void)invalidateCachedLayout;
-(void)setDelegate:(id<PUHorizontalTiledCollectionViewLayoutDelegate>)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(id)_layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(BOOL)hasReferenceIndexPath;
-(BOOL)_updateLayoutData:(id)arg1 inDirection:(long long)arg2 outDeltaOriginX:(double*)arg3 ;
-(void)_ensureRect:(CGRect)arg1 inData:(id)arg2 outDeltaOriginX:(double*)arg3 ;
-(void)_ensureIndexPath:(id)arg1 inData:(id)arg2 ;
-(id)layoutAttributesForItemsInRect:(CGRect)arg1 ;
-(void)setInteritemSpacing:(double)arg1 ;
@end

