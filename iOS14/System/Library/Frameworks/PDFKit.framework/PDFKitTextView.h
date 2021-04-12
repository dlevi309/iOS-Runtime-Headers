/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)textView;
-(id)annotation;
-(BOOL)becomeFirstResponder;
-(void)_setup;
-(id)layer;
-(void)removeFromSuperview;
-(void)_setFont:(id)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)_setAlignment:(long long)arg1 ;
-(id)initWithAnnotation:(id)arg1 pdfPageView:(id)arg2 pdfView:(id)arg3 ;
-(void)_textWidgetDone;
-(void)_setString:(id)arg1 ;
-(void)_setFontColor:(id)arg1 ;
-(void)_setAttributedString:(id)arg1 ;
-(void)rotateByAngle:(double)arg1 ;
-(BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2 ;
@end

