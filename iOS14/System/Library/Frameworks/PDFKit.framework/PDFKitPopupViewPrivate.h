/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


@class PDFAnnotation, PDFPageView, PDFView, UITextView, NSUndoManager, UIViewController, NSString;

@interface PDFKitPopupViewPrivate : NSObject {

	PDFAnnotation* parentAnnotation;
	PDFPageView* pageView;
	PDFView* view;
	UITextView* popupTextView;
	NSUndoManager* popupTextViewUndoManager;
	UIViewController* popupController;
	NSString* contents;
	BOOL deviceIsiPhone;
	BOOL deviceIsiPad;
	id savedFirstResponder;

}
@end

