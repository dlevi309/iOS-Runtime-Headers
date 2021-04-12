/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTService.h>

@class RTPersistentTimer, NSMutableArray, RTWiFiManager;

@interface RTWiFiFootprintMonitor : RTService {

	long long _footprintState;
	RTPersistentTimer* _scanTimer;
	NSMutableArray* _scanResults;
	RTWiFiManager* _wifiManager;

}

@property (assign,nonatomic) long long footprintState;                   //@synthesize footprintState=_footprintState - In the implementation block
@property (nonatomic,retain) RTPersistentTimer * scanTimer;              //@synthesize scanTimer=_scanTimer - In the implementation block
@property (nonatomic,retain) NSMutableArray * scanResults;               //@synthesize scanResults=_scanResults - In the implementation block
@property (nonatomic,retain) RTWiFiManager * wifiManager;                //@synthesize wifiManager=_wifiManager - In the implementation block
+(id)footprintStateToString:(long long)arg1 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)_shutdown;
-(RTWiFiManager *)wifiManager;
-(void)setWifiManager:(RTWiFiManager *)arg1 ;
-(id)init;
-(void)_start;
-(void)_stop;
-(RTPersistentTimer *)scanTimer;
-(void)setScanTimer:(RTPersistentTimer *)arg1 ;
-(id)initWithWiFiManager:(id)arg1 ;
-(void)onWiFiManagerNotificationScanResults:(id)arg1 ;
-(void)onWiFiManagerNotificationPowerStatusChanged:(id)arg1 ;
-(void)setFootprintState:(long long)arg1 ;
-(NSMutableArray *)scanResults;
-(void)_processScanResults:(id)arg1 ;
-(void)_handlePowerStatusChanged:(unsigned long long)arg1 ;
-(long long)_footprintStateForScanResults:(id)arg1 ;
-(void)_pruneScanResults;
-(void)_checkFootprint;
-(void)fetchConstantFootprintStatusForScanResults:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(long long)footprintState;
-(void)setScanResults:(NSMutableArray *)arg1 ;
@end
