/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class CHDChartTypesCollection, CHDAxesCollection, OADGraphicProperties;

@interface CHDPlotArea : NSObject {

	CHDChartTypesCollection* mChartTypes;
	CHDAxesCollection* mAxes;
	OADGraphicProperties* mGraphicProperties;
	BOOL mCategoryAxesReversed;
	BOOL mCategoryAxesReversedOverridden;
	BOOL mContainsVolumeStockType;

}
-(id)description;
-(id)axes;
-(id)graphicProperties;
-(id)initWithChart:(id)arg1 ;
-(void)setGraphicProperties:(id)arg1 ;
-(void)setContainsVolumeStockType:(BOOL)arg1 ;
-(id)chartTypes;
-(BOOL)hasSecondaryAxis;
-(BOOL)hasSecondaryYAxisDeleted;
-(void)markSecondaryAxes;
-(BOOL)containsVolumeStockType;
-(BOOL)isCategoryAxesReversed:(BOOL)arg1 ;
@end

