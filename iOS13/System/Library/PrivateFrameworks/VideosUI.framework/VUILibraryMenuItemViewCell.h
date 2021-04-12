/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIListCollectionViewCell.h>

@class VUIImageView, VUILabel, VUISeparatorView;

@interface VUILibraryMenuItemViewCell : VUIListCollectionViewCell {

	VUIImageView* _imageView;
	BOOL _hideChevron;
	VUILabel* _titleLabel;
	VUISeparatorView* _topSeparatorView;
	VUISeparatorView* _bottomSeparatorView;

}

@property (nonatomic,readonly) VUILabel * titleLabel;                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) VUISeparatorView * topSeparatorView;                   //@synthesize topSeparatorView=_topSeparatorView - In the implementation block
@property (nonatomic,readonly) VUISeparatorView * bottomSeparatorView;              //@synthesize bottomSeparatorView=_bottomSeparatorView - In the implementation block
@property (assign,nonatomic) BOOL hideChevron;                                      //@synthesize hideChevron=_hideChevron - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(VUILabel *)titleLabel;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(VUISeparatorView *)topSeparatorView;
-(VUISeparatorView *)bottomSeparatorView;
-(void)setTopSeparatorView:(VUISeparatorView *)arg1 ;
-(void)setHideChevron:(BOOL)arg1 ;
-(BOOL)hideChevron;
@end

