/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

