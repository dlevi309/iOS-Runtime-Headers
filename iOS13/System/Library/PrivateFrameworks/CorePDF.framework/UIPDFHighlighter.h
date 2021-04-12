/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/


#import <CorePDF/CorePDF-Structs.h>
@class NSMutableArray;

@interface UIPDFHighlighter : NSObject {

	NSMutableArray* _highLightLayers;
	CGColorRef _highlightColor;
	CGColorRef _borderColor;
	CGColorRef _whiteColor;
	CGPDFPageRef _page;
	double _enlargeFactor;
	double _pdfToViewScale;
	double inset;

}

@property (assign,nonatomic) double inset; 
-(id)init;
-(void)dealloc;
-(void)clear;
-(void)addAnimation:(id)arg1 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)setNeedsDisplay;
-(void)setInset:(double)arg1 ;
-(void)addRectPath:(CGPathRef)arg1 toView:(id)arg2 layer:(id)arg3 rectangle:(SCD_Struct_UI6)arg4 upright:(BOOL)arg5 ;
-(double)inset;
-(void)makeTheClipPath:(id)arg1 layer:(id)arg2 rectangle:(SCD_Struct_UI6)arg3 upright:(BOOL)arg4 ;
-(void)makeTheBorderPath:(id)arg1 layer:(id)arg2 rectangle:(SCD_Struct_UI6)arg3 upright:(BOOL)arg4 ;
-(void)addHighlightLayerFor:(id)arg1 atIndex:(unsigned long long)arg2 to:(id)arg3 animated:(BOOL)arg4 ;
-(void)unhide;
-(void)addHighlightFor:(id)arg1 to:(id)arg2 animated:(BOOL)arg3 ;
@end

