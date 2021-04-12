/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/CHDAxis.h>

@interface CHDDateAxis : CHDAxis {

	BOOL mAutomatic;
	double mMajorUnitValue;
	double mMinorUnitValue;
	int mMinorTimeUnit;
	int mMajorTimeUnit;
	int mBaseTimeUnit;

}
-(BOOL)isAutomatic;
-(BOOL)isDate;
-(void)setAutomatic:(BOOL)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(void)setMajorUnitValue:(double)arg1 ;
-(void)setMinorUnitValue:(double)arg1 ;
-(double)minorUnitValue;
-(double)majorUnitValue;
-(int)majorTimeUnit;
-(void)setMajorTimeUnit:(int)arg1 ;
-(int)minorTimeUnit;
-(void)setMinorTimeUnit:(int)arg1 ;
-(int)baseTimeUnit;
-(void)setBaseTimeUnit:(int)arg1 ;
@end

