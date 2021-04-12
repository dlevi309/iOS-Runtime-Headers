/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(UIColor *)shadowColor;
-(void)setShadowColor:(UIColor *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(UIFont *)font;
-(void)sizeToFit;
-(void)drawRect:(CGRect)arg1 ;
-(UIColor *)textColor;
-(long long)textAlignment;
-(NSArray *)textLines;
-(void)setTextLines:(NSArray *)arg1 ;
@end

