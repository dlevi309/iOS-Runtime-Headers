/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
*/

#import <libAppletTranslationLibrary.dylib/libAppletTranslationLibrary.dylib-Structs.h>
#import <libobjc.A.dylib/MifareSubDecoder.h>

@interface ClementeDecoder : NSObject <MifareSubDecoder>
+(BOOL)canDecodeSPId:(unsigned char)arg1 ;
+(id)getServiceProvider:(unsigned char)arg1 ;
+(id)getEmReentryDelayMs;
+(BOOL)didTransactionError:(const SCD_Struct_He2*)arg1 withTransactionResult:(unsigned short*)arg2 ;
+(id)getAppletStateAndHistory:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withError:(id*)arg5 ;
@end

