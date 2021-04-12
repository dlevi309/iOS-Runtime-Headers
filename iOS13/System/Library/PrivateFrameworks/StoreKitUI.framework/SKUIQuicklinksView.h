/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIColor, UILabel, NSString;

@interface SKUIQuicklinksView : UIView {

	UIView* _borderView;
	UIView* _collectionView;
	UIColor* _titleColor;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UIView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,copy) NSString * title; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIView *)collectionView;
-(void)setCollectionView:(UIView *)arg1 ;
-(void)setColoringWithColorScheme:(id)arg1 ;
@end

