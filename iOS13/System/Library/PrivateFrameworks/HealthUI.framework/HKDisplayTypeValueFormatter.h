/*
* Generated on Monday, March 1, 2021 at 2:34:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@protocol HKNumberFormatter;
@interface HKDisplayTypeValueFormatter : NSObject {

	id<HKNumberFormatter> _numberFormatter;

}
-(id)initWithNumberFormatter:(id)arg1 ;
-(id)stringFromValue:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 ;
-(id)attributedStringFromValue:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 valueFont:(id)arg4 unitFont:(id)arg5 ;
-(id)attributedStringFromValue:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 valueFont:(id)arg4 unitFont:(id)arg5 formatForChart:(BOOL)arg6 ;
-(id)attributedStringFromValue:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 valueFont:(id)arg4 unitFont:(id)arg5 formatForChart:(BOOL)arg6 unitFormatString:(id)arg7 ;
@end

