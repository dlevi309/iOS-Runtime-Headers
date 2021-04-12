/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

