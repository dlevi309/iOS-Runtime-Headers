/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIFocusableCollectionViewCell.h>

@class VUIFavoriteBannerView, VUIFavoriteBannerLayout;

@interface VUIFavoriteBannerCollectionViewCell : VUIFocusableCollectionViewCell {

	VUIFavoriteBannerView* _bannerView;
	VUIFavoriteBannerLayout* _bannerLayout;
	double _width;

}

@property (nonatomic,retain) VUIFavoriteBannerView * bannerView;                  //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) VUIFavoriteBannerLayout * bannerLayout;              //@synthesize bannerLayout=_bannerLayout - In the implementation block
@property (assign,nonatomic) double width;                                        //@synthesize width=_width - In the implementation block
+(id)configureCellWithElement:(id)arg1 existingCell:(id)arg2 ;
-(void)prepareForReuse;
-(double)width;
-(void)setWidth:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(VUIFavoriteBannerView *)bannerView;
-(void)setBannerView:(VUIFavoriteBannerView *)arg1 ;
-(void)setBannerLayout:(VUIFavoriteBannerLayout *)arg1 ;
-(VUIFavoriteBannerLayout *)bannerLayout;
@end

