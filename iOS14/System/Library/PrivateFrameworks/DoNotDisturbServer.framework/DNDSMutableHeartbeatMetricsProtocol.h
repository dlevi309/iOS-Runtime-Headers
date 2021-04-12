/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

@class NSNumber;


@protocol DNDSMutableHeartbeatMetricsProtocol <DNDSHeartbeatMetricsProtocol>
@property (assign,nonatomic) BOOL enabled; 
@property (assign,nonatomic) BOOL manuallyEnabled; 
@property (nonatomic,copy) NSNumber * numberOfSessions; 
@property (nonatomic,copy) NSNumber * numberOfManualSessions; 
@property (assign,nonatomic) BOOL enabledFromControlCenterPhone; 
@property (assign,nonatomic) BOOL enabledFromControlCenterWatch; 
@property (assign,nonatomic) BOOL enabledForOneHour; 
@property (assign,nonatomic) BOOL enabledUntilEvening; 
@property (assign,nonatomic) BOOL enabledUntilMorning; 
@property (assign,nonatomic) BOOL enabledAtLocation; 
@property (assign,nonatomic) BOOL enabledDuringEvent; 
@property (assign,nonatomic) BOOL enabledDrivingMode; 
@property (assign,nonatomic) BOOL enabledSleepMode; 
@required
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1;
-(NSNumber *)numberOfSessions;
-(void)setManuallyEnabled:(BOOL)arg1;
-(void)setNumberOfSessions:(id)arg1;
-(NSNumber *)numberOfManualSessions;
-(void)setNumberOfManualSessions:(id)arg1;
-(void)setEnabledFromControlCenterPhone:(BOOL)arg1;
-(void)setEnabledFromControlCenterWatch:(BOOL)arg1;
-(void)setEnabledForOneHour:(BOOL)arg1;
-(void)setEnabledUntilEvening:(BOOL)arg1;
-(void)setEnabledUntilMorning:(BOOL)arg1;
-(void)setEnabledAtLocation:(BOOL)arg1;
-(void)setEnabledDuringEvent:(BOOL)arg1;
-(void)setEnabledDrivingMode:(BOOL)arg1;
-(void)setEnabledSleepMode:(BOOL)arg1;
-(BOOL)manuallyEnabled;
-(BOOL)enabledFromControlCenterPhone;
-(BOOL)enabledFromControlCenterWatch;
-(BOOL)enabledForOneHour;
-(BOOL)enabledUntilEvening;
-(BOOL)enabledUntilMorning;
-(BOOL)enabledAtLocation;
-(BOOL)enabledDuringEvent;
-(BOOL)enabledDrivingMode;
-(BOOL)enabledSleepMode;

@end

