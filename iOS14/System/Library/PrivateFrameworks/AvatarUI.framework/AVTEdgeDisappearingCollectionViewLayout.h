/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UICollectionViewFlowLayout.h>

@class UICollectionViewLayoutAttributes;

@interface AVTEdgeDisappearingCollectionViewLayout : UICollectionViewFlowLayout {

	BOOL _enableEdgeDisappearing;
	BOOL _pinHeaderToVisible;
	UICollectionViewLayoutAttributes* _fixedHeaderLayoutAttributes;

}

@property (nonatomic,retain) UICollectionViewLayoutAttributes * fixedHeaderLayoutAttributes;              //@synthesize fixedHeaderLayoutAttributes=_fixedHeaderLayoutAttributes - In the implementation block
@property (assign,nonatomic) BOOL enableEdgeDisappearing;                                                 //@synthesize enableEdgeDisappearing=_enableEdgeDisappearing - In the implementation block
@property (assign,nonatomic) BOOL pinHeaderToVisible;                                                     //@synthesize pinHeaderToVisible=_pinHeaderToVisible - In the implementation block
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(BOOL)isRTL;
-(BOOL)pinHeaderToVisible;
-(void)setFixedHeaderLayoutAttributes:(UICollectionViewLayoutAttributes *)arg1 ;
-(void)modifyLayoutAttributes:(id)arg1 ;
-(BOOL)enableEdgeDisappearing;
-(UICollectionViewLayoutAttributes *)fixedHeaderLayoutAttributes;
-(void)setEnableEdgeDisappearing:(BOOL)arg1 ;
-(void)setPinHeaderToVisible:(BOOL)arg1 ;
@end

