/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) Class layoutClass; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)fontSize;
-(NSAttributedString *)attributedText;
-(double)width;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(id)init;
-(void)setNumberOfLines:(long long)arg1 ;
-(Class)layoutClass;
-(void)setWidth:(double)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(unsigned char)textAlignment;
-(long long)fontWeight;
-(NSString *)text;
-(void)setFontWeight:(long long)arg1 ;
-(void)setFontSize:(double)arg1 ;
-(void)setTextAlignment:(unsigned char)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)numberOfLines;
@end

