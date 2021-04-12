/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

