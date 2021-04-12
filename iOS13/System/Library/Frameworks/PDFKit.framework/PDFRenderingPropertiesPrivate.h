/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


#import <PDFKit/PDFKit-Structs.h>
@class PDFView, PDFLayerController, UIColor;

@interface PDFRenderingPropertiesPrivate : NSObject {

	PDFView* pdfView;
	PDFLayerController* pdfLayerController;
	long long displayBox;
	BOOL shouldAntiAlias;
	double greekingThreshold;
	long long interpolationQuality;
	double lineWidthThreshold;
	UIColor* pageColor;
	BOOL enablePageShadows;
	BOOL enableTileEdgeColoring;
	BOOL enableAccessibilityDrawing;
	double screenScaleFactor;
	BOOL enableTileUpdates;
	BOOL enableBackgroundImages;
	BOOL isUsingPDFExtensionView;
	CGColorSpaceRef deviceColorSpace;

}
@end

