/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
*/

#import <libAppletTranslationLibrary.dylib/libAppletTranslationLibrary.dylib-Structs.h>
#import <libobjc.A.dylib/ATLDecoder.h>

@interface MifareDecoder : NSObject <ATLDecoder>
+(id)getServiceProvider:(unsigned char)arg1 ;
+(id)parseStartEventNative:(id)arg1 withApplet:(id)arg2 error:(id*)arg3 ;
+(id)parseStartEventISO:(id)arg1 withApplet:(id)arg2 error:(id*)arg3 ;
+(id)parseEndEvent:(id)arg1 withApplet:(id)arg2 error:(id*)arg3 ;
+(id)parseEndEventISO:(id)arg1 withApplet:(id)arg2 error:(id*)arg3 ;
+(id)ParseEndEventShort:(id)arg1 withApplet:(id)arg2 error:(id*)arg3 ;
+(id)ParseTimeoutEventNative:(id)arg1 withApplet:(id)arg2 error:(id*)arg3 ;
+(id)ParseTimeoutEventISO:(id)arg1 withApplet:(id)arg2 error:(id*)arg3 ;
+(id)getEmReentryDelayMs:(unsigned char)arg1 ;
+(BOOL)didTransactionError:(unsigned char)arg1 withParameters:(const SCD_Struct_He2*)arg2 withTransactionResult:(unsigned short*)arg3 ;
+(BOOL)didTransactionError:(unsigned char)arg1 withISOParameters:(const SCD_Struct_Mi7*)arg2 withTransactionResult:(unsigned short*)arg3 ;
+(id)getSPID:(id)arg1 withApplet:(id)arg2 withError:(id*)arg3 ;
+(id)getAppletStateAndHistory:(unsigned char)arg1 withTransceiver:(id)arg2 withApplet:(id)arg3 withPackage:(id)arg4 withModule:(id)arg5 withError:(id*)arg6 ;
+(id)getSubDecoder:(unsigned char)arg1 ;
-(id)getAppletStateAndHistory:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withError:(id*)arg5 ;
-(id)parseHCIEvent:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withTransceiver:(id)arg5 withError:(id*)arg6 ;
-(id)GetAppletProperties:(id)arg1 withPackage:(id)arg2 withModule:(id)arg3 withTransceiver:(id)arg4 withError:(id*)arg5 ;
-(id)processEndOfTransaction:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withError:(id*)arg5 ;
@end

