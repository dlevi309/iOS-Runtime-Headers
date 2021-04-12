/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHStrokeGroupingVisualization.h>

@interface CHStrokeGroupClassificationVisualization : CHStrokeGroupingVisualization
-(void)drawVisualizationInRect:(CGRect)arg1 context:(CGContextRef)arg2 viewBounds:(CGRect)arg3 ;
-(long long)layeringPriority;
-(CGColorRef)_newColorForStroke:(id)arg1 inGroup:(id)arg2 ;
-(id)_attributedStringFromString:(id)arg1 withColor:(CGColorRef)arg2 font:(CTFontRef)arg3 paragraphStyle:(CTParagraphStyleRef)arg4 ;
@end

