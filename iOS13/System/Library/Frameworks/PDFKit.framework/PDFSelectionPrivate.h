/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFDocument, UIColor, NSMutableArray, NSUUID;

@interface PDFSelectionPrivate : NSObject {

	PDFDocument* document;
	UIColor* color;
	NSMutableArray* pageRanges;
	BOOL forceBreaks;
	CFArrayRef cgSelections;
	NSMutableArray* pages;
	NSUUID* pdfSelectionUUID;

}
@end

