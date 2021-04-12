/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFKit-Structs.h>
#import <UIKit/UITextViewDelegate.h>

@class PDFKitTextViewPrivate, NSString;

@interface PDFKitTextView : NSObject <UITextViewDelegate> {

	PDFKitTextViewPrivate* _private;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setup;
-(id)textView;
-(void)removeFromSuperview;
-(void)setFrame:(CGRect)arg1 ;
-(id)layer;
-(BOOL)becomeFirstResponder;
-(void)_setFont:(id)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(id)annotation;
-(void)textViewDidChange:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(id)initWithAnnotation:(id)arg1 pdfPageView:(id)arg2 pdfView:(id)arg3 ;
-(void)_textWidgetDone;
-(void)_setString:(id)arg1 ;
-(void)_setFontColor:(id)arg1 ;
-(void)_setAlignment:(long long)arg1 ;
-(void)_setAttributedString:(id)arg1 ;
-(void)rotateByAngle:(double)arg1 ;
-(BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2 ;
@end

