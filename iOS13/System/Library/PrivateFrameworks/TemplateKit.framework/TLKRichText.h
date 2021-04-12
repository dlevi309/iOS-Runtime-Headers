/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)icons;
-(id)text;
-(BOOL)hasContent;
-(NSArray *)formattedTextItems;
-(BOOL)hasOnlyImage;
-(id)filterItemsByType:(unsigned long long)arg1 ;
-(void)setFormattedTextItems:(NSArray *)arg1 ;
-(id)stars;
-(id)inlineRoundedText;
@end

