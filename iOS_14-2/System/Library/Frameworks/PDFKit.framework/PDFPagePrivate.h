/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	AB builtLayout;
	os_unfair_lock_s dataDetectorsLock;
	BOOL ranDataDetectors;
	NSString* text;
	NSAttributedString* attributedString;
	BOOL displaysAnnotations;
	BOOL displaysMarkups;
	NSMutableArray* annotations;
	AB loadedAnnotations;
	NSLock* lock_getAnnotations;
	NSLock* lock_accessAnnotations;
	NSMutableArray* scannedAnnotations;
	long long rotation;
	CGRect mediaBox;
	CGRect cropBox;
	CGRect bleedBox;
	CGRect trimBox;
	CGRect artBox;
	CGDisplayListRef displayList;
	BOOL creatingDisplayList;
	os_unfair_lock_s displayListCreationLock;
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

