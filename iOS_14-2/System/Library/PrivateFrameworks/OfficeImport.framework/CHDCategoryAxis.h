/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithResources:(id)arg1 ;
-(void)setAutomatic:(BOOL)arg1 ;
-(int)labelAlignment;
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

