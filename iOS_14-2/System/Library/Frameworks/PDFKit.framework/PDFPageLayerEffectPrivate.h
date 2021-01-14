/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

