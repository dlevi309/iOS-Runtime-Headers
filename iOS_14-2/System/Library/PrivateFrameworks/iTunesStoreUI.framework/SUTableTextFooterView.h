/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIFont, UIColor, NSArray;

@interface SUTableTextFooterView : UIView {

	UIFont* _font;
	UIColor* _shadowColor;
	long long _textAlignment;
	UIColor* _textColor;
	NSArray* _textLines;

}

@property (nonatomic,retain) UIFont * font;                        //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;                //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign,nonatomic) long long textAlignment;              //@synthesize textAlignment=_textAlignment - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                  //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) NSArray * textLines;                  //@synthesize textLines=_textLines - In the implementation block
-(void)setShadowColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(UIColor *)shadowColor;
-(void)setFont:(UIFont *)arg1 ;
-(void)setTextLines:(NSArray *)arg1 ;
-(NSArray *)textLines;
-(long long)textAlignment;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)sizeToFit;
-(void)dealloc;
-(UIFont *)font;
@end

