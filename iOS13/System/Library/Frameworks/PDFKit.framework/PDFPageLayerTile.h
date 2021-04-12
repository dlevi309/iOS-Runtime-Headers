/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
*/

#import <PDFKit/PDFKit-Structs.h>
#import <QuartzCore/CALayer.h>
#import <PDFKit/PDFTilePoolDelegate.h>

@class PDFPageLayer, PDFTileSurface;

@interface PDFPageLayerTile : CALayer <PDFTilePoolDelegate> {

	PDFPageLayer* pageLayer;
	CGAffineTransform renderingTransform;
	double tileContentsScale;
	PDFTileSurface* pageSurface;
	int generationID;
	AB isWorking;
	CGRect originalFrame;

}
-(void)dealloc;
-(void)hasStartedWork;
-(void)recievePDFTileSurface:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 forPageLayer:(id)arg2 withRenderingTransform:(CGAffineTransform)arg3 tileContentsScale:(double)arg4 generationID:(int)arg5 ;
-(BOOL)isWorking;
@end

