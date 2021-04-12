/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


@protocol NSCopying;
#import <PDFKit/PDFKit-Structs.h>
@class PDFPage, NSUUID, NSMutableDictionary, NSDictionary, NSIndexSet, PDFAnnotation, NSLock, NSString, UIColor, NSLayoutManager, NSTextStorage, NSArray, PDFAccessibilityNode, PDFAKAnnotationAdaptor;

@interface PDFAnnotationPrivateVars : NSObject {

	BOOL loggingEnabled;
	BOOL shouldExport;
	PDFPage* page;
	CGPDFDictionaryRef sourceDictionary;
	CFDictionaryRef dictionaryRef;
	NSUUID* pdfAnnotationUUID;
	CGPDFAnnotationRef cgAnnotation;
	NSMutableDictionary* PDFAnnotationDictionary;
	NSDictionary* PDFAnnotationKeyMapping;
	NSMutableDictionary* internalPDFAnnotationDictionary;
	CGPDFFormRef normalAppearance;
	CGPDFFormRef rolloverAppearance;
	CGPDFFormRef downAppearance;
	CGPDFFormRef normalOffAppearance;
	CGPDFFormRef rolloverOffAppearance;
	CGPDFFormRef downOffAppearance;
	BOOL saveAppearance;
	BOOL isSelected;
	BOOL isHighlighted;
	NSIndexSet* quadPointsIndexSet;
	PDFAnnotation* parent;
	PDFAnnotation* popup;
	CGPDFDictionaryRef popupDictionary;
	BOOL popupDrawCloseWidget;
	BOOL popupDrawText;
	CGPath* cgPaths;
	NSLock* pathLock;
	BOOL isSignature;
	BOOL shouldBurnIn;
	NSString* widgetOnStateString;
	id control;
	UIColor* mouseHoverBackgroundColor;
	NSLayoutManager* layoutManager;
	NSTextStorage* textStorage;
	UIEdgeInsets textInsets;
	BOOL restoreLinePoints;
	BOOL restoreQuadPoints;
	CGPoint startPoint;
	CGPoint endPoint;
	NSArray* quadPoints;
	PDFAccessibilityNode* accessibilityNode;
	double scaleFactor;
	BOOL isFullyConstructed;
	BOOL constructingDictionaryRef;
	PDFAKAnnotationAdaptor* akAnnotationAdaptor;
	id<NSCopying> akAnnotationForCopying;

}
@end

