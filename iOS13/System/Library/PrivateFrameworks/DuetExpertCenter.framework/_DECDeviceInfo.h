/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
*/


@interface _DECDeviceInfo : NSObject {

	int _batterySaverModeToken;

}
+(id)sharedInstance;
+(BOOL)isInternalBuild;
+(BOOL)isLowEndHardware;
+(BOOL)isBatterySaverEnabled;
+(BOOL)isDemoModeEnabled;
+(BOOL)isBetaBuild;
+(BOOL)shouldIncludePredictionLogs;
-(id)init;
-(void)dealloc;
@end

