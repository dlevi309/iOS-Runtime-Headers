/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/


@protocol SBFIdleTimerBehaviorProviding <NSObject>
@property (nonatomic,readonly) long long idleTimerDuration; 
@property (nonatomic,readonly) long long idleTimerMode; 
@property (nonatomic,readonly) long long idleWarnMode; 
@property (nonatomic,readonly) double customIdleExpirationTimeout; 
@property (nonatomic,readonly) double customIdleWarningTimeout; 
@optional
-(double)customIdleExpirationTimeout;
-(double)customIdleWarningTimeout;

@required
-(long long)idleTimerDuration;
-(long long)idleTimerMode;
-(long long)idleWarnMode;

@end

