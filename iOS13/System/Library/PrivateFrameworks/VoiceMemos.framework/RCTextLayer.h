/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSString, UIFont, UIColor;

@interface RCTextLayer : CALayer {

	CGSize _cachedSize;
	unsigned long long _cachedSizeHash;
	NSString* _text;
	UIFont* _font;
	UIColor* _textColor;
	long long _preferredAlignment;
	long long _textAlignment;

}

@property (nonatomic,copy) NSString * text;                             //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIFont * font;                             //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                       //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) long long preferredAlignment;              //@synthesize preferredAlignment=_preferredAlignment - In the implementation block
@property (assign,nonatomic) long long textAlignment;                   //@synthesize textAlignment=_textAlignment - In the implementation block
-(id)init;
-(id)_attributes;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(UIFont *)font;
-(void)sizeToFit;
-(UIColor *)textColor;
-(long long)textAlignment;
-(void)drawInContext:(CGContextRef)arg1 ;
-(CGSize)_displaySize;
-(CGRect)textRectWithAlignment:(long long)arg1 inLayoutBounds:(CGRect)arg2 ;
-(long long)preferredAlignment;
-(void)setPreferredAlignment:(long long)arg1 ;
@end

