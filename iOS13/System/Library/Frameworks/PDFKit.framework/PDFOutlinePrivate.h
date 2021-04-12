/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFDocument, NSString, PDFAction, PDFOutline, NSMutableArray;

@interface PDFOutlinePrivate : NSObject {

	PDFDocument* document;
	NSString* title;
	PDFAction* action;
	PDFOutline* parent;
	NSMutableArray* children;
	BOOL childrenLoaded;
	CFDictionaryRef dictionary;
	BOOL open;
	CGPDFDictionaryRef srcDictionary;

}
@end

