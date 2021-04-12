/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, UIImage, NSString;

@interface TVMonogramViewConfiguration : NSObject <NSCopying> {

	long long _style;
	double _focusedSizeIncrease;
	UIColor* _unfocusedBgColor;
	UIColor* _focusedBgColor;
	double _unfocusedShadowAlpha;
	double _focusedShadowAlpha;
	UIImage* _unfocusedShadowImage;
	UIImage* _focusedShadowImage;
	NSString* _titleTextStyle;
	UIColor* _titleUnfocusedColor;
	UIColor* _titleFocusedColor;
	NSString* _subtitleTextStyle;
	UIColor* _subtitleUnfocusedColor;
	UIColor* _subtitleFocusedColor;

}

@property (assign,nonatomic) long long style;                               //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) double focusedSizeIncrease;                    //@synthesize focusedSizeIncrease=_focusedSizeIncrease - In the implementation block
@property (nonatomic,retain) UIColor * unfocusedBgColor;                    //@synthesize unfocusedBgColor=_unfocusedBgColor - In the implementation block
@property (nonatomic,retain) UIColor * focusedBgColor;                      //@synthesize focusedBgColor=_focusedBgColor - In the implementation block
@property (nonatomic,readonly) double unfocusedImageAlpha; 
@property (assign,nonatomic) double unfocusedShadowAlpha;                   //@synthesize unfocusedShadowAlpha=_unfocusedShadowAlpha - In the implementation block
@property (assign,nonatomic) double focusedShadowAlpha;                     //@synthesize focusedShadowAlpha=_focusedShadowAlpha - In the implementation block
@property (nonatomic,retain) UIImage * unfocusedShadowImage;                //@synthesize unfocusedShadowImage=_unfocusedShadowImage - In the implementation block
@property (nonatomic,retain) UIImage * focusedShadowImage;                  //@synthesize focusedShadowImage=_focusedShadowImage - In the implementation block
@property (nonatomic,copy) NSString * titleTextStyle;                       //@synthesize titleTextStyle=_titleTextStyle - In the implementation block
@property (nonatomic,retain) UIColor * titleUnfocusedColor;                 //@synthesize titleUnfocusedColor=_titleUnfocusedColor - In the implementation block
@property (nonatomic,retain) UIColor * titleFocusedColor;                   //@synthesize titleFocusedColor=_titleFocusedColor - In the implementation block
@property (nonatomic,copy) NSString * subtitleTextStyle;                    //@synthesize subtitleTextStyle=_subtitleTextStyle - In the implementation block
@property (nonatomic,retain) UIColor * subtitleUnfocusedColor;              //@synthesize subtitleUnfocusedColor=_subtitleUnfocusedColor - In the implementation block
@property (nonatomic,retain) UIColor * subtitleFocusedColor;                //@synthesize subtitleFocusedColor=_subtitleFocusedColor - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)setFocusedSizeIncrease:(double)arg1 ;
-(double)focusedSizeIncrease;
-(NSString *)titleTextStyle;
-(void)setTitleTextStyle:(NSString *)arg1 ;
-(void)setUnfocusedShadowImage:(UIImage *)arg1 ;
-(void)setFocusedShadowImage:(UIImage *)arg1 ;
-(double)unfocusedShadowAlpha;
-(void)setUnfocusedShadowAlpha:(double)arg1 ;
-(double)focusedShadowAlpha;
-(void)setFocusedShadowAlpha:(double)arg1 ;
-(UIImage *)unfocusedShadowImage;
-(UIImage *)focusedShadowImage;
-(id)initWithShadowImages:(BOOL)arg1 ;
-(double)unfocusedImageAlpha;
-(UIColor *)unfocusedBgColor;
-(void)setUnfocusedBgColor:(UIColor *)arg1 ;
-(UIColor *)focusedBgColor;
-(void)setFocusedBgColor:(UIColor *)arg1 ;
-(UIColor *)titleUnfocusedColor;
-(void)setTitleUnfocusedColor:(UIColor *)arg1 ;
-(UIColor *)titleFocusedColor;
-(void)setTitleFocusedColor:(UIColor *)arg1 ;
-(NSString *)subtitleTextStyle;
-(void)setSubtitleTextStyle:(NSString *)arg1 ;
-(UIColor *)subtitleUnfocusedColor;
-(void)setSubtitleUnfocusedColor:(UIColor *)arg1 ;
-(UIColor *)subtitleFocusedColor;
-(void)setSubtitleFocusedColor:(UIColor *)arg1 ;
@end

