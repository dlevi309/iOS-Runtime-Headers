/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


@protocol PDFPageLayerInterface;
#import <PDFKit/PDFKit-Structs.h>
@class NSUUID, PDFAnnotation, NSMutableDictionary, NSMutableArray, PDFScannerResult, CALayer, PDFPageLayerEffect;

@interface PDFPageLayerEffectPrivate : NSObject {

	id<PDFPageLayerInterface> pageLayer;
	NSUUID* uuid;
	CGRect pageFrame;
	BOOL shouldRotateContent;
	PDFAnnotation* annotation;
	NSMutableDictionary* markupEffectLayers;
	NSMutableArray* selections;
	NSMutableDictionary* selectionEffectLayers;
	PDFScannerResult* pdfResult;
	CALayer* rootSelectionLayer;
	PDFPageLayerEffect* noteLayer;

}
@end

