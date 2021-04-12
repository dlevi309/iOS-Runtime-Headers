/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

