/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/


@protocol PDFPageLayerGeometryInterface;
#import <PDFKit/PDFKit-Structs.h>
@class PDFPage, NSObject, PDFRenderingProperties, CALayer, NSDate, NSMutableArray, PDFTimer, NSMutableDictionary;

@interface PDFPageLayerPrivate : NSObject {

	PDFPage* page;
	NSObject*<PDFPageLayerGeometryInterface> geometryInterface;
	PDFRenderingProperties* renderingProperties;
	long long oldPageRotation;
	CGRect oldBoundsForBox;
	CALayer* tilesLayer;
	int generationCount;
	double lastLayoutZoomFactor;
	CGRect lastLayerFrameInRootView;
	NSDate* lastZoomChange;
	BOOL zoomChangeScheduled;
	double zoomGenerationDelay;
	unsigned long long visibilityDelegateIndex;
	BOOL tileLayerHidden;
	NSMutableArray* tiles;
	BOOL allowUpdate;
	PDFTimer* forcedUpdateTimer;
	BOOL isForcingUpdate;
	AB isTiling;
	AB requestedTiling;
	CALayer* effectsLayer;
	NSMutableDictionary* pageLayerEffects;

}
@end

