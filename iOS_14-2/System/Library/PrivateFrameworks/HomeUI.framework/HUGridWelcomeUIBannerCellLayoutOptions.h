/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUGridStatusBannerCellLayoutOptions.h>

@class UIColor;

@interface HUGridWelcomeUIBannerCellLayoutOptions : HUGridStatusBannerCellLayoutOptions {

	UIColor* _titleLabelColor;
	UIColor* _descriptionLabelColor;
	UIColor* _footerLabelColor;
	UIColor* _continueButtonColor;

}

@property (nonatomic,retain) UIColor * titleLabelColor;                    //@synthesize titleLabelColor=_titleLabelColor - In the implementation block
@property (nonatomic,retain) UIColor * descriptionLabelColor;              //@synthesize descriptionLabelColor=_descriptionLabelColor - In the implementation block
@property (nonatomic,retain) UIColor * footerLabelColor;                   //@synthesize footerLabelColor=_footerLabelColor - In the implementation block
@property (nonatomic,retain) UIColor * continueButtonColor;                //@synthesize continueButtonColor=_continueButtonColor - In the implementation block
+(id)defaultOptionsForCellSizeSubclass:(long long)arg1 ;
-(void)setTitleLabelColor:(UIColor *)arg1 ;
-(UIColor *)titleLabelColor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)descriptionLabelColor;
-(UIColor *)footerLabelColor;
-(UIColor *)continueButtonColor;
-(void)setFooterLabelColor:(UIColor *)arg1 ;
-(void)setDescriptionLabelColor:(UIColor *)arg1 ;
-(void)setContinueButtonColor:(UIColor *)arg1 ;
@end

