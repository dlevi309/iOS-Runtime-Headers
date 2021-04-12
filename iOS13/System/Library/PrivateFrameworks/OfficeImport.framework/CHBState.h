/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class CHDChart;

@interface CHBState : NSObject {

	CHDChart* mChart;
	CFArrayRef mXlChartDataSeriesCollection;
	int mXlSeriesCount;
	int mXlCurrentSeriesIndex;
	BOOL mHasPrimaryMixedArea;
	BOOL mHasPrimaryMixedColumn;
	BOOL mHasPrimaryMixedLine;
	BOOL mHasSecondaryMixedArea;
	BOOL mHasSecondaryMixedColumn;
	BOOL mHasSecondaryMixedLine;

}
-(id)init;
-(void)dealloc;
-(id)resources;
-(id)workbook;
-(void)setChart:(id)arg1 ;
-(id)chart;
-(void)deleteXlChartDataSeriesCollection;
-(XlChartDataSeries*)xlChartDataSeriesAtIndex:(int)arg1 ;
-(void)readAndCacheXlChartDataSeries;
-(BOOL)hasPrimaryMixedArea;
-(BOOL)hasSecondaryMixedArea;
-(BOOL)hasPrimaryMixedColumn;
-(BOOL)hasSecondaryMixedColumn;
-(BOOL)hasPrimaryMixedLine;
-(void)setXlCurrentSeriesIndex:(int)arg1 ;
-(XlChartDataSeries*)xlCurrentChartDataSeries;
-(int)xlCurrentChartDataSeriesIndex;
-(int)xlSeriesCount;
-(void)setHasPrimaryMixedArea:(BOOL)arg1 ;
-(void)setHasPrimaryMixedColumn:(BOOL)arg1 ;
-(void)setHasPrimaryMixedLine:(BOOL)arg1 ;
-(void)setHasSecondaryMixedArea:(BOOL)arg1 ;
-(void)setHasSecondaryMixedColumn:(BOOL)arg1 ;
-(BOOL)hasSecondaryMixedLine;
-(void)setHasSecondaryMixedLine:(BOOL)arg1 ;
-(BOOL)isMixedChart;
-(unsigned)chartGroupIndexForType:(int)arg1 isForPrimary:(BOOL)arg2 ;
@end

