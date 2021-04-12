/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

