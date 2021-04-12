/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

