/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedText;
-(unsigned long long)lineCount;
-(void)setLineCount:(unsigned long long)arg1 ;
-(BOOL)isEqualToLabelConfig:(id)arg1 ;
@end

