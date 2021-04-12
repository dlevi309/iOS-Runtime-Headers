/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString;

@interface EMNumberFormatter : NSObject {

	CFNumberFormatterRef _genericFormatter;
	CFNumberFormatterRef _doubleFormatter;
	CFNumberFormatterRef _percentFormatter;
	CFNumberFormatterRef _bigNumberFormatter;
	CFNumberFormatterRef _currencyFormatter;
	CFDateFormatterRef _dateFormatter;
	NSString* _excelFormatString;
	NSString* _baseICUFormatString;
	BOOL _isNegativeRed;
	BOOL _hasLocales;
	int _formatType;

}
+(id)formatterForFormat:(id)arg1 ;
-(void)dealloc;
-(CFDateFormatterRef)_dateFormatter;
-(id)formatPhoneNumber:(double)arg1 ;
-(CFNumberFormatterRef)_percentFormatter;
-(CFNumberFormatterRef)_currencyFormatter;
-(int)formatType;
-(id)formatDefault:(double)arg1 ;
-(unsigned long long)optimalNumberOfDigitsForValue:(double)arg1 ;
-(id)formatDefault:(double)arg1 showingNumberOfDigits:(unsigned long long)arg2 ;
-(BOOL)isNegativeRed;
-(id)formatValue:(double)arg1 inWorkbook:(id)arg2 ;
-(id)formatPercent:(double)arg1 ;
-(id)formatDate:(id)arg1 ;
-(id)initWithExcelFormatString:(id)arg1 ;
-(id)initForGeneralFormatting;
-(void)_parseExcelFormatString:(id)arg1 ;
-(id)convertedGenericNumberFormatWithFormat:(id)arg1 ;
-(id)_icuFormatStringForDateFormat;
-(id)_icuFormatStringForCurrencyFormat;
-(void)convertGenericNumberFormat:(id)arg1 ;
-(CFNumberFormatterRef)_doubleFormatter;
-(CFNumberFormatterRef)_bigNumberFormatter;
-(CFNumberFormatterRef)_genericFormatterForNumberOfSignificantDigits:(unsigned long long)arg1 ;
-(id)formatCurrency:(double)arg1 ;
-(id)formatFraction:(double)arg1 ;
-(id)formatDoubleValue:(double)arg1 ;
@end

