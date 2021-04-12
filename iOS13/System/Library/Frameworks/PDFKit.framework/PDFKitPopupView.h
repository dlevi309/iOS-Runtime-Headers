/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@class PDFKitPopupViewPrivate, NSString;

@interface PDFKitPopupView : UIView <UITextViewDelegate> {

	PDFKitPopupViewPrivate* _private;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeFromSuperview;
-(BOOL)becomeFirstResponder;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)doneButton:(id)arg1 ;
-(id)initWithParentAnnotation:(id)arg1 owningPageView:(id)arg2 owningPDFView:(id)arg3 ;
-(void)_setupPopupView;
-(void)_presentPopupView;
-(void)_presentPopupView_iOS;
-(CGRect)_popoverControllerSourceRect;
-(void)_presentViewController:(id)arg1 ;
-(void)_removeControlForAnnotation;
-(void)_updateParentContents;
@end

