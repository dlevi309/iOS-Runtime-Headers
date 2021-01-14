/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
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
-(id)initWithLocale:(CFLocaleRef)arg1 ;
-(void)dealloc;
-(CFDateRef)newDateFromString:(CFStringRef)arg1 preferredFormatString:(CFStringRef)arg2 successfulFormatString:(const _CFString*)arg3 tryAggressiveFormats:(BOOL)arg4 ;
-(CFDateFormatterRef)specialCaseDateFormatterForLocale:(CFLocaleRef)arg1 ;
-(CFDateRef)newDateFromString:(CFStringRef)arg1 successfulFormatString:(const _CFString*)arg2 ;
-(void)datePreferencesChanged:(id)arg1 ;
-(void)addFormat:(id)arg1 locale:(CFLocaleRef)arg2 formatCategoryMap:(id)arg3 ;
-(CFDateRef)newDateFromStringTryingFormats:(CFStringRef)arg1 locale:(CFLocaleRef)arg2 formats:(id)arg3 outSuccessfulFormatString:(const _CFString*)arg4 ;
-(void)parseFormat:(id)arg1 initialPattern:(id*)arg2 separator:(unsigned short*)arg3 ;
@end

