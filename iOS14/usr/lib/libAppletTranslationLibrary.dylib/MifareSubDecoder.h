/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
*/


@protocol MifareSubDecoder
@required
+(BOOL)canDecodeSPId:(unsigned char)arg1;
+(id)getServiceProvider:(unsigned char)arg1;
+(id)getEmReentryDelayMs;
+(BOOL)didTransactionError:(const /*function pointer*/void**)arg1 withTransactionResult:(unsigned short*)arg2;
+(id)getAppletStateAndHistory:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withError:(id*)arg5;

@end

