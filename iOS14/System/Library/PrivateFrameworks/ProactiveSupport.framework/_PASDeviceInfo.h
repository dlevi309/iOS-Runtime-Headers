/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@interface _PASDeviceInfo : NSObject {

	int _batterySaverModeToken;

}
+(BOOL)isBatterySaverEnabled;
+(BOOL)isDemoModeEnabled;
+(id)sharedInstance;
+(BOOL)isBetaBuild;
+(BOOL)isAudioAccessory;
+(BOOL)isLowEndHardware;
+(BOOL)isInternalBuild;
+(id)deviceUUID;
+(BOOL)shouldIncludePredictionLogs;
+(BOOL)isDNUEnabled;
-(id)init;
-(void)dealloc;
@end

