/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(unsigned long long)maxLines;
-(void)setMaxLines:(unsigned long long)arg1 ;
@end

