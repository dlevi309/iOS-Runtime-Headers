/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBPowerDefaults : SBAbstractSpringBoardDefaultDomain

@property (assign,nonatomic) BOOL disableIdleSleep; 
@property (assign,nonatomic) BOOL hideACPower; 
@property (nonatomic,readonly) BOOL hideLowPowerAlerts; 
@property (nonatomic,readonly) long long lowBatteryLevel; 
@property (nonatomic,readonly) BOOL trackPowerEvents; 
-(void)setHideLowPowerAlerts:(BOOL)arg1 ;
-(BOOL)hideLowPowerAlerts;
-(void)setDisableIdleSleep:(BOOL)arg1 ;
-(BOOL)disableIdleSleep;
-(void)setHideACPower:(BOOL)arg1 ;
-(BOOL)hideACPower;
-(void)setLowBatteryLevel:(long long)arg1 ;
-(long long)lowBatteryLevel;
-(void)setTrackPowerEvents:(BOOL)arg1 ;
-(BOOL)trackPowerEvents;
-(void)_bindAndRegisterDefaults;
@end

