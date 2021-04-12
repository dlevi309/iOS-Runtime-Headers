/*
* Generated on Thursday, January 14, 2021 at 2:28:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


#import <TSUtility/TSUtility-Structs.h>
@class NSString;

@interface TSUDateFormatter : NSObject {

	NSString* mDateOnlyFormatString;
	NSString* mTimeOnlyFormatString;
	CFDateFormatterRef mFullDateFormatter;

}
+(unsigned long long)p_DateTimeSplitLocationInFormatString:(id)arg1 ;
+(id)dateFormatStringSpecialSymbols;
+(id)datePortionOfDateTimeFormatString:(id)arg1 ;
+(id)timePortionOfDateTimeFormatString:(id)arg1 ;
+(id)defaultDateTimeFormat;
+(id)supportedDateFormats;
+(id)supportedTimeFormats;
+(id)shortMonthNamesForNonCachedCurrentLocale;
-(id)init;
-(void)dealloc;
-(id)fullDateString:(id)arg1 ;
-(id)appropriateOutputFormatStringForInputFormatString:(id)arg1 ;
-(id)stringFromDate:(id)arg1 format:(id)arg2 ;
@end

