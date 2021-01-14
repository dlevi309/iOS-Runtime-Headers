/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
*/

#import <libAppletTranslationLibrary.dylib/libAppletTranslationLibrary.dylib-Structs.h>
#import <libobjc.A.dylib/ATLDecoder.h>

@interface EMVDecoder : NSObject <ATLDecoder>
+(BOOL)isEMV:(id)arg1 ;
+(BOOL)isNeon:(id)arg1 ;
+(BOOL)isLuau:(id)arg1 ;
+(BOOL)isArgon:(id)arg1 ;
+(BOOL)isXenon:(id)arg1 ;
+(id)parseStartEvent:(id)arg1 withApplet:(id)arg2 error:(id*)arg3 ;
+(id)parseEndEvent:(id)arg1 withApplet:(id)arg2 withModule:(id)arg3 withLegacy:(BOOL)arg4 error:(id*)arg5 ;
+(id)DecodeEndE1TLV:(const SCD_Struct_He0*)arg1 withModule:(id)arg2 withLegacy:(BOOL)arg3 withType:(unsigned short*)arg4 error:(id*)arg5 ;
+(BOOL)isHelium:(id)arg1 ;
+(BOOL)isEMVLegacy:(id)arg1 ;
-(id)parseHCIEvent:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withTransceiver:(id)arg5 withError:(id*)arg6 ;
-(id)GetAppletProperties:(id)arg1 withPackage:(id)arg2 withModule:(id)arg3 withTransceiver:(id)arg4 withError:(id*)arg5 ;
-(id)getAppletStateAndHistory:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withError:(id*)arg5 ;
-(id)processEndOfTransaction:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withError:(id*)arg5 ;
@end

