/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
*/

#import <libAppletTranslationLibrary.dylib/libAppletTranslationLibrary.dylib-Structs.h>
#import <libobjc.A.dylib/ATLDecoder.h>

@interface MercuryDecoder : NSObject <ATLDecoder>
+(id)parseStartEvent:(id)arg1 withApplet:(id)arg2 error:(id*)arg3 ;
+(id)parseActivityTimeout:(id)arg1 withApplet:(id)arg2 error:(id*)arg3 ;
+(id)parseEndEvent:(id)arg1 withApplet:(id)arg2 moduleAID:(id)arg3 error:(id*)arg4 ;
+(id)DecodeE1TLV:(const SCD_Struct_He0*)arg1 transactionInfo:(id*)arg2 error:(id*)arg3 ;
+(id)DecodeE456TLV:(const SCD_Struct_He0*)arg1 currencyExponent:(id)arg2 error:(id*)arg3 ;
+(void)RemoveMatchedTapIns:(id)arg1 transactionsInProgress:(id)arg2 ;
+(void)ApplyHackFor50863616:(id)arg1 historyRecords:(id)arg2 transceiver:(id)arg3 ;
+(BOOL)IsIncompatibleApplet:(unsigned)arg1 sw:(unsigned short)arg2 ;
+(BOOL)isSpecialBusErrorFor45299868:(id)arg1 state:(id)arg2 transaction:(id)arg3 ;
-(id)parseHCIEvent:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withTransceiver:(id)arg5 withError:(id*)arg6 ;
-(id)GetAppletProperties:(id)arg1 withPackage:(id)arg2 withModule:(id)arg3 withTransceiver:(id)arg4 withError:(id*)arg5 ;
-(id)getAppletStateAndHistory:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withError:(id*)arg5 ;
-(id)processEndOfTransaction:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withError:(id*)arg5 ;
@end

