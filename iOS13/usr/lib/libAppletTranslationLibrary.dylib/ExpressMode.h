/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
*/


@interface ExpressMode : NSObject
+(id)MakeInternalConfiguration:(id)arg1 outError:(id*)arg2 ;
+(id)checkAppletCompatibilityInternal:(id)arg1 fastPath:(BOOL*)arg2 error:(id*)arg3 ;
+(id)SerializeConfigurationDataForSE:(id)arg1 fastPath:(BOOL)arg2 error:(id*)arg3 ;
+(void)getDebugExpressLog:(id)arg1 ;
+(BOOL)PerformActivations:(id)arg1 transceiver:(id)arg2 fastPath:(BOOL)arg3 seHasActivatedApplets:(BOOL*)arg4 error:(id*)arg5 ;
+(id)checkAppletCompatibility:(id*)arg1 fastPath:(BOOL*)arg2 error:(id*)arg3 ;
+(BOOL)configureSE:(id)arg1 transceiver:(id)arg2 seHasActivatedApplets:(BOOL*)arg3 skipAllActivations:(BOOL)arg4 fastPath:(BOOL)arg5 expressLogging:(BOOL)arg6 error:(id*)arg7 ;
@end

