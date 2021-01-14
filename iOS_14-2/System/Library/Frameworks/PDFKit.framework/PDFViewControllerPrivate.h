/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

