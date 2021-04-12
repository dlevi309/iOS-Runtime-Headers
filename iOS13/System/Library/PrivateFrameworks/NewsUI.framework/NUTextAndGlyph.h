/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/


@class NSAttributedString, NSString, UIImage;

@interface NUTextAndGlyph : NSObject {

	NSAttributedString* _attributedText;
	NSString* _text;
	UIImage* _glyph;

}

@property (nonatomic,readonly) NSAttributedString * attributedText;              //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,readonly) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) UIImage * glyph;                                  //@synthesize glyph=_glyph - In the implementation block
-(id)init;
-(NSString *)text;
-(UIImage *)glyph;
-(NSAttributedString *)attributedText;
-(id)initWithAttributedText:(id)arg1 glyph:(id)arg2 ;
-(id)initWithAttributedText:(id)arg1 text:(id)arg2 glyph:(id)arg3 ;
-(id)initWithText:(id)arg1 glyph:(id)arg2 ;
@end

