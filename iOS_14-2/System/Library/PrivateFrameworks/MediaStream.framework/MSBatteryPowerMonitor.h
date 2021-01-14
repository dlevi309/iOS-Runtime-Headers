/*
* Generated on Thursday, January 14, 2021 at 2:26:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
*/


#import <MediaStream/MediaStream-Structs.h>
@interface MSBatteryPowerMonitor : NSObject {

	CFRunLoopSourceRef _batteryRunLoopSource;
	IONotificationPortRef _batteryIONotifyPort;
	unsigned _batteryNotificationRef;
	BOOL _isExteralPowerConnected;
	double _currentLevel;

}

@property (assign,nonatomic) double currentLevel;                                                          //@synthesize currentLevel=_currentLevel - In the implementation block
@property (assign,setter=setExternalPowerConnected:,nonatomic) BOOL isExternalPowerConnected;              //@synthesize isExteralPowerConnected=_isExteralPowerConnected - In the implementation block
+(id)defaultMonitor;
-(id)init;
-(void)setCurrentLevel:(double)arg1 ;
-(double)batteryPercentRemaining;
-(void)updateBatteryLevelWithBatteryEntry:(unsigned)arg1 ;
-(BOOL)_updateBatteryConnectedStateWithBatteryEntry:(unsigned)arg1 ;
-(double)currentLevel;
-(void)updateBatteryConnectedStateWithBatteryEntry:(unsigned)arg1 ;
-(BOOL)isExternalPowerConnected;
-(void)dealloc;
-(void)setExternalPowerConnected:(BOOL)arg1 ;
@end

