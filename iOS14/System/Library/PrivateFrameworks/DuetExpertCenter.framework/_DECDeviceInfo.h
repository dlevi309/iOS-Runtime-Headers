/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
*/


@interface _DECDeviceInfo : NSObject {

	int _batterySaverModeToken;

}
+(BOOL)isBatterySaverEnabled;
+(BOOL)isDemoModeEnabled;
+(id)sharedInstance;
+(BOOL)isBetaBuild;
+(BOOL)isLowEndHardware;
+(BOOL)isInternalBuild;
+(BOOL)shouldIncludePredictionLogs;
-(id)init;
-(void)dealloc;
@end

