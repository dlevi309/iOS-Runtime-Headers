/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/


@interface VTUtilities : NSObject
+(BOOL)isInternalInstall;
+(BOOL)isAlwaysOn;
+(id)deviceProductType;
+(id)deviceProductVersion;
+(BOOL)isNano;
+(BOOL)VTIsHorseman;
+(BOOL)supportBargeIn;
+(void)forceReload;
+(unsigned long long)deviceCategoryForDeviceProductType:(id)arg1 ;
+(double)_round:(double)arg1 withPlaces:(int)arg2 ;
+(id)sanitizeEventInfoForLogging:(id)arg1 ;
+(double)systemUpTime;
+(BOOL)supportTTS;
+(BOOL)supportExternalPhraseSpotter;
+(BOOL)supportPremiumAssets;
+(id)deviceSoftwareVersion;
+(id)getAssetHashFromConfigPath:(id)arg1 ;
+(double)VTMachAbsoluteTimeGetTimeInterval:(unsigned long long)arg1 ;
@end

