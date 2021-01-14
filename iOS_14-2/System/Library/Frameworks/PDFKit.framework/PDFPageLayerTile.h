/*
* Generated on Thursday, January 14, 2021 at 2:26:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	CGRect _rootViewFrame;

}

@property (assign) CGRect rootViewFrame;              //@synthesize rootViewFrame=_rootViewFrame - In the implementation block
-(void)dealloc;
-(void)hasStartedWork;
-(void)recievePDFTileSurface:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 forPageLayer:(id)arg2 withRenderingTransform:(CGAffineTransform)arg3 tileContentsScale:(double)arg4 generationID:(int)arg5 ;
-(BOOL)isWorking;
-(CGRect)rootViewFrame;
-(void)setRootViewFrame:(CGRect)arg1 ;
@end

