/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIView;

@interface SKUISimpleCollectionViewCell : UICollectionViewCell {

	UIView* _contentChildView;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,retain) UIView * contentChildView;               //@synthesize contentChildView=_contentChildView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;              //@synthesize contentInsets=_contentInsets - In the implementation block
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setContentChildView:(UIView *)arg1 ;
-(UIView *)contentChildView;
@end

