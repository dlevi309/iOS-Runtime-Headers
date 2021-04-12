/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

