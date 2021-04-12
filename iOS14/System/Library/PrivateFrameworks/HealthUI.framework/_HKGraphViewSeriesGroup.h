/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


#import <HealthUI/HealthUI-Structs.h>
@class NSMutableDictionary, NSMutableArray, _HKGraphViewSelectionContext, _HKGraphViewAxisAnnotationHandler, NSArray, HKLegendView;

@interface _HKGraphViewSeriesGroup : NSObject {

	NSMutableDictionary* _zoomToSeriesMapping;
	NSMutableArray* _currentSeries;
	_HKGraphViewSelectionContext* _selectionContext;
	_HKGraphViewAxisAnnotationHandler* _axisAnnotationHandler;
	NSArray* _axesToShowSimultaneously;
	HKLegendView* _legendView;
	CGSize _lastLegendSize;

}

@property (nonatomic,retain) NSMutableDictionary * zoomToSeriesMapping;                              //@synthesize zoomToSeriesMapping=_zoomToSeriesMapping - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentSeries;                                         //@synthesize currentSeries=_currentSeries - In the implementation block
@property (nonatomic,retain) _HKGraphViewSelectionContext * selectionContext;                        //@synthesize selectionContext=_selectionContext - In the implementation block
@property (nonatomic,retain) _HKGraphViewAxisAnnotationHandler * axisAnnotationHandler;              //@synthesize axisAnnotationHandler=_axisAnnotationHandler - In the implementation block
@property (nonatomic,retain) NSArray * axesToShowSimultaneously;                                     //@synthesize axesToShowSimultaneously=_axesToShowSimultaneously - In the implementation block
@property (nonatomic,retain) HKLegendView * legendView;                                              //@synthesize legendView=_legendView - In the implementation block
@property (assign,nonatomic) CGSize lastLegendSize;                                                  //@synthesize lastLegendSize=_lastLegendSize - In the implementation block
-(id)init;
-(NSMutableDictionary *)zoomToSeriesMapping;
-(NSMutableArray *)currentSeries;
-(_HKGraphViewSelectionContext *)selectionContext;
-(HKLegendView *)legendView;
-(void)setLegendView:(HKLegendView *)arg1 ;
-(void)setLastLegendSize:(CGSize)arg1 ;
-(_HKGraphViewAxisAnnotationHandler *)axisAnnotationHandler;
-(void)setCurrentSeries:(NSMutableArray *)arg1 ;
-(NSArray *)axesToShowSimultaneously;
-(CGSize)lastLegendSize;
-(void)setSelectionContext:(_HKGraphViewSelectionContext *)arg1 ;
-(void)setAxesToShowSimultaneously:(NSArray *)arg1 ;
-(void)setZoomToSeriesMapping:(NSMutableDictionary *)arg1 ;
-(void)setAxisAnnotationHandler:(_HKGraphViewAxisAnnotationHandler *)arg1 ;
@end

