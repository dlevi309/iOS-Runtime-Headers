/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@interface _PASDeviceInfo : NSObject {

	int _batterySaverModeToken;

}
+(id)sharedInstance;
+(id)deviceUUID;
+(BOOL)isInternalBuild;
+(BOOL)isAudioAccessory;
+(BOOL)isLowEndHardware;
+(BOOL)isBatterySaverEnabled;
+(BOOL)isDemoModeEnabled;
+(BOOL)isBetaBuild;
+(BOOL)isDNUEnabled;
+(BOOL)shouldIncludePredictionLogs;
-(id)init;
-(void)dealloc;
@end

