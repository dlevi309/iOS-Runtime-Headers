/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

