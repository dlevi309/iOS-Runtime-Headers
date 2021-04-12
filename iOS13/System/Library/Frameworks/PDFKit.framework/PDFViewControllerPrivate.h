/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFView, CALayer, PDFAnnotation, NSMutableArray, UIMenuItem, PDFMarkupMenuView;

@interface PDFViewControllerPrivate : NSObject {

	PDFView* view;
	CGRect viewMarquee;
	CALayer* marqueeEffect;
	PDFAnnotation* activeAnnotation;
	unsigned long long textSelectionMenu;
	NSMutableArray* textSelectionMenuItems;
	UIMenuItem* highlightItem;
	UIMenuItem* showMarkupMenuItem;
	PDFMarkupMenuView* markupMenuView;
	double longPressGestureStartTime;
	BOOL didPostPDFExtensionViewAnnotationLongPress;

}
@end

