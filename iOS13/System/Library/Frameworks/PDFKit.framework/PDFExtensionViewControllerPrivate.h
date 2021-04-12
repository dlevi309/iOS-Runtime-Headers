/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


@protocol PDFHostProtocol;
#import <PDFKit/PDFKit-Structs.h>
@class PDFView, NSString, PDFSelection, NSMutableArray;

@interface PDFExtensionViewControllerPrivate : NSObject {

	id<PDFHostProtocol> hostProxy;
	PDFView* pdfView;
	CGSize documentViewSize;
	NSString* searchString;
	PDFSelection* searchSelection;
	NSMutableArray* searchResults;
	BOOL didCancelActiveSearch;
	long long currentGestureState;
	BOOL hasSelection;
	CGPoint topLeftSelectionPoint;
	CGPoint bottomRightSelectionPoint;

}
@end

