/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSNumber *)maximumNumberOfLines;
-(void)setMaximumNumberOfLines:(NSNumber *)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedText;
-(void)setTextScale:(double)arg1 ;
-(double)textScale;
@end

