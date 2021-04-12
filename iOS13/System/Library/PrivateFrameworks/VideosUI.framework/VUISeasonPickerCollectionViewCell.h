/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(VUILabel *)titleLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setTitleLabel:(VUILabel *)arg1 ;
-(void)setSubtitleLabel:(VUILabel *)arg1 ;
-(VUILabel *)subtitleLabel;
-(VUISeparatorView *)topSeparatorView;
-(VUISeparatorView *)bottomSeparatorView;
-(void)setTopSeparatorView:(VUISeparatorView *)arg1 ;
-(void)setBottomSeparatorView:(VUISeparatorView *)arg1 ;
-(_TVImageView *)seasonImageView;
-(void)setSeasonImageView:(_TVImageView *)arg1 ;
-(VUILabel *)secondSubtitleLabel;
-(void)setSecondSubtitleLabel:(VUILabel *)arg1 ;
@end

