/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFView, PDFDocument, PDFDocumentView, PDFTimer, NSDate;

@interface PDFScrollViewPrivate : NSObject {

	PDFView* pdfView;
	PDFDocument* document;
	PDFDocumentView* documentView;
	double oldMagnification;
	PDFTimer* boundsUpdateTimer;
	CGRect oldBounds;
	BOOL isZooming;
	BOOL scheduledPageSync;
	NSDate* pageSyncDate;
	BOOL forcesTopAlignment;

}
@end

