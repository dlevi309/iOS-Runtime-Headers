/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

