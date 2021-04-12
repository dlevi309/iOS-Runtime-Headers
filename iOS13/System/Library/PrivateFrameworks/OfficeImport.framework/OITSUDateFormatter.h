/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString;

@interface OITSUDateFormatter : NSObject {

	NSString* _dateOnlyFormatString;
	NSString* _timeOnlyFormatString;
	CFDateFormatterRef _fullDateFormatter;

}
+(id)datePortionOfDateTimeFormatString:(id)arg1 ;
+(id)timePortionOfDateTimeFormatString:(id)arg1 ;
+(unsigned long long)p_DateTimeSplitLocationInFormatString:(id)arg1 ;
+(id)dateFormatStringSpecialSymbols;
+(id)supportedDateFormatsForLocale:(id)arg1 ;
+(id)p_supportedDateFormatMatchingFormat:(id)arg1 locale:(id)arg2 ;
+(id)p_supportedTimeFormatMatchingFormat:(id)arg1 locale:(id)arg2 ;
+(id)supportedTimeFormatsForLocale:(id)arg1 ;
+(id)defaultDateTimeFormatForLocale:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithLocale:(id)arg1 ;
@end

