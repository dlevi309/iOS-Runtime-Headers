/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libnfshared.dylib
*/


@interface NFCurrency : NSObject
+(unsigned long long)decodeBCDAmount:(id)arg1 ;
+(id)encodeBCDAmount:(unsigned long long)arg1 ;
+(id)getCurrencyStringCodeFromNumericCode:(unsigned)arg1 ;
+(int)getFractionDigitsFromCurrencyStringCode:(id)arg1 ;
@end

