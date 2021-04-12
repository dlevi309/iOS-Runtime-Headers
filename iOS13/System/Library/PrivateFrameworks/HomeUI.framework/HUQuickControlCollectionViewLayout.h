/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@class HUQuickControlCollectionViewControllerLayoutOptions, HUQuickControlGridLayoutManager, NSLayoutConstraint, NSMutableDictionary, HUQuickControlCollectionViewLayoutInfo;

@interface HUQuickControlCollectionViewLayout : UICollectionViewLayout {

	HUQuickControlCollectionViewControllerLayoutOptions* _layoutOptions;
	HUQuickControlGridLayoutManager* _layoutManager;
	NSLayoutConstraint* _heightConstraint;
	NSMutableDictionary* _cachedLayoutAttributesByIndexPath;
	NSMutableDictionary* _cachedSectionHeaderLayoutAttributes;
	HUQuickControlCollectionViewLayoutInfo* _layoutInfo;
	UIEdgeInsets _contentInset;

}

@property (nonatomic,readonly) NSMutableDictionary * cachedLayoutAttributesByIndexPath;                        //@synthesize cachedLayoutAttributesByIndexPath=_cachedLayoutAttributesByIndexPath - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * cachedSectionHeaderLayoutAttributes;                      //@synthesize cachedSectionHeaderLayoutAttributes=_cachedSectionHeaderLayoutAttributes - In the implementation block
@property (nonatomic,retain) HUQuickControlCollectionViewLayoutInfo * layoutInfo;                              //@synthesize layoutInfo=_layoutInfo - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                                        //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,retain) HUQuickControlCollectionViewControllerLayoutOptions * layoutOptions;              //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (nonatomic,retain) HUQuickControlGridLayoutManager * layoutManager;                                  //@synthesize layoutManager=_layoutManager - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;                                            //@synthesize heightConstraint=_heightConstraint - In the implementation block
+(Class)layoutAttributesClass;
-(id)init;
-(id)delegate;
-(HUQuickControlGridLayoutManager *)layoutManager;
-(HUQuickControlCollectionViewControllerLayoutOptions *)layoutOptions;
-(void)setLayoutManager:(HUQuickControlGridLayoutManager *)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(NSLayoutConstraint *)heightConstraint;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(void)prepareLayout;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(HUQuickControlCollectionViewLayoutInfo *)layoutInfo;
-(void)setLayoutInfo:(HUQuickControlCollectionViewLayoutInfo *)arg1 ;
-(void)setLayoutOptions:(HUQuickControlCollectionViewControllerLayoutOptions *)arg1 ;
-(NSMutableDictionary *)cachedLayoutAttributesByIndexPath;
-(NSMutableDictionary *)cachedSectionHeaderLayoutAttributes;
-(void)_computeLayoutInfo;
-(void)_computeGridLayoutAttributesForLayoutInfo:(id)arg1 ;
-(id)_computeRowLayoutsForGridLayout:(id)arg1 gridLayoutSettings:(id)arg2 ;
-(id)_intrinsicSizeDescriptorForItemAtIndexPath:(id)arg1 itemSize:(unsigned long long)arg2 ;
-(id)_computeSizingLayoutInfo;
-(id)_computeRowLayoutOriginsFromLayoutDetails:(id)arg1 forSectionSettings:(id)arg2 ;
@end

