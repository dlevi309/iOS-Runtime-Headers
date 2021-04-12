/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>
#import <libobjc.A.dylib/SKUIHorizontalScrollingContainerMenuBarCollectionViewLayout.h>
#import <libobjc.A.dylib/SKUIShelfCollectionViewLayout.h>

@class NSMutableDictionary, SKUIShelfLayoutData, NSString;

@interface SKUIZoomingShelfCollectionViewLayout : UICollectionViewLayout <SKUIHorizontalScrollingContainerMenuBarCollectionViewLayout, SKUIShelfCollectionViewLayout> {

	CGSize _cachedCollectionViewContentSize;
	NSMutableDictionary* _cachedLayoutAttributes;
	BOOL _invalidateGeometryOnlyOfExistingLayoutAttributes;
	SKUIShelfLayoutData* _layoutData;
	double _focusedItemHorizontalCenterOffset;
	double _interItemSpacing;
	double _itemWidth;
	double _scaledItemWidth;

}

@property (assign,nonatomic) double focusedItemHorizontalCenterOffset;              //@synthesize focusedItemHorizontalCenterOffset=_focusedItemHorizontalCenterOffset - In the implementation block
@property (assign,nonatomic) double interItemSpacing;                               //@synthesize interItemSpacing=_interItemSpacing - In the implementation block
@property (assign,nonatomic) double itemWidth;                                      //@synthesize itemWidth=_itemWidth - In the implementation block
@property (assign,nonatomic) double scaledItemWidth;                                //@synthesize scaledItemWidth=_scaledItemWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIShelfLayoutData * layoutData;                      //@synthesize layoutData=_layoutData - In the implementation block
+(Class)invalidationContextClass;
+(Class)layoutAttributesClass;
+(double)snapToBoundariesDecelerationRate;
+(BOOL)collectionViewCanClipToBounds;
-(void)setItemWidth:(double)arg1 ;
-(double)itemWidth;
-(double)interItemSpacing;
-(void)setInterItemSpacing:(double)arg1 ;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(CGSize)collectionViewContentSize;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(id)menuBarFocusedItemIndexPathWithTransitionProgress:(double*)arg1 ;
-(void)setMenuBarFocusedItemIndexPath:(id)arg1 withTransitionProgress:(double)arg2 ;
-(SKUIShelfLayoutData *)layoutData;
-(void)setLayoutData:(SKUIShelfLayoutData *)arg1 ;
-(void)setFocusedItemHorizontalCenterOffset:(double)arg1 ;
-(void)setScaledItemWidth:(double)arg1 ;
-(double)focusedItemHorizontalCenterOffset;
-(double)scaledItemWidth;
@end

