/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
*/


@interface CUTPowerMonitor : NSObject {

	id _internal;

}

@property (nonatomic,readonly) BOOL isExternalPowerConnected; 
@property (nonatomic,readonly) double batteryPercentRemaining; 
+(id)sharedInstance;
-(void)dealloc;
-(id)_init;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(BOOL)_initIOService;
-(void)updateBatteryLevelWithBatteryEntry:(unsigned)arg1 ;
-(BOOL)_updateBatteryConnectedStateWithBatteryEntry:(unsigned)arg1 ;
-(void)_handlePowerChangedNotificationWithMessageType:(unsigned)arg1 notificationID:(void*)arg2 ;
-(void)updateBatteryConnectedStateWithBatteryEntry:(unsigned)arg1 ;
-(BOOL)isExternalPowerConnected;
-(double)batteryPercentRemaining;
@end

