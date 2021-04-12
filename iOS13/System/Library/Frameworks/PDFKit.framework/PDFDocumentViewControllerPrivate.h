/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFView, PDFRenderingProperties, PDFPageViewController, PDFPageBackgroundManager, NSHashTable, UIScrollView;

@interface PDFDocumentViewControllerPrivate : NSObject {

	PDFView* pdfView;
	PDFRenderingProperties* renderingProperties;
	PDFPageViewController* activePageView;
	PDFPageBackgroundManager* pageBackgroundManager;
	os_unfair_lock_s weakPageViewControllersLock;
	NSHashTable* weakPageViewControllers;
	double minScale;
	double maxScale;
	BOOL displaysRTL;
	UIScrollView* scrollView;

}
@end

