/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@interface UIKeyboardEmojiLayout : UICollectionViewFlowLayout {

	id* _attributes;
	double* _headerWidths;
	long long _arrayLength;

}
+(Class)invalidationContextClass;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2 ;
-(id)invalidationContextForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2 ;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(BOOL)flipsHorizontallyInOppositeLayoutDirection;
-(void)_setAttributes:(id)arg1 ForSection:(long long)arg2 ;
-(void)dealloc;
@end

