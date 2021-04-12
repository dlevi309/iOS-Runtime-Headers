/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(void)removeFromSuperview;
-(void)_presentViewController:(id)arg1 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)doneButton:(id)arg1 ;
-(id)initWithParentAnnotation:(id)arg1 owningPageView:(id)arg2 owningPDFView:(id)arg3 ;
-(void)_setupPopupView;
-(void)_presentPopupView;
-(void)_presentPopupView_iOS;
-(CGRect)_popoverControllerSourceRect;
-(void)_removeControlForAnnotation;
-(void)_updateParentContents;
@end

