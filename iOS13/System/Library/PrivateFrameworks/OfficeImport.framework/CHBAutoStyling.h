/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/CHAutoStyling.h>
#import <libobjc.A.dylib/CHAutoStyling.h>

@class NSString;

@interface CHBAutoStyling : CHAutoStyling <CHAutoStyling>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)autoFill;
-(id)fillWithColorIndex:(unsigned long long)arg1 ;
-(id)strokeWithColorIndex:(int)arg1 ;
-(id)autoStroke;
-(void)resolvedGraphicProperties:(id)arg1 autoFill:(id)arg2 autoStroke:(id)arg3 autoShadow:(BOOL)arg4 nullFill:(id)arg5 nullStroke:(id)arg6 nullShadow:(BOOL)arg7 ;
-(id)autoSeriesFill:(unsigned long long)arg1 ;
-(id)autoStrokeForSeriesIndex:(unsigned long long)arg1 ;
-(id)autoSeriesBorderStroke;
-(void)resolveAxisGraphicProperties:(id)arg1 ;
-(void)resolveMinorGridLinesGraphicProperties:(id)arg1 ;
-(void)resolveMajorGridLinesGraphicProperties:(id)arg1 ;
-(void)resolveWallGraphicProperties:(id)arg1 ;
-(void)resolveFloorGraphicProperties:(id)arg1 ;
-(void)resolveLegendGraphicProperties:(id)arg1 ;
-(void)resolvePlotAreaGraphicProperties:(id)arg1 ;
-(void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(unsigned long long)arg2 ;
-(void)resolveChartAreaGraphicProperties:(id)arg1 ;
-(id)autoTextFill;
-(void)resolveGraphicPropertiesOfSeries:(id)arg1 forSeriesIndex:(unsigned long long)arg2 isLine:(BOOL)arg3 ;
-(void)resolveMarker:(id)arg1 withSeriesGraphicProperties:(id)arg2 forSeriesIndex:(unsigned long long)arg3 clientGraphicPropertyDefaults:(/*^block*/id)arg4 ;
-(void)resolveGraphicPropertiesOfErrorBar:(id)arg1 forSeriesIndex:(unsigned long long)arg2 ;
-(void)resolveGraphicPropertiesOfTrendline:(id)arg1 forSeriesIndex:(unsigned long long)arg2 ;
@end

