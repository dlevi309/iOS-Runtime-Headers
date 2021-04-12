/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


#import <TSUtility/TSUtility-Structs.h>
@class NSMutableArray;

@interface TSUDateParser : NSObject {

	NSMutableArray* mFormatCategories;
	CFLocaleRef mLocale;
	BOOL mIsJapaneseLocale;
	CFDateFormatterRef mSpecialCaseFormatter;

}
+(id)parserForDefaultLocale;
-(void)dealloc;
-(id)initWithLocale:(CFLocaleRef)arg1 ;
-(CFDateRef)newDateFromString:(CFStringRef)arg1 preferredFormatString:(CFStringRef)arg2 successfulFormatString:(const _CFString*)arg3 tryAggressiveFormats:(BOOL)arg4 ;
-(void)datePreferencesChanged:(id)arg1 ;
-(void)addFormat:(id)arg1 locale:(CFLocaleRef)arg2 formatCategoryMap:(id)arg3 ;
-(CFDateFormatterRef)specialCaseDateFormatterForLocale:(CFLocaleRef)arg1 ;
-(CFDateRef)newDateFromStringTryingFormats:(CFStringRef)arg1 locale:(CFLocaleRef)arg2 formats:(id)arg3 outSuccessfulFormatString:(const _CFString*)arg4 ;
-(CFDateRef)newDateFromString:(CFStringRef)arg1 successfulFormatString:(const _CFString*)arg2 ;
-(void)parseFormat:(id)arg1 initialPattern:(id*)arg2 separator:(unsigned short*)arg3 ;
@end

