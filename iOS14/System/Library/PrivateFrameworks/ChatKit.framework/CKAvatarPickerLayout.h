/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@protocol CKAvatarPickerLayoutDelegate;
@class UICollectionViewLayoutAttributes, NSArray, NSValue;

@interface CKAvatarPickerLayout : UICollectionViewLayout {

	BOOL _isInEditingMode;
	unsigned long long _layoutMode;
	id<CKAvatarPickerLayoutDelegate> _delegate;
	UICollectionViewLayoutAttributes* _titleSupplementaryAttr;
	NSArray* _attrCollection;
	NSArray* _supplementaryAttrCollection;
	NSArray* _cutoutAttrCollection;
	UICollectionViewLayoutAttributes* _leftShadowDecorationAttr;
	UICollectionViewLayoutAttributes* _rightShadowDecorationAttr;
	NSValue* _editingFrameValue;

}

@property (nonatomic,copy) NSArray * attrCollection;                                                    //@synthesize attrCollection=_attrCollection - In the implementation block
@property (nonatomic,copy) NSArray * supplementaryAttrCollection;                                       //@synthesize supplementaryAttrCollection=_supplementaryAttrCollection - In the implementation block
@property (nonatomic,copy) NSArray * cutoutAttrCollection;                                              //@synthesize cutoutAttrCollection=_cutoutAttrCollection - In the implementation block
@property (nonatomic,retain) UICollectionViewLayoutAttributes * titleSupplementaryAttr;                 //@synthesize titleSupplementaryAttr=_titleSupplementaryAttr - In the implementation block
@property (nonatomic,retain) UICollectionViewLayoutAttributes * leftShadowDecorationAttr;               //@synthesize leftShadowDecorationAttr=_leftShadowDecorationAttr - In the implementation block
@property (nonatomic,retain) UICollectionViewLayoutAttributes * rightShadowDecorationAttr;              //@synthesize rightShadowDecorationAttr=_rightShadowDecorationAttr - In the implementation block
@property (assign,nonatomic) BOOL isInEditingMode;                                                      //@synthesize isInEditingMode=_isInEditingMode - In the implementation block
@property (nonatomic,copy) NSValue * editingFrameValue;                                                 //@synthesize editingFrameValue=_editingFrameValue - In the implementation block
@property (assign,nonatomic) unsigned long long layoutMode;                                             //@synthesize layoutMode=_layoutMode - In the implementation block
@property (assign,nonatomic,__weak) id<CKAvatarPickerLayoutDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(CGSize)collectionViewContentSize;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id<CKAvatarPickerLayoutDelegate>)delegate;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(BOOL)wantsChromelessAppearance;
-(void)setEditingFrameValue:(NSValue *)arg1 ;
-(void)setAttrCollection:(NSArray *)arg1 ;
-(void)setSupplementaryAttrCollection:(NSArray *)arg1 ;
-(BOOL)_shouldShowCutouts;
-(void)setTitleSupplementaryAttr:(UICollectionViewLayoutAttributes *)arg1 ;
-(NSArray *)supplementaryAttrCollection;
-(BOOL)_shouldShowContactNames;
-(BOOL)_usesGroupAvatar;
-(NSValue *)editingFrameValue;
-(NSArray *)attrCollection;
-(NSArray *)cutoutAttrCollection;
-(BOOL)_shouldShowTitle;
-(BOOL)_canShowShadowClipping;
-(UICollectionViewLayoutAttributes *)leftShadowDecorationAttr;
-(UICollectionViewLayoutAttributes *)rightShadowDecorationAttr;
-(void)setCutoutAttrCollection:(NSArray *)arg1 ;
-(void)_setupBannerLayout;
-(void)_setupDefaultLayout;
-(id)nameLayoutAttributesCollectionAtPoint:(CGPoint)arg1 ;
-(void)setLeftShadowDecorationAttr:(UICollectionViewLayoutAttributes *)arg1 ;
-(void)setRightShadowDecorationAttr:(UICollectionViewLayoutAttributes *)arg1 ;
-(id)initWithLayoutMode:(unsigned long long)arg1 ;
-(UICollectionViewLayoutAttributes *)titleSupplementaryAttr;
-(void)setIsInEditingMode:(BOOL)arg1 ;
-(void)setDelegate:(id<CKAvatarPickerLayoutDelegate>)arg1 ;
-(void)invalidateLayoutAndCache;
-(void)setLayoutMode:(unsigned long long)arg1 ;
-(unsigned long long)_itemCount;
-(BOOL)isInEditingMode;
-(unsigned long long)layoutMode;
@end

