/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHStrokeGroupBasedVisualization.h>

@interface CHNormalizedDrawingVisualization : CHStrokeGroupBasedVisualization
-(void)drawVisualizationInRect:(CGRect)arg1 context:(CGContextRef)arg2 viewBounds:(CGRect)arg3 ;
-(CGRect)dirtyRectForStrokeGroup:(id)arg1 ;
-(long long)layeringPriority;
-(BOOL)shouldDrawStrokeGroup:(id)arg1 ;
-(CGAffineTransform)_transformForInputDrawingBounds:(CGRect)arg1 referenceBounds:(CGRect)arg2 viewBounds:(CGRect)arg3 ;
-(void)_drawGroupBrackgroundInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(void)drawInputDrawing:(id)arg1 inContext:(CGContextRef)arg2 transform:(CGAffineTransform)arg3 ;
-(void)_drawCutPoints:(id)arg1 inputDrawing:(id)arg2 inContext:(CGContextRef)arg3 transform:(CGAffineTransform)arg4 ;
-(BOOL)wantsInputDrawings;
@end

