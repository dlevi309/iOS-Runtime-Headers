/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFDocument, PDFView, NSString, UIImage, NSAttributedString, NSMutableArray, NSLock, PDFAKPageAdaptor, NSMutableSet, NSMutableDictionary;

@interface PDFPagePrivate : NSObject {

	PDFDocument* document;
	CGPDFPageRef page;
	CGColorRef pageBackgroundColorHint;
	PDFView* view;
	NSString* label;
	UIImage* image;
	CGImageRef cgImage;
	CGImageSourceRef cgImageSource;
	unsigned cgImageOrientation;
	os_unfair_lock_s layoutLock;
	CGPDFLayoutRef layout;
	os_unfair_lock_s dataDetectorsLock;
	BOOL ranDataDetectors;
	NSString* text;
	NSAttributedString* attributedString;
	BOOL displaysAnnotations;
	BOOL displaysMarkups;
	NSMutableArray* annotations;
	NSLock* lock_getAnnotations;
	NSLock* lock_accessAnnotations;
	NSMutableArray* scannedAnnotations;
	long long rotation;
	CGRect mediaBox;
	CGRect cropBox;
	CGRect bleedBox;
	CGRect trimBox;
	CGRect artBox;
	BOOL bookmarked;
	BOOL isFullyConstructed;
	BOOL colorWidgetBackgrounds;
	PDFAKPageAdaptor* akPageAdaptor;
	BOOL akDidSetupRealPageModelController;
	NSMutableArray* annotationChanges;
	NSMutableSet* changedAnnotations;
	NSMutableDictionary* widgetAnnotationLookup;
	NSMutableArray* scannerResults;
	BOOL didChangeBounds;

}
@end

