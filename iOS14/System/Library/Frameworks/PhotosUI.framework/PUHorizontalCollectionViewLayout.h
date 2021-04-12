/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@protocol PUHorizontalCollectionViewLayoutDelegate;
@class NSArray;

@interface PUHorizontalCollectionViewLayout : UICollectionViewLayout {

	CGSize _contentSize;
	NSArray* _cachedItemLayoutAttributes;
	NSArray* _cachedSectionFrames;
	CGRect _lastRequestedRect;
	NSArray* _lastRequestedLayoutAttributesInRect;
	double _interitemSpacing;
	id<PUHorizontalCollectionViewLayoutDelegate> _delegate;
	CGSize _itemSize;
	UIEdgeInsets _itemsContentInset;

}

@property (nonatomic,readonly) CGRect collectionViewBounds; 
@property (assign,nonatomic) CGSize itemSize;                                                           //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) double interitemSpacing;                                                   //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets itemsContentInset;                                            //@synthesize itemsContentInset=_itemsContentInset - In the implementation block
@property (assign,nonatomic,__weak) id<PUHorizontalCollectionViewLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(Class)invalidationContextClass;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(CGSize)itemSize;
-(CGSize)collectionViewContentSize;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)init;
-(id<PUHorizontalCollectionViewLayoutDelegate>)delegate;
-(double)interitemSpacing;
-(BOOL)_shouldInvalidateCachedLayoutForBoundsChange:(CGRect)arg1 ;
-(void)setItemsContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)itemsContentInset;
-(void)setDelegate:(id<PUHorizontalCollectionViewLayoutDelegate>)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(id)_layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGRect)collectionViewBounds;
-(void)setInteritemSpacing:(double)arg1 ;
-(void)setItemSize:(CGSize)arg1 ;
@end

