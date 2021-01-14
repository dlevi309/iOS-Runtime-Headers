/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSMutableDictionary;

@interface ECCurrencyConverter : NSObject {

	NSMutableDictionary* mXlToLassoCurrencyCode;
	NSMutableDictionary* mLassoToXlCurrencyCode;
	NSMutableDictionary* mXlAccountingFormat;
	NSMutableDictionary* mXlToLassoCurrencyCodeBySymbol;

}
+(id)currencyConverter;
-(void)populateDictionaries;
-(id)lassoCurrencyCodeForDollar;
-(id)lassoCurrencyCodeFromXl:(id)arg1 ;
-(id)xlCurrencyCodeFromLasso:(id)arg1 ;
-(int)xlAccountFormatFromLasso:(id)arg1 ;
@end

