/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, SKUICellImageView;

@interface _SKUIItemBrowseCellContentView : UIView {

	UILabel* _indexNumberLabel;
	UILabel* _subtitleLabel;
	UILabel* _titleLabel;
	UILabel* _userRatingLabel;
	SKUICellImageView* _userRatingImageView;

}

@property (nonatomic,retain) UILabel * indexNumberLabel;                           //@synthesize indexNumberLabel=_indexNumberLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                              //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * userRatingLabel;                            //@synthesize userRatingLabel=_userRatingLabel - In the implementation block
@property (nonatomic,retain) SKUICellImageView * userRatingImageView;              //@synthesize userRatingImageView=_userRatingImageView - In the implementation block
-(UILabel *)titleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(UILabel *)subtitleLabel;
-(UILabel *)indexNumberLabel;
-(void)setIndexNumberLabel:(UILabel *)arg1 ;
-(UILabel *)userRatingLabel;
-(void)setUserRatingLabel:(UILabel *)arg1 ;
-(SKUICellImageView *)userRatingImageView;
-(void)setUserRatingImageView:(SKUICellImageView *)arg1 ;
@end

