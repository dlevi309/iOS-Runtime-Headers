/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/CHDAxis.h>

@interface CHDCategoryAxis : CHDAxis {

	BOOL mAutomatic;
	BOOL mNoMultipleLevelLabel;
	int mLabelAlignment;
	long long mLabelFrequency;
	BOOL mLabelFrequencyAutomatic;
	BOOL mShowSeriesNames;

}
-(BOOL)isAutomatic;
-(int)labelAlignment;
-(void)setAutomatic:(BOOL)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(void)setLabelAlignment:(int)arg1 ;
-(void)setLabelFrequency:(long long)arg1 ;
-(long long)labelFrequency;
-(void)adjustAxisPositionForHorizontalChart;
-(BOOL)isNoMultipleLabellevel;
-(void)setNoMultipleLevelLabel:(BOOL)arg1 ;
-(void)setShowSeriesLabels:(BOOL)arg1 ;
-(BOOL)showSeriesLabels;
-(BOOL)isLabelFrequencyAutomatic;
@end

