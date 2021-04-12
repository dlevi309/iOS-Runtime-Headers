/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


#import <PDFKit/PDFKit-Structs.h>
@class DDScannerResult, PDFPage, NSArray;

@interface PDFScannerResultPrivate : NSObject {

	DDScannerResult* ddResult;
	PDFPage* page;
	CGRect bounds;
	NSArray* rects;
	BOOL resultIsPastDate;
	BOOL hasRunActionsForResult;
	BOOL hasActionsForResult;
	DDHighlightRef highlightRef;

}
@end

