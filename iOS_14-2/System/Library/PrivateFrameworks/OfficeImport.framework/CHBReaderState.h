/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CHBState.h>

@protocol CHAutoStyling;
@class EBReaderSheetState, OADColorScheme;

@interface CHBReaderState : CHBState {

	EBReaderSheetState* mEBReaderSheetState;
	XlChartBinaryReader* mXlReader;
	id<CHAutoStyling> mAutoStyling;
	int mAxisGroup;
	XlChartPlot* mXlCurrentPlot;
	int mXlCurrentPlotIndex;

}

@property (nonatomic,readonly) OADColorScheme * colorScheme; 
-(id)resources;
-(OADColorScheme *)colorScheme;
-(id)workbook;
-(void)setChart:(id)arg1 ;
-(XlChartPlot*)xlCurrentPlot;
-(int)axisGroup;
-(XlChartBinaryReader*)xlReader;
-(id)autoStyling;
-(const XlChartSeriesFormat*)xlCurrentDefaultSeriesFormat;
-(id)ebReaderSheetState;
-(void)setAxisGroup:(int)arg1 ;
-(int)xlPlotCount;
-(void)setXlCurrentPlotIndex:(int)arg1 ;
-(void)setXlCurrentPlot:(XlChartPlot*)arg1 ;
-(id)initWithEBReaderSheetState:(id)arg1 ;
-(const XlChartSeriesFormat*)defaultFormatForXlSeries:(const XlChartDataSeries*)arg1 ;
-(void)readAndCacheXlChartDataSeries;
-(int)xlCurrentPlotIndex;
@end

