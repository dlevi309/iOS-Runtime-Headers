/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
*/

#import <libAppletTranslationLibrary.dylib/libAppletTranslationLibrary.dylib-Structs.h>
#import <libobjc.A.dylib/MifareSubDecoder.h>

@interface HerculesDecoder : NSObject <MifareSubDecoder>
+(id)parseDalData:(id)arg1 withCityCode:(id)arg2 withStateDict:(id)arg3 withError:(id*)arg4 ;
+(id)getRecords:(id)arg1 withError:(id*)arg2 ;
+(id)getTransactionsFromRecord:(const SCD_Struct_He0*)arg1 withCityCode:(id)arg2 withServerRefreshRequired:(id*)arg3 withStateDict:(id)arg4 withError:(id*)arg5 ;
+(id)parseBalanceCollection:(const SCD_Struct_He0*)arg1 withError:(id*)arg2 ;
+(id)parseDateAndTime:(const SCD_Struct_He0*)arg1 ;
+(id)calculateTransactionSN:(const SCD_Struct_He0*)arg1 withDeviceId:(const SCD_Struct_He0*)arg2 withDeviceSN:(const SCD_Struct_He0*)arg3 ;
+(id)parseEvent:(const SCD_Struct_He1*)arg1 withError:(id*)arg2 ;
+(id)parseUseEvent:(const SCD_Struct_He0*)arg1 withError:(id*)arg2 ;
+(id)parseSaleEvent:(const SCD_Struct_He0*)arg1 withError:(id*)arg2 ;
+(id)parsePurchaseEvent:(const SCD_Struct_He0*)arg1 withError:(id*)arg2 ;
+(id)parseIdentifierCollection:(const SCD_Struct_He0*)arg1 withError:(id*)arg2 ;
+(id)addAmount:(const SCD_Struct_He0*)arg1 withCurrency:(const SCD_Struct_He0*)arg2 usingAmountKey:(id)arg3 usingCurrencyKey:(id)arg4 usingExponentKey:(id)arg5 ;
+(id)getIdentifier:(const SCD_Struct_He0*)arg1 withInstanceIdentifier:(const SCD_Struct_He0*)arg2 ;
+(id)parseBalanceItem:(const SCD_Struct_He1*)arg1 withError:(id*)arg2 ;
+(id)parseIdentifierItem:(const SCD_Struct_He1*)arg1 withError:(id*)arg2 ;
+(BOOL)canDecodeSPId:(unsigned char)arg1 ;
+(id)getServiceProvider:(unsigned char)arg1 ;
+(id)getEmReentryDelayMs;
+(BOOL)didTransactionError:(const SCD_Struct_He2*)arg1 withTransactionResult:(unsigned short*)arg2 ;
+(id)getAppletStateAndHistory:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withError:(id*)arg5 ;
@end

