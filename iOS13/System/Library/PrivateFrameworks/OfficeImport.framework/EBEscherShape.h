/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/ESDObject.h>

@class NSData, CHDChart;

@interface EBEscherShape : ESDObject {

	NSData* mChartData;
	BOOL mShowLegend;
	CHDChart* mChart;

}
-(id)chartData;
-(void)setChartData:(id)arg1 ;
-(void)setShowLegend:(BOOL)arg1 ;
-(BOOL)showLegend;
-(void)setChart:(id)arg1 ;
-(id)chart;
@end

