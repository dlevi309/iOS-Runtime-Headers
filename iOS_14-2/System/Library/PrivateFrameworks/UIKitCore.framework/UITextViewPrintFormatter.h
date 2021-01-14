/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewPrintFormatter.h>

@class NSArray;

@interface UITextViewPrintFormatter : UIViewPrintFormatter {

	SCD_Struct_UI34 _textViewPrintFormatterFlags;
	NSArray* _pageData;

}
-(id)attributedText;
-(void)setAttributedText:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(id)color;
-(void)setText:(id)arg1 ;
-(long long)textAlignment;
-(void)setColor:(id)arg1 ;
-(id)text;
-(id)_pageData;
-(void)setTextAlignment:(long long)arg1 ;
-(long long)_recalcPageCount;
-(CGRect)rectForPageAtIndex:(long long)arg1 ;
-(void)drawInRect:(CGRect)arg1 forPageAtIndex:(long long)arg2 ;
-(id)_textView;
-(id)font;
@end

