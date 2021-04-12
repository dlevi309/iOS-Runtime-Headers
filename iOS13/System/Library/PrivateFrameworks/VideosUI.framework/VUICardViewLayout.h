/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


#import <VideosUI/VideosUI-Structs.h>
@class NSShadow, UIColor, TVImageLayout, VUITextLayout, VUIButtonLayout;

@interface VUICardViewLayout : NSObject {

	BOOL _hideFloatingBackground;
	NSShadow* _shadow;
	UIColor* _backgroundColor;
	UIColor* _darkBackgroundColor;
	UIColor* _highlightColor;
	UIColor* _darkHighlightColor;
	long long _imagePosition;
	TVImageLayout* _imageLayout;
	VUITextLayout* _secondaryTextLayout;
	VUITextLayout* _titleTextLayout;
	VUITextLayout* _subtitleTextLayout;
	VUITextLayout* _detailsTextLayout;
	TVImageLayout* _appImageLayout;
	VUIButtonLayout* _buttonLayout;
	TVCornerRadii _borderRadii;

}

@property (assign,nonatomic) BOOL hideFloatingBackground;                      //@synthesize hideFloatingBackground=_hideFloatingBackground - In the implementation block
@property (nonatomic,retain) NSShadow * shadow;                                //@synthesize shadow=_shadow - In the implementation block
@property (assign,nonatomic) TVCornerRadii borderRadii;                        //@synthesize borderRadii=_borderRadii - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                        //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * darkBackgroundColor;                    //@synthesize darkBackgroundColor=_darkBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightColor;                         //@synthesize highlightColor=_highlightColor - In the implementation block
@property (nonatomic,retain) UIColor * darkHighlightColor;                     //@synthesize darkHighlightColor=_darkHighlightColor - In the implementation block
@property (assign,nonatomic) long long imagePosition;                          //@synthesize imagePosition=_imagePosition - In the implementation block
@property (nonatomic,retain) TVImageLayout * imageLayout;                      //@synthesize imageLayout=_imageLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * secondaryTextLayout;              //@synthesize secondaryTextLayout=_secondaryTextLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * titleTextLayout;                  //@synthesize titleTextLayout=_titleTextLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * subtitleTextLayout;               //@synthesize subtitleTextLayout=_subtitleTextLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * detailsTextLayout;                //@synthesize detailsTextLayout=_detailsTextLayout - In the implementation block
@property (nonatomic,retain) TVImageLayout * appImageLayout;                   //@synthesize appImageLayout=_appImageLayout - In the implementation block
@property (nonatomic,retain) VUIButtonLayout * buttonLayout;                   //@synthesize buttonLayout=_buttonLayout - In the implementation block
+(double)cardHeightForElementType:(unsigned long long)arg1 width:(double)arg2 ;
+(double)cardHeightForElementType:(unsigned long long)arg1 ;
-(id)init;
-(NSShadow *)shadow;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)highlightColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(void)setShadow:(NSShadow *)arg1 ;
-(TVCornerRadii)borderRadii;
-(long long)imagePosition;
-(void)setImagePosition:(long long)arg1 ;
-(TVImageLayout *)imageLayout;
-(void)setDarkBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)darkBackgroundColor;
-(void)setBorderRadii:(TVCornerRadii)arg1 ;
-(VUITextLayout *)titleTextLayout;
-(void)setImageLayout:(TVImageLayout *)arg1 ;
-(TVImageLayout *)appImageLayout;
-(VUITextLayout *)subtitleTextLayout;
-(void)setDarkHighlightColor:(UIColor *)arg1 ;
-(UIColor *)darkHighlightColor;
-(void)setTitleTextLayout:(VUITextLayout *)arg1 ;
-(void)setSubtitleTextLayout:(VUITextLayout *)arg1 ;
-(void)setAppImageLayout:(TVImageLayout *)arg1 ;
-(VUITextLayout *)secondaryTextLayout;
-(VUITextLayout *)detailsTextLayout;
-(VUIButtonLayout *)buttonLayout;
-(BOOL)hideFloatingBackground;
-(void)setButtonLayout:(VUIButtonLayout *)arg1 ;
-(void)setSecondaryTextLayout:(VUITextLayout *)arg1 ;
-(void)setDetailsTextLayout:(VUITextLayout *)arg1 ;
-(void)setHideFloatingBackground:(BOOL)arg1 ;
@end

