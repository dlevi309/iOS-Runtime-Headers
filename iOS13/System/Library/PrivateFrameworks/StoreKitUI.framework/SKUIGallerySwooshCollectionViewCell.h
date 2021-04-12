/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <UIKitCore/UICollectionViewCell.h>

@class UIView, UIColor, UILabel, NSString;

@interface SKUIGallerySwooshCollectionViewCell : UICollectionViewCell {

	UIView* _contentChildView;
	UIColor* _titleColor;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UIView * contentChildView;              //@synthesize contentChildView=_contentChildView - In the implementation block
@property (nonatomic,copy) NSString * title; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(void)setContentChildView:(UIView *)arg1 ;
-(UIView *)contentChildView;
@end

