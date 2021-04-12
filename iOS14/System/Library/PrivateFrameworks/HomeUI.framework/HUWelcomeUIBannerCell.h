/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUBannerCell.h>

@class UIImageView, HUGridStatusBannerCellLayoutOptions, HUGridWelcomeUIBannerCellLayoutOptions;

@interface HUWelcomeUIBannerCell : HUBannerCell {

	UIImageView* _backgroundImageView;
	HUGridStatusBannerCellLayoutOptions* _layoutOptions;
	HUGridWelcomeUIBannerCellLayoutOptions* _welcomeUIBannerLayoutOptions;

}

@property (nonatomic,retain) HUGridWelcomeUIBannerCellLayoutOptions * welcomeUIBannerLayoutOptions;              //@synthesize welcomeUIBannerLayoutOptions=_welcomeUIBannerLayoutOptions - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundImageView;                                                  //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
-(UIImageView *)backgroundImageView;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
-(void)updateConstraints;
-(id)layoutOptions;
-(void)setLayoutOptions:(id)arg1 ;
-(void)layoutOptionsDidChange;
-(void)setupCustomCellAppearence;
-(void)setBackgroundColor;
-(HUGridWelcomeUIBannerCellLayoutOptions *)welcomeUIBannerLayoutOptions;
-(void)setWelcomeUIBannerLayoutOptions:(HUGridWelcomeUIBannerCellLayoutOptions *)arg1 ;
@end

