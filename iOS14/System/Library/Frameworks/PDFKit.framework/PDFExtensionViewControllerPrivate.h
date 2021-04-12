/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

