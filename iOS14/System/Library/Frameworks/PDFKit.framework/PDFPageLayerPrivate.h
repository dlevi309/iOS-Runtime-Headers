/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	CALayer* shadowLayer;
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

