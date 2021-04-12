/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


@protocol PDFAKControllerDelegateProtocol;
@class PDFDocument, PDFView, AKController, AKToolbarView;

@interface PDFAKDocumentAdaptorPrivate : NSObject {

	BOOL isTornDown;
	PDFDocument* pdfDocument;
	PDFView* pdfView;
	AKController* akController;
	id<PDFAKControllerDelegateProtocol> pdfAKControllerDelegate;
	AKToolbarView* akToolbarView;
	double modelBaseScaleFactor;

}
@end

