/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


@protocol PDFViewDelegate, OS_dispatch_queue;
#import <PDFKit/PDFKit-Structs.h>
@class PDFDocument, PDFScrollView, PDFViewController, PDFSelection, PDFViewLayout, PDFRenderingProperties, PDFPage, PDFTimer, NSObject, NSMutableArray, NSArray, PDFCoachMarkManager, PDFPasswordViewController, PDFAnnotation, PDFAKOverlayAdaptor, UILongPressGestureRecognizer, UITapGestureRecognizer, PDFDocumentViewController, NSDictionary, UIDragInteraction;

@interface PDFViewPrivate : NSObject {

	PDFDocument* document;
	PDFScrollView* scrollView;
	PDFViewController* controller;
	PDFSelection* currentSelection;
	BOOL autoScale;
	BOOL scaling;
	double zoomIncrement;
	id<PDFViewDelegate> delegate;
	BOOL delegateWillScale;
	BOOL delegateOrdersPageDrawing;
	double gutterWide;
	BOOL displaysPageBreaks;
	UIEdgeInsets pageBreakMargins;
	UIEdgeInsets documentMargins;
	long long displayMode;
	long long displayDirection;
	PDFViewLayout* viewLayout;
	BOOL displaysAsBook;
	BOOL displaysRTL;
	PDFRenderingProperties* renderingProperties;
	unsigned long long lastVerticalScrollDirection;
	unsigned long long lastHorizontalScrollDirection;
	BOOL displaysBookmarksForPages;
	unsigned long long currentPageIndex;
	unsigned long long firstVisiblePage;
	unsigned long long lastVisiblePage;
	BOOL inhibitAutoScroll;
	PDFPage* fromPage;
	PDFTimer* pageSyncTimer;
	NSObject*<OS_dispatch_queue> pagePreloadQueue;
	NSMutableArray* destinationHistory;
	long long historyIndex;
	NSArray* highlights;
	PDFCoachMarkManager* coachMarkManager;
	PDFPasswordViewController* passwordViewController;
	PDFAnnotation* currentTextWidget;
	PDFAKOverlayAdaptor* akOverlayAdaptor;
	BOOL showsScrollIndicators;
	BOOL dataDetectorsEnabled;
	BOOL debugDrawCGPDFNodeLayer[11];
	BOOL wantsForceUpdate;
	double blockingWaitDuration;
	unsigned long long activeMarkupStyle;
	UILongPressGestureRecognizer* longPressGestureRecognizer;
	UITapGestureRecognizer* tapGestureRecognizer;
	UITapGestureRecognizer* doubleTapGestureRecognizer;
	BOOL isUsingPageViewController;
	PDFDocumentViewController* documentViewController;
	NSDictionary* pageViewControllerOptions;
	UIDragInteraction* dragInteraction;
	UIEdgeInsets savedSafeAreaInsets;
	double horizontalScaleFactorBeforeRotation;
	CGPoint documentViewCenterBeforeRotation;
	CGRect extensionViewBoundsInDocument;
	CGRect extensionViewFrame;
	double extensionViewZoomScale;
	PDFTimer* tilesSyncTimer;

}
@end

