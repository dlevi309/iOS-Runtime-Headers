/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)clear;
-(double)inset;
-(id)init;
-(void)setNeedsDisplay;
-(void)addAnimation:(id)arg1 ;
-(void)unhide;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)setInset:(double)arg1 ;
-(void)dealloc;
-(void)addRectPath:(CGPathRef)arg1 toView:(id)arg2 layer:(id)arg3 rectangle:(SCD_Struct_UI6)arg4 upright:(BOOL)arg5 ;
-(void)makeTheClipPath:(id)arg1 layer:(id)arg2 rectangle:(SCD_Struct_UI6)arg3 upright:(BOOL)arg4 ;
-(void)makeTheBorderPath:(id)arg1 layer:(id)arg2 rectangle:(SCD_Struct_UI6)arg3 upright:(BOOL)arg4 ;
-(void)addHighlightLayerFor:(id)arg1 atIndex:(unsigned long long)arg2 to:(id)arg3 animated:(BOOL)arg4 ;
-(void)addHighlightFor:(id)arg1 to:(id)arg2 animated:(BOOL)arg3 ;
@end

