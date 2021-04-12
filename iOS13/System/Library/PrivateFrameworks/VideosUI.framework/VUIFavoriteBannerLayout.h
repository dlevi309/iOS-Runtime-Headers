/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


#import <VideosUI/VideosUI-Structs.h>
@class UIColor, VUITextLayout, TVImageLayout;

@interface VUIFavoriteBannerLayout : NSObject {

	BOOL _isPreModeBanner;
	UIColor* _backgroundColor;
	UIColor* _highlightedBackgroundColor;
	double _bannerMinHeight;
	double _maxTextWidth;
	double _subtitleBaseLine;
	VUITextLayout* _titleLayout;
	VUITextLayout* _subtitleLayout;
	TVImageLayout* _imageLayout;
	TVCornerRadii _borderRadii;
	UIEdgeInsets _margin;

}

@property (nonatomic,readonly) BOOL isPreModeBanner;                              //@synthesize isPreModeBanner=_isPreModeBanner - In the implementation block
@property (nonatomic,readonly) TVCornerRadii borderRadii;                         //@synthesize borderRadii=_borderRadii - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets margin;                               //@synthesize margin=_margin - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundColor;                         //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * highlightedBackgroundColor;              //@synthesize highlightedBackgroundColor=_highlightedBackgroundColor - In the implementation block
@property (nonatomic,readonly) double bannerMinHeight;                            //@synthesize bannerMinHeight=_bannerMinHeight - In the implementation block
@property (nonatomic,readonly) double maxTextWidth;                               //@synthesize maxTextWidth=_maxTextWidth - In the implementation block
@property (nonatomic,readonly) double subtitleBaseLine;                           //@synthesize subtitleBaseLine=_subtitleBaseLine - In the implementation block
@property (nonatomic,readonly) VUITextLayout * titleLayout;                       //@synthesize titleLayout=_titleLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * subtitleLayout;                    //@synthesize subtitleLayout=_subtitleLayout - In the implementation block
@property (nonatomic,readonly) TVImageLayout * imageLayout;                       //@synthesize imageLayout=_imageLayout - In the implementation block
@property (nonatomic,readonly) unsigned long long bannerStyle; 
+(id)postModeBannerLayout;
+(id)preModeBannerLayout;
-(UIColor *)backgroundColor;
-(UIEdgeInsets)margin;
-(UIColor *)highlightedBackgroundColor;
-(TVCornerRadii)borderRadii;
-(unsigned long long)bannerStyle;
-(VUITextLayout *)titleLayout;
-(TVImageLayout *)imageLayout;
-(double)maxTextWidth;
-(VUITextLayout *)subtitleLayout;
-(BOOL)isPreModeBanner;
-(double)subtitleBaseLine;
-(double)bannerMinHeight;
-(id)initWithBannerType:(BOOL)arg1 ;
@end

