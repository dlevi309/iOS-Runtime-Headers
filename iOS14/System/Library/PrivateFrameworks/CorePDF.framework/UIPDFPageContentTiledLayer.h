/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <CorePDF/CorePDF-Structs.h>
#import <QuartzCore/CATiledLayer.h>
#import <UIKit/UIPDFSelectionLayer.h>

@class CALayer;

@interface UIPDFPageContentTiledLayer : CATiledLayer <UIPDFSelectionLayer> {

	CALayer* _selectionLayer;

}
-(void)layoutSublayers;
-(id)init;
-(void)setNeedsDisplay;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)dealloc;
-(void)setSelectionNeedsDisplay;
@end

