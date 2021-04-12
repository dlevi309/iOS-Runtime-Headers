/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


#import <TSUtility/TSUtility-Structs.h>
@class NSString;

@interface TSUDateFormatter : NSObject {

	NSString* mDateOnlyFormatString;
	NSString* mTimeOnlyFormatString;
	CFDateFormatterRef mFullDateFormatter;

}
+(id)datePortionOfDateTimeFormatString:(id)arg1 ;
+(id)timePortionOfDateTimeFormatString:(id)arg1 ;
+(id)defaultDateTimeFormat;
+(unsigned long long)p_DateTimeSplitLocationInFormatString:(id)arg1 ;
+(id)supportedDateFormats;
+(id)supportedTimeFormats;
+(id)dateFormatStringSpecialSymbols;
+(id)shortMonthNamesForNonCachedCurrentLocale;
-(id)init;
-(void)dealloc;
-(id)fullDateString:(id)arg1 ;
-(id)appropriateOutputFormatStringForInputFormatString:(id)arg1 ;
-(id)stringFromDate:(id)arg1 format:(id)arg2 ;
@end

