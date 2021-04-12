/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class UIColor, LPTextViewStyle, LPPointUnit;

@interface LPTapToLoadViewStyle : NSObject {

	UIColor* _backgroundColor;
	UIColor* _tapHighlightColor;
	LPTextViewStyle* _caption;
	LPPointUnit* _width;
	LPPointUnit* _height;

}

@property (nonatomic,retain) UIColor * backgroundColor;                //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * tapHighlightColor;              //@synthesize tapHighlightColor=_tapHighlightColor - In the implementation block
@property (nonatomic,readonly) LPTextViewStyle * caption;              //@synthesize caption=_caption - In the implementation block
@property (nonatomic,retain) LPPointUnit * width;                      //@synthesize width=_width - In the implementation block
@property (nonatomic,retain) LPPointUnit * height;                     //@synthesize height=_height - In the implementation block
-(void)setHeight:(LPPointUnit *)arg1 ;
-(id)initWithPlatform:(long long)arg1 ;
-(LPTextViewStyle *)caption;
-(LPPointUnit *)width;
-(void)setWidth:(LPPointUnit *)arg1 ;
-(LPPointUnit *)height;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setTapHighlightColor:(UIColor *)arg1 ;
-(UIColor *)tapHighlightColor;
@end

