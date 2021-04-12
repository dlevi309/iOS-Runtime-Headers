/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libnfshared.dylib
*/


@interface NFCurrency : NSObject
+(unsigned long long)decodeBCDAmount:(id)arg1 ;
+(id)encodeBCDAmount:(unsigned long long)arg1 ;
+(id)getCurrencyStringCodeFromNumericCode:(unsigned)arg1 ;
+(int)getFractionDigitsFromCurrencyStringCode:(id)arg1 ;
@end

