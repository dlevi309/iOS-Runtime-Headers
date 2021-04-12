/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

