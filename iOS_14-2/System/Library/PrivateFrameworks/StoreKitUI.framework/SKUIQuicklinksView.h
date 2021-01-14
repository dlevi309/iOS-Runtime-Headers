/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCollectionView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)collectionView;
-(void)setTitle:(NSString *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(void)setColoringWithColorScheme:(id)arg1 ;
@end

