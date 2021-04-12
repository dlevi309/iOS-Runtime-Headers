/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


@protocol PDFPageLayerGeometryInterface;
#import <PDFKit/PDFKit-Structs.h>
@class NSObject, PDFRenderingProperties, PDFPage, PDFPageLayer, PDFPageLayerEffect, NSMutableArray, PDFAnnotation, NSMutableDictionary, NSTextStorage, PDFPageViewAnnotationController, CALayer, UIImage;

@interface PDFPageViewPrivate : NSObject {

	NSObject*<PDFPageLayerGeometryInterface> geometryInterface;
	PDFRenderingProperties* renderingProperties;
	PDFPage* page;
	PDFPageLayer* pageLayer;
	PDFPageLayerEffect* searchLayer;
	NSMutableArray* pageAnnotationEffects;
	PDFAnnotation* activeAnnotation;
	NSMutableDictionary* activeControls;
	NSTextStorage* activeTextStorage;
	NSMutableArray* pageSignatures;
	PDFPageViewAnnotationController* annotationController;
	CALayer* backgroundLayer;
	UIImage* backgroundImage;
	int backgroundQuality;
	unsigned long long visibilityDelegateIndex;
	BOOL isPerformingUndo;
	CALayer* bookmarkLayer;
	CGSize bookmarkSize;

}
@end

