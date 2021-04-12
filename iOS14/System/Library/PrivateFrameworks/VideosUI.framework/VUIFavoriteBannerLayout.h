/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	unsigned long long _bannerStyle;
	TVCornerRadii _borderRadii;
	UIEdgeInsets _margin;

}

@property (assign,nonatomic) BOOL isPreModeBanner;                              //@synthesize isPreModeBanner=_isPreModeBanner - In the implementation block
@property (assign,nonatomic) TVCornerRadii borderRadii;                         //@synthesize borderRadii=_borderRadii - In the implementation block
@property (assign,nonatomic) UIEdgeInsets margin;                               //@synthesize margin=_margin - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                         //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedBackgroundColor;              //@synthesize highlightedBackgroundColor=_highlightedBackgroundColor - In the implementation block
@property (assign,nonatomic) double bannerMinHeight;                            //@synthesize bannerMinHeight=_bannerMinHeight - In the implementation block
@property (assign,nonatomic) double maxTextWidth;                               //@synthesize maxTextWidth=_maxTextWidth - In the implementation block
@property (assign,nonatomic) double subtitleBaseLine;                           //@synthesize subtitleBaseLine=_subtitleBaseLine - In the implementation block
@property (nonatomic,readonly) VUITextLayout * titleLayout;                     //@synthesize titleLayout=_titleLayout - In the implementation block
@property (nonatomic,readonly) VUITextLayout * subtitleLayout;                  //@synthesize subtitleLayout=_subtitleLayout - In the implementation block
@property (nonatomic,readonly) TVImageLayout * imageLayout;                     //@synthesize imageLayout=_imageLayout - In the implementation block
@property (assign,nonatomic) unsigned long long bannerStyle;                    //@synthesize bannerStyle=_bannerStyle - In the implementation block
+(id)postModeBannerLayout;
+(id)preModeBannerLayout;
-(void)setMargin:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)margin;
-(UIColor *)highlightedBackgroundColor;
-(void)setHighlightedBackgroundColor:(UIColor *)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(unsigned long long)bannerStyle;
-(void)setBannerStyle:(unsigned long long)arg1 ;
-(TVCornerRadii)borderRadii;
-(void)setMaxTextWidth:(double)arg1 ;
-(double)maxTextWidth;
-(TVImageLayout *)imageLayout;
-(void)setBorderRadii:(TVCornerRadii)arg1 ;
-(VUITextLayout *)titleLayout;
-(VUITextLayout *)subtitleLayout;
-(BOOL)isPreModeBanner;
-(double)subtitleBaseLine;
-(double)bannerMinHeight;
-(id)initWithBannerType:(BOOL)arg1 ;
-(void)setIsPreModeBanner:(BOOL)arg1 ;
-(void)setBannerMinHeight:(double)arg1 ;
-(void)setSubtitleBaseLine:(double)arg1 ;
@end

