/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/SKUILayoutRequest.h>

@class NSAttributedString, NSString;

@interface SKUITextLayoutRequest : NSObject <SKUILayoutRequest> {

	NSAttributedString* _attributedText;
	double _fontSize;
	long long _fontWeight;
	long long _numberOfLines;
	NSString* _text;
	unsigned char _textAlignment;
	double _width;

}

@property (assign,nonatomic) double fontSize;                                //@synthesize fontSize=_fontSize - In the implementation block
@property (assign,nonatomic) long long fontWeight;                           //@synthesize fontWeight=_fontWeight - In the implementation block
@property (assign,nonatomic) unsigned char textAlignment;                    //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) long long numberOfLines;                        //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;              //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,copy) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) double width;                                   //@synthesize width=_width - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) Class layoutClass; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)width;
-(void)setWidth:(double)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(double)fontSize;
-(void)setFontSize:(double)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setTextAlignment:(unsigned char)arg1 ;
-(long long)numberOfLines;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedText;
-(unsigned char)textAlignment;
-(void)setFontWeight:(long long)arg1 ;
-(long long)fontWeight;
-(Class)layoutClass;
@end

