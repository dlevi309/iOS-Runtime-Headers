/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewPrintFormatter.h>

@class NSArray;

@interface UITextViewPrintFormatter : UIViewPrintFormatter {

	SCD_Struct_UI30 _textViewPrintFormatterFlags;
	NSArray* _pageData;

}
-(id)color;
-(void)setColor:(id)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)_textView;
-(void)setFont:(id)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(id)font;
-(void)setAttributedText:(id)arg1 ;
-(id)attributedText;
-(long long)textAlignment;
-(long long)_recalcPageCount;
-(CGRect)rectForPageAtIndex:(long long)arg1 ;
-(void)drawInRect:(CGRect)arg1 forPageAtIndex:(long long)arg2 ;
-(id)_pageData;
@end

