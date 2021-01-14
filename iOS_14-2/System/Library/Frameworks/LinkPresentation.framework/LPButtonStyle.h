/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class UIColor, UIFont, LPPadding;

@interface LPButtonStyle : NSObject {

	UIColor* _foregroundColor;
	UIColor* _backgroundColor;
	UIFont* _font;
	LPPadding* _padding;
	LPPadding* _margin;

}

@property (nonatomic,retain) UIColor * foregroundColor;              //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIFont * font;                          //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) LPPadding * padding;                    //@synthesize padding=_padding - In the implementation block
@property (nonatomic,retain) LPPadding * margin;                     //@synthesize margin=_margin - In the implementation block
+(id)systemPillButtonStyleForPlatform:(long long)arg1 ;
-(void)setMargin:(LPPadding *)arg1 ;
-(LPPadding *)margin;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(id)init;
-(UIColor *)foregroundColor;
-(void)setFont:(UIFont *)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(LPPadding *)padding;
-(void)setPadding:(LPPadding *)arg1 ;
-(UIFont *)font;
@end

