/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
*/


@class NSDate, NSNumber;

@interface SUCoreActivityOptions : NSObject {

	NSDate* _runDate;
	NSNumber* _batteryLevelGreaterThan;
	NSNumber* _batteryLevelLessThan;
	int _plugInState;
	int _screenOnState;
	int _networkState;
	int _wifiState;
	int _waking;
	int _phoneCallState;
	int _carplayState;
	int _mediaPlayingState;

}

@property (nonatomic,retain) NSDate * runDate;                                //@synthesize runDate=_runDate - In the implementation block
@property (nonatomic,retain) NSNumber * batteryLevelGreaterThan;              //@synthesize batteryLevelGreaterThan=_batteryLevelGreaterThan - In the implementation block
@property (nonatomic,retain) NSNumber * batteryLevelLessThan;                 //@synthesize batteryLevelLessThan=_batteryLevelLessThan - In the implementation block
@property (assign,nonatomic) int plugInState;                                 //@synthesize plugInState=_plugInState - In the implementation block
@property (assign,nonatomic) int screenOnState;                               //@synthesize screenOnState=_screenOnState - In the implementation block
@property (assign,nonatomic) int networkState;                                //@synthesize networkState=_networkState - In the implementation block
@property (assign,nonatomic) int wifiState;                                   //@synthesize wifiState=_wifiState - In the implementation block
@property (assign,nonatomic) int waking;                                      //@synthesize waking=_waking - In the implementation block
@property (assign,nonatomic) int phoneCallState;                              //@synthesize phoneCallState=_phoneCallState - In the implementation block
@property (assign,nonatomic) int carplayState;                                //@synthesize carplayState=_carplayState - In the implementation block
@property (assign,nonatomic) int mediaPlayingState;                           //@synthesize mediaPlayingState=_mediaPlayingState - In the implementation block
-(int)wifiState;
-(id)init;
-(int)networkState;
-(int)waking;
-(NSDate *)runDate;
-(void)setRunDate:(NSDate *)arg1 ;
-(void)setNetworkState:(int)arg1 ;
-(int)mediaPlayingState;
-(void)setMediaPlayingState:(int)arg1 ;
-(void)setWifiState:(int)arg1 ;
-(NSNumber *)batteryLevelGreaterThan;
-(void)setBatteryLevelGreaterThan:(NSNumber *)arg1 ;
-(NSNumber *)batteryLevelLessThan;
-(void)setBatteryLevelLessThan:(NSNumber *)arg1 ;
-(int)plugInState;
-(void)setPlugInState:(int)arg1 ;
-(int)screenOnState;
-(void)setScreenOnState:(int)arg1 ;
-(void)setWaking:(int)arg1 ;
-(int)phoneCallState;
-(void)setPhoneCallState:(int)arg1 ;
-(int)carplayState;
-(void)setCarplayState:(int)arg1 ;
@end

