/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
*/


@interface CUTPowerMonitor : NSObject {

	id _internal;

}

@property (nonatomic,readonly) BOOL isExternalPowerConnected; 
@property (nonatomic,readonly) double batteryPercentRemaining; 
+(id)sharedInstance;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)_handlePowerChangedNotificationWithMessageType:(unsigned)arg1 notificationID:(void*)arg2 ;
-(double)batteryPercentRemaining;
-(void)updateBatteryLevelWithBatteryEntry:(unsigned)arg1 ;
-(BOOL)_updateBatteryConnectedStateWithBatteryEntry:(unsigned)arg1 ;
-(id)_init;
-(BOOL)_initIOService;
-(void)updateBatteryConnectedStateWithBatteryEntry:(unsigned)arg1 ;
-(BOOL)isExternalPowerConnected;
-(void)dealloc;
@end

