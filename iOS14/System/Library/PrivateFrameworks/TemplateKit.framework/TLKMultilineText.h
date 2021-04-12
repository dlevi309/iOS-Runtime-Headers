/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TLKObject.h>

@class NSString;

@interface TLKMultilineText : TLKObject {

	NSString* _text;
	unsigned long long _maxLines;

}

@property (nonatomic,retain) NSString * text;                          //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) unsigned long long maxLines;              //@synthesize maxLines=_maxLines - In the implementation block
+(id)textWithString:(id)arg1 ;
-(void)setMaxLines:(unsigned long long)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(id)description;
-(NSString *)text;
-(unsigned long long)maxLines;
@end

