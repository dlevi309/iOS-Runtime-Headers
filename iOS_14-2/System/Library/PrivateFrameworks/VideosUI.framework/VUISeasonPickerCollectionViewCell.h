/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIListCollectionViewCell.h>

@class VUILabel, _TVImageView, VUISeparatorView;

@interface VUISeasonPickerCollectionViewCell : VUIListCollectionViewCell {

	VUILabel* _titleLabel;
	VUILabel* _subtitleLabel;
	VUILabel* _secondSubtitleLabel;
	_TVImageView* _seasonImageView;
	VUISeparatorView* _topSeparatorView;
	VUISeparatorView* _bottomSeparatorView;

}

@property (nonatomic,retain) VUILabel * titleLabel;                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VUILabel * subtitleLabel;                            //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) VUILabel * secondSubtitleLabel;                      //@synthesize secondSubtitleLabel=_secondSubtitleLabel - In the implementation block
@property (nonatomic,retain) _TVImageView * seasonImageView;                      //@synthesize seasonImageView=_seasonImageView - In the implementation block
@property (nonatomic,retain) VUISeparatorView * topSeparatorView;                 //@synthesize topSeparatorView=_topSeparatorView - In the implementation block
@property (nonatomic,retain) VUISeparatorView * bottomSeparatorView;              //@synthesize bottomSeparatorView=_bottomSeparatorView - In the implementation block
+(void)configureSeasonPickerCell:(id)arg1 withMedia:(id)arg2 traitCollection:(id)arg3 ;
-(VUILabel *)titleLabel;
-(void)setSubtitleLabel:(VUILabel *)arg1 ;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBottomSeparatorView:(VUISeparatorView *)arg1 ;
-(void)setTopSeparatorView:(VUISeparatorView *)arg1 ;
-(VUILabel *)subtitleLabel;
-(void)layoutSubviews;
-(VUISeparatorView *)topSeparatorView;
-(VUISeparatorView *)bottomSeparatorView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(_TVImageView *)seasonImageView;
-(void)setSeasonImageView:(_TVImageView *)arg1 ;
-(VUILabel *)secondSubtitleLabel;
-(void)setSecondSubtitleLabel:(VUILabel *)arg1 ;
@end

