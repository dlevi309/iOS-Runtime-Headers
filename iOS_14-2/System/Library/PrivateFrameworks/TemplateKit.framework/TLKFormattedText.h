/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TLKFormattedTextItem.h>

@class NSString;

@interface TLKFormattedText : TLKFormattedTextItem {

	BOOL _isBold;
	BOOL _isEmphasized;
	long long _color;
	long long _verticalTextAlignment;
	NSString* _string;
	unsigned long long _maxLines;

}

@property (assign,nonatomic) BOOL isBold;                                  //@synthesize isBold=_isBold - In the implementation block
@property (assign,nonatomic) BOOL isEmphasized;                            //@synthesize isEmphasized=_isEmphasized - In the implementation block
@property (assign,nonatomic) long long color;                              //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) long long verticalTextAlignment;              //@synthesize verticalTextAlignment=_verticalTextAlignment - In the implementation block
@property (nonatomic,retain) NSString * string;                            //@synthesize string=_string - In the implementation block
@property (assign,nonatomic) unsigned long long maxLines;                  //@synthesize maxLines=_maxLines - In the implementation block
+(id)formattedTextWithString:(id)arg1 ;
-(BOOL)isBold;
-(void)setMaxLines:(unsigned long long)arg1 ;
-(BOOL)hasContent;
-(long long)color;
-(id)description;
-(void)setColor:(long long)arg1 ;
-(void)setIsEmphasized:(BOOL)arg1 ;
-(long long)verticalTextAlignment;
-(void)setVerticalTextAlignment:(long long)arg1 ;
-(void)setIsBold:(BOOL)arg1 ;
-(NSString *)string;
-(BOOL)isEmphasized;
-(void)setString:(NSString *)arg1 ;
-(unsigned long long)maxLines;
@end

