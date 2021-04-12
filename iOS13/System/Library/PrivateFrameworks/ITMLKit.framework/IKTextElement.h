/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKViewElement.h>

@class IKTextParser, NSMutableArray, NSAttributedString, NSArray, UIColor;

@interface IKTextElement : IKViewElement {

	IKTextParser* _textParser;
	NSMutableArray* _textBadges;
	NSMutableArray* _textBadgeElements;
	NSMutableArray* _textSpanElements;
	unsigned long long _textStyle;

}

@property (nonatomic,retain,readonly) NSAttributedString * text; 
@property (nonatomic,readonly) NSArray * badges; 
@property (nonatomic,readonly) unsigned long long textStyle;                  //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,readonly) long long maxLines; 
@property (nonatomic,readonly) unsigned long long alignment; 
@property (nonatomic,readonly) UIColor * color; 
+(BOOL)shouldParseChildDOMElements;
-(id)debugDescription;
-(unsigned long long)alignment;
-(UIColor *)color;
-(NSAttributedString *)text;
-(unsigned long long)textStyle;
-(id)accessibilityText;
-(long long)maxLines;
-(NSArray *)badges;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(void)appDocumentDidMarkStylesDirty;
-(id)initWithPrototypeElement:(id)arg1 parent:(id)arg2 appDataItem:(id)arg3 ;
-(id)initWithOriginalElement:(id)arg1 ;
-(unsigned long long)_styleForTagName:(id)arg1 ;
-(id)attributedStringWithFont:(id)arg1 ;
-(id)attributedStringWithFontHandler:(/*^block*/id)arg1 ;
-(id)attributedStringWithFontHandler:(/*^block*/id)arg1 defaultAttributes:(id*)arg2 ;
-(id)attributedStringWithFont:(id)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3 ;
-(id)attributedStringWithFontHandler:(/*^block*/id)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3 ;
-(id)attributedStringWithFontHandler:(/*^block*/id)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3 defaultAttributes:(id*)arg4 ;
@end

