/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/


@interface VTUtilities : NSObject
+(double)_round:(double)arg1 withPlaces:(int)arg2 ;
+(id)deviceSoftwareVersion;
+(BOOL)supportBargeIn;
+(id)deviceProductType;
+(double)VTMachAbsoluteTimeGetTimeInterval:(unsigned long long)arg1 ;
+(id)getAssetHashFromConfigPath:(id)arg1 ;
+(BOOL)supportTTS;
+(BOOL)isAlwaysOn;
+(BOOL)VTIsHorseman;
+(BOOL)isIOS;
+(id)sanitizeEventInfoForLogging:(id)arg1 ;
+(id)deviceProductVersion;
+(double)systemUpTime;
+(BOOL)isInternalInstall;
+(void)forceReload;
+(id)convertToShortLPCMBufFromFloatLPCMBuf:(id)arg1 ;
+(BOOL)isNano;
+(BOOL)supportPremiumAssets;
+(BOOL)supportExternalPhraseSpotter;
+(unsigned long long)deviceCategoryForDeviceProductType:(id)arg1 ;
+(BOOL)isTorpedo;
@end

