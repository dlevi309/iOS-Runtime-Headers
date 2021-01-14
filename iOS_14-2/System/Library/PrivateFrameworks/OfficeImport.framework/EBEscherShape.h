/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)chart;
-(void)setShowLegend:(BOOL)arg1 ;
-(BOOL)showLegend;
-(void)setChart:(id)arg1 ;
@end

