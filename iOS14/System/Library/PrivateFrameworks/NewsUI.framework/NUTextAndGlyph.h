/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/


@class NSAttributedString, NSString, UIImage;

@interface NUTextAndGlyph : NSObject {

	NSAttributedString* _attributedText;
	NSString* _text;
	UIImage* _glyph;
	unsigned long long _alignment;

}

@property (nonatomic,readonly) NSAttributedString * attributedText;              //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,readonly) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) UIImage * glyph;                                  //@synthesize glyph=_glyph - In the implementation block
@property (assign,nonatomic) unsigned long long alignment;                       //@synthesize alignment=_alignment - In the implementation block
-(UIImage *)glyph;
-(NSAttributedString *)attributedText;
-(id)init;
-(unsigned long long)alignment;
-(void)setAlignment:(unsigned long long)arg1 ;
-(NSString *)text;
-(id)initWithAttributedText:(id)arg1 glyph:(id)arg2 ;
-(id)initWithAttributedText:(id)arg1 text:(id)arg2 glyph:(id)arg3 ;
-(id)initWithText:(id)arg1 glyph:(id)arg2 ;
@end

