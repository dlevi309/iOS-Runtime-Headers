/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/WMStyle.h>

@interface WMTableCellStyle : WMStyle {

	double mLeftPadding;
	double mRightPadding;

}
+(id)dominantColorOf:(id)arg1 ;
+(id)resolveStyleColorWithPercentage:(float)arg1 shading:(id)arg2 ;
+(id)resolveStyleColorWithPercentage:(float)arg1 foregroundColor:(id)arg2 backgroundColor:(id)arg3 ;
+(float)resolveColorValueWithPercentage:(float)arg1 foregroundComponent:(float)arg2 backgroundComponent:(float)arg3 ;
-(double)leftPadding;
-(double)rightPadding;
-(void)addTableCellStyleProperties:(id)arg1 ;
-(void)addTableCellProperties:(id)arg1 ;
-(id)initWithTableCellProperties:(id)arg1 ;
@end

