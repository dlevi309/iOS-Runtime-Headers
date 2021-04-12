/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithLocale:(id)arg1 ;
-(id)newDateFromString:(id)arg1 preferredFormatString:(id)arg2 successfulFormatString:(id*)arg3 tryAggressiveFormats:(BOOL)arg4 ;
-(CFDateFormatterRef)specialCaseDateFormatterForLocale:(id)arg1 ;
-(id)newDateFromString:(id)arg1 successfulFormatString:(id*)arg2 ;
-(void)p_addFormat:(id)arg1 locale:(id)arg2 formatCategoryMap:(id)arg3 ;
-(id)formatStringsDictionary;
-(id)p_newDateFromStringTryingFormats:(id)arg1 locale:(id)arg2 formats:(id)arg3 outSuccessfulFormatString:(id*)arg4 ;
-(id)p_initialPatternParsingFormat:(id)arg1 separator:(unsigned short*)arg2 ;
@end

