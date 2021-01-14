/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)resources;
-(id)chart;
-(void)dealloc;
-(id)workbook;
-(void)setChart:(id)arg1 ;
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

