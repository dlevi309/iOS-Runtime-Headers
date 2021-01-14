/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, NSAttributedString, UIImage, UIColor;

@interface VUITextBadge : UIView {

	int _textBlendMode;
	NSString* _title;
	NSAttributedString* _attributedTitle;
	double _strokeSize;
	double _cornerRadius;
	UIImage* _backgroundImage;
	unsigned long long _badgeStyle;
	UIColor* _tintColor;
	double _fontSize;
	UIEdgeInsets _badgeInsets;

}

@property (nonatomic,retain) UIColor * tintColor;                             //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic) double fontSize;                                 //@synthesize fontSize=_fontSize - In the implementation block
@property (nonatomic,copy) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedTitle;              //@synthesize attributedTitle=_attributedTitle - In the implementation block
@property (assign,nonatomic) int textBlendMode;                               //@synthesize textBlendMode=_textBlendMode - In the implementation block
@property (assign,nonatomic) double strokeSize;                               //@synthesize strokeSize=_strokeSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets badgeInsets;                        //@synthesize badgeInsets=_badgeInsets - In the implementation block
@property (assign,nonatomic) double cornerRadius;                             //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage;                       //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (assign,nonatomic) unsigned long long badgeStyle;                   //@synthesize badgeStyle=_badgeStyle - In the implementation block
+(id)attributedTextFromString:(id)arg1 fontColor:(id)arg2 fontSize:(double)arg3 ;
-(NSAttributedString *)attributedTitle;
-(double)fontSize;
-(unsigned long long)badgeStyle;
-(void)setTintColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(CGSize)_textSize;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(double)cornerRadius;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setFontSize:(double)arg1 ;
-(UIImage *)backgroundImage;
-(void)setCornerRadius:(double)arg1 ;
-(void)setBadgeStyle:(unsigned long long)arg1 ;
-(UIColor *)tintColor;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 tintColor:(id)arg2 fontSize:(double)arg3 cornerRadius:(double)arg4 ;
-(void)setStrokeSize:(double)arg1 ;
-(void)setBadgeInsets:(UIEdgeInsets)arg1 ;
-(double)strokeSize;
-(id)initWithAttributedString:(id)arg1 tintColor:(id)arg2 cornerRadius:(double)arg3 ;
-(int)textBlendMode;
-(void)setTextBlendMode:(int)arg1 ;
-(UIEdgeInsets)badgeInsets;
@end

