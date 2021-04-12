/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	os_unfair_lock_s cachedAppearancesLock;
	NSMutableDictionary* cachedAppearances;
	BOOL isSelected;
	BOOL isHighlighted;
	NSIndexSet* quadPointsIndexSet;
	CGPathRef quadPointsPath;
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
	BOOL isTransparent;
	PDFAccessibilityNode* accessibilityNode;
	double scaleFactor;
	BOOL isFullyConstructed;
	BOOL constructingDictionaryRef;
	PDFAKAnnotationAdaptor* akAnnotationAdaptor;
	id<NSCopying> akAnnotationForCopying;

}
@end

