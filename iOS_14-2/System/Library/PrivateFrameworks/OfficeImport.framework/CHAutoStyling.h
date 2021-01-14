/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class CHDChart, OADDrawingTheme;

@interface CHAutoStyling : NSObject {

	CHDChart* mChart;
	OADDrawingTheme* mDrawingTheme;

}
+(id)autoStylingWithChart:(id)arg1 drawingTheme:(id)arg2 ;
-(id)drawingTheme;
-(id)initWithChart:(id)arg1 drawingTheme:(id)arg2 ;
-(int)defaultMarkerStyleForSeriesIndex:(unsigned long long)arg1 ;
-(void)replaceStrokeAndFillInEmptyMarker:(id)arg1 withSeriesGraphicProperties:(id)arg2 ;
@end

