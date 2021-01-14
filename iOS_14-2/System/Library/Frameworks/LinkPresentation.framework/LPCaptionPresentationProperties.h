/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class NSString, NSAttributedString, UIColor, NSNumber;

@interface LPCaptionPresentationProperties : NSObject {

	NSString* _text;
	NSAttributedString* _attributedText;
	UIColor* _color;
	double _textScale;
	NSNumber* _maximumNumberOfLines;

}

@property (nonatomic,copy) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;              //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,retain) UIColor * color;                                //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double textScale;                               //@synthesize textScale=_textScale - In the implementation block
@property (nonatomic,retain) NSNumber * maximumNumberOfLines;                //@synthesize maximumNumberOfLines=_maximumNumberOfLines - In the implementation block
-(NSAttributedString *)attributedText;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSNumber *)maximumNumberOfLines;
-(id)init;
-(void)setMaximumNumberOfLines:(NSNumber *)arg1 ;
-(UIColor *)color;
-(void)setText:(NSString *)arg1 ;
-(void)setTextScale:(double)arg1 ;
-(double)textScale;
-(void)setColor:(UIColor *)arg1 ;
-(NSString *)text;
@end

