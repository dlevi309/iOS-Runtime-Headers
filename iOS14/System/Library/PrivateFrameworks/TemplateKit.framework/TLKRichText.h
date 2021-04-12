/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
*/

#import <TemplateKit/TLKMultilineText.h>

@class NSArray;

@interface TLKRichText : TLKMultilineText {

	NSArray* _formattedTextItems;

}

@property (nonatomic,retain) NSArray * formattedTextItems;              //@synthesize formattedTextItems=_formattedTextItems - In the implementation block
@property (readonly) BOOL hasContent; 
@property (readonly) BOOL hasOnlyImage; 
-(id)inlineRoundedText;
-(BOOL)hasContent;
-(id)icons;
-(id)stars;
-(BOOL)hasOnlyImage;
-(id)description;
-(id)text;
-(NSArray *)formattedTextItems;
-(void)setFormattedTextItems:(NSArray *)arg1 ;
-(id)filterItemsByType:(unsigned long long)arg1 ;
@end

