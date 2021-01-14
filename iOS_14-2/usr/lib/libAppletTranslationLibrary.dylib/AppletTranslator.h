/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
*/


@interface AppletTranslator : NSObject
+(BOOL)appletCacheUpdated:(id)arg1 serialNumber:(id)arg2 isdSequenceCounter:(id)arg3 transceiver:(id)arg4 error:(id*)arg5 ;
+(id)parseHCIEvent:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withTransceiver:(id)arg5 withError:(id*)arg6 ;
+(BOOL)setPlasticCardMode:(BOOL)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 serialNumber:(id)arg5 transceiver:(id)arg6 error:(id*)arg7 ;
+(BOOL)configureSEExpressApplets:(id)arg1 transceiver:(id)arg2 error:(id*)arg3 ;
+(BOOL)isLegacyApplet:(id)arg1 withPackage:(id)arg2 withModule:(id)arg3 ;
+(id)GetAppletProperties:(id)arg1 withPackage:(id)arg2 withModule:(id)arg3 withTransceiver:(id)arg4 withError:(id*)arg5 ;
+(void)cleanup;
+(void)initLibraryWithDelegate:(id)arg1 ;
+(BOOL)configureSEExpressApplets:(id)arg1 transceiver:(id)arg2 seHasActivatedApplets:(BOOL*)arg3 skipAllActivations:(BOOL)arg4 inSession:(BOOL)arg5 error:(id*)arg6 ;
+(BOOL)configureSEExpressApplets:(id)arg1 transceiver:(id)arg2 seHasActivatedApplets:(BOOL*)arg3 skipAllActivations:(BOOL)arg4 inSession:(BOOL)arg5 supportsExpressAOnly:(BOOL)arg6 error:(id*)arg7 ;
+(void)initLibrary:(/*^block*/id)arg1 ;
+(id)processEndOfTransaction:(id)arg1 withPackage:(id)arg2 withModule:(id)arg3 withTransceiver:(id)arg4 withError:(id*)arg5 ;
+(id)checkSEExpressAppletCompatibility:(id)arg1 error:(id*)arg2 ;
+(id)getAppletStateAndHistory:(id)arg1 withPackage:(id)arg2 withModule:(id)arg3 withTransceiver:(id)arg4 withError:(id*)arg5 ;
+(BOOL)configureSEExpressApplets:(id)arg1 transceiver:(id)arg2 seHasActivatedApplets:(BOOL*)arg3 skipAllActivations:(BOOL)arg4 error:(id*)arg5 ;
+(id)getNFCSettings;
@end

