/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIFont, NSAttributedString;

@interface CPSMultilineLabelConfig : NSObject <NSCopying> {

	NSString* _text;
	UIFont* _font;
	unsigned long long _lineCount;
	NSAttributedString* _attributedText;

}

@property (nonatomic,copy) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIFont * font;                                  //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) unsigned long long lineCount;                   //@synthesize lineCount=_lineCount - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;              //@synthesize attributedText=_attributedText - In the implementation block
-(NSAttributedString *)attributedText;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(id)description;
-(void)setLineCount:(unsigned long long)arg1 ;
-(unsigned long long)lineCount;
-(NSString *)text;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(UIFont *)font;
-(BOOL)isEqualToLabelConfig:(id)arg1 ;
@end

