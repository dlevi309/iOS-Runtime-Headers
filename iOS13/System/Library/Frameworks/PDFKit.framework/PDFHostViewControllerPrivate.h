/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


@protocol PDFExtensionProtocol, PDFHostViewControllerDelegate;
#import <PDFKit/PDFKit-Structs.h>
@class NSExtension, UIScrollView, PDFExtensionTopView, PDFPasswordViewController, NSString, PDFPageLabelView, UITapGestureRecognizer, UILongPressGestureRecognizer, PDFPanGestureRecognizer, UIPointerInteraction;

@interface PDFHostViewControllerPrivate : NSObject {

	NSExtension* extension;
	id<PDFExtensionProtocol> extensionProxy;
	UIScrollView* hostScrollView;
	id<PDFHostViewControllerDelegate> hostViewControllerDelegate;
	PDFExtensionTopView* topView;
	PDFPasswordViewController* passwordViewController;
	NSString* password;
	PDFPageLabelView* pageLabelView;
	BOOL isUnlocked;
	long long currentPageIndex;
	long long pageCount;
	CGSize documentViewSize;
	double minScaleFactor;
	double maxScaleFactor;
	BOOL hasSelection;
	CGPoint topLeftSelectionPoint;
	CGPoint bottomRightSelectionPoint;
	UITapGestureRecognizer* tapGestureRecognizer;
	UITapGestureRecognizer* doubleTapGestureRecognizer;
	UILongPressGestureRecognizer* longPressGestureRecognizer;
	PDFPanGestureRecognizer* panGestureRecognizer;
	BOOL recentGestureIsIndirectTouch;
	UIPointerInteraction* pointerInteraction;
	/*^block*/id pdfPointerCompletionHandler;
	CGRect insetBoundsInDocument;
	CGRect scrollViewFrame;
	UIEdgeInsets contentInset;
	UIEdgeInsets pdfSafeAreaInsets;
	double horizontalScaleFactor;
	CGPoint documentViewCenter;
	BOOL pdfViewIsRotating;
	BOOL pdfViewNeedsUpdate;
	BOOL hostScrollViewObserverIsActive;
	/*^block*/id snapshotCompletion;

}
@end

