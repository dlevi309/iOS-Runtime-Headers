/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UICollectionView, UIButton, SKUILinkButton, UIColor, UILabel, UIControl, NSString;

@interface SKUISwooshView : UIView {

	UIView* _borderView;
	UICollectionView* _collectionView;
	UIEdgeInsets _collectionViewInsets;
	UIButton* _seeAllButton;
	BOOL _showsChevronForTitle;
	SKUILinkButton* _titleButton;
	UIColor* _titleColor;
	UILabel* _titleLabel;
	UIEdgeInsets _contentInsets;

}

@property (assign,nonatomic) UIEdgeInsets contentInsets;                     //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets collectionViewInsets;              //@synthesize collectionViewInsets=_collectionViewInsets - In the implementation block
@property (nonatomic,readonly) UIControl * seeAllControl; 
@property (nonatomic,copy) NSString * seeAllTitle; 
@property (nonatomic,readonly) UIControl * chevronTitleControl; 
@property (assign,nonatomic) BOOL showsChevronForTitle;                      //@synthesize showsChevronForTitle=_showsChevronForTitle - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) UIColor * titleColor;                             //@synthesize titleColor=_titleColor - In the implementation block
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIColor *)titleColor;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)contentInsets;
-(UICollectionView *)collectionView;
-(void)setTitle:(NSString *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(void)setTitleColor:(UIColor *)arg1 ;
-(UIEdgeInsets)collectionViewInsets;
-(void)setCollectionViewInsets:(UIEdgeInsets)arg1 ;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(NSString *)seeAllTitle;
-(UIControl *)chevronTitleControl;
-(UIControl *)seeAllControl;
-(void)setShowsChevronForTitle:(BOOL)arg1 ;
-(void)setSeeAllTitle:(NSString *)arg1 ;
-(id)_seeAllArrowImage;
-(void)setSeeAllColor:(id)arg1 forControlState:(unsigned long long)arg2 ;
-(BOOL)showsChevronForTitle;
-(id)seeAllColorForControlState:(unsigned long long)arg1 ;
@end

