/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSTextElement.h>

@class NSAttributedString, NSTextRange, NSTextDataProvider, NSMutableArray;

@interface NSTextParagraph : NSTextElement {

	NSAttributedString* _attributedString;
	NSRange _range;
	NSTextRange* _paragraphContentRange;
	NSTextRange* _paragraphSeparatorRange;
	NSTextDataProvider* _textDataProvider;
	NSMutableArray* _textLayoutFragments;

}

@property (copy,readonly) NSAttributedString * attributedString; 
@property (readonly) NSTextRange * paragraphContentRange; 
@property (readonly) NSTextRange * paragraphSeparatorRange; 
+(id)textParagraphsForAttributedString:(id)arg1 range:(NSRange)arg2 ;
-(id)init;
-(void)dealloc;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(id)initWithAttributedString:(id)arg1 ;
-(NSAttributedString *)attributedString;
-(NSTextRange *)paragraphContentRange;
-(id)initWithAttributedString:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithTextContentManager:(id)arg1 ;
-(void)setTextDataProvider:(id)arg1 ;
-(void)setParagraphContentRange:(NSTextRange *)arg1 ;
-(NSTextRange *)paragraphSeparatorRange;
-(void)setParagraphSeparatorRange:(NSTextRange *)arg1 ;
-(void)synchronizeDocumentRange;
-(id)paragraphRange;
-(id)textDataProvider;
@end

