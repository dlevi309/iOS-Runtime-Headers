/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
*/


#import <libAppletTranslationLibrary.dylib/libAppletTranslationLibrary.dylib-Structs.h>
@interface AppletTranslator : NSObject
+(void)cleanup;
+(id)userDefaults;
+(BOOL)isInternalBuild;
+(os_state_data_s*)dumpState;
+(void)registerForCleanup:(id)arg1 ;
+(void)deregisterForCleanup:(id)arg1 ;
+(id)parseHCIEvent:(id)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 withTransceiver:(id)arg5 withError:(id*)arg6 ;
+(id)GetAppletProperties:(id)arg1 withPackage:(id)arg2 withModule:(id)arg3 withTransceiver:(id)arg4 withError:(id*)arg5 ;
+(id)getNFCSettings;
+(BOOL)isDebugLoggingEnabled;
+(BOOL)configureSEExpressApplets:(id)arg1 transceiver:(id)arg2 seHasActivatedApplets:(BOOL*)arg3 skipAllActivations:(BOOL)arg4 error:(id*)arg5 ;
+(void)initLibrary:(/*^block*/id)arg1 ;
+(void)initLibraryWithDelegate:(id)arg1 ;
+(id)getATLDelegate;
+(id)getAppletStateAndHistory:(id)arg1 withPackage:(id)arg2 withModule:(id)arg3 withTransceiver:(id)arg4 withError:(id*)arg5 ;
+(BOOL)appletCacheUpdated:(id)arg1 serialNumber:(id)arg2 isdSequenceCounter:(id)arg3 transceiver:(id)arg4 error:(id*)arg5 ;
+(BOOL)setPlasticCardMode:(BOOL)arg1 withApplet:(id)arg2 withPackage:(id)arg3 withModule:(id)arg4 serialNumber:(id)arg5 transceiver:(id)arg6 error:(id*)arg7 ;
+(BOOL)configureSEExpressApplets:(id)arg1 transceiver:(id)arg2 error:(id*)arg3 ;
+(id)checkSEExpressAppletCompatibility:(id)arg1 error:(id*)arg2 ;
+(id)processEndOfTransaction:(id)arg1 withPackage:(id)arg2 withModule:(id)arg3 withTransceiver:(id)arg4 withError:(id*)arg5 ;
+(BOOL)isLegacyApplet:(id)arg1 withPackage:(id)arg2 withModule:(id)arg3 ;
@end

