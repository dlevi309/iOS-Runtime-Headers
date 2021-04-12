/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(LPPointUnit *)width;
-(LPPointUnit *)height;
-(void)setWidth:(LPPointUnit *)arg1 ;
-(void)setHeight:(LPPointUnit *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)tapHighlightColor;
-(id)initWithPlatform:(long long)arg1 ;
-(LPTextViewStyle *)caption;
-(void)setTapHighlightColor:(UIColor *)arg1 ;
@end

