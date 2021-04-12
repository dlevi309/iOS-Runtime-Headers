/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

@class NSNumber;


@protocol DNDSHeartbeatMetricsProtocol <NSCopying,NSMutableCopying,DNDSBackingStoreRecord>
@property (nonatomic,readonly) BOOL enabled; 
@property (nonatomic,readonly) BOOL manuallyEnabled; 
@property (nonatomic,copy,readonly) NSNumber * numberOfSessions; 
@property (nonatomic,copy,readonly) NSNumber * numberOfManualSessions; 
@property (nonatomic,readonly) BOOL enabledFromControlCenterPhone; 
@property (nonatomic,readonly) BOOL enabledFromControlCenterWatch; 
@property (nonatomic,readonly) BOOL enabledForOneHour; 
@property (nonatomic,readonly) BOOL enabledUntilEvening; 
@property (nonatomic,readonly) BOOL enabledUntilMorning; 
@property (nonatomic,readonly) BOOL enabledAtLocation; 
@property (nonatomic,readonly) BOOL enabledDuringEvent; 
@property (nonatomic,readonly) BOOL enabledDrivingMode; 
@property (nonatomic,readonly) BOOL enabledSleepMode; 
@required
-(BOOL)enabled;
-(NSNumber *)numberOfSessions;
-(NSNumber *)numberOfManualSessions;
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

