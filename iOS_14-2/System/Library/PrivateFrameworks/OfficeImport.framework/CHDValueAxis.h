/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/CHDAxis.h>

@interface CHDValueAxis : CHDAxis {

	BOOL mPercentageFormattingFlag;
	BOOL mAutoMajorUnitValue;
	BOOL mAutoMinorUnitValue;
	double mMajorUnitValue;
	double mMinorUnitValue;
	double mScalingLogBase;
	int mBuiltInUnit;
	BOOL mShowBuiltInUnit;

}
-(id)initWithResources:(id)arg1 ;
-(void)setMajorUnitValue:(double)arg1 ;
-(void)setMinorUnitValue:(double)arg1 ;
-(void)setScalingLogBase:(double)arg1 ;
-(void)setBuiltInUnit:(int)arg1 ;
-(void)setShowBuiltInUnitFlag:(BOOL)arg1 ;
-(double)minorUnitValue;
-(BOOL)isAutoMinorUnitValue;
-(double)majorUnitValue;
-(BOOL)isAutoMajorUnitValue;
-(double)scalingLogBase;
-(void)adjustAxisPositionForHorizontalChart;
-(BOOL)isShowBuiltInUnit;
-(int)builtInUnit;
-(id)contentFormatWithBuiltInUnit;
-(void)setPercentageFormattingFlag:(BOOL)arg1 ;
-(BOOL)isPercentageFormattingFlag;
@end

