/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFView, PDFDocument, PDFRenderingProperties, PDFDocumentContentView, NSMutableDictionary, PDFPageBackgroundManager;

@interface PDFDocumentViewPrivate : NSObject {

	PDFView* pdfView;
	PDFDocument* document;
	PDFRenderingProperties* renderingProperties;
	CGSize documentViewSize;
	PDFDocumentContentView* contentView;
	NSMutableDictionary* pageViews;
	NSMutableDictionary* pageFrames;
	PDFPageBackgroundManager* pageBackgroundManager;
	BOOL ignoreChangedBoundsForBoxNotification;

}
@end

