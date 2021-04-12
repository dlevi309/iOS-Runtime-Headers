/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableArray, OITSULocale;

@interface OITSUDateParser : NSObject {

	NSMutableArray* _formatCategories;
	OITSULocale* _locale;
	BOOL _isJapaneseLocale;
	CFDateFormatterRef _specialCaseFormatter;

}
-(id)initWithLocale:(id)arg1 ;
-(void)dealloc;
-(id)newDateFromString:(id)arg1 preferredFormatString:(id)arg2 successfulFormatString:(id*)arg3 tryAggressiveFormats:(BOOL)arg4 ;
-(void)p_addFormat:(id)arg1 locale:(id)arg2 formatCategoryMap:(id)arg3 ;
-(id)formatStringsDictionary;
-(CFDateFormatterRef)specialCaseDateFormatterForLocale:(id)arg1 ;
-(id)p_newDateFromStringTryingFormats:(id)arg1 locale:(id)arg2 formats:(id)arg3 outSuccessfulFormatString:(id*)arg4 ;
-(id)p_initialPatternParsingFormat:(id)arg1 separator:(unsigned short*)arg2 ;
-(id)newDateFromString:(id)arg1 successfulFormatString:(id*)arg2 ;
@end

