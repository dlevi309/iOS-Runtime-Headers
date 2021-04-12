/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(Class)layoutAttributesClass;
+(Class)invalidationContextClass;
+(double)snapToBoundariesDecelerationRate;
+(BOOL)collectionViewCanClipToBounds;
-(double)interItemSpacing;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(CGSize)collectionViewContentSize;
-(void)setInterItemSpacing:(double)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(double)itemWidth;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)setItemWidth:(double)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(id)menuBarFocusedItemIndexPathWithTransitionProgress:(double*)arg1 ;
-(void)setMenuBarFocusedItemIndexPath:(id)arg1 withTransitionProgress:(double)arg2 ;
-(SKUIShelfLayoutData *)layoutData;
-(void)setLayoutData:(SKUIShelfLayoutData *)arg1 ;
-(void)setFocusedItemHorizontalCenterOffset:(double)arg1 ;
-(void)setScaledItemWidth:(double)arg1 ;
-(double)focusedItemHorizontalCenterOffset;
-(double)scaledItemWidth;
@end

