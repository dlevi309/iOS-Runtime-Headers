/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (assign,nonatomic) double width;                                        //@synthesize width=_width - In the implementation block
@property (nonatomic,retain) VUIFavoriteBannerView * bannerView;                  //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) VUIFavoriteBannerLayout * bannerLayout;              //@synthesize bannerLayout=_bannerLayout - In the implementation block
+(id)configureCellWithElement:(id)arg1 existingCell:(id)arg2 ;
-(double)width;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBannerView:(VUIFavoriteBannerView *)arg1 ;
-(void)setWidth:(double)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(VUIFavoriteBannerView *)bannerView;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setBannerLayout:(VUIFavoriteBannerLayout *)arg1 ;
-(void)registerForInAppMessaging:(BOOL)arg1 ;
-(VUIFavoriteBannerLayout *)bannerLayout;
@end

